/* zMpIPsUiX ily traian Hb1wxGRHq */ #include <algorithm>
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
/* zMpIPsUiX ily traian Hb1wxGRHq */ 
/* zMpIPsUiX ily traian Hb1wxGRHq */ 
/* zMpIPsUiX ily traian Hb1wxGRHq */ using namespace std;
/* zMpIPsUiX ily traian Hb1wxGRHq */ 
/* zMpIPsUiX ily traian Hb1wxGRHq */ int main()
/* zMpIPsUiX ily traian Hb1wxGRHq */ {
/* zMpIPsUiX ily traian Hb1wxGRHq */     int n;
/* zMpIPsUiX ily traian Hb1wxGRHq */     cin >> n;
/* zMpIPsUiX ily traian Hb1wxGRHq */     long long int produs=1;
/* zMpIPsUiX ily traian Hb1wxGRHq */     int x;
/* zMpIPsUiX ily traian Hb1wxGRHq */     for(int i = 1 ; i <= n ; ++i)
/* zMpIPsUiX ily traian Hb1wxGRHq */     {
/* zMpIPsUiX ily traian Hb1wxGRHq */         cin >> x;
/* zMpIPsUiX ily traian Hb1wxGRHq */         produs*=x;    
/* zMpIPsUiX ily traian Hb1wxGRHq */     }
/* zMpIPsUiX ily traian Hb1wxGRHq */     double rap = (double)1/n;
/* zMpIPsUiX ily traian Hb1wxGRHq */     cout << fixed << setprecision(2) << pow( produs , rap );
/* zMpIPsUiX ily traian Hb1wxGRHq */     return 0;    
/* zMpIPsUiX ily traian Hb1wxGRHq */ }