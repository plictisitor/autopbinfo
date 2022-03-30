/* JzqNZaQxT ily traian pxbB3MeoZ */ #include <algorithm>
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
/* JzqNZaQxT ily traian pxbB3MeoZ */ using namespace std;
/* JzqNZaQxT ily traian pxbB3MeoZ */ int main()
/* JzqNZaQxT ily traian pxbB3MeoZ */ {
/* JzqNZaQxT ily traian pxbB3MeoZ */     int n, a[35][35], i, j;
/* JzqNZaQxT ily traian pxbB3MeoZ */     cin >> n;
/* JzqNZaQxT ily traian pxbB3MeoZ */     for(i = 1; i <= n; i++)
/* JzqNZaQxT ily traian pxbB3MeoZ */     {
/* JzqNZaQxT ily traian pxbB3MeoZ */         for(j = 1; j <= n; j++)
/* JzqNZaQxT ily traian pxbB3MeoZ */         {
/* JzqNZaQxT ily traian pxbB3MeoZ */             if(i + j <= n + 1) a[i][j] = i + j - 1;
/* JzqNZaQxT ily traian pxbB3MeoZ */             else a[i][j] = 2 * n - i - j + 1;
/* JzqNZaQxT ily traian pxbB3MeoZ */         }
/* JzqNZaQxT ily traian pxbB3MeoZ */     }
/* JzqNZaQxT ily traian pxbB3MeoZ */ 
/* JzqNZaQxT ily traian pxbB3MeoZ */     for(i = 1; i <= n; i++)
/* JzqNZaQxT ily traian pxbB3MeoZ */     {
/* JzqNZaQxT ily traian pxbB3MeoZ */         for(j = 1; j <= n; j++)
/* JzqNZaQxT ily traian pxbB3MeoZ */             cout << a[i][j] <<" ";
/* JzqNZaQxT ily traian pxbB3MeoZ */         cout <<endl;
/* JzqNZaQxT ily traian pxbB3MeoZ */     }
/* JzqNZaQxT ily traian pxbB3MeoZ */ 
/* JzqNZaQxT ily traian pxbB3MeoZ */     return 0;
/* JzqNZaQxT ily traian pxbB3MeoZ */ }