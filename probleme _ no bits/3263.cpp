/* hoDcortFi ily traian LTQ2HrWRO */ #include <algorithm>
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
/* hoDcortFi ily traian LTQ2HrWRO */ using namespace std;
/* hoDcortFi ily traian LTQ2HrWRO */ 
/* hoDcortFi ily traian LTQ2HrWRO */ ifstream cin("summax_xi.in");
/* hoDcortFi ily traian LTQ2HrWRO */ ofstream cout("summax_xi.out");
/* hoDcortFi ily traian LTQ2HrWRO */ 
/* hoDcortFi ily traian LTQ2HrWRO */ int a[101][101], n;
/* hoDcortFi ily traian LTQ2HrWRO */ long long int sum;
/* hoDcortFi ily traian LTQ2HrWRO */ 
/* hoDcortFi ily traian LTQ2HrWRO */ int main()
/* hoDcortFi ily traian LTQ2HrWRO */ {
/* hoDcortFi ily traian LTQ2HrWRO */     cin >> n;
/* hoDcortFi ily traian LTQ2HrWRO */     for(int i = 1; i <= n; ++i){
/* hoDcortFi ily traian LTQ2HrWRO */         int max = -100000000;
/* hoDcortFi ily traian LTQ2HrWRO */         for(int j = 1; j <= n; ++j){
/* hoDcortFi ily traian LTQ2HrWRO */             cin >> a[i][j];
/* hoDcortFi ily traian LTQ2HrWRO */             if(a[i][j] > max)
/* hoDcortFi ily traian LTQ2HrWRO */                 max = a[i][j];
/* hoDcortFi ily traian LTQ2HrWRO */         }
/* hoDcortFi ily traian LTQ2HrWRO */         sum += max;
/* hoDcortFi ily traian LTQ2HrWRO */     }
/* hoDcortFi ily traian LTQ2HrWRO */     cout << sum;
/* hoDcortFi ily traian LTQ2HrWRO */     return 0;
/* hoDcortFi ily traian LTQ2HrWRO */ }