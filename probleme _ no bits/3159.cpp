/* JfIG8ZVZJ ily traian ry7Uky9yH */ #include <algorithm>
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
/* JfIG8ZVZJ ily traian ry7Uky9yH */ 
/* JfIG8ZVZJ ily traian ry7Uky9yH */ using namespace std;
/* JfIG8ZVZJ ily traian ry7Uky9yH */ 
/* JfIG8ZVZJ ily traian ry7Uky9yH */ int n , m , a[30] , x[30] , p[30] , cnt;
/* JfIG8ZVZJ ily traian ry7Uky9yH */ 
/* JfIG8ZVZJ ily traian ry7Uky9yH */ int afisare()
/* JfIG8ZVZJ ily traian ry7Uky9yH */ {
/* JfIG8ZVZJ ily traian ry7Uky9yH */     for(int i = 1 ; i <= m ; i++)
/* JfIG8ZVZJ ily traian ry7Uky9yH */         cout << a[x[i]];
/* JfIG8ZVZJ ily traian ry7Uky9yH */     cout << '\n';
/* JfIG8ZVZJ ily traian ry7Uky9yH */ }
/* JfIG8ZVZJ ily traian ry7Uky9yH */ 
/* JfIG8ZVZJ ily traian ry7Uky9yH */ void back(int k)
/* JfIG8ZVZJ ily traian ry7Uky9yH */ {
/* JfIG8ZVZJ ily traian ry7Uky9yH */     for(int i = 1 ; i <= cnt ; i++)
/* JfIG8ZVZJ ily traian ry7Uky9yH */     if(!p[i])
/* JfIG8ZVZJ ily traian ry7Uky9yH */     {
/* JfIG8ZVZJ ily traian ry7Uky9yH */         x[k] = i;
/* JfIG8ZVZJ ily traian ry7Uky9yH */         p[i] = 1;
/* JfIG8ZVZJ ily traian ry7Uky9yH */         if(k == 1 && a[i] == 0);
/* JfIG8ZVZJ ily traian ry7Uky9yH */         else
/* JfIG8ZVZJ ily traian ry7Uky9yH */         {
/* JfIG8ZVZJ ily traian ry7Uky9yH */             if(k == m) afisare();
/* JfIG8ZVZJ ily traian ry7Uky9yH */             else back(k + 1);
/* JfIG8ZVZJ ily traian ry7Uky9yH */         }
/* JfIG8ZVZJ ily traian ry7Uky9yH */         p[i] = 0;
/* JfIG8ZVZJ ily traian ry7Uky9yH */     }
/* JfIG8ZVZJ ily traian ry7Uky9yH */ }
/* JfIG8ZVZJ ily traian ry7Uky9yH */ 
/* JfIG8ZVZJ ily traian ry7Uky9yH */ int main()
/* JfIG8ZVZJ ily traian ry7Uky9yH */ {
/* JfIG8ZVZJ ily traian ry7Uky9yH */     cin >> n >> m;
/* JfIG8ZVZJ ily traian ry7Uky9yH */     while(n != 0)
/* JfIG8ZVZJ ily traian ry7Uky9yH */     {
/* JfIG8ZVZJ ily traian ry7Uky9yH */         a[++cnt] = n % 10;
/* JfIG8ZVZJ ily traian ry7Uky9yH */         n /= 10;
/* JfIG8ZVZJ ily traian ry7Uky9yH */     }
/* JfIG8ZVZJ ily traian ry7Uky9yH */     sort(a + 1 , a + cnt + 1);
/* JfIG8ZVZJ ily traian ry7Uky9yH */     back(1);
/* JfIG8ZVZJ ily traian ry7Uky9yH */ }