// Multithreading: Not present before C++11
// Multithreading is a way to run multiple threads (smaller units of a process) concurrently
// Threads share the same memory space, which makes it easier to share data between them

// Todo: What is a thread?

// In every C++ program, there is at least one thread, the main thread main()
// The main thread is created when the program starts and is terminated when the program ends
//* we can create additional threads inside the main thread
//* idea is to achieve parallelism by dividing the process into multiple threads

//* Applications
// Browser has different tabs, each tab is handled by a different thread
// MS Word has different threads for spell check, grammar check, etc.

#include <iostream>
// #include <atcoder/all>
#include <chrono>
#include <thread>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
#define inp(v)          \
      for (auto &x : v) \
            cin >> x;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
const int mod1 = 1e9 + 7, mod2 = 998244353, INF = 2e18, N = 2e5 + 5, L = 19;
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
// -----------------------------------------------------------------------------
int oddsum, evensum;
void sumodd(int start, int end)
{
      for (int i = start; i <= end; i++)
      {
            if (i % 2 != 0)
            {
                  oddsum += i;
            }
      }
}
void sumeven(int start, int end)
{
      for (int i = start; i <= end; i++)
      {
            if (i % 2 == 0)
            {
                  evensum += i;
            }
      }
}
void solve()
{
      int start = 0, end = 1900000002;
      auto start_time = std::chrono::high_resolution_clock::now();
      // Create two threads
      std::thread t1(sumodd, start, end); // thread will run this function sumodd, threads need callable objects!
      std::thread t2(sumeven, start, end);

      // joining the threads to the main thread
      t1.join(); // wait for thread 1 to finish
      t2.join(); // wait for thread 2 to finish
      // t1.detach(); // detach the thread from the main thread
      // t2.detach(); // detach the thread from the main thread

      // sumodd(start, end);
      // sumeven(start, end);
      auto end_time = std::chrono::high_resolution_clock::now();
      auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
      cout << "Time taken: " << duration.count() / 10000 << " seconds" << endl;
      cout << "Sum of odd numbers: " << oddsum << endl;
      cout << "Sum of even numbers: " << evensum << endl;
      return;
}
signed main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);
      int t = 1;
      // cin >> t;
      while (t--)
      {
            solve();
      }
      return 0;
}

// Time taken is approximately 10seconds