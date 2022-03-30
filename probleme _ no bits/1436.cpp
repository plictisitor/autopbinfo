/* l3xIWrSCr ily traian XyssX7n5z */ #include <algorithm>
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
/* l3xIWrSCr ily traian XyssX7n5z */ using namespace std;
/* l3xIWrSCr ily traian XyssX7n5z */ ifstream cin("distanta.in");
/* l3xIWrSCr ily traian XyssX7n5z */ ofstream cout("distanta.out");
/* l3xIWrSCr ily traian XyssX7n5z */ int main()
/* l3xIWrSCr ily traian XyssX7n5z */ {
/* l3xIWrSCr ily traian XyssX7n5z */     int x , f[1001]={0} , v[1001] , i = 0 , max = 0;
/* l3xIWrSCr ily traian XyssX7n5z */     while(cin >> x)
/* l3xIWrSCr ily traian XyssX7n5z */     {
/* l3xIWrSCr ily traian XyssX7n5z */         if(f[x]==1)
/* l3xIWrSCr ily traian XyssX7n5z */         {
/* l3xIWrSCr ily traian XyssX7n5z */             if(i - v[x] > max)
/* l3xIWrSCr ily traian XyssX7n5z */                 max=i-v[x];
/* l3xIWrSCr ily traian XyssX7n5z */         }
/* l3xIWrSCr ily traian XyssX7n5z */         else v[x]=i , f[x]++;
/* l3xIWrSCr ily traian XyssX7n5z */         i++;
/* l3xIWrSCr ily traian XyssX7n5z */     }
/* l3xIWrSCr ily traian XyssX7n5z */     cout << max;
/* l3xIWrSCr ily traian XyssX7n5z */     return 0;
/* l3xIWrSCr ily traian XyssX7n5z */ }