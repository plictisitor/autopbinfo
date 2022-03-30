/* eBTFcpQdh ily traian aHGhRisgm */ #include <algorithm>
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
/* eBTFcpQdh ily traian aHGhRisgm */ 
/* eBTFcpQdh ily traian aHGhRisgm */ using namespace std;
/* eBTFcpQdh ily traian aHGhRisgm */ 
/* eBTFcpQdh ily traian aHGhRisgm */ int main()
/* eBTFcpQdh ily traian aHGhRisgm */ {
/* eBTFcpQdh ily traian aHGhRisgm */     int n, cmax = 0;
/* eBTFcpQdh ily traian aHGhRisgm */     cin >> n;
/* eBTFcpQdh ily traian aHGhRisgm */     for(int i = 1; i <= n; ++i){
/* eBTFcpQdh ily traian aHGhRisgm */         int x;
/* eBTFcpQdh ily traian aHGhRisgm */         cin >> x;
/* eBTFcpQdh ily traian aHGhRisgm */         while(x){
/* eBTFcpQdh ily traian aHGhRisgm */             if((x % 10) > cmax)
/* eBTFcpQdh ily traian aHGhRisgm */                 cmax = x%10;
/* eBTFcpQdh ily traian aHGhRisgm */             x/=10;
/* eBTFcpQdh ily traian aHGhRisgm */         }
/* eBTFcpQdh ily traian aHGhRisgm */     }
/* eBTFcpQdh ily traian aHGhRisgm */     cout << cmax + 1;
/* eBTFcpQdh ily traian aHGhRisgm */     return 0;
/* eBTFcpQdh ily traian aHGhRisgm */ }