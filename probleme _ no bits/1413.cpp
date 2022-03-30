/* SgMZW90IT ily traian i3mP8fmW1 */ #include <algorithm>
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
/* SgMZW90IT ily traian i3mP8fmW1 */ 
/* SgMZW90IT ily traian i3mP8fmW1 */ using namespace std;
/* SgMZW90IT ily traian i3mP8fmW1 */ 
/* SgMZW90IT ily traian i3mP8fmW1 */ char s[100001];
/* SgMZW90IT ily traian i3mP8fmW1 */ 
/* SgMZW90IT ily traian i3mP8fmW1 */ ifstream cin("constructpalindrom.in");
/* SgMZW90IT ily traian i3mP8fmW1 */ ofstream cout("constructpalindrom.out");
/* SgMZW90IT ily traian i3mP8fmW1 */ 
/* SgMZW90IT ily traian i3mP8fmW1 */ int main()
/* SgMZW90IT ily traian i3mP8fmW1 */ {
/* SgMZW90IT ily traian i3mP8fmW1 */     int t;
/* SgMZW90IT ily traian i3mP8fmW1 */     cin >> t;
/* SgMZW90IT ily traian i3mP8fmW1 */     for(int q = 1 ; q <= t ; ++q)
/* SgMZW90IT ily traian i3mP8fmW1 */     {
/* SgMZW90IT ily traian i3mP8fmW1 */         cin >> s;
/* SgMZW90IT ily traian i3mP8fmW1 */         int n = strlen(s);
/* SgMZW90IT ily traian i3mP8fmW1 */         int cnt = 0;
/* SgMZW90IT ily traian i3mP8fmW1 */         bool ok = true;
/* SgMZW90IT ily traian i3mP8fmW1 */         for(int i = 0 , j = n - 1 ; i < j ; ++i , j--)
/* SgMZW90IT ily traian i3mP8fmW1 */             if(s[i]!=s[j])
/* SgMZW90IT ily traian i3mP8fmW1 */             {
/* SgMZW90IT ily traian i3mP8fmW1 */                 j--;
/* SgMZW90IT ily traian i3mP8fmW1 */                 cnt++;
/* SgMZW90IT ily traian i3mP8fmW1 */                 if(s[i]!=s[j])
/* SgMZW90IT ily traian i3mP8fmW1 */                     j++,i--;
/* SgMZW90IT ily traian i3mP8fmW1 */                 if(s[i]!=s[j])
/* SgMZW90IT ily traian i3mP8fmW1 */                 {
/* SgMZW90IT ily traian i3mP8fmW1 */                     ok=false;
/* SgMZW90IT ily traian i3mP8fmW1 */                     break;
/* SgMZW90IT ily traian i3mP8fmW1 */                 }
/* SgMZW90IT ily traian i3mP8fmW1 */             }
/* SgMZW90IT ily traian i3mP8fmW1 */         if(ok == true && cnt <= 1)
/* SgMZW90IT ily traian i3mP8fmW1 */             cout << "YES" << endl;
/* SgMZW90IT ily traian i3mP8fmW1 */         else
/* SgMZW90IT ily traian i3mP8fmW1 */             cout << "NO" << endl;
/* SgMZW90IT ily traian i3mP8fmW1 */     }
/* SgMZW90IT ily traian i3mP8fmW1 */     return 0;
/* SgMZW90IT ily traian i3mP8fmW1 */ }