/* Ka2XuolzM ily traian AEmaXVN2f */ #include <algorithm>
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
/* Ka2XuolzM ily traian AEmaXVN2f */ 
/* Ka2XuolzM ily traian AEmaXVN2f */ using namespace std;
/* Ka2XuolzM ily traian AEmaXVN2f */ 
/* Ka2XuolzM ily traian AEmaXVN2f */ ifstream cin("abq.in");
/* Ka2XuolzM ily traian AEmaXVN2f */ ofstream cout("abq.out");
/* Ka2XuolzM ily traian AEmaXVN2f */ 
/* Ka2XuolzM ily traian AEmaXVN2f */ const int di[] = { 0 , 0 , 1 , -1};
/* Ka2XuolzM ily traian AEmaXVN2f */ const int dj[] = {-1 , 1 , 0 ,  0};
/* Ka2XuolzM ily traian AEmaXVN2f */ 
/* Ka2XuolzM ily traian AEmaXVN2f */ int n , m , a[201][201] , k , i1 , j1 , i2 , j2;
/* Ka2XuolzM ily traian AEmaXVN2f */ char b[201][201];
/* Ka2XuolzM ily traian AEmaXVN2f */ 
/* Ka2XuolzM ily traian AEmaXVN2f */ struct poz
/* Ka2XuolzM ily traian AEmaXVN2f */ {
/* Ka2XuolzM ily traian AEmaXVN2f */     int i , j;
/* Ka2XuolzM ily traian AEmaXVN2f */ };
/* Ka2XuolzM ily traian AEmaXVN2f */ 
/* Ka2XuolzM ily traian AEmaXVN2f */ bool inside(int i , int j)
/* Ka2XuolzM ily traian AEmaXVN2f */ {
/* Ka2XuolzM ily traian AEmaXVN2f */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* Ka2XuolzM ily traian AEmaXVN2f */ }
/* Ka2XuolzM ily traian AEmaXVN2f */ 
/* Ka2XuolzM ily traian AEmaXVN2f */ queue <poz>Q;
/* Ka2XuolzM ily traian AEmaXVN2f */ 
/* Ka2XuolzM ily traian AEmaXVN2f */ void lee(int i1 , int j1 , int i2 , int j2)
/* Ka2XuolzM ily traian AEmaXVN2f */ {
/* Ka2XuolzM ily traian AEmaXVN2f */     for(int i = 1 ; i <= n ; i++)
/* Ka2XuolzM ily traian AEmaXVN2f */         for(int j = 1 ; j <= m ;j ++)
/* Ka2XuolzM ily traian AEmaXVN2f */             a[i][j] = 0;
/* Ka2XuolzM ily traian AEmaXVN2f */     if(b[i1][j1] == 'b')
/* Ka2XuolzM ily traian AEmaXVN2f */     {
/* Ka2XuolzM ily traian AEmaXVN2f */         cout << -1 << '\n';
/* Ka2XuolzM ily traian AEmaXVN2f */         return;
/* Ka2XuolzM ily traian AEmaXVN2f */     }
/* Ka2XuolzM ily traian AEmaXVN2f */     else a[i1][j1] = 1;
/* Ka2XuolzM ily traian AEmaXVN2f */     Q.push({i1 , j1});
/* Ka2XuolzM ily traian AEmaXVN2f */     while(!Q.empty())
/* Ka2XuolzM ily traian AEmaXVN2f */     {
/* Ka2XuolzM ily traian AEmaXVN2f */         poz r;
/* Ka2XuolzM ily traian AEmaXVN2f */         r = Q.front();
/* Ka2XuolzM ily traian AEmaXVN2f */         for(int d = 0 ; d < 4 ; d++)
/* Ka2XuolzM ily traian AEmaXVN2f */         {
/* Ka2XuolzM ily traian AEmaXVN2f */             int inou = r.i + di[d];
/* Ka2XuolzM ily traian AEmaXVN2f */             int jnou = r.j + dj[d];
/* Ka2XuolzM ily traian AEmaXVN2f */             if(inside(inou , jnou) && b[inou][jnou] == 'a' && a[inou][jnou] == 0)
/* Ka2XuolzM ily traian AEmaXVN2f */             {
/* Ka2XuolzM ily traian AEmaXVN2f */                 a[inou][jnou] = a[r.i][r.j] + 1;
/* Ka2XuolzM ily traian AEmaXVN2f */                 Q.push({inou , jnou});
/* Ka2XuolzM ily traian AEmaXVN2f */             }
/* Ka2XuolzM ily traian AEmaXVN2f */         }
/* Ka2XuolzM ily traian AEmaXVN2f */         Q.pop();
/* Ka2XuolzM ily traian AEmaXVN2f */     }
/* Ka2XuolzM ily traian AEmaXVN2f */     if(a[i2][j2] != 0)
/* Ka2XuolzM ily traian AEmaXVN2f */         cout << a[i2][j2] << '\n';
/* Ka2XuolzM ily traian AEmaXVN2f */     else cout << -1 << '\n';
/* Ka2XuolzM ily traian AEmaXVN2f */ 
/* Ka2XuolzM ily traian AEmaXVN2f */ }
/* Ka2XuolzM ily traian AEmaXVN2f */ int main()
/* Ka2XuolzM ily traian AEmaXVN2f */ {
/* Ka2XuolzM ily traian AEmaXVN2f */     cin >> n >> m;
/* Ka2XuolzM ily traian AEmaXVN2f */     for(int i = 1 ; i <= n ; i++)
/* Ka2XuolzM ily traian AEmaXVN2f */         for(int j = 1 ; j <= m ; j++)
/* Ka2XuolzM ily traian AEmaXVN2f */             cin >> b[i][j];
/* Ka2XuolzM ily traian AEmaXVN2f */     cin >> k;
/* Ka2XuolzM ily traian AEmaXVN2f */     for(int i = 1 ; i <= k ; i++)
/* Ka2XuolzM ily traian AEmaXVN2f */     {
/* Ka2XuolzM ily traian AEmaXVN2f */         cin >> i1 >> j1 >> i2 >> j2;
/* Ka2XuolzM ily traian AEmaXVN2f */         lee(i1 , j1 , i2 , j2);
/* Ka2XuolzM ily traian AEmaXVN2f */     }
/* Ka2XuolzM ily traian AEmaXVN2f */     return 0;
/* Ka2XuolzM ily traian AEmaXVN2f */ }