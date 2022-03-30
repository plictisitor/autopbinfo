/* Y709BZEbA ily traian kIM6j1wNk */ #include <algorithm>
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
/* Y709BZEbA ily traian kIM6j1wNk */ using namespace std;
/* Y709BZEbA ily traian kIM6j1wNk */ 
/* Y709BZEbA ily traian kIM6j1wNk */ ifstream cin("traseucal.in");
/* Y709BZEbA ily traian kIM6j1wNk */ ofstream cout("traseucal.out");
/* Y709BZEbA ily traian kIM6j1wNk */ 
/* Y709BZEbA ily traian kIM6j1wNk */ int n , m , is , js , ib , jb , a[11][11] , cnt;
/* Y709BZEbA ily traian kIM6j1wNk */ char s;
/* Y709BZEbA ily traian kIM6j1wNk */ const int dic[] = {-2 , -2 , -1 , 1 , 2 ,  2 ,  1 , -1};
/* Y709BZEbA ily traian kIM6j1wNk */ const int djc[] = {-1 ,  1 ,  2 , 2 , 1 , -1 , -2 , -2};
/* Y709BZEbA ily traian kIM6j1wNk */ 
/* Y709BZEbA ily traian kIM6j1wNk */ int inside(int i , int j)
/* Y709BZEbA ily traian kIM6j1wNk */ {
/* Y709BZEbA ily traian kIM6j1wNk */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* Y709BZEbA ily traian kIM6j1wNk */ }
/* Y709BZEbA ily traian kIM6j1wNk */ 
/* Y709BZEbA ily traian kIM6j1wNk */ void afis()
/* Y709BZEbA ily traian kIM6j1wNk */ {
/* Y709BZEbA ily traian kIM6j1wNk */     for(int i = 1 ; i <= n ; i++)
/* Y709BZEbA ily traian kIM6j1wNk */     {
/* Y709BZEbA ily traian kIM6j1wNk */         for(int j = 1 ; j <= m ; j++)
/* Y709BZEbA ily traian kIM6j1wNk */             if(a[i][j] == -1) cout << 0 << " ";
/* Y709BZEbA ily traian kIM6j1wNk */             else cout << a[i][j] << " ";
/* Y709BZEbA ily traian kIM6j1wNk */         cout << '\n';
/* Y709BZEbA ily traian kIM6j1wNk */     }
/* Y709BZEbA ily traian kIM6j1wNk */     cnt++;
/* Y709BZEbA ily traian kIM6j1wNk */ }
/* Y709BZEbA ily traian kIM6j1wNk */ 
/* Y709BZEbA ily traian kIM6j1wNk */ void back(int i , int j , int pas)
/* Y709BZEbA ily traian kIM6j1wNk */ {
/* Y709BZEbA ily traian kIM6j1wNk */     for(int d = 0 ; d < 8 ; d++)
/* Y709BZEbA ily traian kIM6j1wNk */     {
/* Y709BZEbA ily traian kIM6j1wNk */         int inou = i + dic[d];
/* Y709BZEbA ily traian kIM6j1wNk */         int jnou = j + djc[d];
/* Y709BZEbA ily traian kIM6j1wNk */         if(inside(inou , jnou) && a[inou][jnou] == 0)
/* Y709BZEbA ily traian kIM6j1wNk */         {
/* Y709BZEbA ily traian kIM6j1wNk */             a[inou][jnou] = pas;
/* Y709BZEbA ily traian kIM6j1wNk */             if(inou == n && jnou == m)
/* Y709BZEbA ily traian kIM6j1wNk */             {
/* Y709BZEbA ily traian kIM6j1wNk */                 afis();
/* Y709BZEbA ily traian kIM6j1wNk */                 return ;
/* Y709BZEbA ily traian kIM6j1wNk */             }
/* Y709BZEbA ily traian kIM6j1wNk */             else back(inou , jnou , pas + 1);
/* Y709BZEbA ily traian kIM6j1wNk */             a[inou][jnou] = 0;
/* Y709BZEbA ily traian kIM6j1wNk */         }
/* Y709BZEbA ily traian kIM6j1wNk */     }
/* Y709BZEbA ily traian kIM6j1wNk */ }
/* Y709BZEbA ily traian kIM6j1wNk */ int main()
/* Y709BZEbA ily traian kIM6j1wNk */ {
/* Y709BZEbA ily traian kIM6j1wNk */     cin >> n >> m;
/* Y709BZEbA ily traian kIM6j1wNk */     for(int i = 1 ; i <= n ; i++)
/* Y709BZEbA ily traian kIM6j1wNk */         for(int j = 1 ; j <= m ; j++)
/* Y709BZEbA ily traian kIM6j1wNk */             cin >> a[i][j] , a[i][j] = -a[i][j];
/* Y709BZEbA ily traian kIM6j1wNk */ 
/* Y709BZEbA ily traian kIM6j1wNk */     a[1][1] = 1;
/* Y709BZEbA ily traian kIM6j1wNk */     back(1 , 1 , 2);
/* Y709BZEbA ily traian kIM6j1wNk */     if(cnt == 0)
/* Y709BZEbA ily traian kIM6j1wNk */         for(int i = 1 ; i <= n ; i++)
/* Y709BZEbA ily traian kIM6j1wNk */         {
/* Y709BZEbA ily traian kIM6j1wNk */             for(int j = 1 ; j <= m ; j++)
/* Y709BZEbA ily traian kIM6j1wNk */                 cout << 0 << " ";
/* Y709BZEbA ily traian kIM6j1wNk */             cout << '\n';
/* Y709BZEbA ily traian kIM6j1wNk */         }
/* Y709BZEbA ily traian kIM6j1wNk */     return 0;
/* Y709BZEbA ily traian kIM6j1wNk */ }