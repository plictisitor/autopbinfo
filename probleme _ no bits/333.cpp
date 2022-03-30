/* maQkgCo6p ily traian MPAJlr8sO */ #include <algorithm>
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
/* maQkgCo6p ily traian MPAJlr8sO */ 
/* maQkgCo6p ily traian MPAJlr8sO */ using namespace std;
/* maQkgCo6p ily traian MPAJlr8sO */ 
/* maQkgCo6p ily traian MPAJlr8sO */ int main()
/* maQkgCo6p ily traian MPAJlr8sO */ {
/* maQkgCo6p ily traian MPAJlr8sO */     float a,b,c;
/* maQkgCo6p ily traian MPAJlr8sO */     cin >> a >> b >> c;
/* maQkgCo6p ily traian MPAJlr8sO */     if (a <= 0 || b <= 0 || c <= 0 || a>=b+c || b>=a+c || c>=a+b)
/* maQkgCo6p ily traian MPAJlr8sO */         cout << "nu este triunghi";
/* maQkgCo6p ily traian MPAJlr8sO */     else if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
/* maQkgCo6p ily traian MPAJlr8sO */         cout << "triunghi dreptunghic";
/* maQkgCo6p ily traian MPAJlr8sO */         else if (a*a + b*b > c*c && b*b + c*c > a*a && c*c + a*a > b*b) 
/* maQkgCo6p ily traian MPAJlr8sO */             cout << "triunghi ascutitunghic";
/* maQkgCo6p ily traian MPAJlr8sO */             else 
/* maQkgCo6p ily traian MPAJlr8sO */                 cout << "triunghi obtuzunghic";
/* maQkgCo6p ily traian MPAJlr8sO */     return 0;
/* maQkgCo6p ily traian MPAJlr8sO */ }