/* m0muL14WK ily traian fI4VWRO8j */ #include <algorithm>
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
/* m0muL14WK ily traian fI4VWRO8j */ 
/* m0muL14WK ily traian fI4VWRO8j */ using namespace std;
/* m0muL14WK ily traian fI4VWRO8j */ int main()
/* m0muL14WK ily traian fI4VWRO8j */ {
/* m0muL14WK ily traian fI4VWRO8j */     int n , a[101][101] , nord = 0, sud = 0, vest = 0, est = 0 , v[4];
/* m0muL14WK ily traian fI4VWRO8j */     cin >> n;
/* m0muL14WK ily traian fI4VWRO8j */     for(int i = 0 ; i < n ; i++)
/* m0muL14WK ily traian fI4VWRO8j */         for(int j = 0 ; j < n ; j++)
/* m0muL14WK ily traian fI4VWRO8j */         cin >> a[i][j];
/* m0muL14WK ily traian fI4VWRO8j */     for(int i = 0 ; i < n ; i++)
/* m0muL14WK ily traian fI4VWRO8j */         for(int j = 0 ; j < n ; j++)
/* m0muL14WK ily traian fI4VWRO8j */         {
/* m0muL14WK ily traian fI4VWRO8j */             if(i < j && i + j < n - 1) nord += a[i][j];
/* m0muL14WK ily traian fI4VWRO8j */             else if(i < j && i + j > n - 1)  est += a[i][j];
/* m0muL14WK ily traian fI4VWRO8j */             else if(i > j && i + j < n - 1) vest += a[i][j];
/* m0muL14WK ily traian fI4VWRO8j */             else if(i > j && i + j > n - 1) sud += a[i][j];
/* m0muL14WK ily traian fI4VWRO8j */         }
/* m0muL14WK ily traian fI4VWRO8j */     v[1] = nord;
/* m0muL14WK ily traian fI4VWRO8j */     v[2] = sud ;
/* m0muL14WK ily traian fI4VWRO8j */     v[3] = est;
/* m0muL14WK ily traian fI4VWRO8j */     v[4] = vest;
/* m0muL14WK ily traian fI4VWRO8j */     sort(v+1 , v +5);
/* m0muL14WK ily traian fI4VWRO8j */     for(int i = 1 ; i<= 4 ; ++i) cout <<v[i] << " ";
/* m0muL14WK ily traian fI4VWRO8j */ 
/* m0muL14WK ily traian fI4VWRO8j */ }