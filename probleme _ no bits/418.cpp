/* OgOI2uyP1 ily traian ITGvEkBMh */ #include <algorithm>
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
/* OgOI2uyP1 ily traian ITGvEkBMh */ using namespace std;
/* OgOI2uyP1 ily traian ITGvEkBMh */ 
/* OgOI2uyP1 ily traian ITGvEkBMh */ ifstream cin("subgraf.in");
/* OgOI2uyP1 ily traian ITGvEkBMh */ ofstream cout("subgraf.out");
/* OgOI2uyP1 ily traian ITGvEkBMh */ 
/* OgOI2uyP1 ily traian ITGvEkBMh */ int n , a[105][105] , x , y , cnt;
/* OgOI2uyP1 ily traian ITGvEkBMh */ 
/* OgOI2uyP1 ily traian ITGvEkBMh */ int prim(int n)
/* OgOI2uyP1 ily traian ITGvEkBMh */ {
/* OgOI2uyP1 ily traian ITGvEkBMh */     if(n < 2) return 0;
/* OgOI2uyP1 ily traian ITGvEkBMh */     if(n == 2)return 1;
/* OgOI2uyP1 ily traian ITGvEkBMh */     if(n % 2 == 0) return 0;
/* OgOI2uyP1 ily traian ITGvEkBMh */     for(int i = 3 ; i * i <= n ; i += 2)
/* OgOI2uyP1 ily traian ITGvEkBMh */         if(n % i == 0 ) return 0;
/* OgOI2uyP1 ily traian ITGvEkBMh */     return 1;
/* OgOI2uyP1 ily traian ITGvEkBMh */ }
/* OgOI2uyP1 ily traian ITGvEkBMh */ 
/* OgOI2uyP1 ily traian ITGvEkBMh */ int main()
/* OgOI2uyP1 ily traian ITGvEkBMh */ {
/* OgOI2uyP1 ily traian ITGvEkBMh */     cin >> n;
/* OgOI2uyP1 ily traian ITGvEkBMh */     while(cin >> x >> y)
/* OgOI2uyP1 ily traian ITGvEkBMh */         a[x][y] = a[y][x] = 1;
/* OgOI2uyP1 ily traian ITGvEkBMh */ 
/* OgOI2uyP1 ily traian ITGvEkBMh */     for(int i = 1 ; i <= n ; ++ i)
/* OgOI2uyP1 ily traian ITGvEkBMh */         if(prim(i))
/* OgOI2uyP1 ily traian ITGvEkBMh */             for(int j = 1 ; j <= n ; ++ j)
/* OgOI2uyP1 ily traian ITGvEkBMh */                 a[i][j] = a[j][i] = 0;
/* OgOI2uyP1 ily traian ITGvEkBMh */ 
/* OgOI2uyP1 ily traian ITGvEkBMh */     for(int i = 1 ; i <= n ; ++ i)
/* OgOI2uyP1 ily traian ITGvEkBMh */         for(int j = i + 1; j <= n; ++ j)
/* OgOI2uyP1 ily traian ITGvEkBMh */             if(a[i][j] == 1) cnt ++;
/* OgOI2uyP1 ily traian ITGvEkBMh */ 
/* OgOI2uyP1 ily traian ITGvEkBMh */     cout << cnt;
/* OgOI2uyP1 ily traian ITGvEkBMh */ }