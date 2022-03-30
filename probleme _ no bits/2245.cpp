/* knUie3JV8 ily traian 7WF1xv3PG */ #include <algorithm>
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
/* knUie3JV8 ily traian 7WF1xv3PG */ 
/* knUie3JV8 ily traian 7WF1xv3PG */ using namespace std;
/* knUie3JV8 ily traian 7WF1xv3PG */ 
/* knUie3JV8 ily traian 7WF1xv3PG */ int n  , p[20] , x[11] , a[20] , maxi , ok , s , c[20];
/* knUie3JV8 ily traian 7WF1xv3PG */ 
/* knUie3JV8 ily traian 7WF1xv3PG */ void afisare()
/* knUie3JV8 ily traian 7WF1xv3PG */ {
/* knUie3JV8 ily traian 7WF1xv3PG */     for(int i = 1 ; i <= n ; i++)
/* knUie3JV8 ily traian 7WF1xv3PG */         cout << x[i] << " ";
/* knUie3JV8 ily traian 7WF1xv3PG */     ok = 1;
/* knUie3JV8 ily traian 7WF1xv3PG */ }
/* knUie3JV8 ily traian 7WF1xv3PG */ 
/* knUie3JV8 ily traian 7WF1xv3PG */ void back(int k , int sp)
/* knUie3JV8 ily traian 7WF1xv3PG */ {
/* knUie3JV8 ily traian 7WF1xv3PG */     for(int i = 0 ; i <= c[k] && !ok; i++)
/* knUie3JV8 ily traian 7WF1xv3PG */     {
/* knUie3JV8 ily traian 7WF1xv3PG */         x[k] = i;
/* knUie3JV8 ily traian 7WF1xv3PG */         sp += x[k] * a[k];
/* knUie3JV8 ily traian 7WF1xv3PG */         if(sp <= s && k <= n)
/* knUie3JV8 ily traian 7WF1xv3PG */         {
/* knUie3JV8 ily traian 7WF1xv3PG */             if(k == n && sp == s) afisare();
/* knUie3JV8 ily traian 7WF1xv3PG */             else if(k < n)back(k + 1 , sp);
/* knUie3JV8 ily traian 7WF1xv3PG */         }
/* knUie3JV8 ily traian 7WF1xv3PG */         sp -= x[k] * a[k];
/* knUie3JV8 ily traian 7WF1xv3PG */     }
/* knUie3JV8 ily traian 7WF1xv3PG */ }
/* knUie3JV8 ily traian 7WF1xv3PG */ 
/* knUie3JV8 ily traian 7WF1xv3PG */ int main()
/* knUie3JV8 ily traian 7WF1xv3PG */ {
/* knUie3JV8 ily traian 7WF1xv3PG */     cin >> n >> s;
/* knUie3JV8 ily traian 7WF1xv3PG */     for(int i = 1 ; i <= n ; i++)
/* knUie3JV8 ily traian 7WF1xv3PG */         cin >> a[i];
/* knUie3JV8 ily traian 7WF1xv3PG */     for(int i = 1 ; i <= n ; i++)
/* knUie3JV8 ily traian 7WF1xv3PG */         cin >> c[i];
/* knUie3JV8 ily traian 7WF1xv3PG */     back(1 , 0);
/* knUie3JV8 ily traian 7WF1xv3PG */ }