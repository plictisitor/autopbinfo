/* KHal6g3sI ily traian gn3EPwoeI */ #include <algorithm>
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
/* KHal6g3sI ily traian gn3EPwoeI */ 
/* KHal6g3sI ily traian gn3EPwoeI */ using namespace std;
/* KHal6g3sI ily traian gn3EPwoeI */ int n,ok,i;
/* KHal6g3sI ily traian gn3EPwoeI */ int main()
/* KHal6g3sI ily traian gn3EPwoeI */ {
/* KHal6g3sI ily traian gn3EPwoeI */     cin>>n;
/* KHal6g3sI ily traian gn3EPwoeI */     int a[n];
/* KHal6g3sI ily traian gn3EPwoeI */     for (i=0;i<n;i++)
/* KHal6g3sI ily traian gn3EPwoeI */     {
/* KHal6g3sI ily traian gn3EPwoeI */         cin>>a[i];
/* KHal6g3sI ily traian gn3EPwoeI */     }
/* KHal6g3sI ily traian gn3EPwoeI */     ok=1;
/* KHal6g3sI ily traian gn3EPwoeI */     for (i=0;i<n-2;i++)
/* KHal6g3sI ily traian gn3EPwoeI */     {
/* KHal6g3sI ily traian gn3EPwoeI */         if (a[i]<a[i+1])
/* KHal6g3sI ily traian gn3EPwoeI */         {
/* KHal6g3sI ily traian gn3EPwoeI */             if (a[i+1]<a[i+2])
/* KHal6g3sI ily traian gn3EPwoeI */                 ok=0;
/* KHal6g3sI ily traian gn3EPwoeI */         }
/* KHal6g3sI ily traian gn3EPwoeI */         else
/* KHal6g3sI ily traian gn3EPwoeI */         {
/* KHal6g3sI ily traian gn3EPwoeI */             if (a[i]>a[i+1])
/* KHal6g3sI ily traian gn3EPwoeI */             {
/* KHal6g3sI ily traian gn3EPwoeI */                 if (a[i+1]>a[i+2])
/* KHal6g3sI ily traian gn3EPwoeI */                     ok=0;
/* KHal6g3sI ily traian gn3EPwoeI */             }
/* KHal6g3sI ily traian gn3EPwoeI */         }
/* KHal6g3sI ily traian gn3EPwoeI */         if (a[i]==a[i+1])
/* KHal6g3sI ily traian gn3EPwoeI */             ok=0;
/* KHal6g3sI ily traian gn3EPwoeI */     }
/* KHal6g3sI ily traian gn3EPwoeI */     if (ok==0)
/* KHal6g3sI ily traian gn3EPwoeI */         cout<<"NU";
/* KHal6g3sI ily traian gn3EPwoeI */     else cout<<"DA";
/* KHal6g3sI ily traian gn3EPwoeI */ 
/* KHal6g3sI ily traian gn3EPwoeI */     return 0;
/* KHal6g3sI ily traian gn3EPwoeI */ }