/* 9DIhK5U94 ily traian 8us9VwMVs */ #include <algorithm>
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
/* 9DIhK5U94 ily traian 8us9VwMVs */ using namespace std;
/* 9DIhK5U94 ily traian 8us9VwMVs */ 
/* 9DIhK5U94 ily traian 8us9VwMVs */ ifstream cin("hercule.in");
/* 9DIhK5U94 ily traian 8us9VwMVs */ ofstream cout("hercule.out");
/* 9DIhK5U94 ily traian 8us9VwMVs */ 
/* 9DIhK5U94 ily traian 8us9VwMVs */ int n , m , a[11][11] , cnt , b[11][11];
/* 9DIhK5U94 ily traian 8us9VwMVs */ 
/* 9DIhK5U94 ily traian 8us9VwMVs */ const int di[] = {0 ,  0 , 1 , -1};
/* 9DIhK5U94 ily traian 8us9VwMVs */ const int dj[] = {1 , -1 , 0 ,  0};
/* 9DIhK5U94 ily traian 8us9VwMVs */ 
/* 9DIhK5U94 ily traian 8us9VwMVs */ int inside(int i , int j)
/* 9DIhK5U94 ily traian 8us9VwMVs */ {
/* 9DIhK5U94 ily traian 8us9VwMVs */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* 9DIhK5U94 ily traian 8us9VwMVs */ }
/* 9DIhK5U94 ily traian 8us9VwMVs */ 
/* 9DIhK5U94 ily traian 8us9VwMVs */ void back(int i , int j , int pas)
/* 9DIhK5U94 ily traian 8us9VwMVs */ {
/* 9DIhK5U94 ily traian 8us9VwMVs */     for(int d = 0 ; d < 4 ; d++)
/* 9DIhK5U94 ily traian 8us9VwMVs */     {
/* 9DIhK5U94 ily traian 8us9VwMVs */         int inou = i + di[d];
/* 9DIhK5U94 ily traian 8us9VwMVs */         int jnou = j + dj[d];
/* 9DIhK5U94 ily traian 8us9VwMVs */         if(inside(inou , jnou) && b[inou][jnou] == 0 && a[inou][jnou] >= pas)
/* 9DIhK5U94 ily traian 8us9VwMVs */         {
/* 9DIhK5U94 ily traian 8us9VwMVs */             b[inou][jnou] = pas;
/* 9DIhK5U94 ily traian 8us9VwMVs */             if(inou == n && jnou == m) cnt++;
/* 9DIhK5U94 ily traian 8us9VwMVs */             else back(inou , jnou , pas + 1);
/* 9DIhK5U94 ily traian 8us9VwMVs */             b[inou][jnou] = 0;
/* 9DIhK5U94 ily traian 8us9VwMVs */         }
/* 9DIhK5U94 ily traian 8us9VwMVs */     }
/* 9DIhK5U94 ily traian 8us9VwMVs */ }
/* 9DIhK5U94 ily traian 8us9VwMVs */ int main()
/* 9DIhK5U94 ily traian 8us9VwMVs */ {
/* 9DIhK5U94 ily traian 8us9VwMVs */     cin >> n >> m;
/* 9DIhK5U94 ily traian 8us9VwMVs */     for(int i = 1 ; i <= n ; ++i)
/* 9DIhK5U94 ily traian 8us9VwMVs */         for(int j = 1 ; j <= m ; ++j)
/* 9DIhK5U94 ily traian 8us9VwMVs */             cin >> a[i][j];
/* 9DIhK5U94 ily traian 8us9VwMVs */     b[1][1] = 1;
/* 9DIhK5U94 ily traian 8us9VwMVs */     back(1 , 1 , 2);
/* 9DIhK5U94 ily traian 8us9VwMVs */     cout << cnt;
/* 9DIhK5U94 ily traian 8us9VwMVs */     return 0;
/* 9DIhK5U94 ily traian 8us9VwMVs */ }