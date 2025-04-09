// join(), detach() and joinable() in threads in C++

// JOIN
// 0- once a thread is started we wait for this thread to finish by calling join() function on thread object
// 1- join() function blocks the main thread until the thread finishes its execution
// 2- join() function can be called only once on a thread object
// 3- join() function can be called only on joinable threads
// 4- join() function can be called only on threads that are not already joined or detached
// 5- if we join a thread that is already joined or detached, it will throw an error and program will terminate

// DETACH
// 0- detach() function is used to detach a thread from the main thread
// 1- detach() function allows the thread to run independently from the main thread
// 2- detach() function can be called only once on a thread object
// 3- detach() function can be called only on joinable threads
// 4- detach() function can be called only on threads that are not already joined or detached
// 5- if we detach a thread that is already joined or detached, it will throw an error and program will terminate

//

#include <bits/stdc++.h>
#include <thread>
#include <chrono>
using namespace std;
#define int long long
void run(int x)
{
      while (x--)
      {
            cout << " heWhoCooks\n";
      }
      // std::this_thread::sleep_for(std::chrono::milliseconds(3000));
}
signed main()
{
      int x = 10;
      std::thread t1(run, x);
      cout << "Main thread\n";
      t1.join(); // waiting for the thread to finish, then would move to the next line
      // t1.detach(); // detach the thread from the main thread
      //! it might happen that the main thread finishes before the thread t1 is even started
      if (t1.joinable())
      {
            t1.join();
      }
      if (tq.joinable())
      {
            t1.detach();
      }
      cout << "Main thread\n";
      return 0;
}