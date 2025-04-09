// Types of thread creation in C++11
// TODO: there are 5 types of thread creation in C++11 using callable objects

//! Note: if we create multiple threads at the same time, it doesn't tell us which thread will run first
// //! it depends on the OS and the CPU

// 1. function pointer
void fun(int x)
{
      while (x--)
      {
            cout << " skibidi toilet\n";
      }
}
int main()
{
      std::thread t1(fun, 5); // thread will run this function fun
      std::thread t2(fun, 6);
      // ! sometimes it may happen that t2 will finish first and t1 will be running
      t1.join(); // wait for thread 1 to finish
      t2.join();
      return 0;
}

// 2. lambda function
int main()
{
      auto fun = [](int x)
      {
            while (x--)
            {
                  cout << " skibidi toilet\n";
            }
      };
      return 0;
}