/* B2RCE4W8M ily traian MzdtOZg1u */ #include <algorithm>
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
/* B2RCE4W8M ily traian MzdtOZg1u */ using namespace std;
/* B2RCE4W8M ily traian MzdtOZg1u */ 
/* B2RCE4W8M ily traian MzdtOZg1u */ int main()
/* B2RCE4W8M ily traian MzdtOZg1u */ {
/* B2RCE4W8M ily traian MzdtOZg1u */     int n, a[10001]={0}, c=1 , m;
/* B2RCE4W8M ily traian MzdtOZg1u */     cin >> m >> n;
/* B2RCE4W8M ily traian MzdtOZg1u */     a[1]=1;
/* B2RCE4W8M ily traian MzdtOZg1u */     for(int i = 1; i <= n; i++)
/* B2RCE4W8M ily traian MzdtOZg1u */     {
/* B2RCE4W8M ily traian MzdtOZg1u */         int t = 0;
/* B2RCE4W8M ily traian MzdtOZg1u */         for(int j = 1; j <= c; j++)
/* B2RCE4W8M ily traian MzdtOZg1u */         {
/* B2RCE4W8M ily traian MzdtOZg1u */             int cif = a[j] * m + t;
/* B2RCE4W8M ily traian MzdtOZg1u */             a[j] = cif % 10;
/* B2RCE4W8M ily traian MzdtOZg1u */             t = cif / 10;
/* B2RCE4W8M ily traian MzdtOZg1u */         }
/* B2RCE4W8M ily traian MzdtOZg1u */         while(t)
/* B2RCE4W8M ily traian MzdtOZg1u */         {
/* B2RCE4W8M ily traian MzdtOZg1u */             a[++c] = t % 10;
/* B2RCE4W8M ily traian MzdtOZg1u */             t /=10;
/* B2RCE4W8M ily traian MzdtOZg1u */         }
/* B2RCE4W8M ily traian MzdtOZg1u */     }
/* B2RCE4W8M ily traian MzdtOZg1u */     for(int i = c ; i >= 1; i--)
/* B2RCE4W8M ily traian MzdtOZg1u */         cout << a[i];
/* B2RCE4W8M ily traian MzdtOZg1u */     return 0;
/* B2RCE4W8M ily traian MzdtOZg1u */ }