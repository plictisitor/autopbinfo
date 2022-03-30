/* hLLFDeujI ily traian iLsX5Ml8B */ #include <algorithm>
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
/* hLLFDeujI ily traian iLsX5Ml8B */ using namespace std;
/* hLLFDeujI ily traian iLsX5Ml8B */ 
/* hLLFDeujI ily traian iLsX5Ml8B */ int n , a[301][301] , maxi , sp , b[301];
/* hLLFDeujI ily traian iLsX5Ml8B */ 
/* hLLFDeujI ily traian iLsX5Ml8B */ int main()
/* hLLFDeujI ily traian iLsX5Ml8B */ {
/* hLLFDeujI ily traian iLsX5Ml8B */     cin >> n;
/* hLLFDeujI ily traian iLsX5Ml8B */     for(int i = 1 ; i <= n ; i++)
/* hLLFDeujI ily traian iLsX5Ml8B */         for(int j = 1 ; j <= n ; j++)
/* hLLFDeujI ily traian iLsX5Ml8B */         {
/* hLLFDeujI ily traian iLsX5Ml8B */             cin >> a[i][j];
/* hLLFDeujI ily traian iLsX5Ml8B */             a[i][j] += a[i - 1][j];
/* hLLFDeujI ily traian iLsX5Ml8B */         }
/* hLLFDeujI ily traian iLsX5Ml8B */     maxi = -10000;
/* hLLFDeujI ily traian iLsX5Ml8B */     for(int i = 1 ; i <= n ; i++)
/* hLLFDeujI ily traian iLsX5Ml8B */         for(int j = i ; j <= n ; j++)
/* hLLFDeujI ily traian iLsX5Ml8B */         {
/* hLLFDeujI ily traian iLsX5Ml8B */             for(int k = 1 ; k <= n ; k++)
/* hLLFDeujI ily traian iLsX5Ml8B */                 b[k] = a[j][k] - a[i - 1][k];
/* hLLFDeujI ily traian iLsX5Ml8B */             int sp = 0;
/* hLLFDeujI ily traian iLsX5Ml8B */             for(int k = 1 ; k <= n ; k++)
/* hLLFDeujI ily traian iLsX5Ml8B */             {
/* hLLFDeujI ily traian iLsX5Ml8B */                 sp += b[k];
/* hLLFDeujI ily traian iLsX5Ml8B */                 if(sp > maxi) maxi = sp;
/* hLLFDeujI ily traian iLsX5Ml8B */                 if(sp < 0) sp = 0;
/* hLLFDeujI ily traian iLsX5Ml8B */             }
/* hLLFDeujI ily traian iLsX5Ml8B */         }
/* hLLFDeujI ily traian iLsX5Ml8B */     cout << maxi;
/* hLLFDeujI ily traian iLsX5Ml8B */     return 0;
/* hLLFDeujI ily traian iLsX5Ml8B */ }