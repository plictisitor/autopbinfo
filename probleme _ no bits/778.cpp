/* fScohRtru ily traian FBJKVyl1d */ #include <algorithm>
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
/* fScohRtru ily traian FBJKVyl1d */ 
/* fScohRtru ily traian FBJKVyl1d */ using namespace std;
/* fScohRtru ily traian FBJKVyl1d */ 
/* fScohRtru ily traian FBJKVyl1d */ int main()
/* fScohRtru ily traian FBJKVyl1d */ {
/* fScohRtru ily traian FBJKVyl1d */     int n , m , a[101][101] , v[500] , p = 0;
/* fScohRtru ily traian FBJKVyl1d */     cin >> n >> m;
/* fScohRtru ily traian FBJKVyl1d */     for(int i = 0 ; i < n ; ++i)
/* fScohRtru ily traian FBJKVyl1d */         for(int j = 0 ; j < m ; ++j)
/* fScohRtru ily traian FBJKVyl1d */         cin >> a[i][j];
/* fScohRtru ily traian FBJKVyl1d */     for(int i = 0 ; i < n ; i+=n-1)
/* fScohRtru ily traian FBJKVyl1d */         for(int j = 0 ; j < m ; ++j)
/* fScohRtru ily traian FBJKVyl1d */         {
/* fScohRtru ily traian FBJKVyl1d */             v[p]=a[i][j];
/* fScohRtru ily traian FBJKVyl1d */             p++;
/* fScohRtru ily traian FBJKVyl1d */         }
/* fScohRtru ily traian FBJKVyl1d */ 
/* fScohRtru ily traian FBJKVyl1d */     for(int i = 1 ; i < n-1 ; i++)
/* fScohRtru ily traian FBJKVyl1d */         for(int j = 0 ; j < m ; j+=m-1)
/* fScohRtru ily traian FBJKVyl1d */         {
/* fScohRtru ily traian FBJKVyl1d */             v[p]=a[i][j];
/* fScohRtru ily traian FBJKVyl1d */             p++;
/* fScohRtru ily traian FBJKVyl1d */         }
/* fScohRtru ily traian FBJKVyl1d */ 
/* fScohRtru ily traian FBJKVyl1d */     sort(v, v+p);
/* fScohRtru ily traian FBJKVyl1d */     for(int i = 0 ; i < p ; ++i)
/* fScohRtru ily traian FBJKVyl1d */     {
/* fScohRtru ily traian FBJKVyl1d */         if(v[i]!=v[i-1])
/* fScohRtru ily traian FBJKVyl1d */         cout << v[i] << ' ';
/* fScohRtru ily traian FBJKVyl1d */     }
/* fScohRtru ily traian FBJKVyl1d */ }