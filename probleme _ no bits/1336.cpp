/* VBUzhWPyA ily traian giONzksFw */ #include <algorithm>
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
/* VBUzhWPyA ily traian giONzksFw */ using namespace std;
/* VBUzhWPyA ily traian giONzksFw */ 
/* VBUzhWPyA ily traian giONzksFw */ int main()
/* VBUzhWPyA ily traian giONzksFw */ {
/* VBUzhWPyA ily traian giONzksFw */     int n;
/* VBUzhWPyA ily traian giONzksFw */     cin >> n;
/* VBUzhWPyA ily traian giONzksFw */     long long int rez=0;
/* VBUzhWPyA ily traian giONzksFw */     for(int i = 0 ; i <= n ; ++i)
/* VBUzhWPyA ily traian giONzksFw */             rez+=i * (n - i + 1) + (n+i)*(n-i+1)/2;
/* VBUzhWPyA ily traian giONzksFw */     cout << rez;
/* VBUzhWPyA ily traian giONzksFw */     return 0;
/* VBUzhWPyA ily traian giONzksFw */ }