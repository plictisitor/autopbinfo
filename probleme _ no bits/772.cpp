/* yHEgiHudi ily traian ChIk6w6qJ */ #include <algorithm>
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
/* yHEgiHudi ily traian ChIk6w6qJ */ 
/* yHEgiHudi ily traian ChIk6w6qJ */ using namespace std;
/* yHEgiHudi ily traian ChIk6w6qJ */ int f[1000001]={0};
/* yHEgiHudi ily traian ChIk6w6qJ */ int main()
/* yHEgiHudi ily traian ChIk6w6qJ */ {
/* yHEgiHudi ily traian ChIk6w6qJ */     int n, m , a[102][102] , v[10000] , p = 0 , maxi = 0;
/* yHEgiHudi ily traian ChIk6w6qJ */     cin >> n >> m;
/* yHEgiHudi ily traian ChIk6w6qJ */     for(int i = 0 ; i < n ; ++i)
/* yHEgiHudi ily traian ChIk6w6qJ */     {
/* yHEgiHudi ily traian ChIk6w6qJ */         for(int j = 0 ; j < m ; ++j)
/* yHEgiHudi ily traian ChIk6w6qJ */         {
/* yHEgiHudi ily traian ChIk6w6qJ */             cin >> a[i][j];
/* yHEgiHudi ily traian ChIk6w6qJ */             v[p] = a[i][j];
/* yHEgiHudi ily traian ChIk6w6qJ */             p++;
/* yHEgiHudi ily traian ChIk6w6qJ */             f[a[i][j]]++;
/* yHEgiHudi ily traian ChIk6w6qJ */             if(f[a[i][j]] > maxi) maxi = f[a[i][j]];
/* yHEgiHudi ily traian ChIk6w6qJ */         }
/* yHEgiHudi ily traian ChIk6w6qJ */     }
/* yHEgiHudi ily traian ChIk6w6qJ */     sort(v , v + p);
/* yHEgiHudi ily traian ChIk6w6qJ */     for(int i = 0 ; i < p ; ++i)
/* yHEgiHudi ily traian ChIk6w6qJ */     {
/* yHEgiHudi ily traian ChIk6w6qJ */         if(f[v[i]]==maxi && v[i] != v[i-1])
/* yHEgiHudi ily traian ChIk6w6qJ */         cout << v[i] <<" ";
/* yHEgiHudi ily traian ChIk6w6qJ */     }
/* yHEgiHudi ily traian ChIk6w6qJ */ }