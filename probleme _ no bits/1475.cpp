/* MbiBsy8hJ ily traian VDhHMw6WG */ #include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
/* MbiBsy8hJ ily traian VDhHMw6WG */ using namespace std;
/* MbiBsy8hJ ily traian VDhHMw6WG */ ifstream fin("numere14.in");
/* MbiBsy8hJ ily traian VDhHMw6WG */ ofstream fout("numere14.out");
/* MbiBsy8hJ ily traian VDhHMw6WG */ int nrcif(int n)
/* MbiBsy8hJ ily traian VDhHMw6WG */ {
/* MbiBsy8hJ ily traian VDhHMw6WG */     int cnt = 0;
/* MbiBsy8hJ ily traian VDhHMw6WG */     while(n != 0)
/* MbiBsy8hJ ily traian VDhHMw6WG */     {
/* MbiBsy8hJ ily traian VDhHMw6WG */         cnt++;
/* MbiBsy8hJ ily traian VDhHMw6WG */         n /= 10;
/* MbiBsy8hJ ily traian VDhHMw6WG */     }
/* MbiBsy8hJ ily traian VDhHMw6WG */     return cnt;
/* MbiBsy8hJ ily traian VDhHMw6WG */ }
/* MbiBsy8hJ ily traian VDhHMw6WG */ int main()
/* MbiBsy8hJ ily traian VDhHMw6WG */ {
/* MbiBsy8hJ ily traian VDhHMw6WG */     int n , x , cnt = 0 , s = 0;
/* MbiBsy8hJ ily traian VDhHMw6WG */     fin >> n;
/* MbiBsy8hJ ily traian VDhHMw6WG */     for(int i = 1; i <= n; ++i)
/* MbiBsy8hJ ily traian VDhHMw6WG */     {
/* MbiBsy8hJ ily traian VDhHMw6WG */         fin >> x;
/* MbiBsy8hJ ily traian VDhHMw6WG */         int cnt = nrcif(x);
/* MbiBsy8hJ ily traian VDhHMw6WG */         if(cnt % 2 == 1)
/* MbiBsy8hJ ily traian VDhHMw6WG */         {
/* MbiBsy8hJ ily traian VDhHMw6WG */             cnt /= 2;
/* MbiBsy8hJ ily traian VDhHMw6WG */             while(cnt != 0)
/* MbiBsy8hJ ily traian VDhHMw6WG */             {
/* MbiBsy8hJ ily traian VDhHMw6WG */                 cnt--;
/* MbiBsy8hJ ily traian VDhHMw6WG */                 x /= 10;
/* MbiBsy8hJ ily traian VDhHMw6WG */             }
/* MbiBsy8hJ ily traian VDhHMw6WG */             if(x % 10 % 2 == 1) s += x % 10;
/* MbiBsy8hJ ily traian VDhHMw6WG */         }
/* MbiBsy8hJ ily traian VDhHMw6WG */     }
/* MbiBsy8hJ ily traian VDhHMw6WG */     fout << s;
/* MbiBsy8hJ ily traian VDhHMw6WG */ 
/* MbiBsy8hJ ily traian VDhHMw6WG */     fin.close();
/* MbiBsy8hJ ily traian VDhHMw6WG */     fout.close();
/* MbiBsy8hJ ily traian VDhHMw6WG */ 
/* MbiBsy8hJ ily traian VDhHMw6WG */     return 0;
/* MbiBsy8hJ ily traian VDhHMw6WG */ }
/* MbiBsy8hJ ily traian VDhHMw6WG */ 