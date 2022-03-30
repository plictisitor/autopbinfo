/* ANLPyGDfO ily traian fbRykmjJU */ #include <algorithm>
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
/* ANLPyGDfO ily traian fbRykmjJU */ using namespace std;
/* ANLPyGDfO ily traian fbRykmjJU */ int main()
/* ANLPyGDfO ily traian fbRykmjJU */ {
/* ANLPyGDfO ily traian fbRykmjJU */     int n , m , a[1000] , st[1000] , dr[1000];
/* ANLPyGDfO ily traian fbRykmjJU */     cin >> n >> m;
/* ANLPyGDfO ily traian fbRykmjJU */     for(int i = 1 ; i <= n ; i++)
/* ANLPyGDfO ily traian fbRykmjJU */     {
/* ANLPyGDfO ily traian fbRykmjJU */         int s = 0 , s1 = 0;
/* ANLPyGDfO ily traian fbRykmjJU */         for(int j = 1 ; j <= m ; j++)
/* ANLPyGDfO ily traian fbRykmjJU */         {
/* ANLPyGDfO ily traian fbRykmjJU */             cin >> a[j];
/* ANLPyGDfO ily traian fbRykmjJU */             s += a[j];
/* ANLPyGDfO ily traian fbRykmjJU */         }
/* ANLPyGDfO ily traian fbRykmjJU */         for(int j = 1 ; j <= m ; j++)
/* ANLPyGDfO ily traian fbRykmjJU */         {
/* ANLPyGDfO ily traian fbRykmjJU */             s1 += a[j];
/* ANLPyGDfO ily traian fbRykmjJU */             if(s1 == s / 2) st[i] = j , dr[i] = m - j;
/* ANLPyGDfO ily traian fbRykmjJU */         }
/* ANLPyGDfO ily traian fbRykmjJU */     }
/* ANLPyGDfO ily traian fbRykmjJU */     for(int i = 1 ; i <= n ; i++)
/* ANLPyGDfO ily traian fbRykmjJU */     {
/* ANLPyGDfO ily traian fbRykmjJU */         cout << st[i] << ' ' << dr[i] << '\n';
/* ANLPyGDfO ily traian fbRykmjJU */     }
/* ANLPyGDfO ily traian fbRykmjJU */ }