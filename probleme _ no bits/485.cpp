/* R1InPzJWt ily traian 4occijRQo */ #include <algorithm>
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
/* R1InPzJWt ily traian 4occijRQo */ using namespace std;
/* R1InPzJWt ily traian 4occijRQo */ int v[101];
/* R1InPzJWt ily traian 4occijRQo */ int main()
/* R1InPzJWt ily traian 4occijRQo */ {
/* R1InPzJWt ily traian 4occijRQo */     int n , x , max = 0 , rez;
/* R1InPzJWt ily traian 4occijRQo */     cin >> n;
/* R1InPzJWt ily traian 4occijRQo */     for(int i = 1 ; i <= n ; ++i)
/* R1InPzJWt ily traian 4occijRQo */     {
/* R1InPzJWt ily traian 4occijRQo */         int p = 1;
/* R1InPzJWt ily traian 4occijRQo */         for(int j = 1 ; j < n ; ++j)
/* R1InPzJWt ily traian 4occijRQo */         {
/* R1InPzJWt ily traian 4occijRQo */             if(i == j)p++;
/* R1InPzJWt ily traian 4occijRQo */             cin >> x;
/* R1InPzJWt ily traian 4occijRQo */             v[p]+=x;
/* R1InPzJWt ily traian 4occijRQo */             p++;
/* R1InPzJWt ily traian 4occijRQo */         }
/* R1InPzJWt ily traian 4occijRQo */     }
/* R1InPzJWt ily traian 4occijRQo */     for(int i = 1 ; i <= n ; ++i)
/* R1InPzJWt ily traian 4occijRQo */         if(v[i]>max)
/* R1InPzJWt ily traian 4occijRQo */         {
/* R1InPzJWt ily traian 4occijRQo */             max=v[i];
/* R1InPzJWt ily traian 4occijRQo */             rez = i;
/* R1InPzJWt ily traian 4occijRQo */         }
/* R1InPzJWt ily traian 4occijRQo */     cout << rez;
/* R1InPzJWt ily traian 4occijRQo */     return 0;
/* R1InPzJWt ily traian 4occijRQo */ }