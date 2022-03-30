/* yF7w8HTvu ily traian WeeUmpDrl */ #include <algorithm>
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
/* yF7w8HTvu ily traian WeeUmpDrl */ using namespace std;
/* yF7w8HTvu ily traian WeeUmpDrl */ 
/* yF7w8HTvu ily traian WeeUmpDrl */ ifstream cin("tai.in");
/* yF7w8HTvu ily traian WeeUmpDrl */ ofstream cout("tai.out");
/* yF7w8HTvu ily traian WeeUmpDrl */ 
/* yF7w8HTvu ily traian WeeUmpDrl */ int n , x , cer , rez , maxi , maxi1;
/* yF7w8HTvu ily traian WeeUmpDrl */ 
/* yF7w8HTvu ily traian WeeUmpDrl */ int prim (int n)
/* yF7w8HTvu ily traian WeeUmpDrl */ {
/* yF7w8HTvu ily traian WeeUmpDrl */     if(n == 0 || n == 1) return 0;
/* yF7w8HTvu ily traian WeeUmpDrl */     if(n == 2) return 1;
/* yF7w8HTvu ily traian WeeUmpDrl */     if(n % 2 == 0) return 0;
/* yF7w8HTvu ily traian WeeUmpDrl */     for(int i = 3 ; i * i <= n ; i += 2)
/* yF7w8HTvu ily traian WeeUmpDrl */         if(n % i == 0) return 0;
/* yF7w8HTvu ily traian WeeUmpDrl */     return 1;
/* yF7w8HTvu ily traian WeeUmpDrl */ }
/* yF7w8HTvu ily traian WeeUmpDrl */ 
/* yF7w8HTvu ily traian WeeUmpDrl */ void desc(int x)
/* yF7w8HTvu ily traian WeeUmpDrl */ {
/* yF7w8HTvu ily traian WeeUmpDrl */     int aux = x , p = 1 , c = 0;
/* yF7w8HTvu ily traian WeeUmpDrl */     while(x != 0)
/* yF7w8HTvu ily traian WeeUmpDrl */     {
/* yF7w8HTvu ily traian WeeUmpDrl */         c = (x % 10) * p + c;
/* yF7w8HTvu ily traian WeeUmpDrl */         x /= 10;
/* yF7w8HTvu ily traian WeeUmpDrl */         p *= 10;
/* yF7w8HTvu ily traian WeeUmpDrl */         if(prim(x))
/* yF7w8HTvu ily traian WeeUmpDrl */         {
/* yF7w8HTvu ily traian WeeUmpDrl */             if(x > maxi1 && aux != x) maxi1 = x;
/* yF7w8HTvu ily traian WeeUmpDrl */         }
/* yF7w8HTvu ily traian WeeUmpDrl */         if(prim(c))
/* yF7w8HTvu ily traian WeeUmpDrl */         {
/* yF7w8HTvu ily traian WeeUmpDrl */             if(c > maxi1 && aux != c) maxi1 = c;
/* yF7w8HTvu ily traian WeeUmpDrl */         }
/* yF7w8HTvu ily traian WeeUmpDrl */     }
/* yF7w8HTvu ily traian WeeUmpDrl */ }
/* yF7w8HTvu ily traian WeeUmpDrl */ 
/* yF7w8HTvu ily traian WeeUmpDrl */ int main()
/* yF7w8HTvu ily traian WeeUmpDrl */ {
/* yF7w8HTvu ily traian WeeUmpDrl */     cin >> cer >> n;
/* yF7w8HTvu ily traian WeeUmpDrl */     for(int i = 1 ; i <= n ; i++)
/* yF7w8HTvu ily traian WeeUmpDrl */     {
/* yF7w8HTvu ily traian WeeUmpDrl */         cin >> x;
/* yF7w8HTvu ily traian WeeUmpDrl */         if(prim(x)) if(x > rez) rez = x;
/* yF7w8HTvu ily traian WeeUmpDrl */         int aux = x , p = 1 , c = 0;
/* yF7w8HTvu ily traian WeeUmpDrl */         while(x != 0)
/* yF7w8HTvu ily traian WeeUmpDrl */         {
/* yF7w8HTvu ily traian WeeUmpDrl */             c = x % 10 * p + c;
/* yF7w8HTvu ily traian WeeUmpDrl */             x /= 10;
/* yF7w8HTvu ily traian WeeUmpDrl */             p *= 10;
/* yF7w8HTvu ily traian WeeUmpDrl */             desc(x);
/* yF7w8HTvu ily traian WeeUmpDrl */             if(c != aux)desc(c);
/* yF7w8HTvu ily traian WeeUmpDrl */             if(prim(x))
/* yF7w8HTvu ily traian WeeUmpDrl */             {
/* yF7w8HTvu ily traian WeeUmpDrl */                 if(x > maxi && aux != x) maxi = x;
/* yF7w8HTvu ily traian WeeUmpDrl */             }
/* yF7w8HTvu ily traian WeeUmpDrl */             if(prim(c))
/* yF7w8HTvu ily traian WeeUmpDrl */             {
/* yF7w8HTvu ily traian WeeUmpDrl */                 if(c > maxi && aux != c) maxi = c;
/* yF7w8HTvu ily traian WeeUmpDrl */             }
/* yF7w8HTvu ily traian WeeUmpDrl */         }
/* yF7w8HTvu ily traian WeeUmpDrl */     }
/* yF7w8HTvu ily traian WeeUmpDrl */     if(cer == 1) cout << rez;
/* yF7w8HTvu ily traian WeeUmpDrl */     else if(cer == 2) cout << maxi;
/* yF7w8HTvu ily traian WeeUmpDrl */     else cout << maxi1;
/* yF7w8HTvu ily traian WeeUmpDrl */ }