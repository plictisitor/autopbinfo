/* Le599QWEI ily traian cm4aQVVny */ #include <algorithm>
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
/* Le599QWEI ily traian cm4aQVVny */ 
/* Le599QWEI ily traian cm4aQVVny */ using namespace std;
/* Le599QWEI ily traian cm4aQVVny */ 
/* Le599QWEI ily traian cm4aQVVny */ 
/* Le599QWEI ily traian cm4aQVVny */ int main()
/* Le599QWEI ily traian cm4aQVVny */ {
/* Le599QWEI ily traian cm4aQVVny */     int n;
/* Le599QWEI ily traian cm4aQVVny */     cin >> n;
/* Le599QWEI ily traian cm4aQVVny */     int cnt=0;
/* Le599QWEI ily traian cm4aQVVny */ 
/* Le599QWEI ily traian cm4aQVVny */     long long sumaDiv = 0;
/* Le599QWEI ily traian cm4aQVVny */     for (int d = 1; d * d <= n; ++d)
/* Le599QWEI ily traian cm4aQVVny */         if (n % d == 0)
/* Le599QWEI ily traian cm4aQVVny */         {
/* Le599QWEI ily traian cm4aQVVny */             cnt++;
/* Le599QWEI ily traian cm4aQVVny */             sumaDiv += d;
/* Le599QWEI ily traian cm4aQVVny */             if (d * d != n)
/* Le599QWEI ily traian cm4aQVVny */                 {sumaDiv += n / d;
/* Le599QWEI ily traian cm4aQVVny */                 cnt++;}
/* Le599QWEI ily traian cm4aQVVny */         }
/* Le599QWEI ily traian cm4aQVVny */     cout << fixed << setprecision(2)<< (float)sumaDiv/cnt;
/* Le599QWEI ily traian cm4aQVVny */     return 0;
/* Le599QWEI ily traian cm4aQVVny */ }