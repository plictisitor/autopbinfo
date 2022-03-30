/* G1qChhoX5 ily traian MxsMmWFEM */ #include <algorithm>
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
/* G1qChhoX5 ily traian MxsMmWFEM */ using namespace std;
/* G1qChhoX5 ily traian MxsMmWFEM */ ifstream cin("produsxxl.in");
/* G1qChhoX5 ily traian MxsMmWFEM */ ofstream cout("produsxxl.out");
/* G1qChhoX5 ily traian MxsMmWFEM */ 
/* G1qChhoX5 ily traian MxsMmWFEM */ int n , m , cnt , a[105] , b[105] , prod[205];
/* G1qChhoX5 ily traian MxsMmWFEM */ 
/* G1qChhoX5 ily traian MxsMmWFEM */ void citire(int a[] , int n)
/* G1qChhoX5 ily traian MxsMmWFEM */ {
/* G1qChhoX5 ily traian MxsMmWFEM */     for(int i = n ; i >= 1 ; i--)
/* G1qChhoX5 ily traian MxsMmWFEM */         cin >> a[i];
/* G1qChhoX5 ily traian MxsMmWFEM */ }
/* G1qChhoX5 ily traian MxsMmWFEM */ void afisare(int a[] , int n)
/* G1qChhoX5 ily traian MxsMmWFEM */ {
/* G1qChhoX5 ily traian MxsMmWFEM */     for(int i = n ; i >= 1 ; i--)
/* G1qChhoX5 ily traian MxsMmWFEM */         cout << a[i];
/* G1qChhoX5 ily traian MxsMmWFEM */ }
/* G1qChhoX5 ily traian MxsMmWFEM */ void inmultire_2nr_mari(int a[] , int b[])
/* G1qChhoX5 ily traian MxsMmWFEM */ {
/* G1qChhoX5 ily traian MxsMmWFEM */     for(int i = 1 ; i <= n ; i++)
/* G1qChhoX5 ily traian MxsMmWFEM */         for(int j = 1 ; j <= m ; j++)
/* G1qChhoX5 ily traian MxsMmWFEM */             prod[i + j - 1] += a[i] * b[j];
/* G1qChhoX5 ily traian MxsMmWFEM */     cnt = n + m - 1;
/* G1qChhoX5 ily traian MxsMmWFEM */     int r = 0;
/* G1qChhoX5 ily traian MxsMmWFEM */     for(int i = 1 ; i <= cnt ; i++)
/* G1qChhoX5 ily traian MxsMmWFEM */     {
/* G1qChhoX5 ily traian MxsMmWFEM */         r += prod[i];
/* G1qChhoX5 ily traian MxsMmWFEM */         prod[i] = r % 10;
/* G1qChhoX5 ily traian MxsMmWFEM */         r /= 10;
/* G1qChhoX5 ily traian MxsMmWFEM */     }
/* G1qChhoX5 ily traian MxsMmWFEM */     while(r)
/* G1qChhoX5 ily traian MxsMmWFEM */     {
/* G1qChhoX5 ily traian MxsMmWFEM */         prod[++cnt] = r;
/* G1qChhoX5 ily traian MxsMmWFEM */         r /= 10;
/* G1qChhoX5 ily traian MxsMmWFEM */     }
/* G1qChhoX5 ily traian MxsMmWFEM */ }
/* G1qChhoX5 ily traian MxsMmWFEM */ 
/* G1qChhoX5 ily traian MxsMmWFEM */ int main()
/* G1qChhoX5 ily traian MxsMmWFEM */ {
/* G1qChhoX5 ily traian MxsMmWFEM */     cin >> n;
/* G1qChhoX5 ily traian MxsMmWFEM */     citire(a , n);
/* G1qChhoX5 ily traian MxsMmWFEM */     cin >> m;
/* G1qChhoX5 ily traian MxsMmWFEM */     citire(b , m);
/* G1qChhoX5 ily traian MxsMmWFEM */     inmultire_2nr_mari(a , b);
/* G1qChhoX5 ily traian MxsMmWFEM */     afisare(prod , cnt);
/* G1qChhoX5 ily traian MxsMmWFEM */     return 0;
/* G1qChhoX5 ily traian MxsMmWFEM */ }