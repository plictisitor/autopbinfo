/* ilvnOshuP ily traian FomG3VHLL */ #include <algorithm>
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
/* ilvnOshuP ily traian FomG3VHLL */ 
/* ilvnOshuP ily traian FomG3VHLL */ using namespace std;
/* ilvnOshuP ily traian FomG3VHLL */ int f[1000001]={0};
/* ilvnOshuP ily traian FomG3VHLL */ int main()
/* ilvnOshuP ily traian FomG3VHLL */ {
/* ilvnOshuP ily traian FomG3VHLL */     int n, m , a[102][102] , v[10000] , p = 0 , maxi = 0 , ok = 0;
/* ilvnOshuP ily traian FomG3VHLL */     cin >> n >> m;
/* ilvnOshuP ily traian FomG3VHLL */     for(int i = 0 ; i < n ; ++i)
/* ilvnOshuP ily traian FomG3VHLL */     {
/* ilvnOshuP ily traian FomG3VHLL */         for(int j = 0 ; j < m ; ++j)
/* ilvnOshuP ily traian FomG3VHLL */         {
/* ilvnOshuP ily traian FomG3VHLL */             cin >> a[i][j];
/* ilvnOshuP ily traian FomG3VHLL */             v[p] = a[i][j];
/* ilvnOshuP ily traian FomG3VHLL */             p++;
/* ilvnOshuP ily traian FomG3VHLL */             f[a[i][j]]++;
/* ilvnOshuP ily traian FomG3VHLL */             if(f[a[i][j]] > maxi) maxi = f[a[i][j]];
/* ilvnOshuP ily traian FomG3VHLL */         }
/* ilvnOshuP ily traian FomG3VHLL */     }
/* ilvnOshuP ily traian FomG3VHLL */     sort(v , v + p);
/* ilvnOshuP ily traian FomG3VHLL */     for(int i = 0 ; i < p ; ++i)
/* ilvnOshuP ily traian FomG3VHLL */     {
/* ilvnOshuP ily traian FomG3VHLL */         if(f[v[i]] == maxi)
/* ilvnOshuP ily traian FomG3VHLL */         ok = v[i];
/* ilvnOshuP ily traian FomG3VHLL */     }
/* ilvnOshuP ily traian FomG3VHLL */     cout << ok;
/* ilvnOshuP ily traian FomG3VHLL */     return 0;
/* ilvnOshuP ily traian FomG3VHLL */ }