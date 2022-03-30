/* YIKqxZ5TX ily traian uKhSChJIb */ #include <algorithm>
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
/* YIKqxZ5TX ily traian uKhSChJIb */ 
/* YIKqxZ5TX ily traian uKhSChJIb */ using namespace std;
/* YIKqxZ5TX ily traian uKhSChJIb */ 
/* YIKqxZ5TX ily traian uKhSChJIb */ ifstream cin("heap_sort.in");
/* YIKqxZ5TX ily traian uKhSChJIb */ ofstream cout("heap_sort.out");
/* YIKqxZ5TX ily traian uKhSChJIb */ 
/* YIKqxZ5TX ily traian uKhSChJIb */ int n , a[1000002];
/* YIKqxZ5TX ily traian uKhSChJIb */ 
/* YIKqxZ5TX ily traian uKhSChJIb */ int main()
/* YIKqxZ5TX ily traian uKhSChJIb */ {
/* YIKqxZ5TX ily traian uKhSChJIb */     cin >> n;
/* YIKqxZ5TX ily traian uKhSChJIb */     for(int i = 1 ; i <= n ; i++)
/* YIKqxZ5TX ily traian uKhSChJIb */         cin >> a[i];
/* YIKqxZ5TX ily traian uKhSChJIb */     sort(a + 1 , a + n + 1);
/* YIKqxZ5TX ily traian uKhSChJIb */     for(int i = 1 ; i <= n ; i++)
/* YIKqxZ5TX ily traian uKhSChJIb */         cout << a[i] << " ";
/* YIKqxZ5TX ily traian uKhSChJIb */ }