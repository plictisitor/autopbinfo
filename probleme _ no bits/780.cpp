/* FGjjmRRCi ily traian b2AvFy7gH */ #include <algorithm>
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
/* FGjjmRRCi ily traian b2AvFy7gH */ 
/* FGjjmRRCi ily traian b2AvFy7gH */ using namespace std;
/* FGjjmRRCi ily traian b2AvFy7gH */ int cmmdc(int a,int b)
/* FGjjmRRCi ily traian b2AvFy7gH */ {
/* FGjjmRRCi ily traian b2AvFy7gH */     int r , d;
/* FGjjmRRCi ily traian b2AvFy7gH */     while(b!=0)
/* FGjjmRRCi ily traian b2AvFy7gH */     {
/* FGjjmRRCi ily traian b2AvFy7gH */         r = a % b;
/* FGjjmRRCi ily traian b2AvFy7gH */         a = b;
/* FGjjmRRCi ily traian b2AvFy7gH */         b =r;
/* FGjjmRRCi ily traian b2AvFy7gH */     }
/* FGjjmRRCi ily traian b2AvFy7gH */     d = a;
/* FGjjmRRCi ily traian b2AvFy7gH */     return d;
/* FGjjmRRCi ily traian b2AvFy7gH */ }
/* FGjjmRRCi ily traian b2AvFy7gH */ int main()
/* FGjjmRRCi ily traian b2AvFy7gH */ {
/* FGjjmRRCi ily traian b2AvFy7gH */     int n , m , a[101][101] , s = 0 , smax = 0 , d = 0;
/* FGjjmRRCi ily traian b2AvFy7gH */     cin >> n ;
/* FGjjmRRCi ily traian b2AvFy7gH */     for(int i = 0 ; i < n; ++i)
/* FGjjmRRCi ily traian b2AvFy7gH */         for(int j = 0 ; j < n ; ++j)
/* FGjjmRRCi ily traian b2AvFy7gH */             {
/* FGjjmRRCi ily traian b2AvFy7gH */                 cin >> a[i][j];
/* FGjjmRRCi ily traian b2AvFy7gH */                 smax += a[i][j];
/* FGjjmRRCi ily traian b2AvFy7gH */                 if(i==j) d += a[i][j];
/* FGjjmRRCi ily traian b2AvFy7gH */             }
/* FGjjmRRCi ily traian b2AvFy7gH */     for(int i = 0 ; i < n; ++i)
/* FGjjmRRCi ily traian b2AvFy7gH */         for(int j = i+1 ; j < n ; ++j)
/* FGjjmRRCi ily traian b2AvFy7gH */             s += a[i][j];
/* FGjjmRRCi ily traian b2AvFy7gH */     cout << cmmdc(s,smax-s-d);
/* FGjjmRRCi ily traian b2AvFy7gH */     return 0;
/* FGjjmRRCi ily traian b2AvFy7gH */ }