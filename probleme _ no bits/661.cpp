/* MJqZLBd4W ily traian WnBw4m4df */ #include <algorithm>
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
/* MJqZLBd4W ily traian WnBw4m4df */ 
/* MJqZLBd4W ily traian WnBw4m4df */ using namespace std;
/* MJqZLBd4W ily traian WnBw4m4df */ 
/* MJqZLBd4W ily traian WnBw4m4df */ int main()
/* MJqZLBd4W ily traian WnBw4m4df */ {
/* MJqZLBd4W ily traian WnBw4m4df */     int n, cnt = 0, a, b;
/* MJqZLBd4W ily traian WnBw4m4df */     int lat[1001];
/* MJqZLBd4W ily traian WnBw4m4df */     cin >>n;
/* MJqZLBd4W ily traian WnBw4m4df */     for (int i =1; i<=n; i++)
/* MJqZLBd4W ily traian WnBw4m4df */     {
/* MJqZLBd4W ily traian WnBw4m4df */         cin >> lat[i];
/* MJqZLBd4W ily traian WnBw4m4df */     }
/* MJqZLBd4W ily traian WnBw4m4df */     sort(lat + 1 , lat + n + 1);
/* MJqZLBd4W ily traian WnBw4m4df */     for (int i = 1 ; i <= n - 2 ; i++)
/* MJqZLBd4W ily traian WnBw4m4df */     {
/* MJqZLBd4W ily traian WnBw4m4df */         for (int j  = i + 1 ; j <= n - 1 ; j++)
/* MJqZLBd4W ily traian WnBw4m4df */         {
/* MJqZLBd4W ily traian WnBw4m4df */             a = lat[i];
/* MJqZLBd4W ily traian WnBw4m4df */             b = lat[j];
/* MJqZLBd4W ily traian WnBw4m4df */             int dr = n, st = j + 1, mij;
/* MJqZLBd4W ily traian WnBw4m4df */             while (dr >= st)
/* MJqZLBd4W ily traian WnBw4m4df */             {
/* MJqZLBd4W ily traian WnBw4m4df */                 mij = (dr + st)/2;
/* MJqZLBd4W ily traian WnBw4m4df */                 if (lat[mij] < a + b )
/* MJqZLBd4W ily traian WnBw4m4df */                     st = mij + 1;
/* MJqZLBd4W ily traian WnBw4m4df */                 else 
/* MJqZLBd4W ily traian WnBw4m4df */                     dr = mij - 1;
/* MJqZLBd4W ily traian WnBw4m4df */             }
/* MJqZLBd4W ily traian WnBw4m4df */             cnt += dr - j;
/* MJqZLBd4W ily traian WnBw4m4df */         }
/* MJqZLBd4W ily traian WnBw4m4df */     }
/* MJqZLBd4W ily traian WnBw4m4df */     cout << cnt;
/* MJqZLBd4W ily traian WnBw4m4df */     return 0;
/* MJqZLBd4W ily traian WnBw4m4df */ }