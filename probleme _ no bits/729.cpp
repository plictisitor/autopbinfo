/* RVxUvWW2i ily traian dvgtKEpMq */ #include <algorithm>
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
/* RVxUvWW2i ily traian dvgtKEpMq */ 
/* RVxUvWW2i ily traian dvgtKEpMq */ using namespace std;
/* RVxUvWW2i ily traian dvgtKEpMq */ int main()
/* RVxUvWW2i ily traian dvgtKEpMq */ {
/* RVxUvWW2i ily traian dvgtKEpMq */     long long n , a[201][201], c = 0 , v[205];
/* RVxUvWW2i ily traian dvgtKEpMq */     cin >> n;
/* RVxUvWW2i ily traian dvgtKEpMq */     for(int i = 0 ; i < n ; i++)
/* RVxUvWW2i ily traian dvgtKEpMq */         for(int j = 0 ; j < n ; j++)
/* RVxUvWW2i ily traian dvgtKEpMq */         cin >> a[i][j];
/* RVxUvWW2i ily traian dvgtKEpMq */     for(int i = 0 ; i < n ; i++)
/* RVxUvWW2i ily traian dvgtKEpMq */         for(int j = 0 ; j < n ; j++)
/* RVxUvWW2i ily traian dvgtKEpMq */         {
/* RVxUvWW2i ily traian dvgtKEpMq */             if(i > j && i + j < n - 1)
/* RVxUvWW2i ily traian dvgtKEpMq */             {
/* RVxUvWW2i ily traian dvgtKEpMq */                 v[c] = a[i][j];
/* RVxUvWW2i ily traian dvgtKEpMq */                 c++;
/* RVxUvWW2i ily traian dvgtKEpMq */             }
/* RVxUvWW2i ily traian dvgtKEpMq */         }
/* RVxUvWW2i ily traian dvgtKEpMq */     sort(v , v+c);
/* RVxUvWW2i ily traian dvgtKEpMq */     for(int i = 0 ; i < c ; ++i)
/* RVxUvWW2i ily traian dvgtKEpMq */     {
/* RVxUvWW2i ily traian dvgtKEpMq */         if(v[i]!=v[i-1])
/* RVxUvWW2i ily traian dvgtKEpMq */         cout << v[i] <<" ";
/* RVxUvWW2i ily traian dvgtKEpMq */     }
/* RVxUvWW2i ily traian dvgtKEpMq */     return 0;
/* RVxUvWW2i ily traian dvgtKEpMq */ 
/* RVxUvWW2i ily traian dvgtKEpMq */ }