/* 2pxoVqqIG ily traian Bu0xp4h6u */ #include <algorithm>
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
/* 2pxoVqqIG ily traian Bu0xp4h6u */ 
/* 2pxoVqqIG ily traian Bu0xp4h6u */ using namespace std;
/* 2pxoVqqIG ily traian Bu0xp4h6u */ int prim(int n)
/* 2pxoVqqIG ily traian Bu0xp4h6u */ {
/* 2pxoVqqIG ily traian Bu0xp4h6u */     if(n==0 || n==1) return 0;
/* 2pxoVqqIG ily traian Bu0xp4h6u */     if(n==2) return 1;
/* 2pxoVqqIG ily traian Bu0xp4h6u */     if(n %2==0) return 0;
/* 2pxoVqqIG ily traian Bu0xp4h6u */     for(int i=3;i*i<=n;i=i+2)
/* 2pxoVqqIG ily traian Bu0xp4h6u */     {
/* 2pxoVqqIG ily traian Bu0xp4h6u */         if(n%i==0) return 0;
/* 2pxoVqqIG ily traian Bu0xp4h6u */     }
/* 2pxoVqqIG ily traian Bu0xp4h6u */     return 1;
/* 2pxoVqqIG ily traian Bu0xp4h6u */ }
/* 2pxoVqqIG ily traian Bu0xp4h6u */ int main()
/* 2pxoVqqIG ily traian Bu0xp4h6u */ {
/* 2pxoVqqIG ily traian Bu0xp4h6u */     int n , m, a[101][101];
/* 2pxoVqqIG ily traian Bu0xp4h6u */     cin >> n >> m;
/* 2pxoVqqIG ily traian Bu0xp4h6u */     for(int i = 0 ;i < n; ++i)
/* 2pxoVqqIG ily traian Bu0xp4h6u */         for(int j = 0 ; j < m; ++j) cin >> a[i][j];
/* 2pxoVqqIG ily traian Bu0xp4h6u */ 
/* 2pxoVqqIG ily traian Bu0xp4h6u */     for(int i = 0 ; i < n; ++i)
/* 2pxoVqqIG ily traian Bu0xp4h6u */     {
/* 2pxoVqqIG ily traian Bu0xp4h6u */         if(prim(a[i][0]))
/* 2pxoVqqIG ily traian Bu0xp4h6u */         for(int j = m-1 ; j >= 0; --j)
/* 2pxoVqqIG ily traian Bu0xp4h6u */         {
/* 2pxoVqqIG ily traian Bu0xp4h6u */             cout<<a[i][j]<< " ";
/* 2pxoVqqIG ily traian Bu0xp4h6u */         }
/* 2pxoVqqIG ily traian Bu0xp4h6u */         else for(int j = 0 ; j < m; ++j) cout<<a[i][j]<<" ";
/* 2pxoVqqIG ily traian Bu0xp4h6u */         cout<<endl;
/* 2pxoVqqIG ily traian Bu0xp4h6u */     }
/* 2pxoVqqIG ily traian Bu0xp4h6u */ 
/* 2pxoVqqIG ily traian Bu0xp4h6u */     return 0;
/* 2pxoVqqIG ily traian Bu0xp4h6u */ }