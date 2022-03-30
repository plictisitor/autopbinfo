/* 3l2WNvTZo ily traian oc8WxJTFv */ #include <algorithm>
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
/* 3l2WNvTZo ily traian oc8WxJTFv */ 
/* 3l2WNvTZo ily traian oc8WxJTFv */ using namespace std;
/* 3l2WNvTZo ily traian oc8WxJTFv */ 
/* 3l2WNvTZo ily traian oc8WxJTFv */ int main()
/* 3l2WNvTZo ily traian oc8WxJTFv */ {
/* 3l2WNvTZo ily traian oc8WxJTFv */     int n;
/* 3l2WNvTZo ily traian oc8WxJTFv */     cin >> n;
/* 3l2WNvTZo ily traian oc8WxJTFv */     int cnt=0;
/* 3l2WNvTZo ily traian oc8WxJTFv */     int max=0;
/* 3l2WNvTZo ily traian oc8WxJTFv */     while (n)
/* 3l2WNvTZo ily traian oc8WxJTFv */     {
/* 3l2WNvTZo ily traian oc8WxJTFv */         if ((n%10)%2==1 && n%10>max)
/* 3l2WNvTZo ily traian oc8WxJTFv */         {
/* 3l2WNvTZo ily traian oc8WxJTFv */             max=n%10;
/* 3l2WNvTZo ily traian oc8WxJTFv */             cnt++;
/* 3l2WNvTZo ily traian oc8WxJTFv */         }
/* 3l2WNvTZo ily traian oc8WxJTFv */         n/=10;
/* 3l2WNvTZo ily traian oc8WxJTFv */     }
/* 3l2WNvTZo ily traian oc8WxJTFv */     if (cnt==0)
/* 3l2WNvTZo ily traian oc8WxJTFv */         cout << "nu exista";
/* 3l2WNvTZo ily traian oc8WxJTFv */     else
/* 3l2WNvTZo ily traian oc8WxJTFv */         cout << max;
/* 3l2WNvTZo ily traian oc8WxJTFv */     return 0;
/* 3l2WNvTZo ily traian oc8WxJTFv */ }