/* 8e8sL77J4 ily traian dHeoEAhlR */ #include <algorithm>
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
/* 8e8sL77J4 ily traian dHeoEAhlR */ using namespace std;
/* 8e8sL77J4 ily traian dHeoEAhlR */ int main()
/* 8e8sL77J4 ily traian dHeoEAhlR */ {
/* 8e8sL77J4 ily traian dHeoEAhlR */     std::ios::sync_with_stdio(false);
/* 8e8sL77J4 ily traian dHeoEAhlR */     int n , E[20001]={0} , max = 20000;
/* 8e8sL77J4 ily traian dHeoEAhlR */     unsigned long long c = 0,F[10001]={0};
/* 8e8sL77J4 ily traian dHeoEAhlR */     for(int i = 2 ; i <= max ; i++)
/* 8e8sL77J4 ily traian dHeoEAhlR */         E[i] = 1;
/* 8e8sL77J4 ily traian dHeoEAhlR */     for(int i = 2 ; i * i <= max; i++)
/* 8e8sL77J4 ily traian dHeoEAhlR */         if(E[i] == 1)
/* 8e8sL77J4 ily traian dHeoEAhlR */             for(int j = i * i ; j <= max ; j= j + i)
/* 8e8sL77J4 ily traian dHeoEAhlR */                 E[j] = 0;
/* 8e8sL77J4 ily traian dHeoEAhlR */     cin >> n;
/* 8e8sL77J4 ily traian dHeoEAhlR */     for(int i = 1 ; i <= n ; i++)
/* 8e8sL77J4 ily traian dHeoEAhlR */     {
/* 8e8sL77J4 ily traian dHeoEAhlR */         int x;
/* 8e8sL77J4 ily traian dHeoEAhlR */         cin >> x;
/* 8e8sL77J4 ily traian dHeoEAhlR */         F[x]++;
/* 8e8sL77J4 ily traian dHeoEAhlR */     }
/* 8e8sL77J4 ily traian dHeoEAhlR */     c += F[1]*(F[1]-1)/2;
/* 8e8sL77J4 ily traian dHeoEAhlR */     c += F[0]*F[2];
/* 8e8sL77J4 ily traian dHeoEAhlR */     for(int i = 1 ; i <= 10000 ; i = i + 2)
/* 8e8sL77J4 ily traian dHeoEAhlR */         if(F[i] != 0)
/* 8e8sL77J4 ily traian dHeoEAhlR */             for(int j = i + 1 ; j <= 10000 ; j = j + 2)
/* 8e8sL77J4 ily traian dHeoEAhlR */                 if(F[j] != 0)
/* 8e8sL77J4 ily traian dHeoEAhlR */                     if(E[i+j] == 1) c += F[i]*F[j];
/* 8e8sL77J4 ily traian dHeoEAhlR */     for(int i = 0 ; i <= 10000 ; i = i + 2)
/* 8e8sL77J4 ily traian dHeoEAhlR */         if(F[i] != 0)
/* 8e8sL77J4 ily traian dHeoEAhlR */             for(int j = i + 1 ; j <= 10000 ; j = j + 2)
/* 8e8sL77J4 ily traian dHeoEAhlR */                 if(F[j] != 0)
/* 8e8sL77J4 ily traian dHeoEAhlR */                     if(E[i+j] == 1) c += F[i]*F[j];
/* 8e8sL77J4 ily traian dHeoEAhlR */     cout<<c;
/* 8e8sL77J4 ily traian dHeoEAhlR */     return 0;
/* 8e8sL77J4 ily traian dHeoEAhlR */ }