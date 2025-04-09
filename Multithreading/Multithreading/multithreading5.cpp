// try_lock()
// non-blocking version of lock(), it tries to lock the mutex and returns immediately
// if it is already locked, it returns false

#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
using namespace std;
int money = 0;
std::mutex mtx; // mutex for critical section
void addmoney()
{
      for (int i = 0; i < 1000000; i++)
      {
            if (mtx.try_lock()) // try to lock the mutex
            {
                  money++;
                  mtx.unlock(); // unlock the mutex
            }
      }
}
int main()
{
      std::thread t1(addmoney);
      std::thread t2(addmoney);
      t1.join();
      t2.join();
      cout << money << endl;
      return 0;
}
