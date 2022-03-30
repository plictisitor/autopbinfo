/* yAds3909L ily traian ccesjqzQX */ #include <algorithm>
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
/* yAds3909L ily traian ccesjqzQX */ 
/* yAds3909L ily traian ccesjqzQX */ int main() {
/* yAds3909L ily traian ccesjqzQX */  long long int n, tmp = -1, ct = 0;
/* yAds3909L ily traian ccesjqzQX */  while (tmp != 0) {
/* yAds3909L ily traian ccesjqzQX */   std::cin >> tmp;
/* yAds3909L ily traian ccesjqzQX */   if (abs(tmp) % 2 == 0)
/* yAds3909L ily traian ccesjqzQX */    ct++;
/* yAds3909L ily traian ccesjqzQX */  }
/* yAds3909L ily traian ccesjqzQX */  if (ct == 1)
/* yAds3909L ily traian ccesjqzQX */   std::cout << "NU EXISTA";
/* yAds3909L ily traian ccesjqzQX */  else
/* yAds3909L ily traian ccesjqzQX */   std::cout << ct - 1;
/* yAds3909L ily traian ccesjqzQX */  return 0;
/* yAds3909L ily traian ccesjqzQX */ 
/* yAds3909L ily traian ccesjqzQX */ }