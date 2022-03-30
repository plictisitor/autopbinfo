/* w8ohg2vBw ily traian 6gvMcOTbf */ #include <algorithm>
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
/* w8ohg2vBw ily traian 6gvMcOTbf */ 
/* w8ohg2vBw ily traian 6gvMcOTbf */ using namespace std;
/* w8ohg2vBw ily traian 6gvMcOTbf */ 
/* w8ohg2vBw ily traian 6gvMcOTbf */ int main()
/* w8ohg2vBw ily traian 6gvMcOTbf */ {
/* w8ohg2vBw ily traian 6gvMcOTbf */     int n;
/* w8ohg2vBw ily traian 6gvMcOTbf */     cin >> n;
/* w8ohg2vBw ily traian 6gvMcOTbf */     int cnt0 = 0, cnt1 = 0;
/* w8ohg2vBw ily traian 6gvMcOTbf */     while(n){
/* w8ohg2vBw ily traian 6gvMcOTbf */ 
/* w8ohg2vBw ily traian 6gvMcOTbf */         if(n % 2 == 0)
/* w8ohg2vBw ily traian 6gvMcOTbf */             cnt0++;
/* w8ohg2vBw ily traian 6gvMcOTbf */         else
/* w8ohg2vBw ily traian 6gvMcOTbf */             cnt1++;
/* w8ohg2vBw ily traian 6gvMcOTbf */ 
/* w8ohg2vBw ily traian 6gvMcOTbf */         n/=2;
/* w8ohg2vBw ily traian 6gvMcOTbf */     }
/* w8ohg2vBw ily traian 6gvMcOTbf */     cout << cnt0 << ' ' << cnt1;
/* w8ohg2vBw ily traian 6gvMcOTbf */     return 0;
/* w8ohg2vBw ily traian 6gvMcOTbf */ }