/* TVHphehH2 ily traian 4tB5hkx4p */ #include <algorithm>
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
/* TVHphehH2 ily traian 4tB5hkx4p */ 
/* TVHphehH2 ily traian 4tB5hkx4p */ using namespace std;
/* TVHphehH2 ily traian 4tB5hkx4p */ ifstream cin("labirint4.in");
/* TVHphehH2 ily traian 4tB5hkx4p */ ofstream cout("labirint4.out");
/* TVHphehH2 ily traian 4tB5hkx4p */ 
/* TVHphehH2 ily traian 4tB5hkx4p */ struct pozitie
/* TVHphehH2 ily traian 4tB5hkx4p */ {
/* TVHphehH2 ily traian 4tB5hkx4p */     int i , j;
/* TVHphehH2 ily traian 4tB5hkx4p */ };
/* TVHphehH2 ily traian 4tB5hkx4p */ 
/* TVHphehH2 ily traian 4tB5hkx4p */ pozitie o[250000] , C;
/* TVHphehH2 ily traian 4tB5hkx4p */ int n , m , k , p;
/* TVHphehH2 ily traian 4tB5hkx4p */ char ch;
/* TVHphehH2 ily traian 4tB5hkx4p */ 
/* TVHphehH2 ily traian 4tB5hkx4p */ int comparare(pozitie a , pozitie b)
/* TVHphehH2 ily traian 4tB5hkx4p */ {
/* TVHphehH2 ily traian 4tB5hkx4p */     return a.i<b.i || a.i == b.i && a.j < b.j;
/* TVHphehH2 ily traian 4tB5hkx4p */ }
/* TVHphehH2 ily traian 4tB5hkx4p */ 
/* TVHphehH2 ily traian 4tB5hkx4p */ int libera(int x , int y)
/* TVHphehH2 ily traian 4tB5hkx4p */ {
/* TVHphehH2 ily traian 4tB5hkx4p */     int st = 1 , dr = k;
/* TVHphehH2 ily traian 4tB5hkx4p */     while(st <= dr)
/* TVHphehH2 ily traian 4tB5hkx4p */     {
/* TVHphehH2 ily traian 4tB5hkx4p */         int mij = (st + dr) / 2;
/* TVHphehH2 ily traian 4tB5hkx4p */         if(o[mij].i == x && o[mij].j == y) return 0;
/* TVHphehH2 ily traian 4tB5hkx4p */         else
/* TVHphehH2 ily traian 4tB5hkx4p */         {
/* TVHphehH2 ily traian 4tB5hkx4p */             pozitie c;
/* TVHphehH2 ily traian 4tB5hkx4p */             c.i = x;
/* TVHphehH2 ily traian 4tB5hkx4p */             c.j = y;
/* TVHphehH2 ily traian 4tB5hkx4p */             if(comparare(o[mij] , c)) st = mij+1;
/* TVHphehH2 ily traian 4tB5hkx4p */             else dr = mij - 1;
/* TVHphehH2 ily traian 4tB5hkx4p */         }
/* TVHphehH2 ily traian 4tB5hkx4p */     }
/* TVHphehH2 ily traian 4tB5hkx4p */     return 1;
/* TVHphehH2 ily traian 4tB5hkx4p */ }
/* TVHphehH2 ily traian 4tB5hkx4p */ int main()
/* TVHphehH2 ily traian 4tB5hkx4p */ {
/* TVHphehH2 ily traian 4tB5hkx4p */     cin >> n >> m >> k;
/* TVHphehH2 ily traian 4tB5hkx4p */     for(int i = 1 ; i <= k ; i++)
/* TVHphehH2 ily traian 4tB5hkx4p */         cin >> o[i].i >> o[i].j;
/* TVHphehH2 ily traian 4tB5hkx4p */     cin >> C.i >> C.j;
/* TVHphehH2 ily traian 4tB5hkx4p */     sort(o+1 , o+k+1 , comparare);
/* TVHphehH2 ily traian 4tB5hkx4p */     cin >> p;
/* TVHphehH2 ily traian 4tB5hkx4p */     for(int i = 1; i <= p ; i++)
/* TVHphehH2 ily traian 4tB5hkx4p */     {
/* TVHphehH2 ily traian 4tB5hkx4p */         cin >> ch;
/* TVHphehH2 ily traian 4tB5hkx4p */         if(ch == 'U' )
/* TVHphehH2 ily traian 4tB5hkx4p */         {
/* TVHphehH2 ily traian 4tB5hkx4p */             if(C.i-1 >= 1 && libera(C.i-1 , C.j))
/* TVHphehH2 ily traian 4tB5hkx4p */                 C.i--;
/* TVHphehH2 ily traian 4tB5hkx4p */         }
/* TVHphehH2 ily traian 4tB5hkx4p */         else
/* TVHphehH2 ily traian 4tB5hkx4p */             if(ch == 'R' )
/* TVHphehH2 ily traian 4tB5hkx4p */             {
/* TVHphehH2 ily traian 4tB5hkx4p */                 if(C.j+1 <=m && libera(C.i , C.j+1))
/* TVHphehH2 ily traian 4tB5hkx4p */                     C.j++;
/* TVHphehH2 ily traian 4tB5hkx4p */             }
/* TVHphehH2 ily traian 4tB5hkx4p */         else
/* TVHphehH2 ily traian 4tB5hkx4p */             if(ch == 'D')
/* TVHphehH2 ily traian 4tB5hkx4p */             {
/* TVHphehH2 ily traian 4tB5hkx4p */                 if(C.i+1 <= n  && libera(C.i+1 , C.j))
/* TVHphehH2 ily traian 4tB5hkx4p */                 C.i++;
/* TVHphehH2 ily traian 4tB5hkx4p */             }
/* TVHphehH2 ily traian 4tB5hkx4p */         else if(ch == 'L')
/* TVHphehH2 ily traian 4tB5hkx4p */         {
/* TVHphehH2 ily traian 4tB5hkx4p */             if(C.j-1 >= 1 && libera(C.i , C.j-1))
/* TVHphehH2 ily traian 4tB5hkx4p */                 C.j--;
/* TVHphehH2 ily traian 4tB5hkx4p */         }
/* TVHphehH2 ily traian 4tB5hkx4p */     }
/* TVHphehH2 ily traian 4tB5hkx4p */     cout << C.i << ' ' << C.j;
/* TVHphehH2 ily traian 4tB5hkx4p */ }