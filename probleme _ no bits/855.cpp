/* DjlYbXVVM ily traian eHcemKTXO */ #include <algorithm>
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
/* DjlYbXVVM ily traian eHcemKTXO */ using namespace std;
/* DjlYbXVVM ily traian eHcemKTXO */ int main()
/* DjlYbXVVM ily traian eHcemKTXO */ {
/* DjlYbXVVM ily traian eHcemKTXO */     int n , a[103];
/* DjlYbXVVM ily traian eHcemKTXO */     cin >> n;
/* DjlYbXVVM ily traian eHcemKTXO */     for(int i = 1 ; i <= n ; ++i)
/* DjlYbXVVM ily traian eHcemKTXO */     {
/* DjlYbXVVM ily traian eHcemKTXO */         if(i == n / 2 + 1)a[i] = 1;
/* DjlYbXVVM ily traian eHcemKTXO */         else a[i] = 0;
/* DjlYbXVVM ily traian eHcemKTXO */     }
/* DjlYbXVVM ily traian eHcemKTXO */     for(int i = 1 ; i <= n / 2 + 1 ; ++i)
/* DjlYbXVVM ily traian eHcemKTXO */     {
/* DjlYbXVVM ily traian eHcemKTXO */         for(int j = 1 ; j <= n ; ++j)
/* DjlYbXVVM ily traian eHcemKTXO */             cout << a[j] <<" ";
/* DjlYbXVVM ily traian eHcemKTXO */         cout << endl;
/* DjlYbXVVM ily traian eHcemKTXO */         for(int j = n/2+1-i ; j <= n/2+1+i ; ++j) a[j]++;
/* DjlYbXVVM ily traian eHcemKTXO */     }
/* DjlYbXVVM ily traian eHcemKTXO */     for(int i = 1 ; i <= n ; ++i) a[i]--;
/* DjlYbXVVM ily traian eHcemKTXO */     for(int i = n / 2 ; i >= 1 ; --i)
/* DjlYbXVVM ily traian eHcemKTXO */     {
/* DjlYbXVVM ily traian eHcemKTXO */         for(int j = n / 2 + 1 - i ; j <= n / 2 + 1 + i ; ++j) a[j]--;
/* DjlYbXVVM ily traian eHcemKTXO */         for(int j = 1 ; j <= n ; ++j)
/* DjlYbXVVM ily traian eHcemKTXO */             cout << a[j] <<" ";
/* DjlYbXVVM ily traian eHcemKTXO */         cout << endl;
/* DjlYbXVVM ily traian eHcemKTXO */     }
/* DjlYbXVVM ily traian eHcemKTXO */ }