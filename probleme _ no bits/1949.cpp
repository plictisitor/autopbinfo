/* eBFtCnd09 ily traian cG0Ke99pw */ #include <algorithm>
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
/* eBFtCnd09 ily traian cG0Ke99pw */ using namespace std;
/* eBFtCnd09 ily traian cG0Ke99pw */ int main()
/* eBFtCnd09 ily traian cG0Ke99pw */ {
/* eBFtCnd09 ily traian cG0Ke99pw */     int n , a[102] , s = 0;
/* eBFtCnd09 ily traian cG0Ke99pw */     cin >> n;
/* eBFtCnd09 ily traian cG0Ke99pw */     for(int i = 1 ; i <= n ; ++i)
/* eBFtCnd09 ily traian cG0Ke99pw */     a[i] = 1;
/* eBFtCnd09 ily traian cG0Ke99pw */     int n1=n;
/* eBFtCnd09 ily traian cG0Ke99pw */     if(n % 2 == 1) n1++;
/* eBFtCnd09 ily traian cG0Ke99pw */     cout << n1 / 2 << endl;
/* eBFtCnd09 ily traian cG0Ke99pw */     for(int i = 1 ; i <= n1/2 ; ++i)
/* eBFtCnd09 ily traian cG0Ke99pw */     {
/* eBFtCnd09 ily traian cG0Ke99pw */         for(int j = 1 ; j <= n ; ++j)
/* eBFtCnd09 ily traian cG0Ke99pw */             cout << a[j];
/* eBFtCnd09 ily traian cG0Ke99pw */         cout << endl;
/* eBFtCnd09 ily traian cG0Ke99pw */         for(int j = i+1 ; j <= n-i ; ++j) a[j]++;
/* eBFtCnd09 ily traian cG0Ke99pw */     }
/* eBFtCnd09 ily traian cG0Ke99pw */     for(int i = n / 2 ; i >= 1 ; --i)
/* eBFtCnd09 ily traian cG0Ke99pw */     {
/* eBFtCnd09 ily traian cG0Ke99pw */         for(int j = i + 1 ; j <= n - i ; ++j) a[j]--;
/* eBFtCnd09 ily traian cG0Ke99pw */         for(int j = 1 ; j <= n ; ++j)
/* eBFtCnd09 ily traian cG0Ke99pw */             cout << a[j];
/* eBFtCnd09 ily traian cG0Ke99pw */         cout << endl;
/* eBFtCnd09 ily traian cG0Ke99pw */     }
/* eBFtCnd09 ily traian cG0Ke99pw */     int k = n;
/* eBFtCnd09 ily traian cG0Ke99pw */     for(int j = 1 ; j <= n1/2 && k >= 1; ++j)
/* eBFtCnd09 ily traian cG0Ke99pw */     {
/* eBFtCnd09 ily traian cG0Ke99pw */         s += j * k * k;
/* eBFtCnd09 ily traian cG0Ke99pw */         k -= 2;
/* eBFtCnd09 ily traian cG0Ke99pw */     }
/* eBFtCnd09 ily traian cG0Ke99pw */     cout << s;
/* eBFtCnd09 ily traian cG0Ke99pw */     return 0;
/* eBFtCnd09 ily traian cG0Ke99pw */ }