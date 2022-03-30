/* nGtdA05Wb ily traian 0p5m1lIWw */ #include <algorithm>
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
/* nGtdA05Wb ily traian 0p5m1lIWw */ using namespace std;
/* nGtdA05Wb ily traian 0p5m1lIWw */ 
/* nGtdA05Wb ily traian 0p5m1lIWw */ int n , m , is , js , ib , jb , a[7][7] , cnt;
/* nGtdA05Wb ily traian 0p5m1lIWw */ 
/* nGtdA05Wb ily traian 0p5m1lIWw */ const int dic[] = {-2 , -1 , 1 , 2 ,  2 ,  1 , -1 , -2};
/* nGtdA05Wb ily traian 0p5m1lIWw */ const int djc[] = { 1 ,  2 , 2 , 1 , -1 , -2 , -2 , -1};
/* nGtdA05Wb ily traian 0p5m1lIWw */ 
/* nGtdA05Wb ily traian 0p5m1lIWw */ int inside(int i , int j)
/* nGtdA05Wb ily traian 0p5m1lIWw */ {
/* nGtdA05Wb ily traian 0p5m1lIWw */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* nGtdA05Wb ily traian 0p5m1lIWw */ }
/* nGtdA05Wb ily traian 0p5m1lIWw */ 
/* nGtdA05Wb ily traian 0p5m1lIWw */ void afis()
/* nGtdA05Wb ily traian 0p5m1lIWw */ {
/* nGtdA05Wb ily traian 0p5m1lIWw */     for(int i = 1 ; i <= n ; i++)
/* nGtdA05Wb ily traian 0p5m1lIWw */     {
/* nGtdA05Wb ily traian 0p5m1lIWw */         for(int j = 1 ; j <= m ; j++)
/* nGtdA05Wb ily traian 0p5m1lIWw */             cout << a[i][j] << " ";
/* nGtdA05Wb ily traian 0p5m1lIWw */         cout << '\n';
/* nGtdA05Wb ily traian 0p5m1lIWw */     }
/* nGtdA05Wb ily traian 0p5m1lIWw */ }
/* nGtdA05Wb ily traian 0p5m1lIWw */ 
/* nGtdA05Wb ily traian 0p5m1lIWw */ void back(int i , int j , int pas)
/* nGtdA05Wb ily traian 0p5m1lIWw */ {
/* nGtdA05Wb ily traian 0p5m1lIWw */     for(int d = 0 ; d < 8 ; d++)
/* nGtdA05Wb ily traian 0p5m1lIWw */     {
/* nGtdA05Wb ily traian 0p5m1lIWw */         int inou = i + dic[d];
/* nGtdA05Wb ily traian 0p5m1lIWw */         int jnou = j + djc[d];
/* nGtdA05Wb ily traian 0p5m1lIWw */         if(inside(inou , jnou) && a[inou][jnou] == 0)
/* nGtdA05Wb ily traian 0p5m1lIWw */         {
/* nGtdA05Wb ily traian 0p5m1lIWw */             a[inou][jnou] = pas;
/* nGtdA05Wb ily traian 0p5m1lIWw */             if(pas == n * m) 
/* nGtdA05Wb ily traian 0p5m1lIWw */             {
/* nGtdA05Wb ily traian 0p5m1lIWw */                 afis();
/* nGtdA05Wb ily traian 0p5m1lIWw */                 exit(0);
/* nGtdA05Wb ily traian 0p5m1lIWw */             }
/* nGtdA05Wb ily traian 0p5m1lIWw */             else back(inou , jnou , pas + 1);
/* nGtdA05Wb ily traian 0p5m1lIWw */             a[inou][jnou] = 0;
/* nGtdA05Wb ily traian 0p5m1lIWw */         }
/* nGtdA05Wb ily traian 0p5m1lIWw */     }
/* nGtdA05Wb ily traian 0p5m1lIWw */ }
/* nGtdA05Wb ily traian 0p5m1lIWw */ int main()
/* nGtdA05Wb ily traian 0p5m1lIWw */ {
/* nGtdA05Wb ily traian 0p5m1lIWw */     cin >> n >> m;
/* nGtdA05Wb ily traian 0p5m1lIWw */     cin >> is >> js;
/* nGtdA05Wb ily traian 0p5m1lIWw */     a[is][js] = 1;
/* nGtdA05Wb ily traian 0p5m1lIWw */     back(is , js , 2);
/* nGtdA05Wb ily traian 0p5m1lIWw */     return 0;
/* nGtdA05Wb ily traian 0p5m1lIWw */ }