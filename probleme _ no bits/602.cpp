/* 2qekF6JFn ily traian 3qjVGEeoS */ #include <algorithm>
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
/* 2qekF6JFn ily traian 3qjVGEeoS */ using namespace std;
/* 2qekF6JFn ily traian 3qjVGEeoS */ ifstream cin("regine.in");
/* 2qekF6JFn ily traian 3qjVGEeoS */ ofstream cout("regine.out");
/* 2qekF6JFn ily traian 3qjVGEeoS */ const int di[]={-1,-1,-1, 0, 0, 1, 1, 1};
/* 2qekF6JFn ily traian 3qjVGEeoS */ const int dj[]={-1, 0, 1,-1, 1,-1, 0, 1};
/* 2qekF6JFn ily traian 3qjVGEeoS */ 
/* 2qekF6JFn ily traian 3qjVGEeoS */ int a[105][105], n, m , i , j , p , q;
/* 2qekF6JFn ily traian 3qjVGEeoS */ int main()
/* 2qekF6JFn ily traian 3qjVGEeoS */ {
/* 2qekF6JFn ily traian 3qjVGEeoS */     cin  >> n >> m ;
/* 2qekF6JFn ily traian 3qjVGEeoS */     for(int k = 1 ; k <= m ; ++k)
/* 2qekF6JFn ily traian 3qjVGEeoS */     {
/* 2qekF6JFn ily traian 3qjVGEeoS */         cin >> i >> j;
/* 2qekF6JFn ily traian 3qjVGEeoS */         a[i][j] = 1;
/* 2qekF6JFn ily traian 3qjVGEeoS */     }
/* 2qekF6JFn ily traian 3qjVGEeoS */     
/* 2qekF6JFn ily traian 3qjVGEeoS */     for(int i =1 ; i <= n ; ++i)
/* 2qekF6JFn ily traian 3qjVGEeoS */         for(int j =1 ; j <= n ; ++j)
/* 2qekF6JFn ily traian 3qjVGEeoS */             if(a[i][j] == 1)
/* 2qekF6JFn ily traian 3qjVGEeoS */             {
/* 2qekF6JFn ily traian 3qjVGEeoS */                 int cnt = 0;
/* 2qekF6JFn ily traian 3qjVGEeoS */                 for(int k = 0 ; k < 8 ; k ++)
/* 2qekF6JFn ily traian 3qjVGEeoS */                 {
/* 2qekF6JFn ily traian 3qjVGEeoS */                     int x = 1;
/* 2qekF6JFn ily traian 3qjVGEeoS */                     while(i + di[k] * x > 0 && i + di[k] * x <= n && j + dj[k] * x > 0 && j + dj[k] * x <= n && a[i + di[k] * x][j + dj[k] * x] == 0)
/* 2qekF6JFn ily traian 3qjVGEeoS */                         x ++;
/* 2qekF6JFn ily traian 3qjVGEeoS */                     if(a[i + di[k] * x][j + dj[k] * x] == 1)  
/* 2qekF6JFn ily traian 3qjVGEeoS */                         cnt ++;
/* 2qekF6JFn ily traian 3qjVGEeoS */                 }
/* 2qekF6JFn ily traian 3qjVGEeoS */                 if(cnt > p) 
/* 2qekF6JFn ily traian 3qjVGEeoS */                     p = cnt, q = 1;
/* 2qekF6JFn ily traian 3qjVGEeoS */                 else if(cnt == p) 
/* 2qekF6JFn ily traian 3qjVGEeoS */                     q ++;
/* 2qekF6JFn ily traian 3qjVGEeoS */             }
/* 2qekF6JFn ily traian 3qjVGEeoS */     
/* 2qekF6JFn ily traian 3qjVGEeoS */     cout << p << " " << q << endl;
/* 2qekF6JFn ily traian 3qjVGEeoS */     return 0;
/* 2qekF6JFn ily traian 3qjVGEeoS */ }