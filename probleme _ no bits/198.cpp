/* 8L0F1m4Ow ily traian PDm4uyj0I */ #include <algorithm>
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
/* 8L0F1m4Ow ily traian PDm4uyj0I */ using namespace std;
/* 8L0F1m4Ow ily traian PDm4uyj0I */ 
/* 8L0F1m4Ow ily traian PDm4uyj0I */ ifstream cin("submultimi.in");
/* 8L0F1m4Ow ily traian PDm4uyj0I */ ofstream cout("submultimi.out");
/* 8L0F1m4Ow ily traian PDm4uyj0I */ 
/* 8L0F1m4Ow ily traian PDm4uyj0I */ int x[10] , n;
/* 8L0F1m4Ow ily traian PDm4uyj0I */ 
/* 8L0F1m4Ow ily traian PDm4uyj0I */ void afisare(int k)
/* 8L0F1m4Ow ily traian PDm4uyj0I */ {
/* 8L0F1m4Ow ily traian PDm4uyj0I */     for(int i = 1 ; i <= k ; ++i)
/* 8L0F1m4Ow ily traian PDm4uyj0I */         cout << x[i] << ' ';
/* 8L0F1m4Ow ily traian PDm4uyj0I */     cout << '\n';
/* 8L0F1m4Ow ily traian PDm4uyj0I */ }
/* 8L0F1m4Ow ily traian PDm4uyj0I */ 
/* 8L0F1m4Ow ily traian PDm4uyj0I */ void back(int k)
/* 8L0F1m4Ow ily traian PDm4uyj0I */ {
/* 8L0F1m4Ow ily traian PDm4uyj0I */     for(int i = x[k - 1] + 1 ; i <= n ; ++i)
/* 8L0F1m4Ow ily traian PDm4uyj0I */     {
/* 8L0F1m4Ow ily traian PDm4uyj0I */         x[k] = i;
/* 8L0F1m4Ow ily traian PDm4uyj0I */         afisare(k);
/* 8L0F1m4Ow ily traian PDm4uyj0I */         back(k + 1);
/* 8L0F1m4Ow ily traian PDm4uyj0I */     }
/* 8L0F1m4Ow ily traian PDm4uyj0I */ }
/* 8L0F1m4Ow ily traian PDm4uyj0I */ 
/* 8L0F1m4Ow ily traian PDm4uyj0I */ int main()
/* 8L0F1m4Ow ily traian PDm4uyj0I */ {
/* 8L0F1m4Ow ily traian PDm4uyj0I */     cin >> n;
/* 8L0F1m4Ow ily traian PDm4uyj0I */     back(1);
/* 8L0F1m4Ow ily traian PDm4uyj0I */     return 0;
/* 8L0F1m4Ow ily traian PDm4uyj0I */ }