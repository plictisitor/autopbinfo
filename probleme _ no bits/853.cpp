/* gqronTd1t ily traian UgSzpslq5 */ #include <algorithm>
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
/* gqronTd1t ily traian UgSzpslq5 */ 
/* gqronTd1t ily traian UgSzpslq5 */ 
/* gqronTd1t ily traian UgSzpslq5 */ using namespace std;
/* gqronTd1t ily traian UgSzpslq5 */ 
/* gqronTd1t ily traian UgSzpslq5 */ ifstream cin("cadouri.in");
/* gqronTd1t ily traian UgSzpslq5 */ ofstream cout("cadouri.out");
/* gqronTd1t ily traian UgSzpslq5 */ 
/* gqronTd1t ily traian UgSzpslq5 */ map <string , int> M;
/* gqronTd1t ily traian UgSzpslq5 */ char s[1001];
/* gqronTd1t ily traian UgSzpslq5 */ 
/* gqronTd1t ily traian UgSzpslq5 */ bool nr(char ch)
/* gqronTd1t ily traian UgSzpslq5 */ {
/* gqronTd1t ily traian UgSzpslq5 */     return ch >= '0' && ch <= '9';
/* gqronTd1t ily traian UgSzpslq5 */ }
/* gqronTd1t ily traian UgSzpslq5 */ 
/* gqronTd1t ily traian UgSzpslq5 */ bool lit(char ch)
/* gqronTd1t ily traian UgSzpslq5 */ {
/* gqronTd1t ily traian UgSzpslq5 */     return (ch >='a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
/* gqronTd1t ily traian UgSzpslq5 */ }
/* gqronTd1t ily traian UgSzpslq5 */ 
/* gqronTd1t ily traian UgSzpslq5 */ int main()
/* gqronTd1t ily traian UgSzpslq5 */ {
/* gqronTd1t ily traian UgSzpslq5 */     int n;
/* gqronTd1t ily traian UgSzpslq5 */     cin >> n;
/* gqronTd1t ily traian UgSzpslq5 */     cin.get();
/* gqronTd1t ily traian UgSzpslq5 */     for(int k = 1 ; k <= n ; ++k)
/* gqronTd1t ily traian UgSzpslq5 */     {
/* gqronTd1t ily traian UgSzpslq5 */         cin.getline(s , 1000);
/* gqronTd1t ily traian UgSzpslq5 */         int i = 0;
/* gqronTd1t ily traian UgSzpslq5 */         int num = 0;
/* gqronTd1t ily traian UgSzpslq5 */         while(s[i]!='\0')
/* gqronTd1t ily traian UgSzpslq5 */         {
/* gqronTd1t ily traian UgSzpslq5 */             while(nr(s[i]))
/* gqronTd1t ily traian UgSzpslq5 */             {
/* gqronTd1t ily traian UgSzpslq5 */                 num=num*10+(int)s[i]-48;
/* gqronTd1t ily traian UgSzpslq5 */                 i++;
/* gqronTd1t ily traian UgSzpslq5 */             }
/* gqronTd1t ily traian UgSzpslq5 */             if(num)
/* gqronTd1t ily traian UgSzpslq5 */             {
/* gqronTd1t ily traian UgSzpslq5 */             while(!lit(s[i]) && num)
/* gqronTd1t ily traian UgSzpslq5 */                 i++;
/* gqronTd1t ily traian UgSzpslq5 */             if(lit(s[i]) && num)
/* gqronTd1t ily traian UgSzpslq5 */             {
/* gqronTd1t ily traian UgSzpslq5 */                 int j = 0;
/* gqronTd1t ily traian UgSzpslq5 */                 char ch[255];
/* gqronTd1t ily traian UgSzpslq5 */                 while(lit(s[i]) && s[i])
/* gqronTd1t ily traian UgSzpslq5 */                 {
/* gqronTd1t ily traian UgSzpslq5 */                     ch[j]=s[i];
/* gqronTd1t ily traian UgSzpslq5 */                     j++;
/* gqronTd1t ily traian UgSzpslq5 */                     i++;
/* gqronTd1t ily traian UgSzpslq5 */                 }
/* gqronTd1t ily traian UgSzpslq5 */                 ch[j]='\0';
/* gqronTd1t ily traian UgSzpslq5 */                 string p = ch;
/* gqronTd1t ily traian UgSzpslq5 */                 M[p]+=num;
/* gqronTd1t ily traian UgSzpslq5 */                 num=0;
/* gqronTd1t ily traian UgSzpslq5 */             }
/* gqronTd1t ily traian UgSzpslq5 */             i--;
/* gqronTd1t ily traian UgSzpslq5 */             }
/* gqronTd1t ily traian UgSzpslq5 */             i++;
/* gqronTd1t ily traian UgSzpslq5 */         }
/* gqronTd1t ily traian UgSzpslq5 */     }
/* gqronTd1t ily traian UgSzpslq5 */     int cnt = 0;
/* gqronTd1t ily traian UgSzpslq5 */     for(auto x:M)
/* gqronTd1t ily traian UgSzpslq5 */         cnt++;
/* gqronTd1t ily traian UgSzpslq5 */     cout << cnt << endl;
/* gqronTd1t ily traian UgSzpslq5 */     int v[1001] , p = 0;
/* gqronTd1t ily traian UgSzpslq5 */     for(auto x:M)
/* gqronTd1t ily traian UgSzpslq5 */     {
/* gqronTd1t ily traian UgSzpslq5 */         v[p] = x.second;
/* gqronTd1t ily traian UgSzpslq5 */         p++;
/* gqronTd1t ily traian UgSzpslq5 */     }
/* gqronTd1t ily traian UgSzpslq5 */     sort(v , v+p);
/* gqronTd1t ily traian UgSzpslq5 */     for(int i = p-1 ; i >= 0 ; --i)
/* gqronTd1t ily traian UgSzpslq5 */     {
/* gqronTd1t ily traian UgSzpslq5 */         for(auto x:M)
/* gqronTd1t ily traian UgSzpslq5 */         {
/* gqronTd1t ily traian UgSzpslq5 */             if(x.second == v[i])
/* gqronTd1t ily traian UgSzpslq5 */             {
/* gqronTd1t ily traian UgSzpslq5 */                 cout << x.first << ' ' << x.second << '\n';
/* gqronTd1t ily traian UgSzpslq5 */                 M[x.first]=-1;
/* gqronTd1t ily traian UgSzpslq5 */                 break;
/* gqronTd1t ily traian UgSzpslq5 */             }
/* gqronTd1t ily traian UgSzpslq5 */         }
/* gqronTd1t ily traian UgSzpslq5 */     }
/* gqronTd1t ily traian UgSzpslq5 */     return 0;
/* gqronTd1t ily traian UgSzpslq5 */ }