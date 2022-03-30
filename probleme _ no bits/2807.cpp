/* EubUaO7Qz ily traian PKDpRfPZH */ #include <algorithm>
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
/* EubUaO7Qz ily traian PKDpRfPZH */ using namespace std;
/* EubUaO7Qz ily traian PKDpRfPZH */ int n , m , a[51][51] , i1 , j1 , i2 , j2 , min1 = 10000 , min2 = 10000;
/* EubUaO7Qz ily traian PKDpRfPZH */ int main()
/* EubUaO7Qz ily traian PKDpRfPZH */ {
/* EubUaO7Qz ily traian PKDpRfPZH */     cin >> n >> m;
/* EubUaO7Qz ily traian PKDpRfPZH */     for(int i = 1 ; i <= n ; ++i)
/* EubUaO7Qz ily traian PKDpRfPZH */         for(int j = 1 ; j <= m ; ++j) cin >> a[i][j];
/* EubUaO7Qz ily traian PKDpRfPZH */     for(int i = 1 ; i <= n ; ++i)
/* EubUaO7Qz ily traian PKDpRfPZH */     {
/* EubUaO7Qz ily traian PKDpRfPZH */         if(a[i][1] < min1) min1 = a[i][1] , i1 = i , j1 = 1;
/* EubUaO7Qz ily traian PKDpRfPZH */         if(a[i][m] < min2) min2 = a[i][m] , i2 = i , j2 = m;
/* EubUaO7Qz ily traian PKDpRfPZH */     }
/* EubUaO7Qz ily traian PKDpRfPZH */     swap(a[i1][j1] , a[i2][j2]);
/* EubUaO7Qz ily traian PKDpRfPZH */     for(int i = 1 ; i <= n ; ++i)
/* EubUaO7Qz ily traian PKDpRfPZH */     {
/* EubUaO7Qz ily traian PKDpRfPZH */         for(int j = 1 ; j <= m ; ++j) cout << a[i][j] << ' ';
/* EubUaO7Qz ily traian PKDpRfPZH */         cout << endl;
/* EubUaO7Qz ily traian PKDpRfPZH */     }
/* EubUaO7Qz ily traian PKDpRfPZH */     return 0;
/* EubUaO7Qz ily traian PKDpRfPZH */ }