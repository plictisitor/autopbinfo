/* AgEtlO7Ek ily traian XnyHLvtpS */ #include <algorithm>
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
/* AgEtlO7Ek ily traian XnyHLvtpS */ using namespace std;
/* AgEtlO7Ek ily traian XnyHLvtpS */ 
/* AgEtlO7Ek ily traian XnyHLvtpS */ int main(){
/* AgEtlO7Ek ily traian XnyHLvtpS */     long long int a, b, ca, cb;
/* AgEtlO7Ek ily traian XnyHLvtpS */     cin >> a >> b;
/* AgEtlO7Ek ily traian XnyHLvtpS */     ca = a, cb = b;
/* AgEtlO7Ek ily traian XnyHLvtpS */     while(b > 1){
/* AgEtlO7Ek ily traian XnyHLvtpS */         int r = a % b;
/* AgEtlO7Ek ily traian XnyHLvtpS */         a = b;
/* AgEtlO7Ek ily traian XnyHLvtpS */         b = r;
/* AgEtlO7Ek ily traian XnyHLvtpS */     }
/* AgEtlO7Ek ily traian XnyHLvtpS */     cout << a << ' ' << 1LL * (ca / a * cb);
/* AgEtlO7Ek ily traian XnyHLvtpS */     return 0;
/* AgEtlO7Ek ily traian XnyHLvtpS */ }