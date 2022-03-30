/* zNka9YlxN ily traian xAP8Jom5F */ #include <algorithm>
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
/* zNka9YlxN ily traian xAP8Jom5F */ using namespace std;
/* zNka9YlxN ily traian xAP8Jom5F */ 
/* zNka9YlxN ily traian xAP8Jom5F */ 
/* zNka9YlxN ily traian xAP8Jom5F */ 
/* zNka9YlxN ily traian xAP8Jom5F */ int main ()
/* zNka9YlxN ily traian xAP8Jom5F */ {
/* zNka9YlxN ily traian xAP8Jom5F */     int n, x , cmin=9, nmax=0;
/* zNka9YlxN ily traian xAP8Jom5F */     cin >> n;
/* zNka9YlxN ily traian xAP8Jom5F */     for (int i = 1; i <=n ; ++i)
/* zNka9YlxN ily traian xAP8Jom5F */     {
/* zNka9YlxN ily traian xAP8Jom5F */         cin >> x;
/* zNka9YlxN ily traian xAP8Jom5F */         int y=x;
/* zNka9YlxN ily traian xAP8Jom5F */         while (y > 9) y/=10;
/* zNka9YlxN ily traian xAP8Jom5F */         if (y < cmin) {cmin = y ; nmax=x;}
/* zNka9YlxN ily traian xAP8Jom5F */         else if (y==cmin) if(x>nmax) nmax=x;
/* zNka9YlxN ily traian xAP8Jom5F */     }
/* zNka9YlxN ily traian xAP8Jom5F */     cout << nmax;
/* zNka9YlxN ily traian xAP8Jom5F */     return 0;
/* zNka9YlxN ily traian xAP8Jom5F */ }