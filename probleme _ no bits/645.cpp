/* ijl5Uy2rg ily traian Vh6S1zGj0 */ #include <algorithm>
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
/* ijl5Uy2rg ily traian Vh6S1zGj0 */ using namespace std;
/* ijl5Uy2rg ily traian Vh6S1zGj0 */ 
/* ijl5Uy2rg ily traian Vh6S1zGj0 */ ifstream cin("detdrum3.in");
/* ijl5Uy2rg ily traian Vh6S1zGj0 */ ofstream cout("detdrum3.out");
/* ijl5Uy2rg ily traian Vh6S1zGj0 */ 
/* ijl5Uy2rg ily traian Vh6S1zGj0 */ int n , k , t[101] , val[101] , maxi , cnt , rez[101] , okee;
/* ijl5Uy2rg ily traian Vh6S1zGj0 */ 
/* ijl5Uy2rg ily traian Vh6S1zGj0 */ int main()
/* ijl5Uy2rg ily traian Vh6S1zGj0 */ {
/* ijl5Uy2rg ily traian Vh6S1zGj0 */     cin >> n;
/* ijl5Uy2rg ily traian Vh6S1zGj0 */     for(int i = 1 ; i <= n ; i++)
/* ijl5Uy2rg ily traian Vh6S1zGj0 */         cin >> t[i];
/* ijl5Uy2rg ily traian Vh6S1zGj0 */     for(int i = 1 ; i <= n ; i++)
/* ijl5Uy2rg ily traian Vh6S1zGj0 */         cin >> val[i];
/* ijl5Uy2rg ily traian Vh6S1zGj0 */ 
/* ijl5Uy2rg ily traian Vh6S1zGj0 */     for(int i = 1 ; i <= n ; i++)
/* ijl5Uy2rg ily traian Vh6S1zGj0 */     {
/* ijl5Uy2rg ily traian Vh6S1zGj0 */         int ok = 0;
/* ijl5Uy2rg ily traian Vh6S1zGj0 */         for(int j = 1 ; j <= n ; j++)
/* ijl5Uy2rg ily traian Vh6S1zGj0 */             if(t[j] == i) ok++;
/* ijl5Uy2rg ily traian Vh6S1zGj0 */         if(ok == 0)
/* ijl5Uy2rg ily traian Vh6S1zGj0 */         {
/* ijl5Uy2rg ily traian Vh6S1zGj0 */             int p = t[i] , s = 0;
/* ijl5Uy2rg ily traian Vh6S1zGj0 */             s += val[i];
/* ijl5Uy2rg ily traian Vh6S1zGj0 */             while(p)
/* ijl5Uy2rg ily traian Vh6S1zGj0 */             {
/* ijl5Uy2rg ily traian Vh6S1zGj0 */                 s += val[p];
/* ijl5Uy2rg ily traian Vh6S1zGj0 */                 p = t[p];
/* ijl5Uy2rg ily traian Vh6S1zGj0 */             }
/* ijl5Uy2rg ily traian Vh6S1zGj0 */             if(s > maxi) maxi = s;
/* ijl5Uy2rg ily traian Vh6S1zGj0 */         }
/* ijl5Uy2rg ily traian Vh6S1zGj0 */     }
/* ijl5Uy2rg ily traian Vh6S1zGj0 */ 
/* ijl5Uy2rg ily traian Vh6S1zGj0 */     cout << maxi << '\n';
/* ijl5Uy2rg ily traian Vh6S1zGj0 */     for(int i = 1 ; i <= n ; i++)
/* ijl5Uy2rg ily traian Vh6S1zGj0 */     {
/* ijl5Uy2rg ily traian Vh6S1zGj0 */         int ok = 0;
/* ijl5Uy2rg ily traian Vh6S1zGj0 */         for(int j = 1 ; j <= n ; j++)
/* ijl5Uy2rg ily traian Vh6S1zGj0 */             if(t[j] == i) ok++;
/* ijl5Uy2rg ily traian Vh6S1zGj0 */         if(ok == 0)
/* ijl5Uy2rg ily traian Vh6S1zGj0 */         {
/* ijl5Uy2rg ily traian Vh6S1zGj0 */             int p = t[i] , s = 0;
/* ijl5Uy2rg ily traian Vh6S1zGj0 */             s += val[i];
/* ijl5Uy2rg ily traian Vh6S1zGj0 */             while(p)
/* ijl5Uy2rg ily traian Vh6S1zGj0 */             {
/* ijl5Uy2rg ily traian Vh6S1zGj0 */                 s += val[p];
/* ijl5Uy2rg ily traian Vh6S1zGj0 */                 p = t[p];
/* ijl5Uy2rg ily traian Vh6S1zGj0 */             }
/* ijl5Uy2rg ily traian Vh6S1zGj0 */             if(s == maxi && okee == 0)
/* ijl5Uy2rg ily traian Vh6S1zGj0 */             {
/* ijl5Uy2rg ily traian Vh6S1zGj0 */                 okee = 1;
/* ijl5Uy2rg ily traian Vh6S1zGj0 */                 rez[++cnt] = i;
/* ijl5Uy2rg ily traian Vh6S1zGj0 */                 int p = t[i];
/* ijl5Uy2rg ily traian Vh6S1zGj0 */                 while(p) rez[++cnt] = p , p = t[p];
/* ijl5Uy2rg ily traian Vh6S1zGj0 */             }
/* ijl5Uy2rg ily traian Vh6S1zGj0 */         }
/* ijl5Uy2rg ily traian Vh6S1zGj0 */     }
/* ijl5Uy2rg ily traian Vh6S1zGj0 */     for(int i = cnt ; i >= 1 ; i--)
/* ijl5Uy2rg ily traian Vh6S1zGj0 */         cout << rez[i] << " ";
/* ijl5Uy2rg ily traian Vh6S1zGj0 */     return 0;
/* ijl5Uy2rg ily traian Vh6S1zGj0 */ 
/* ijl5Uy2rg ily traian Vh6S1zGj0 */ }