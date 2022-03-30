/* HNkGu5jei ily traian MMxQNfBo2 */ #include <algorithm>
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
/* HNkGu5jei ily traian MMxQNfBo2 */ 
/* HNkGu5jei ily traian MMxQNfBo2 */ using namespace std;
/* HNkGu5jei ily traian MMxQNfBo2 */ int main()
/* HNkGu5jei ily traian MMxQNfBo2 */ {
/* HNkGu5jei ily traian MMxQNfBo2 */     int n , ok = 1 , a[100001];
/* HNkGu5jei ily traian MMxQNfBo2 */     cin >> n;
/* HNkGu5jei ily traian MMxQNfBo2 */     for(int i = 1 ; i <= n ; ++i) cin >> a[i];
/* HNkGu5jei ily traian MMxQNfBo2 */     for(int i = 1 ; i <= n ; ++i) cout << a[i] << " ";
/* HNkGu5jei ily traian MMxQNfBo2 */     cout << endl;
/* HNkGu5jei ily traian MMxQNfBo2 */     while(ok == 1)
/* HNkGu5jei ily traian MMxQNfBo2 */     {
/* HNkGu5jei ily traian MMxQNfBo2 */         ok = 0;
/* HNkGu5jei ily traian MMxQNfBo2 */         for(int i = 1 ; i <= n - 1;++i)
/* HNkGu5jei ily traian MMxQNfBo2 */         {
/* HNkGu5jei ily traian MMxQNfBo2 */             if(abs (a[i] % 2) == abs(a[i+1] % 2 ) && a[i] != a[i+1])
/* HNkGu5jei ily traian MMxQNfBo2 */             {
/* HNkGu5jei ily traian MMxQNfBo2 */                 n++;
/* HNkGu5jei ily traian MMxQNfBo2 */                 for(int j = n ; j >= i+1 ; j--)
/* HNkGu5jei ily traian MMxQNfBo2 */                     a[j + 1] = a[j];
/* HNkGu5jei ily traian MMxQNfBo2 */                 a[i + 1] = (a[i] + a[i+1]) / 2;
/* HNkGu5jei ily traian MMxQNfBo2 */                 ok = 1;
/* HNkGu5jei ily traian MMxQNfBo2 */                 i++;
/* HNkGu5jei ily traian MMxQNfBo2 */             }
/* HNkGu5jei ily traian MMxQNfBo2 */         }
/* HNkGu5jei ily traian MMxQNfBo2 */         if(ok == 1)
/* HNkGu5jei ily traian MMxQNfBo2 */         {
/* HNkGu5jei ily traian MMxQNfBo2 */             for(int j = 1 ; j <= n ;++j)
/* HNkGu5jei ily traian MMxQNfBo2 */                 cout << a[j]<< " ";
/* HNkGu5jei ily traian MMxQNfBo2 */             cout << endl;
/* HNkGu5jei ily traian MMxQNfBo2 */         }
/* HNkGu5jei ily traian MMxQNfBo2 */     }
/* HNkGu5jei ily traian MMxQNfBo2 */     return 0;
/* HNkGu5jei ily traian MMxQNfBo2 */ 
/* HNkGu5jei ily traian MMxQNfBo2 */ }