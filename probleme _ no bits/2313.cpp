/* XnfYOZMnu ily traian ma01bWNtv */ #include <algorithm>
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
/* XnfYOZMnu ily traian ma01bWNtv */ using namespace std;
/* XnfYOZMnu ily traian ma01bWNtv */ 
/* XnfYOZMnu ily traian ma01bWNtv */ ifstream cin("ferma1.in");
/* XnfYOZMnu ily traian ma01bWNtv */ ofstream cout("ferma1.out");
/* XnfYOZMnu ily traian ma01bWNtv */ 
/* XnfYOZMnu ily traian ma01bWNtv */ const int di[] = {-1 , 0 ,  1 , 0};
/* XnfYOZMnu ily traian ma01bWNtv */ const int dj[] = { 0 , 1 , 0 , -1};
/* XnfYOZMnu ily traian ma01bWNtv */ 
/* XnfYOZMnu ily traian ma01bWNtv */ int a[53][53] , n , m , ir , jr;
/* XnfYOZMnu ily traian ma01bWNtv */ char b[53][53];
/* XnfYOZMnu ily traian ma01bWNtv */ 
/* XnfYOZMnu ily traian ma01bWNtv */ int inside(int i , int j)
/* XnfYOZMnu ily traian ma01bWNtv */ {
/* XnfYOZMnu ily traian ma01bWNtv */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* XnfYOZMnu ily traian ma01bWNtv */ }
/* XnfYOZMnu ily traian ma01bWNtv */ 
/* XnfYOZMnu ily traian ma01bWNtv */ int ok(int i , int j)
/* XnfYOZMnu ily traian ma01bWNtv */ {
/* XnfYOZMnu ily traian ma01bWNtv */     for(int x = -1 ; x <= 1 ; x++)
/* XnfYOZMnu ily traian ma01bWNtv */         for(int y = -1 ; y <= 1 ; y++)
/* XnfYOZMnu ily traian ma01bWNtv */             if(!(inside(i+x , j+y)) || a[i+x][j+y] == 1)
/* XnfYOZMnu ily traian ma01bWNtv */                 return 0;
/* XnfYOZMnu ily traian ma01bWNtv */     return 1;
/* XnfYOZMnu ily traian ma01bWNtv */ }
/* XnfYOZMnu ily traian ma01bWNtv */ 
/* XnfYOZMnu ily traian ma01bWNtv */ void afisare()
/* XnfYOZMnu ily traian ma01bWNtv */ {
/* XnfYOZMnu ily traian ma01bWNtv */     for(int i = 1 ; i <= n ; i++)
/* XnfYOZMnu ily traian ma01bWNtv */     {
/* XnfYOZMnu ily traian ma01bWNtv */         for(int j = 1 ; j <= m; j ++)
/* XnfYOZMnu ily traian ma01bWNtv */             cout << b[i][j];
/* XnfYOZMnu ily traian ma01bWNtv */         cout << '\n';
/* XnfYOZMnu ily traian ma01bWNtv */     }
/* XnfYOZMnu ily traian ma01bWNtv */ }
/* XnfYOZMnu ily traian ma01bWNtv */ 
/* XnfYOZMnu ily traian ma01bWNtv */ void fill(int i , int j)
/* XnfYOZMnu ily traian ma01bWNtv */ {
/* XnfYOZMnu ily traian ma01bWNtv */     a[i][j] = 2;
/* XnfYOZMnu ily traian ma01bWNtv */     for(int x = -1 ; x <= 1 ; x++)
/* XnfYOZMnu ily traian ma01bWNtv */         for(int y = -1 ; y <= 1 ; y++)
/* XnfYOZMnu ily traian ma01bWNtv */             b[i+x][j+y] = '*';
/* XnfYOZMnu ily traian ma01bWNtv */     for(int d = 0 ; d < 4 ; d++)
/* XnfYOZMnu ily traian ma01bWNtv */     {
/* XnfYOZMnu ily traian ma01bWNtv */         int inou = i + di[d];
/* XnfYOZMnu ily traian ma01bWNtv */         int jnou = j + dj[d];
/* XnfYOZMnu ily traian ma01bWNtv */         if(ok(inou , jnou) && a[inou][jnou] == 0) fill(inou , jnou);
/* XnfYOZMnu ily traian ma01bWNtv */     }
/* XnfYOZMnu ily traian ma01bWNtv */ }
/* XnfYOZMnu ily traian ma01bWNtv */ int main()
/* XnfYOZMnu ily traian ma01bWNtv */ {
/* XnfYOZMnu ily traian ma01bWNtv */     cin >> n >> m;
/* XnfYOZMnu ily traian ma01bWNtv */     for(int i = 1 ; i <= n ; i++)
/* XnfYOZMnu ily traian ma01bWNtv */         for(int j = 1 ; j <= m ; j++)
/* XnfYOZMnu ily traian ma01bWNtv */         {
/* XnfYOZMnu ily traian ma01bWNtv */             char c;
/* XnfYOZMnu ily traian ma01bWNtv */             cin >> c;
/* XnfYOZMnu ily traian ma01bWNtv */             b[i][j] = c;
/* XnfYOZMnu ily traian ma01bWNtv */             if(c == 'R')
/* XnfYOZMnu ily traian ma01bWNtv */             {
/* XnfYOZMnu ily traian ma01bWNtv */                 ir = i;
/* XnfYOZMnu ily traian ma01bWNtv */                 jr = j;
/* XnfYOZMnu ily traian ma01bWNtv */             }
/* XnfYOZMnu ily traian ma01bWNtv */             else if(c == '+') a[i][j] = 1;
/* XnfYOZMnu ily traian ma01bWNtv */         }
/* XnfYOZMnu ily traian ma01bWNtv */     fill(ir , jr);
/* XnfYOZMnu ily traian ma01bWNtv */     afisare();
/* XnfYOZMnu ily traian ma01bWNtv */ }