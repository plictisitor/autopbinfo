/* DmvQ4Xbw5 ily traian 931CFJ3bu */ #include <algorithm>
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
/* DmvQ4Xbw5 ily traian 931CFJ3bu */ 
/* DmvQ4Xbw5 ily traian 931CFJ3bu */ using namespace std;
/* DmvQ4Xbw5 ily traian 931CFJ3bu */ 
/* DmvQ4Xbw5 ily traian 931CFJ3bu */ 
/* DmvQ4Xbw5 ily traian 931CFJ3bu */ int main()
/* DmvQ4Xbw5 ily traian 931CFJ3bu */ {
/* DmvQ4Xbw5 ily traian 931CFJ3bu */     int n;
/* DmvQ4Xbw5 ily traian 931CFJ3bu */     cin >> n;
/* DmvQ4Xbw5 ily traian 931CFJ3bu */     int cnt=0;
/* DmvQ4Xbw5 ily traian 931CFJ3bu */     int s=0;
/* DmvQ4Xbw5 ily traian 931CFJ3bu */     int tmp;
/* DmvQ4Xbw5 ily traian 931CFJ3bu */     for (int i=1; i <= n; ++i)
/* DmvQ4Xbw5 ily traian 931CFJ3bu */     {
/* DmvQ4Xbw5 ily traian 931CFJ3bu */         cin >> tmp; 
/* DmvQ4Xbw5 ily traian 931CFJ3bu */         if (tmp % 2 == 0)
/* DmvQ4Xbw5 ily traian 931CFJ3bu */         {
/* DmvQ4Xbw5 ily traian 931CFJ3bu */             cnt++;
/* DmvQ4Xbw5 ily traian 931CFJ3bu */             s+=tmp;
/* DmvQ4Xbw5 ily traian 931CFJ3bu */         }
/* DmvQ4Xbw5 ily traian 931CFJ3bu */     }
/* DmvQ4Xbw5 ily traian 931CFJ3bu */     cout << fixed << setprecision(2) << (float)s/cnt;
/* DmvQ4Xbw5 ily traian 931CFJ3bu */     return 0;
/* DmvQ4Xbw5 ily traian 931CFJ3bu */ }