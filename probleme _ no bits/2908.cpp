/* qA2ZFR38k ily traian ur8MR3zZG */ #include <algorithm>
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
/* qA2ZFR38k ily traian ur8MR3zZG */ using namespace std;
/* qA2ZFR38k ily traian ur8MR3zZG */ 
/* qA2ZFR38k ily traian ur8MR3zZG */ ifstream cin("planta.in");
/* qA2ZFR38k ily traian ur8MR3zZG */ ofstream cout("planta.out");
/* qA2ZFR38k ily traian ur8MR3zZG */ 
/* qA2ZFR38k ily traian ur8MR3zZG */ int main()
/* qA2ZFR38k ily traian ur8MR3zZG */ {
/* qA2ZFR38k ily traian ur8MR3zZG */     int d , a , b , n;
/* qA2ZFR38k ily traian ur8MR3zZG */     cin >> d >> a >> b >> n;
/* qA2ZFR38k ily traian ur8MR3zZG */     long long int rez = d;
/* qA2ZFR38k ily traian ur8MR3zZG */     if(n % 2 == 0)
/* qA2ZFR38k ily traian ur8MR3zZG */         rez = rez + n/2*(a-b);
/* qA2ZFR38k ily traian ur8MR3zZG */     else
/* qA2ZFR38k ily traian ur8MR3zZG */         rez = rez + n/2*(a-b) + a;
/* qA2ZFR38k ily traian ur8MR3zZG */     cout << rez;
/* qA2ZFR38k ily traian ur8MR3zZG */     return 0;
/* qA2ZFR38k ily traian ur8MR3zZG */ }