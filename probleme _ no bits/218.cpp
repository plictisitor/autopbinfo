/* 9ysoSduVq ily traian xQwHJhwAW */ #include <algorithm>
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
/* 9ysoSduVq ily traian xQwHJhwAW */ using namespace std;
/* 9ysoSduVq ily traian xQwHJhwAW */ int main()
/* 9ysoSduVq ily traian xQwHJhwAW */ {
/* 9ysoSduVq ily traian xQwHJhwAW */     int n , a[16][16];
/* 9ysoSduVq ily traian xQwHJhwAW */     cin >> n;
/* 9ysoSduVq ily traian xQwHJhwAW */     for(int i = 1 ; i <= n ; ++i)
/* 9ysoSduVq ily traian xQwHJhwAW */         for(int j = 1 ;j <= n ;++j)
/* 9ysoSduVq ily traian xQwHJhwAW */     {
/* 9ysoSduVq ily traian xQwHJhwAW */         if(i == 1 || i == n || j == 1 || j == n) a[i][j] = i +j;
/* 9ysoSduVq ily traian xQwHJhwAW */         else a[i][j] = a[i-1][j-1] + a[i-1][j] + a[i-1][j+1];
/* 9ysoSduVq ily traian xQwHJhwAW */     }
/* 9ysoSduVq ily traian xQwHJhwAW */     for(int i = 1 ; i <= n ; ++i)
/* 9ysoSduVq ily traian xQwHJhwAW */     {
/* 9ysoSduVq ily traian xQwHJhwAW */         for(int j = 1 ;j <= n ;++j) cout << a[i][j] << " ";
/* 9ysoSduVq ily traian xQwHJhwAW */         cout << endl;
/* 9ysoSduVq ily traian xQwHJhwAW */     }
/* 9ysoSduVq ily traian xQwHJhwAW */     return 0;
/* 9ysoSduVq ily traian xQwHJhwAW */ }