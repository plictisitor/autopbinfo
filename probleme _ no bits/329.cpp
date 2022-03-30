/* Q6IWnRbpc ily traian eX3TI6KsB */ #include <algorithm>
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
/* Q6IWnRbpc ily traian eX3TI6KsB */ using namespace std;
/* Q6IWnRbpc ily traian eX3TI6KsB */ 
/* Q6IWnRbpc ily traian eX3TI6KsB */ ifstream cin("bila.in");
/* Q6IWnRbpc ily traian eX3TI6KsB */ ofstream cout("bila.out");
/* Q6IWnRbpc ily traian eX3TI6KsB */ 
/* Q6IWnRbpc ily traian eX3TI6KsB */ int n , m , is , js , ib , jb , a[25][25] , b[25][25] , maxi;
/* Q6IWnRbpc ily traian eX3TI6KsB */ char s;
/* Q6IWnRbpc ily traian eX3TI6KsB */ const int di[] = {0 ,  0 , 1 , -1};
/* Q6IWnRbpc ily traian eX3TI6KsB */ const int dj[] = {1 , -1 , 0 ,  0};
/* Q6IWnRbpc ily traian eX3TI6KsB */ 
/* Q6IWnRbpc ily traian eX3TI6KsB */ int inside(int i , int j)
/* Q6IWnRbpc ily traian eX3TI6KsB */ {
/* Q6IWnRbpc ily traian eX3TI6KsB */     if(i == 1 || i == n || j == 1 || j == m)return 1;
/* Q6IWnRbpc ily traian eX3TI6KsB */     else return 0;
/* Q6IWnRbpc ily traian eX3TI6KsB */ }
/* Q6IWnRbpc ily traian eX3TI6KsB */ 
/* Q6IWnRbpc ily traian eX3TI6KsB */ void back(int i , int j , int pas)
/* Q6IWnRbpc ily traian eX3TI6KsB */ {
/* Q6IWnRbpc ily traian eX3TI6KsB */     if(inside(i , j))
/* Q6IWnRbpc ily traian eX3TI6KsB */     {
/* Q6IWnRbpc ily traian eX3TI6KsB */         maxi = max(maxi , pas - 1);
/* Q6IWnRbpc ily traian eX3TI6KsB */         return ;
/* Q6IWnRbpc ily traian eX3TI6KsB */     }
/* Q6IWnRbpc ily traian eX3TI6KsB */     else
/* Q6IWnRbpc ily traian eX3TI6KsB */         for(int d = 0 ; d < 4 ; d++)
/* Q6IWnRbpc ily traian eX3TI6KsB */         {
/* Q6IWnRbpc ily traian eX3TI6KsB */             int inou = i + di[d];
/* Q6IWnRbpc ily traian eX3TI6KsB */             int jnou = j + dj[d];
/* Q6IWnRbpc ily traian eX3TI6KsB */             if(!a[inou][jnou] && b[inou][jnou] < b[i][j])
/* Q6IWnRbpc ily traian eX3TI6KsB */             {
/* Q6IWnRbpc ily traian eX3TI6KsB */                 a[i][j] = pas;
/* Q6IWnRbpc ily traian eX3TI6KsB */                 back(inou , jnou , pas + 1);
/* Q6IWnRbpc ily traian eX3TI6KsB */                 a[inou][jnou] = 0;
/* Q6IWnRbpc ily traian eX3TI6KsB */             }
/* Q6IWnRbpc ily traian eX3TI6KsB */         }
/* Q6IWnRbpc ily traian eX3TI6KsB */ }
/* Q6IWnRbpc ily traian eX3TI6KsB */ int main()
/* Q6IWnRbpc ily traian eX3TI6KsB */ {
/* Q6IWnRbpc ily traian eX3TI6KsB */     cin >> n >> m;
/* Q6IWnRbpc ily traian eX3TI6KsB */     for(int i = 1 ; i <= n ; ++i)
/* Q6IWnRbpc ily traian eX3TI6KsB */         for(int j = 1 ; j <= m ; ++j)
/* Q6IWnRbpc ily traian eX3TI6KsB */             cin >> b[i][j];
/* Q6IWnRbpc ily traian eX3TI6KsB */     for(int i = 0 ; i <= n + 1 ; i++)
/* Q6IWnRbpc ily traian eX3TI6KsB */         a[i][0] = a[i][m + 1] = -1;
/* Q6IWnRbpc ily traian eX3TI6KsB */     for(int i = 0 ; i <= m + 1 ; i++)
/* Q6IWnRbpc ily traian eX3TI6KsB */         a[0][i] = a[n + 1][i] = -1;
/* Q6IWnRbpc ily traian eX3TI6KsB */     cin >> is >> js;
/* Q6IWnRbpc ily traian eX3TI6KsB */     a[is][js] = 1;
/* Q6IWnRbpc ily traian eX3TI6KsB */     back(is , js , 2);
/* Q6IWnRbpc ily traian eX3TI6KsB */     cout << maxi;
/* Q6IWnRbpc ily traian eX3TI6KsB */     return 0;
/* Q6IWnRbpc ily traian eX3TI6KsB */ }