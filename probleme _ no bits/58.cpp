/* q6QbxTCTw ily traian CxsuGSQGy */ #include <algorithm>
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
/* q6QbxTCTw ily traian CxsuGSQGy */ using namespace std;
/* q6QbxTCTw ily traian CxsuGSQGy */ 
/* q6QbxTCTw ily traian CxsuGSQGy */ int main()
/* q6QbxTCTw ily traian CxsuGSQGy */ {
/* q6QbxTCTw ily traian CxsuGSQGy */     int a, b;
/* q6QbxTCTw ily traian CxsuGSQGy */     cin >> a >> b;
/* q6QbxTCTw ily traian CxsuGSQGy */     if(a == b && a == 0)
/* q6QbxTCTw ily traian CxsuGSQGy */         cout << -1;
/* q6QbxTCTw ily traian CxsuGSQGy */     else{
/* q6QbxTCTw ily traian CxsuGSQGy */ 
/* q6QbxTCTw ily traian CxsuGSQGy */         while(b){
/* q6QbxTCTw ily traian CxsuGSQGy */             int r = a % b;
/* q6QbxTCTw ily traian CxsuGSQGy */             a = b;
/* q6QbxTCTw ily traian CxsuGSQGy */             b = r;
/* q6QbxTCTw ily traian CxsuGSQGy */         }
/* q6QbxTCTw ily traian CxsuGSQGy */         cout << a;
/* q6QbxTCTw ily traian CxsuGSQGy */ 
/* q6QbxTCTw ily traian CxsuGSQGy */     }
/* q6QbxTCTw ily traian CxsuGSQGy */     return 0;
/* q6QbxTCTw ily traian CxsuGSQGy */ }