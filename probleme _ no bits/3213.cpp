/* mZZQqLVzl ily traian fQ26z2POr */ #include <algorithm>
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
/* mZZQqLVzl ily traian fQ26z2POr */ using namespace std;
/* mZZQqLVzl ily traian fQ26z2POr */ #define mod 777013
/* mZZQqLVzl ily traian fQ26z2POr */ int n , s[100001];
/* mZZQqLVzl ily traian fQ26z2POr */ 
/* mZZQqLVzl ily traian fQ26z2POr */ 
/* mZZQqLVzl ily traian fQ26z2POr */ int main()
/* mZZQqLVzl ily traian fQ26z2POr */ {
/* mZZQqLVzl ily traian fQ26z2POr */     cin >> n;
/* mZZQqLVzl ily traian fQ26z2POr */     s[1] = 1 , s[2] = 2;
/* mZZQqLVzl ily traian fQ26z2POr */     for(int i = 2 ; i <= n ; i++)
/* mZZQqLVzl ily traian fQ26z2POr */         s[i] = ((s[i - 1] + s[i - 2]) + 1) % mod;
/* mZZQqLVzl ily traian fQ26z2POr */ 
/* mZZQqLVzl ily traian fQ26z2POr */     cout << s[n];
/* mZZQqLVzl ily traian fQ26z2POr */ 
/* mZZQqLVzl ily traian fQ26z2POr */ }