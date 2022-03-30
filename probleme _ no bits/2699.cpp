/* f712D46SJ ily traian 2AHFKsePG */ #include <algorithm>
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
/* f712D46SJ ily traian 2AHFKsePG */ using namespace std;
/* f712D46SJ ily traian 2AHFKsePG */ 
/* f712D46SJ ily traian 2AHFKsePG */ int main()
/* f712D46SJ ily traian 2AHFKsePG */ {
/* f712D46SJ ily traian 2AHFKsePG */     int n;
/* f712D46SJ ily traian 2AHFKsePG */     long long int p;
/* f712D46SJ ily traian 2AHFKsePG */     cin >> n >> p;
/* f712D46SJ ily traian 2AHFKsePG */     for(long long int i = 1 ; i <= p ; i *= n)
/* f712D46SJ ily traian 2AHFKsePG */         cout << i << ' ';
/* f712D46SJ ily traian 2AHFKsePG */     return 0;
/* f712D46SJ ily traian 2AHFKsePG */ }