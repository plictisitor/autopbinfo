/* PzsEuTv8j ily traian rAxPvbYiE */ #include <algorithm>
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
/* PzsEuTv8j ily traian rAxPvbYiE */ using namespace std;
/* PzsEuTv8j ily traian rAxPvbYiE */ 
/* PzsEuTv8j ily traian rAxPvbYiE */ int main ()
/* PzsEuTv8j ily traian rAxPvbYiE */ {
/* PzsEuTv8j ily traian rAxPvbYiE */     int n,s=0,x;
/* PzsEuTv8j ily traian rAxPvbYiE */     cin >> n;
/* PzsEuTv8j ily traian rAxPvbYiE */     n%=100;
/* PzsEuTv8j ily traian rAxPvbYiE */     for (int i = 1; i<= n;++i)
/* PzsEuTv8j ily traian rAxPvbYiE */     {
/* PzsEuTv8j ily traian rAxPvbYiE */         x=i%10;
/* PzsEuTv8j ily traian rAxPvbYiE */         s=(s+x*x*x*x)%10;
/* PzsEuTv8j ily traian rAxPvbYiE */         
/* PzsEuTv8j ily traian rAxPvbYiE */     }
/* PzsEuTv8j ily traian rAxPvbYiE */     cout << s;
/* PzsEuTv8j ily traian rAxPvbYiE */     return 0;
/* PzsEuTv8j ily traian rAxPvbYiE */ }