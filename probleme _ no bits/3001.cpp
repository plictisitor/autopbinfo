/* keyoWVWIr ily traian EAK3MA3bO */ #include <algorithm>
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
/* keyoWVWIr ily traian EAK3MA3bO */ using namespace std;
/* keyoWVWIr ily traian EAK3MA3bO */ 
/* keyoWVWIr ily traian EAK3MA3bO */ int main()
/* keyoWVWIr ily traian EAK3MA3bO */ {
/* keyoWVWIr ily traian EAK3MA3bO */     int n;
/* keyoWVWIr ily traian EAK3MA3bO */     cin >> n;
/* keyoWVWIr ily traian EAK3MA3bO */     unsigned long long x , r;
/* keyoWVWIr ily traian EAK3MA3bO */     int cnt = 0;
/* keyoWVWIr ily traian EAK3MA3bO */     for(int i = 1 ; i <= n ; ++i)
/* keyoWVWIr ily traian EAK3MA3bO */     {
/* keyoWVWIr ily traian EAK3MA3bO */         cin >> x >> r;
/* keyoWVWIr ily traian EAK3MA3bO */         if(x * (x + 1) * (x + 2) * (x + 3) + 1 == r * r)
/* keyoWVWIr ily traian EAK3MA3bO */             cnt++;
/* keyoWVWIr ily traian EAK3MA3bO */     }
/* keyoWVWIr ily traian EAK3MA3bO */     cout << cnt;
/* keyoWVWIr ily traian EAK3MA3bO */     return 0;
/* keyoWVWIr ily traian EAK3MA3bO */ }