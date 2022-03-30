/* 33OegdY2U ily traian 2SxyQr68f */ #include <algorithm>
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
/* 33OegdY2U ily traian 2SxyQr68f */ using namespace std;
/* 33OegdY2U ily traian 2SxyQr68f */ 
/* 33OegdY2U ily traian 2SxyQr68f */ ifstream cin("gengraf.in");
/* 33OegdY2U ily traian 2SxyQr68f */ ofstream cout("gengraf.out");
/* 33OegdY2U ily traian 2SxyQr68f */ 
/* 33OegdY2U ily traian 2SxyQr68f */ int n , m , a[11][11] , x[101] , p;
/* 33OegdY2U ily traian 2SxyQr68f */ 
/* 33OegdY2U ily traian 2SxyQr68f */ void afisare()
/* 33OegdY2U ily traian 2SxyQr68f */ {
/* 33OegdY2U ily traian 2SxyQr68f */     int k = 1;
/* 33OegdY2U ily traian 2SxyQr68f */     for(int i = 1 ; i <= n ; i++)
/* 33OegdY2U ily traian 2SxyQr68f */         for(int j = i + 1 ; j <= n ; j++)
/* 33OegdY2U ily traian 2SxyQr68f */         {
/* 33OegdY2U ily traian 2SxyQr68f */             a[i][j] = a[j][i] = x[k];
/* 33OegdY2U ily traian 2SxyQr68f */             k++;
/* 33OegdY2U ily traian 2SxyQr68f */         }
/* 33OegdY2U ily traian 2SxyQr68f */ 
/* 33OegdY2U ily traian 2SxyQr68f */     for(int i = 1 ; i <= n ; i++)
/* 33OegdY2U ily traian 2SxyQr68f */     {
/* 33OegdY2U ily traian 2SxyQr68f */         for(int j = 1 ; j <= n ; j++)
/* 33OegdY2U ily traian 2SxyQr68f */             cout << a[i][j] << " ";
/* 33OegdY2U ily traian 2SxyQr68f */         cout << '\n';
/* 33OegdY2U ily traian 2SxyQr68f */     }
/* 33OegdY2U ily traian 2SxyQr68f */     cout << '\n';
/* 33OegdY2U ily traian 2SxyQr68f */ }
/* 33OegdY2U ily traian 2SxyQr68f */ 
/* 33OegdY2U ily traian 2SxyQr68f */ void back(int k)
/* 33OegdY2U ily traian 2SxyQr68f */ {
/* 33OegdY2U ily traian 2SxyQr68f */     for(int i = 0 ; i <= 1 ; i++)
/* 33OegdY2U ily traian 2SxyQr68f */     {
/* 33OegdY2U ily traian 2SxyQr68f */         x[k] = i;
/* 33OegdY2U ily traian 2SxyQr68f */         if(k == m) afisare();
/* 33OegdY2U ily traian 2SxyQr68f */         else back(k + 1);
/* 33OegdY2U ily traian 2SxyQr68f */     }
/* 33OegdY2U ily traian 2SxyQr68f */ }
/* 33OegdY2U ily traian 2SxyQr68f */ 
/* 33OegdY2U ily traian 2SxyQr68f */ int main()
/* 33OegdY2U ily traian 2SxyQr68f */ {
/* 33OegdY2U ily traian 2SxyQr68f */     cin >> n;
/* 33OegdY2U ily traian 2SxyQr68f */     m = n * (n - 1) / 2;
/* 33OegdY2U ily traian 2SxyQr68f */     p = 1 << m;
/* 33OegdY2U ily traian 2SxyQr68f */     cout << p << '\n';
/* 33OegdY2U ily traian 2SxyQr68f */     back(1);
/* 33OegdY2U ily traian 2SxyQr68f */     return 0;
/* 33OegdY2U ily traian 2SxyQr68f */ }