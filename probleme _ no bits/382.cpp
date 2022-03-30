/* ot18JK7JZ ily traian JqSre6jsR */ #include <algorithm>
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
/* ot18JK7JZ ily traian JqSre6jsR */ 
/* ot18JK7JZ ily traian JqSre6jsR */ using namespace std;
/* ot18JK7JZ ily traian JqSre6jsR */ 
/* ot18JK7JZ ily traian JqSre6jsR */ int main()
/* ot18JK7JZ ily traian JqSre6jsR */ {
/* ot18JK7JZ ily traian JqSre6jsR */     int n,k;
/* ot18JK7JZ ily traian JqSre6jsR */     int p;
/* ot18JK7JZ ily traian JqSre6jsR */     cin >> k >> n;
/* ot18JK7JZ ily traian JqSre6jsR */     p = k / n;
/* ot18JK7JZ ily traian JqSre6jsR */     if (k-p*n > n*(p+1)-k)
/* ot18JK7JZ ily traian JqSre6jsR */         cout << n*(p+1);
/* ot18JK7JZ ily traian JqSre6jsR */     else
/* ot18JK7JZ ily traian JqSre6jsR */         cout << p*n;
/* ot18JK7JZ ily traian JqSre6jsR */     return 0;
/* ot18JK7JZ ily traian JqSre6jsR */ }