/* 3d9OmhGE1 ily traian n60CdGZHG */ #include <algorithm>
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
/* 3d9OmhGE1 ily traian n60CdGZHG */ using namespace std;
/* 3d9OmhGE1 ily traian n60CdGZHG */ 
/* 3d9OmhGE1 ily traian n60CdGZHG */ int main()
/* 3d9OmhGE1 ily traian n60CdGZHG */ {
/* 3d9OmhGE1 ily traian n60CdGZHG */     int n , x;
/* 3d9OmhGE1 ily traian n60CdGZHG */     cin >> n;
/* 3d9OmhGE1 ily traian n60CdGZHG */     for(int i = 0 ; i < n ; ++i)
/* 3d9OmhGE1 ily traian n60CdGZHG */     {
/* 3d9OmhGE1 ily traian n60CdGZHG */         cin >> x;
/* 3d9OmhGE1 ily traian n60CdGZHG */         int d = 2;
/* 3d9OmhGE1 ily traian n60CdGZHG */         int p = 1;
/* 3d9OmhGE1 ily traian n60CdGZHG */         while(x > 1)
/* 3d9OmhGE1 ily traian n60CdGZHG */         {
/* 3d9OmhGE1 ily traian n60CdGZHG */             if(x % d == 0)
/* 3d9OmhGE1 ily traian n60CdGZHG */             {
/* 3d9OmhGE1 ily traian n60CdGZHG */                 int e = 0;
/* 3d9OmhGE1 ily traian n60CdGZHG */                 while(x % d == 0)
/* 3d9OmhGE1 ily traian n60CdGZHG */                     e++ , x/=d;
/* 3d9OmhGE1 ily traian n60CdGZHG */                 p*=(2 * e + 1);
/* 3d9OmhGE1 ily traian n60CdGZHG */             }
/* 3d9OmhGE1 ily traian n60CdGZHG */             else d++;
/* 3d9OmhGE1 ily traian n60CdGZHG */             if(x > 1 && d*d>x)
/* 3d9OmhGE1 ily traian n60CdGZHG */             {
/* 3d9OmhGE1 ily traian n60CdGZHG */                 p*=3;
/* 3d9OmhGE1 ily traian n60CdGZHG */                 break;
/* 3d9OmhGE1 ily traian n60CdGZHG */             }
/* 3d9OmhGE1 ily traian n60CdGZHG */         }
/* 3d9OmhGE1 ily traian n60CdGZHG */         cout << p << ' ';
/* 3d9OmhGE1 ily traian n60CdGZHG */     }
/* 3d9OmhGE1 ily traian n60CdGZHG */     return 0;
/* 3d9OmhGE1 ily traian n60CdGZHG */ }