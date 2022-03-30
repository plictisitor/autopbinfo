/* klXjTkGpR ily traian XCbfcbG1Q */ #include <algorithm>
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
/* klXjTkGpR ily traian XCbfcbG1Q */ using namespace std;
/* klXjTkGpR ily traian XCbfcbG1Q */ 
/* klXjTkGpR ily traian XCbfcbG1Q */ ifstream cin("secvb.in");
/* klXjTkGpR ily traian XCbfcbG1Q */ ofstream cout("secvb.out");
/* klXjTkGpR ily traian XCbfcbG1Q */ 
/* klXjTkGpR ily traian XCbfcbG1Q */ int n, T, a[50001], B[50001];
/* klXjTkGpR ily traian XCbfcbG1Q */ 
/* klXjTkGpR ily traian XCbfcbG1Q */ int b(int n){
/* klXjTkGpR ily traian XCbfcbG1Q */     int cnt = 0;
/* klXjTkGpR ily traian XCbfcbG1Q */     while(n)
/* klXjTkGpR ily traian XCbfcbG1Q */         cnt += n % 2, n /= 2;
/* klXjTkGpR ily traian XCbfcbG1Q */     return cnt;
/* klXjTkGpR ily traian XCbfcbG1Q */ }
/* klXjTkGpR ily traian XCbfcbG1Q */ 
/* klXjTkGpR ily traian XCbfcbG1Q */ int main(){
/* klXjTkGpR ily traian XCbfcbG1Q */     cin >> n >> T;
/* klXjTkGpR ily traian XCbfcbG1Q */     for(int i = 1; i <= n; ++i) cin >> a[i];
/* klXjTkGpR ily traian XCbfcbG1Q */     for(int i = 1; i <= n; ++i) B[i] = b(a[i]);
/* klXjTkGpR ily traian XCbfcbG1Q */     int st = 1, sum = 0, cnt = 0;
/* klXjTkGpR ily traian XCbfcbG1Q */     for(int i = 1; i <= n; ++i){
/* klXjTkGpR ily traian XCbfcbG1Q */         sum += B[i];
/* klXjTkGpR ily traian XCbfcbG1Q */         if(sum >= T){;
/* klXjTkGpR ily traian XCbfcbG1Q */             while(sum > T)
/* klXjTkGpR ily traian XCbfcbG1Q */                 sum -= B[st], st++;
/* klXjTkGpR ily traian XCbfcbG1Q */             if(sum == T)
/* klXjTkGpR ily traian XCbfcbG1Q */                 cnt++;
/* klXjTkGpR ily traian XCbfcbG1Q */         }
/* klXjTkGpR ily traian XCbfcbG1Q */     }
/* klXjTkGpR ily traian XCbfcbG1Q */     cout << cnt;
/* klXjTkGpR ily traian XCbfcbG1Q */     return 0;
/* klXjTkGpR ily traian XCbfcbG1Q */ }