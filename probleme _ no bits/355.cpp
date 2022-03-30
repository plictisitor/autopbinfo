/* PtpRS53qD ily traian W7EKJDvpR */ #include <algorithm>
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
/* PtpRS53qD ily traian W7EKJDvpR */ 
/* PtpRS53qD ily traian W7EKJDvpR */ 
/* PtpRS53qD ily traian W7EKJDvpR */ 
/* PtpRS53qD ily traian W7EKJDvpR */ using namespace std;
/* PtpRS53qD ily traian W7EKJDvpR */ 
/* PtpRS53qD ily traian W7EKJDvpR */ int main() {
/* PtpRS53qD ily traian W7EKJDvpR */  int n;
/* PtpRS53qD ily traian W7EKJDvpR */  cin >> n;
/* PtpRS53qD ily traian W7EKJDvpR */ 
/* PtpRS53qD ily traian W7EKJDvpR */  int* arrayInfo = new int[n];
/* PtpRS53qD ily traian W7EKJDvpR */  int tmp;
/* PtpRS53qD ily traian W7EKJDvpR */  for (int i = 0; i < n; i++) {
/* PtpRS53qD ily traian W7EKJDvpR */   cin >> tmp;
/* PtpRS53qD ily traian W7EKJDvpR */   arrayInfo[i] = tmp;
/* PtpRS53qD ily traian W7EKJDvpR */  }
/* PtpRS53qD ily traian W7EKJDvpR */ 
/* PtpRS53qD ily traian W7EKJDvpR */    sort(arrayInfo, arrayInfo + n);
/* PtpRS53qD ily traian W7EKJDvpR */ 
/* PtpRS53qD ily traian W7EKJDvpR */  cout << arrayInfo[0];
/* PtpRS53qD ily traian W7EKJDvpR */ 
/* PtpRS53qD ily traian W7EKJDvpR */  delete[] arrayInfo;
/* PtpRS53qD ily traian W7EKJDvpR */  return 0;
/* PtpRS53qD ily traian W7EKJDvpR */ }