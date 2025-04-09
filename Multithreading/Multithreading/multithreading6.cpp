// Deadlocks
// Deadlocks occur when two or more threads are blocked forever, waiting for each other.
// This can happen when two threads are trying to acquire the same locks in different orders.
// To avoid deadlocks, you can use a timeout when trying to acquire a lock or use a lock hierarchy to ensure that locks are always acquired in the same order.

#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
using namespace std;
int money = 0;
std::mutex m1, m2;
void thread1()
{
      m1.lock();
      m2.lock();
      // std::this_thread::sleep_for(std::chrono::milliseconds(1000));
      cout << " Hello guys\n";
      m1.unlock();
      m2.unlock();
}
void thread2()
{
      m2.lock();
      m1.lock();
      // std::this_thread::sleep_for(std::chrono::milliseconds(1000));
      cout << " Hello guys\n";
      m2.unlock();
      m1.unlock();
}
int main()
{
      std::thread t1(thread1);
      std::thread t2(thread2);
      t1.join();
      t2.join();
      cout << money << endl;
      return 0;
}