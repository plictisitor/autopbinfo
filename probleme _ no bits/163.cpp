/* XxGTQL9nx ily traian 67l2fiQTM */ #include <algorithm>
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
/* XxGTQL9nx ily traian 67l2fiQTM */ using namespace std;
/* XxGTQL9nx ily traian 67l2fiQTM */ 
/* XxGTQL9nx ily traian 67l2fiQTM */ int main()
/* XxGTQL9nx ily traian 67l2fiQTM */ {
/* XxGTQL9nx ily traian 67l2fiQTM */     int n;
/* XxGTQL9nx ily traian 67l2fiQTM */     cin >> n;
/* XxGTQL9nx ily traian 67l2fiQTM */     int a[1001];
/* XxGTQL9nx ily traian 67l2fiQTM */     for(int i = 1; i <= n; ++i)
/* XxGTQL9nx ily traian 67l2fiQTM */         cin >> a[i];
/* XxGTQL9nx ily traian 67l2fiQTM */ 
/* XxGTQL9nx ily traian 67l2fiQTM */     for(int i = 1; i <= n; ++i){
/* XxGTQL9nx ily traian 67l2fiQTM */         int ca = a[i];
/* XxGTQL9nx ily traian 67l2fiQTM */         int d = 2, cnt = 1;
/* XxGTQL9nx ily traian 67l2fiQTM */         while(ca > 1){
/* XxGTQL9nx ily traian 67l2fiQTM */             int p = 0;
/* XxGTQL9nx ily traian 67l2fiQTM */             while(ca % d == 0)
/* XxGTQL9nx ily traian 67l2fiQTM */                 ca /= d, p++;
/* XxGTQL9nx ily traian 67l2fiQTM */             cnt *= (p + 1);
/* XxGTQL9nx ily traian 67l2fiQTM */             d++;
/* XxGTQL9nx ily traian 67l2fiQTM */             if(d * d > ca)
/* XxGTQL9nx ily traian 67l2fiQTM */                 d = ca;
/* XxGTQL9nx ily traian 67l2fiQTM */         }
/* XxGTQL9nx ily traian 67l2fiQTM */         if(cnt == 2){
/* XxGTQL9nx ily traian 67l2fiQTM */             for(int j = i + 1; j <= n; ++j)
/* XxGTQL9nx ily traian 67l2fiQTM */                 a[j-1] = a[j];
/* XxGTQL9nx ily traian 67l2fiQTM */             n--;
/* XxGTQL9nx ily traian 67l2fiQTM */             i--;
/* XxGTQL9nx ily traian 67l2fiQTM */         }
/* XxGTQL9nx ily traian 67l2fiQTM */     }
/* XxGTQL9nx ily traian 67l2fiQTM */ 
/* XxGTQL9nx ily traian 67l2fiQTM */     for(int i = 1; i <= n; ++i)
/* XxGTQL9nx ily traian 67l2fiQTM */         cout << a[i] << " ";
/* XxGTQL9nx ily traian 67l2fiQTM */ 
/* XxGTQL9nx ily traian 67l2fiQTM */     return 0;
/* XxGTQL9nx ily traian 67l2fiQTM */ }