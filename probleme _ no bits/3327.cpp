/* mOSKcnvn3 ily traian utQhhuYmu */ #include <algorithm>
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
/* mOSKcnvn3 ily traian utQhhuYmu */ 
/* mOSKcnvn3 ily traian utQhhuYmu */ using namespace std;
/* mOSKcnvn3 ily traian utQhhuYmu */ 
/* mOSKcnvn3 ily traian utQhhuYmu */ int n;
/* mOSKcnvn3 ily traian utQhhuYmu */ 
/* mOSKcnvn3 ily traian utQhhuYmu */ int main(){
/* mOSKcnvn3 ily traian utQhhuYmu */     cin >> n;
/* mOSKcnvn3 ily traian utQhhuYmu */     int k = sqrt(n);
/* mOSKcnvn3 ily traian utQhhuYmu */     if(k * k == n)
/* mOSKcnvn3 ily traian utQhhuYmu */         k--;
/* mOSKcnvn3 ily traian utQhhuYmu */     cout << n - k * k << endl;
/* mOSKcnvn3 ily traian utQhhuYmu */     int nr = k * k;
/* mOSKcnvn3 ily traian utQhhuYmu */     for(int i = 1; i <= k; ++i, cout << endl)
/* mOSKcnvn3 ily traian utQhhuYmu */         for(int j = 1; j <= k; ++j)
/* mOSKcnvn3 ily traian utQhhuYmu */             cout << nr << ' ', nr--;
/* mOSKcnvn3 ily traian utQhhuYmu */     return 0;
/* mOSKcnvn3 ily traian utQhhuYmu */ }