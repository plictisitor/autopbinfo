/* Lc5FEIR0X ily traian 2k1NMISAW */ #include <algorithm>
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
/* Lc5FEIR0X ily traian 2k1NMISAW */ using namespace std;
/* Lc5FEIR0X ily traian 2k1NMISAW */ 
/* Lc5FEIR0X ily traian 2k1NMISAW */ int n , a[101][101] , cnt;
/* Lc5FEIR0X ily traian 2k1NMISAW */ 
/* Lc5FEIR0X ily traian 2k1NMISAW */ void desen(int i , int j , int cnt)
/* Lc5FEIR0X ily traian 2k1NMISAW */ {
/* Lc5FEIR0X ily traian 2k1NMISAW */     i = 3 * (i - 1) + 1;
/* Lc5FEIR0X ily traian 2k1NMISAW */     j = 3 * (j - 1) + 1;
/* Lc5FEIR0X ily traian 2k1NMISAW */     a[i][j] = cnt;
/* Lc5FEIR0X ily traian 2k1NMISAW */     a[i + 2][j] = cnt;
/* Lc5FEIR0X ily traian 2k1NMISAW */     a[i][j + 2] = cnt;
/* Lc5FEIR0X ily traian 2k1NMISAW */     a[i + 1][j + 1] = cnt;
/* Lc5FEIR0X ily traian 2k1NMISAW */     a[i + 2][j + 2] = cnt;
/* Lc5FEIR0X ily traian 2k1NMISAW */ }
/* Lc5FEIR0X ily traian 2k1NMISAW */ 
/* Lc5FEIR0X ily traian 2k1NMISAW */ void afisare()
/* Lc5FEIR0X ily traian 2k1NMISAW */ {
/* Lc5FEIR0X ily traian 2k1NMISAW */     for(int i = 1 ; i <= 3 * n ; i++)
/* Lc5FEIR0X ily traian 2k1NMISAW */     {
/* Lc5FEIR0X ily traian 2k1NMISAW */         for(int j = 1 ; j <= 3 * n ; j++)
/* Lc5FEIR0X ily traian 2k1NMISAW */             cout << a[i][j] << " ";
/* Lc5FEIR0X ily traian 2k1NMISAW */         cout << '\n';
/* Lc5FEIR0X ily traian 2k1NMISAW */     }
/* Lc5FEIR0X ily traian 2k1NMISAW */ }
/* Lc5FEIR0X ily traian 2k1NMISAW */ 
/* Lc5FEIR0X ily traian 2k1NMISAW */ int main()
/* Lc5FEIR0X ily traian 2k1NMISAW */ {
/* Lc5FEIR0X ily traian 2k1NMISAW */     cin >> n;
/* Lc5FEIR0X ily traian 2k1NMISAW */     for(int i = 1 ; i <= n ; i++)
/* Lc5FEIR0X ily traian 2k1NMISAW */         for(int j = 1 ; j <= n ; j++)
/* Lc5FEIR0X ily traian 2k1NMISAW */             cnt++ , desen(i , j , cnt);
/* Lc5FEIR0X ily traian 2k1NMISAW */     afisare();
/* Lc5FEIR0X ily traian 2k1NMISAW */     return 0;
/* Lc5FEIR0X ily traian 2k1NMISAW */ }