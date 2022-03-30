/* 3wgJmFM9a ily traian sFzOUHLD3 */ #include <algorithm>
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
/* 3wgJmFM9a ily traian sFzOUHLD3 */ using namespace std;
/* 3wgJmFM9a ily traian sFzOUHLD3 */ ifstream cin("norocos.in");
/* 3wgJmFM9a ily traian sFzOUHLD3 */ ofstream cout("norocos.out");
/* 3wgJmFM9a ily traian sFzOUHLD3 */ int knorocoase(int n)
/* 3wgJmFM9a ily traian sFzOUHLD3 */ {
/* 3wgJmFM9a ily traian sFzOUHLD3 */     int d = 2 , cnt = 0;
/* 3wgJmFM9a ily traian sFzOUHLD3 */     while(n > 1)
/* 3wgJmFM9a ily traian sFzOUHLD3 */     {
/* 3wgJmFM9a ily traian sFzOUHLD3 */         int p = 0;
/* 3wgJmFM9a ily traian sFzOUHLD3 */         while(n % d == 0) p++ , n /= d;
/* 3wgJmFM9a ily traian sFzOUHLD3 */         if(p == 1) cnt++;
/* 3wgJmFM9a ily traian sFzOUHLD3 */         else if(p > 1) return 0;
/* 3wgJmFM9a ily traian sFzOUHLD3 */         d++;
/* 3wgJmFM9a ily traian sFzOUHLD3 */         if(d *d  > n) d = n;
/* 3wgJmFM9a ily traian sFzOUHLD3 */     }
/* 3wgJmFM9a ily traian sFzOUHLD3 */     return cnt;
/* 3wgJmFM9a ily traian sFzOUHLD3 */ }
/* 3wgJmFM9a ily traian sFzOUHLD3 */ 
/* 3wgJmFM9a ily traian sFzOUHLD3 */ int main()
/* 3wgJmFM9a ily traian sFzOUHLD3 */ {
/* 3wgJmFM9a ily traian sFzOUHLD3 */     int cer , n , k , x , min = 2000000001 , max = -2000000001 , cnt = 0;
/* 3wgJmFM9a ily traian sFzOUHLD3 */     cin >> cer >> n >> k;
/* 3wgJmFM9a ily traian sFzOUHLD3 */     if(cer == 1)
/* 3wgJmFM9a ily traian sFzOUHLD3 */     {
/* 3wgJmFM9a ily traian sFzOUHLD3 */         for(int i = 1 ; i <= n ; i++)
/* 3wgJmFM9a ily traian sFzOUHLD3 */         {
/* 3wgJmFM9a ily traian sFzOUHLD3 */             cin >> x;
/* 3wgJmFM9a ily traian sFzOUHLD3 */             if(x % 2 == 1)
/* 3wgJmFM9a ily traian sFzOUHLD3 */             {
/* 3wgJmFM9a ily traian sFzOUHLD3 */                 if(x < min) min = x;
/* 3wgJmFM9a ily traian sFzOUHLD3 */                 if(x > max) max = x;
/* 3wgJmFM9a ily traian sFzOUHLD3 */             }
/* 3wgJmFM9a ily traian sFzOUHLD3 */         }
/* 3wgJmFM9a ily traian sFzOUHLD3 */         if(min != 2000000001 && max != -2000000001)
/* 3wgJmFM9a ily traian sFzOUHLD3 */             cout << min << " " << max;
/* 3wgJmFM9a ily traian sFzOUHLD3 */         else cout << 0;
/* 3wgJmFM9a ily traian sFzOUHLD3 */     }
/* 3wgJmFM9a ily traian sFzOUHLD3 */     else
/* 3wgJmFM9a ily traian sFzOUHLD3 */     {
/* 3wgJmFM9a ily traian sFzOUHLD3 */        for(int i = 1 ; i <= n ; i++)
/* 3wgJmFM9a ily traian sFzOUHLD3 */         {
/* 3wgJmFM9a ily traian sFzOUHLD3 */             cin >> x;
/* 3wgJmFM9a ily traian sFzOUHLD3 */             if(knorocoase(x) == k) cnt++;
/* 3wgJmFM9a ily traian sFzOUHLD3 */         }
/* 3wgJmFM9a ily traian sFzOUHLD3 */         cout << cnt;
/* 3wgJmFM9a ily traian sFzOUHLD3 */     }
/* 3wgJmFM9a ily traian sFzOUHLD3 */ 
/* 3wgJmFM9a ily traian sFzOUHLD3 */ }