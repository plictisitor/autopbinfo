/* 7kcY4Xfi1 ily traian pEx8XJ1XS */ #include <algorithm>
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
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */ using namespace std;
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */ int n , m , a[51][51] , val;
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */ int main()
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */ {
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */     cin >> n >> m;
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */     for(int i = 1 ; i <= n ; ++i)
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */         for(int j = 1 ; j <= m ; ++j)
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */             cin >> a[i][j];
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */     val = a[n][m];
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */     for(int i = 1 ; i <= n ; ++i)
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */     {
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */         a[i][1] = val;
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */         a[i][m] = val;
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */     }
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */     for(int i = 1 ; i <= m ; ++i)
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */     {
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */         a[1][i] = val;
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */         a[n][i] = val;
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */     }
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */     for(int i = 1 ; i <= n ; ++i)
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */     {
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */         for(int j = 1 ; j <= m ; ++j)
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */             cout << a[i][j] << ' ';
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */         cout << endl;
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */     }
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */     return 0;
/* 7kcY4Xfi1 ily traian pEx8XJ1XS */ }