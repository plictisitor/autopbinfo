/* KZZrllvVU ily traian vo75lhReG */ #include <algorithm>
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
/* KZZrllvVU ily traian vo75lhReG */ using namespace std;
/* KZZrllvVU ily traian vo75lhReG */ 
/* KZZrllvVU ily traian vo75lhReG */ ifstream cin("soarece.in");
/* KZZrllvVU ily traian vo75lhReG */ ofstream cout("soarece.out");
/* KZZrllvVU ily traian vo75lhReG */ 
/* KZZrllvVU ily traian vo75lhReG */ int n , m , is , js , ib , jb , a[11][11] , cnt , b[11][11];
/* KZZrllvVU ily traian vo75lhReG */ const int di[] = {0 ,  0 , 1 , -1};
/* KZZrllvVU ily traian vo75lhReG */ const int dj[] = {1 , -1 , 0 ,  0};
/* KZZrllvVU ily traian vo75lhReG */ 
/* KZZrllvVU ily traian vo75lhReG */ int inside(int i , int j)
/* KZZrllvVU ily traian vo75lhReG */ {
/* KZZrllvVU ily traian vo75lhReG */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* KZZrllvVU ily traian vo75lhReG */ }
/* KZZrllvVU ily traian vo75lhReG */ 
/* KZZrllvVU ily traian vo75lhReG */ void back(int i , int j , int pas)
/* KZZrllvVU ily traian vo75lhReG */ {
/* KZZrllvVU ily traian vo75lhReG */     for(int d = 0 ; d < 4 ; d++)
/* KZZrllvVU ily traian vo75lhReG */     {
/* KZZrllvVU ily traian vo75lhReG */         int inou = i + di[d];
/* KZZrllvVU ily traian vo75lhReG */         int jnou = j + dj[d];
/* KZZrllvVU ily traian vo75lhReG */         if(inside(inou , jnou) && a[inou][jnou] == 0)
/* KZZrllvVU ily traian vo75lhReG */         {
/* KZZrllvVU ily traian vo75lhReG */             a[inou][jnou] = pas;
/* KZZrllvVU ily traian vo75lhReG */             if(inou == ib && jnou == jb) cnt++;
/* KZZrllvVU ily traian vo75lhReG */             else back(inou , jnou , pas + 1);
/* KZZrllvVU ily traian vo75lhReG */             a[inou][jnou] = 0;
/* KZZrllvVU ily traian vo75lhReG */         }
/* KZZrllvVU ily traian vo75lhReG */     }
/* KZZrllvVU ily traian vo75lhReG */ }
/* KZZrllvVU ily traian vo75lhReG */ int main()
/* KZZrllvVU ily traian vo75lhReG */ {
/* KZZrllvVU ily traian vo75lhReG */     cin >> n >> m;
/* KZZrllvVU ily traian vo75lhReG */     for(int i = 1 ; i <= n ; ++i)
/* KZZrllvVU ily traian vo75lhReG */         for(int j = 1 ; j <= m ; ++j)
/* KZZrllvVU ily traian vo75lhReG */         cin >> a[i][j], a[i][j] = -a[i][j];
/* KZZrllvVU ily traian vo75lhReG */     cin >> is >> js >> ib >> jb;
/* KZZrllvVU ily traian vo75lhReG */     a[is][js] = 1;
/* KZZrllvVU ily traian vo75lhReG */     back(is, js, 2);
/* KZZrllvVU ily traian vo75lhReG */     cout << cnt;
/* KZZrllvVU ily traian vo75lhReG */     return 0;
/* KZZrllvVU ily traian vo75lhReG */ }