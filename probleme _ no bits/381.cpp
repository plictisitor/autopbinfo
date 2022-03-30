/* ywbFoUDPl ily traian zl8yJGLCq */ #include<iostream>
/* ywbFoUDPl ily traian zl8yJGLCq */ #include <algorithm>
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
/* ywbFoUDPl ily traian zl8yJGLCq */ using namespace std;
/* ywbFoUDPl ily traian zl8yJGLCq */ int prim (int n)
/* ywbFoUDPl ily traian zl8yJGLCq */ {
/* ywbFoUDPl ily traian zl8yJGLCq */     if (n==0 || n==1) return 0;
/* ywbFoUDPl ily traian zl8yJGLCq */     if(n==2) return 1;
/* ywbFoUDPl ily traian zl8yJGLCq */     if(n%2==0) return 0;
/* ywbFoUDPl ily traian zl8yJGLCq */     for (int i=3;i*i<=n;i += 2)
/* ywbFoUDPl ily traian zl8yJGLCq */         if(n%i==0) return 0;
/* ywbFoUDPl ily traian zl8yJGLCq */     return 1;
/* ywbFoUDPl ily traian zl8yJGLCq */ }
/* ywbFoUDPl ily traian zl8yJGLCq */ int aproapeprim(int n)
/* ywbFoUDPl ily traian zl8yJGLCq */ {
/* ywbFoUDPl ily traian zl8yJGLCq */     int cate=0;
/* ywbFoUDPl ily traian zl8yJGLCq */     for(int i=1;i*i<=n;i++)
/* ywbFoUDPl ily traian zl8yJGLCq */          {
/* ywbFoUDPl ily traian zl8yJGLCq */             if(n%i==0)
/* ywbFoUDPl ily traian zl8yJGLCq */             {
/* ywbFoUDPl ily traian zl8yJGLCq */                 if(prim(i))
/* ywbFoUDPl ily traian zl8yJGLCq */                 {
/* ywbFoUDPl ily traian zl8yJGLCq */                     int y=n/i;
/* ywbFoUDPl ily traian zl8yJGLCq */                     if(prim(y))cate++;
/* ywbFoUDPl ily traian zl8yJGLCq */                     if(i*i==n) cate--;
/* ywbFoUDPl ily traian zl8yJGLCq */ 
/* ywbFoUDPl ily traian zl8yJGLCq */                 }
/* ywbFoUDPl ily traian zl8yJGLCq */             }
/* ywbFoUDPl ily traian zl8yJGLCq */ 
/* ywbFoUDPl ily traian zl8yJGLCq */ 
/* ywbFoUDPl ily traian zl8yJGLCq */          }
/* ywbFoUDPl ily traian zl8yJGLCq */          if(cate>0) return 1;
/* ywbFoUDPl ily traian zl8yJGLCq */          return 0;
/* ywbFoUDPl ily traian zl8yJGLCq */ }
/* ywbFoUDPl ily traian zl8yJGLCq */ int main()
/* ywbFoUDPl ily traian zl8yJGLCq */ {
/* ywbFoUDPl ily traian zl8yJGLCq */     long long n,x,cate=0,q,maxim=-1;
/* ywbFoUDPl ily traian zl8yJGLCq */      cin>>n;
/* ywbFoUDPl ily traian zl8yJGLCq */      for(int i=1;i<=n;i++)
/* ywbFoUDPl ily traian zl8yJGLCq */      {
/* ywbFoUDPl ily traian zl8yJGLCq */          cin>>x;
/* ywbFoUDPl ily traian zl8yJGLCq */          if(aproapeprim(x))
/* ywbFoUDPl ily traian zl8yJGLCq */          {
/* ywbFoUDPl ily traian zl8yJGLCq */              if(x>maxim)
/* ywbFoUDPl ily traian zl8yJGLCq */              {
/* ywbFoUDPl ily traian zl8yJGLCq */                  maxim=x;
/* ywbFoUDPl ily traian zl8yJGLCq */                  cate=1;
/* ywbFoUDPl ily traian zl8yJGLCq */              }
/* ywbFoUDPl ily traian zl8yJGLCq */              else
/* ywbFoUDPl ily traian zl8yJGLCq */                 if(x==maxim)
/* ywbFoUDPl ily traian zl8yJGLCq */              {
/* ywbFoUDPl ily traian zl8yJGLCq */                  cate++;
/* ywbFoUDPl ily traian zl8yJGLCq */                  maxim=x;
/* ywbFoUDPl ily traian zl8yJGLCq */              }
/* ywbFoUDPl ily traian zl8yJGLCq */          }
/* ywbFoUDPl ily traian zl8yJGLCq */      }
/* ywbFoUDPl ily traian zl8yJGLCq */      cout<<maxim<<" "<<cate;
/* ywbFoUDPl ily traian zl8yJGLCq */     return 0;
/* ywbFoUDPl ily traian zl8yJGLCq */ }