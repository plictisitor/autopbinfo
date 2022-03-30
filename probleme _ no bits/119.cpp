/* Tpp829HBM ily traian l1zyGDwPC */ #include <algorithm>
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
/* Tpp829HBM ily traian l1zyGDwPC */ 
/* Tpp829HBM ily traian l1zyGDwPC */ using namespace std;
/* Tpp829HBM ily traian l1zyGDwPC */ 
/* Tpp829HBM ily traian l1zyGDwPC */ int main ()
/* Tpp829HBM ily traian l1zyGDwPC */ {
/* Tpp829HBM ily traian l1zyGDwPC */     int n;
/* Tpp829HBM ily traian l1zyGDwPC */     cin >> n;
/* Tpp829HBM ily traian l1zyGDwPC */     int a[1001];
/* Tpp829HBM ily traian l1zyGDwPC */     for (int i = 0 ; i < n; ++i)
/* Tpp829HBM ily traian l1zyGDwPC */         cin >> a[i];
/* Tpp829HBM ily traian l1zyGDwPC */     sort (a,a+n);
/* Tpp829HBM ily traian l1zyGDwPC */     cout << a[n-1] << ' ' << a[n-2];
/* Tpp829HBM ily traian l1zyGDwPC */     return 0;
/* Tpp829HBM ily traian l1zyGDwPC */ }