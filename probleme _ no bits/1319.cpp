/* 76Usp8Z4k ily traian Zqsinj4wv */ #include <algorithm>
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
/* 76Usp8Z4k ily traian Zqsinj4wv */ using namespace std;
/* 76Usp8Z4k ily traian Zqsinj4wv */ 
/* 76Usp8Z4k ily traian Zqsinj4wv */ int main()
/* 76Usp8Z4k ily traian Zqsinj4wv */ {
/* 76Usp8Z4k ily traian Zqsinj4wv */     int n;
/* 76Usp8Z4k ily traian Zqsinj4wv */     cin >> n;
/* 76Usp8Z4k ily traian Zqsinj4wv */     int d = 2;
/* 76Usp8Z4k ily traian Zqsinj4wv */     while(n > 1){
/* 76Usp8Z4k ily traian Zqsinj4wv */         int p = 0;
/* 76Usp8Z4k ily traian Zqsinj4wv */         while(n % d == 0)
/* 76Usp8Z4k ily traian Zqsinj4wv */             n /= d, p++, cout << d << ' ';
/* 76Usp8Z4k ily traian Zqsinj4wv */         d++;
/* 76Usp8Z4k ily traian Zqsinj4wv */         if(d * d > n)
/* 76Usp8Z4k ily traian Zqsinj4wv */             d = n;
/* 76Usp8Z4k ily traian Zqsinj4wv */     }
/* 76Usp8Z4k ily traian Zqsinj4wv */     return 0;
/* 76Usp8Z4k ily traian Zqsinj4wv */ }