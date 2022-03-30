/* lpssfYCs9 ily traian b8bMUe2r8 */ #include <algorithm>
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
/* lpssfYCs9 ily traian b8bMUe2r8 */ 
/* lpssfYCs9 ily traian b8bMUe2r8 */ using namespace std;
/* lpssfYCs9 ily traian b8bMUe2r8 */ 
/* lpssfYCs9 ily traian b8bMUe2r8 */ char s[201];
/* lpssfYCs9 ily traian b8bMUe2r8 */ 
/* lpssfYCs9 ily traian b8bMUe2r8 */ bool nr(char ch)
/* lpssfYCs9 ily traian b8bMUe2r8 */ {
/* lpssfYCs9 ily traian b8bMUe2r8 */     return ch >= '0' && ch <= '9';
/* lpssfYCs9 ily traian b8bMUe2r8 */ }
/* lpssfYCs9 ily traian b8bMUe2r8 */ 
/* lpssfYCs9 ily traian b8bMUe2r8 */ int main()
/* lpssfYCs9 ily traian b8bMUe2r8 */ {
/* lpssfYCs9 ily traian b8bMUe2r8 */     cin.getline(s, 150);
/* lpssfYCs9 ily traian b8bMUe2r8 */     int i = 0;
/* lpssfYCs9 ily traian b8bMUe2r8 */     int cnt = 0;
/* lpssfYCs9 ily traian b8bMUe2r8 */     while(s[i])
/* lpssfYCs9 ily traian b8bMUe2r8 */     {
/* lpssfYCs9 ily traian b8bMUe2r8 */         if(nr(s[i]))
/* lpssfYCs9 ily traian b8bMUe2r8 */             cnt++;
/* lpssfYCs9 ily traian b8bMUe2r8 */         i++;
/* lpssfYCs9 ily traian b8bMUe2r8 */     }
/* lpssfYCs9 ily traian b8bMUe2r8 */     if(cnt == strlen(s))
/* lpssfYCs9 ily traian b8bMUe2r8 */         cout << "CORECT";
/* lpssfYCs9 ily traian b8bMUe2r8 */     else if(cnt == 0)
/* lpssfYCs9 ily traian b8bMUe2r8 */         cout << "NaN";
/* lpssfYCs9 ily traian b8bMUe2r8 */     else
/* lpssfYCs9 ily traian b8bMUe2r8 */     {
/* lpssfYCs9 ily traian b8bMUe2r8 */         i = 0;
/* lpssfYCs9 ily traian b8bMUe2r8 */         int ind = 0;
/* lpssfYCs9 ily traian b8bMUe2r8 */         cnt = 0;
/* lpssfYCs9 ily traian b8bMUe2r8 */         int cnt0 = 0;
/* lpssfYCs9 ily traian b8bMUe2r8 */         while(s[i])
/* lpssfYCs9 ily traian b8bMUe2r8 */         {
/* lpssfYCs9 ily traian b8bMUe2r8 */             if(nr(s[i]))
/* lpssfYCs9 ily traian b8bMUe2r8 */                 cnt++;
/* lpssfYCs9 ily traian b8bMUe2r8 */             if(s[i] == '0')
/* lpssfYCs9 ily traian b8bMUe2r8 */                 cnt0++, ind = i;
/* lpssfYCs9 ily traian b8bMUe2r8 */             i++;
/* lpssfYCs9 ily traian b8bMUe2r8 */         }
/* lpssfYCs9 ily traian b8bMUe2r8 */         if(cnt == cnt0)
/* lpssfYCs9 ily traian b8bMUe2r8 */         {
/* lpssfYCs9 ily traian b8bMUe2r8 */             cout << 0 << endl;
/* lpssfYCs9 ily traian b8bMUe2r8 */             i = 0;
/* lpssfYCs9 ily traian b8bMUe2r8 */             while(s[i])
/* lpssfYCs9 ily traian b8bMUe2r8 */             {
/* lpssfYCs9 ily traian b8bMUe2r8 */                 if(i != ind && s[i] != ' ')
/* lpssfYCs9 ily traian b8bMUe2r8 */                     cout << s[i] << ' ';
/* lpssfYCs9 ily traian b8bMUe2r8 */                 i++;
/* lpssfYCs9 ily traian b8bMUe2r8 */             }
/* lpssfYCs9 ily traian b8bMUe2r8 */         }
/* lpssfYCs9 ily traian b8bMUe2r8 */         else
/* lpssfYCs9 ily traian b8bMUe2r8 */         {
/* lpssfYCs9 ily traian b8bMUe2r8 */             bool zp = false;
/* lpssfYCs9 ily traian b8bMUe2r8 */             i = 0;
/* lpssfYCs9 ily traian b8bMUe2r8 */             while(s[i])
/* lpssfYCs9 ily traian b8bMUe2r8 */             {
/* lpssfYCs9 ily traian b8bMUe2r8 */                 if(s[i] == '0' && !zp) ;
/* lpssfYCs9 ily traian b8bMUe2r8 */                 else if(nr(s[i]))
/* lpssfYCs9 ily traian b8bMUe2r8 */                     cout << s[i], zp = true;
/* lpssfYCs9 ily traian b8bMUe2r8 */                 i++;
/* lpssfYCs9 ily traian b8bMUe2r8 */             }
/* lpssfYCs9 ily traian b8bMUe2r8 */             cout << endl;
/* lpssfYCs9 ily traian b8bMUe2r8 */             i = 0;
/* lpssfYCs9 ily traian b8bMUe2r8 */             zp = false;
/* lpssfYCs9 ily traian b8bMUe2r8 */             while(s[i])
/* lpssfYCs9 ily traian b8bMUe2r8 */             {
/* lpssfYCs9 ily traian b8bMUe2r8 */                 if(s[i] == '0' && !zp) cout << 0 << ' ';
/* lpssfYCs9 ily traian b8bMUe2r8 */                 else if(nr(s[i]))
/* lpssfYCs9 ily traian b8bMUe2r8 */                     zp = true;
/* lpssfYCs9 ily traian b8bMUe2r8 */                 else if(s[i] != ' ')
/* lpssfYCs9 ily traian b8bMUe2r8 */                     cout << s[i] << ' ';
/* lpssfYCs9 ily traian b8bMUe2r8 */                 i++;
/* lpssfYCs9 ily traian b8bMUe2r8 */             }
/* lpssfYCs9 ily traian b8bMUe2r8 */         }
/* lpssfYCs9 ily traian b8bMUe2r8 */     }
/* lpssfYCs9 ily traian b8bMUe2r8 */     return 0;
/* lpssfYCs9 ily traian b8bMUe2r8 */ }