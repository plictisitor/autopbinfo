/* 5uCFHyZ5S ily traian sSQMXWaSW */ #include <algorithm>
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
/* 5uCFHyZ5S ily traian sSQMXWaSW */ using namespace std;
/* 5uCFHyZ5S ily traian sSQMXWaSW */ 
/* 5uCFHyZ5S ily traian sSQMXWaSW */ ifstream cin("summin_xi.in");
/* 5uCFHyZ5S ily traian sSQMXWaSW */ ofstream cout("summin_xi.out");
/* 5uCFHyZ5S ily traian sSQMXWaSW */ 
/* 5uCFHyZ5S ily traian sSQMXWaSW */ int n , a[101][101] , sum;
/* 5uCFHyZ5S ily traian sSQMXWaSW */ 
/* 5uCFHyZ5S ily traian sSQMXWaSW */ int main()
/* 5uCFHyZ5S ily traian sSQMXWaSW */ {
/* 5uCFHyZ5S ily traian sSQMXWaSW */     cin >> n;
/* 5uCFHyZ5S ily traian sSQMXWaSW */ 
/* 5uCFHyZ5S ily traian sSQMXWaSW */     for(int i = 1 ; i <= n ; i++)
/* 5uCFHyZ5S ily traian sSQMXWaSW */         for(int j = 1 ; j <= n ; j++)
/* 5uCFHyZ5S ily traian sSQMXWaSW */             cin >> a[i][j];
/* 5uCFHyZ5S ily traian sSQMXWaSW */ 
/* 5uCFHyZ5S ily traian sSQMXWaSW */     for(int j = 1 ; j <= n ; j++)
/* 5uCFHyZ5S ily traian sSQMXWaSW */     {
/* 5uCFHyZ5S ily traian sSQMXWaSW */         int mini = 999999999;
/* 5uCFHyZ5S ily traian sSQMXWaSW */         for(int i = 1 ; i <= n ; i++)
/* 5uCFHyZ5S ily traian sSQMXWaSW */             if(a[i][j] < mini) mini = a[i][j];
/* 5uCFHyZ5S ily traian sSQMXWaSW */ 
/* 5uCFHyZ5S ily traian sSQMXWaSW */         sum += mini;
/* 5uCFHyZ5S ily traian sSQMXWaSW */     }
/* 5uCFHyZ5S ily traian sSQMXWaSW */ 
/* 5uCFHyZ5S ily traian sSQMXWaSW */     cout << sum;
/* 5uCFHyZ5S ily traian sSQMXWaSW */ 
/* 5uCFHyZ5S ily traian sSQMXWaSW */ }