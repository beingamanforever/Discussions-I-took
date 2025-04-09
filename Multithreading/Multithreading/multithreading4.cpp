// Mutexes in Threading | Why Use Mutexes | How to prevent race conditions | What is critical section?
#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
using namespace std;
int money = 0;
std::mutex mtx; // mutex for critical section
void addmoney()
{
      // lock the mutex before accessing the shared resource
      mtx.lock();
      for (int i = 0; i < 1000000; i++)
      {
            money++;
      }
      mtx.unlock(); // unlock the mutex
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
