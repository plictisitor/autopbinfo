/* 6OvxDuZeM ily traian KGjRgDlTT */ #include <algorithm>
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
/* 6OvxDuZeM ily traian KGjRgDlTT */ using namespace std;
/* 6OvxDuZeM ily traian KGjRgDlTT */ 
/* 6OvxDuZeM ily traian KGjRgDlTT */ int main()
/* 6OvxDuZeM ily traian KGjRgDlTT */ {
/* 6OvxDuZeM ily traian KGjRgDlTT */     int n , m ,  e, b;
/* 6OvxDuZeM ily traian KGjRgDlTT */     cin >> n >> m >> e >> b;
/* 6OvxDuZeM ily traian KGjRgDlTT */     int x = (e + m * b) / (m - n);
/* 6OvxDuZeM ily traian KGjRgDlTT */     cout << n * x + e << endl << x;
/* 6OvxDuZeM ily traian KGjRgDlTT */     return 0;
/* 6OvxDuZeM ily traian KGjRgDlTT */ }