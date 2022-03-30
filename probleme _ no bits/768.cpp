/* WwhdB2ijq ily traian grL82P0Mb */ #include <algorithm>
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
/* WwhdB2ijq ily traian grL82P0Mb */ 
/* WwhdB2ijq ily traian grL82P0Mb */ using namespace std;
/* WwhdB2ijq ily traian grL82P0Mb */ 
/* WwhdB2ijq ily traian grL82P0Mb */ int main()
/* WwhdB2ijq ily traian grL82P0Mb */ {
/* WwhdB2ijq ily traian grL82P0Mb */     int n , m , p = 0 , a[101][101] , v[10001] , s = 0;
/* WwhdB2ijq ily traian grL82P0Mb */     cin >> n >> m;
/* WwhdB2ijq ily traian grL82P0Mb */     for(int i = 0 ; i < n ; ++i)
/* WwhdB2ijq ily traian grL82P0Mb */         for(int j = 0 ; j < m ; ++j)
/* WwhdB2ijq ily traian grL82P0Mb */         {
/* WwhdB2ijq ily traian grL82P0Mb */             cin >> a[i][j];
/* WwhdB2ijq ily traian grL82P0Mb */             if(a[i][j]%2==0)
/* WwhdB2ijq ily traian grL82P0Mb */             {
/* WwhdB2ijq ily traian grL82P0Mb */                 s+=a[i][j];
/* WwhdB2ijq ily traian grL82P0Mb */                 v[p++]=a[i][j];
/* WwhdB2ijq ily traian grL82P0Mb */             }
/* WwhdB2ijq ily traian grL82P0Mb */         }
/* WwhdB2ijq ily traian grL82P0Mb */     sort(v , v+p);
/* WwhdB2ijq ily traian grL82P0Mb */     for(int i = 0 ; i < p ; ++i)
/* WwhdB2ijq ily traian grL82P0Mb */     {
/* WwhdB2ijq ily traian grL82P0Mb */         if(v[i]==v[i+1])
/* WwhdB2ijq ily traian grL82P0Mb */         s-=v[i];
/* WwhdB2ijq ily traian grL82P0Mb */     }
/* WwhdB2ijq ily traian grL82P0Mb */     cout << s;
/* WwhdB2ijq ily traian grL82P0Mb */ }