/* DydA3CUqs ily traian M3XSt60OW */ #include <algorithm>
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
/* DydA3CUqs ily traian M3XSt60OW */ using namespace std;
/* DydA3CUqs ily traian M3XSt60OW */ ifstream cin("alee.in");
/* DydA3CUqs ily traian M3XSt60OW */ ofstream cout("alee.out");
/* DydA3CUqs ily traian M3XSt60OW */ const int di[]={-1 , 0 , 1 , 0};
/* DydA3CUqs ily traian M3XSt60OW */ const int dj[]={0 , 1 , 0 , -1};
/* DydA3CUqs ily traian M3XSt60OW */ struct poz{int i , j;};
/* DydA3CUqs ily traian M3XSt60OW */ int n , a[200][200];
/* DydA3CUqs ily traian M3XSt60OW */ poz p1 , p2;
/* DydA3CUqs ily traian M3XSt60OW */ bool inside(int i , int j)
/* DydA3CUqs ily traian M3XSt60OW */ {
/* DydA3CUqs ily traian M3XSt60OW */     return i>=1 && i<=n && j>=1 && j<=n;
/* DydA3CUqs ily traian M3XSt60OW */ }
/* DydA3CUqs ily traian M3XSt60OW */ void lee(poz start)
/* DydA3CUqs ily traian M3XSt60OW */ {
/* DydA3CUqs ily traian M3XSt60OW */     poz q[40000];
/* DydA3CUqs ily traian M3XSt60OW */     int st , dr;
/* DydA3CUqs ily traian M3XSt60OW */     st=dr=1;
/* DydA3CUqs ily traian M3XSt60OW */     q[st]=start;
/* DydA3CUqs ily traian M3XSt60OW */     a[start.i][start.j]=1;
/* DydA3CUqs ily traian M3XSt60OW */     while(st<=dr)
/* DydA3CUqs ily traian M3XSt60OW */     {
/* DydA3CUqs ily traian M3XSt60OW */         int i = q[st].i;
/* DydA3CUqs ily traian M3XSt60OW */         int j = q[st].j;
/* DydA3CUqs ily traian M3XSt60OW */         for(int d = 0 ; d < 4 ; d++)
/* DydA3CUqs ily traian M3XSt60OW */         {
/* DydA3CUqs ily traian M3XSt60OW */             int inou=i+di[d];
/* DydA3CUqs ily traian M3XSt60OW */             int jnou=j+dj[d];
/* DydA3CUqs ily traian M3XSt60OW */             if(inside(inou,jnou) && a[inou][jnou]==0)
/* DydA3CUqs ily traian M3XSt60OW */             {
/* DydA3CUqs ily traian M3XSt60OW */                 q[++dr].i=inou;
/* DydA3CUqs ily traian M3XSt60OW */                 q[dr].j=jnou;
/* DydA3CUqs ily traian M3XSt60OW */                 a[inou][jnou]=a[i][j]+1;
/* DydA3CUqs ily traian M3XSt60OW */             }
/* DydA3CUqs ily traian M3XSt60OW */         }
/* DydA3CUqs ily traian M3XSt60OW */         st++;
/* DydA3CUqs ily traian M3XSt60OW */     }
/* DydA3CUqs ily traian M3XSt60OW */ 
/* DydA3CUqs ily traian M3XSt60OW */ }
/* DydA3CUqs ily traian M3XSt60OW */ int main()
/* DydA3CUqs ily traian M3XSt60OW */ {
/* DydA3CUqs ily traian M3XSt60OW */     int c;
/* DydA3CUqs ily traian M3XSt60OW */     cin >> n >> c;
/* DydA3CUqs ily traian M3XSt60OW */     for(int i =1 ; i <= c ; ++i)
/* DydA3CUqs ily traian M3XSt60OW */     {
/* DydA3CUqs ily traian M3XSt60OW */         int x , y;
/* DydA3CUqs ily traian M3XSt60OW */         cin >> x >> y;
/* DydA3CUqs ily traian M3XSt60OW */         a[x][y]=-1;
/* DydA3CUqs ily traian M3XSt60OW */     }
/* DydA3CUqs ily traian M3XSt60OW */     cin >> p1.i >> p1.j >> p2.i >> p2.j;///pozitiile
/* DydA3CUqs ily traian M3XSt60OW */     lee(p1);
/* DydA3CUqs ily traian M3XSt60OW */     cout << a[p2.i][p2.j];
/* DydA3CUqs ily traian M3XSt60OW */ 
/* DydA3CUqs ily traian M3XSt60OW */ }