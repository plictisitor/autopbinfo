/* waaInpfcE ily traian lZJGCra50 */ #include <algorithm>
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
/* waaInpfcE ily traian lZJGCra50 */ 
/* waaInpfcE ily traian lZJGCra50 */ 
/* waaInpfcE ily traian lZJGCra50 */ 
/* waaInpfcE ily traian lZJGCra50 */ using namespace std;
/* waaInpfcE ily traian lZJGCra50 */ 
/* waaInpfcE ily traian lZJGCra50 */ ifstream cin("eq4.in");
/* waaInpfcE ily traian lZJGCra50 */ ofstream cout("eq4.out");
/* waaInpfcE ily traian lZJGCra50 */ int cer , a , b , cx , cz , ct , cy , c;
/* waaInpfcE ily traian lZJGCra50 */ long long A[1002002] ,  B[1002002] , p1 , p2 , e;
/* waaInpfcE ily traian lZJGCra50 */ string s;
/* waaInpfcE ily traian lZJGCra50 */ int cb_min(long long a[] , int n , long long v)
/* waaInpfcE ily traian lZJGCra50 */ {
/* waaInpfcE ily traian lZJGCra50 */     int st = 1 , dr = n , m;
/* waaInpfcE ily traian lZJGCra50 */     while (st <= dr)
/* waaInpfcE ily traian lZJGCra50 */     {
/* waaInpfcE ily traian lZJGCra50 */         m = (st + dr) / 2;
/* waaInpfcE ily traian lZJGCra50 */         if (a[m] >= v) dr = m - 1;
/* waaInpfcE ily traian lZJGCra50 */         else st = m + 1;
/* waaInpfcE ily traian lZJGCra50 */     }
/* waaInpfcE ily traian lZJGCra50 */     return st;
/* waaInpfcE ily traian lZJGCra50 */ }
/* waaInpfcE ily traian lZJGCra50 */ int cb_max(long long a[] , int n , long long v)
/* waaInpfcE ily traian lZJGCra50 */ {
/* waaInpfcE ily traian lZJGCra50 */     int st = 1 , dr = n , m;
/* waaInpfcE ily traian lZJGCra50 */     while (st <= dr)
/* waaInpfcE ily traian lZJGCra50 */     {
/* waaInpfcE ily traian lZJGCra50 */         m = (st + dr) / 2;
/* waaInpfcE ily traian lZJGCra50 */         if (a[m] <= v) st = m + 1;
/* waaInpfcE ily traian lZJGCra50 */         else dr = m - 1;
/* waaInpfcE ily traian lZJGCra50 */     }
/* waaInpfcE ily traian lZJGCra50 */     return dr;
/* waaInpfcE ily traian lZJGCra50 */ }
/* waaInpfcE ily traian lZJGCra50 */ int main()
/* waaInpfcE ily traian lZJGCra50 */ {
/* waaInpfcE ily traian lZJGCra50 */     cin >> cer >> s >> a >> b >> e;
/* waaInpfcE ily traian lZJGCra50 */     int i = 0;
/* waaInpfcE ily traian lZJGCra50 */     while(s.length())
/* waaInpfcE ily traian lZJGCra50 */     {
/* waaInpfcE ily traian lZJGCra50 */         int i = 0 , nr = 0 , semn;
/* waaInpfcE ily traian lZJGCra50 */         if(s[i] == '+') semn = 1;
/* waaInpfcE ily traian lZJGCra50 */         else semn = -1;
/* waaInpfcE ily traian lZJGCra50 */         i++;
/* waaInpfcE ily traian lZJGCra50 */         while(isdigit(s[i]))
/* waaInpfcE ily traian lZJGCra50 */         {
/* waaInpfcE ily traian lZJGCra50 */             nr = nr * 10 + s[i] - '0';
/* waaInpfcE ily traian lZJGCra50 */             i++;
/* waaInpfcE ily traian lZJGCra50 */         }
/* waaInpfcE ily traian lZJGCra50 */         if(nr == 0 && s[i - 1] != '0') nr = 1;
/* waaInpfcE ily traian lZJGCra50 */         if(s[i] == 'x') cx = cx + semn * nr;
/* waaInpfcE ily traian lZJGCra50 */         else if(s[i] == 'y') cy = cy + semn * nr;
/* waaInpfcE ily traian lZJGCra50 */         else if(s[i] == 'z') cz = cz + semn * nr;
/* waaInpfcE ily traian lZJGCra50 */         else if(s[i] == 't') ct = ct + semn * nr;
/* waaInpfcE ily traian lZJGCra50 */         else c = c + semn * nr , i--;
/* waaInpfcE ily traian lZJGCra50 */         if(i + 1 <= s.length()) s = s.substr(i + 1);
/* waaInpfcE ily traian lZJGCra50 */         else s = "";
/* waaInpfcE ily traian lZJGCra50 */     }
/* waaInpfcE ily traian lZJGCra50 */     //cout << cx << " " << cy << " " << cz << " " << ct << " " << c <<'\n';
/* waaInpfcE ily traian lZJGCra50 */     if(cer == 1) cout << cx + cy + cz + ct + c;
/* waaInpfcE ily traian lZJGCra50 */     else
/* waaInpfcE ily traian lZJGCra50 */     {
/* waaInpfcE ily traian lZJGCra50 */         for(int i = a ; i <= b ; i++)
/* waaInpfcE ily traian lZJGCra50 */             for(int j = a ; j <= b ; j++)
/* waaInpfcE ily traian lZJGCra50 */             {
/* waaInpfcE ily traian lZJGCra50 */                 A[++p1] = cz * i + ct * j + c;
/* waaInpfcE ily traian lZJGCra50 */                 B[++p2] = e - cx * i - cy * j;
/* waaInpfcE ily traian lZJGCra50 */             }
/* waaInpfcE ily traian lZJGCra50 */         sort(A + 1 , A + p1 + 1);
/* waaInpfcE ily traian lZJGCra50 */         int nrs = 0;
/* waaInpfcE ily traian lZJGCra50 */         for(int i = 1 ; i <= p2 ; i++)
/* waaInpfcE ily traian lZJGCra50 */             if(A[cb_max(A , p1 , B[i])] == B[i])
/* waaInpfcE ily traian lZJGCra50 */                 nrs = nrs + cb_max(A , p1 , B[i]) - cb_min(A , p1 , B[i]) + 1;
/* waaInpfcE ily traian lZJGCra50 */         cout << nrs;
/* waaInpfcE ily traian lZJGCra50 */     }
/* waaInpfcE ily traian lZJGCra50 */ }