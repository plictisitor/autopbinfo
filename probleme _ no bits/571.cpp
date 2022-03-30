/* Qeg1MFQbR ily traian x32lcmDoP */ #include <algorithm>
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
/* Qeg1MFQbR ily traian x32lcmDoP */ using namespace std;
/* Qeg1MFQbR ily traian x32lcmDoP */ int a[1001][1001] , n , m , k , i , j , t1 , t2 , r = 2 ;
/* Qeg1MFQbR ily traian x32lcmDoP */ int main()
/* Qeg1MFQbR ily traian x32lcmDoP */ {
/* Qeg1MFQbR ily traian x32lcmDoP */     cin >> n >> m >> k;
/* Qeg1MFQbR ily traian x32lcmDoP */     for(i = 1 ; i <= n ; i += k)
/* Qeg1MFQbR ily traian x32lcmDoP */     {
/* Qeg1MFQbR ily traian x32lcmDoP */         if(r == 1) r = 2;
/* Qeg1MFQbR ily traian x32lcmDoP */         else r = 1;
/* Qeg1MFQbR ily traian x32lcmDoP */         if(r == 1)
/* Qeg1MFQbR ily traian x32lcmDoP */             for(j = k + 1 ; j <= m ; j += k * 2)
/* Qeg1MFQbR ily traian x32lcmDoP */                 for(t1 = i ; t1 <= i + k - 1 ; ++t1)
/* Qeg1MFQbR ily traian x32lcmDoP */                     for(t2 = j ; t2 <= j + k - 1 ; ++t2)
/* Qeg1MFQbR ily traian x32lcmDoP */                         a[t1][t2] = 1;
/* Qeg1MFQbR ily traian x32lcmDoP */         else
/* Qeg1MFQbR ily traian x32lcmDoP */             for(j = 1 ; j <= m ; j += k * 2)
/* Qeg1MFQbR ily traian x32lcmDoP */                 for(t1 = i ; t1 <= i + k - 1 ; ++t1)
/* Qeg1MFQbR ily traian x32lcmDoP */                     for(t2 = j ; t2 <= j + k - 1 ; ++t2)
/* Qeg1MFQbR ily traian x32lcmDoP */                         a[t1][t2] = 1;
/* Qeg1MFQbR ily traian x32lcmDoP */     }
/* Qeg1MFQbR ily traian x32lcmDoP */     for(i = 1 ; i <= n ; ++i)
/* Qeg1MFQbR ily traian x32lcmDoP */     {
/* Qeg1MFQbR ily traian x32lcmDoP */         for(j = 1 ; j <= m ; ++j)
/* Qeg1MFQbR ily traian x32lcmDoP */             cout<< a[i][j];
/* Qeg1MFQbR ily traian x32lcmDoP */         cout << endl;
/* Qeg1MFQbR ily traian x32lcmDoP */     }
/* Qeg1MFQbR ily traian x32lcmDoP */ }