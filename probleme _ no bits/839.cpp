/* JGbGlSGj6 ily traian CLn49AwZO */ #include <algorithm>
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
/* JGbGlSGj6 ily traian CLn49AwZO */ using namespace std;
/* JGbGlSGj6 ily traian CLn49AwZO */ 
/* JGbGlSGj6 ily traian CLn49AwZO */ int a[1001] , cnt = 0;
/* JGbGlSGj6 ily traian CLn49AwZO */ 
/* JGbGlSGj6 ily traian CLn49AwZO */ void vraja(int st , int dr)
/* JGbGlSGj6 ily traian CLn49AwZO */ {
/* JGbGlSGj6 ily traian CLn49AwZO */     cnt++;
/* JGbGlSGj6 ily traian CLn49AwZO */     int min = 10000000;
/* JGbGlSGj6 ily traian CLn49AwZO */     for(int i = st ; i <= dr ; ++i)
/* JGbGlSGj6 ily traian CLn49AwZO */         if(a[i] < min)
/* JGbGlSGj6 ily traian CLn49AwZO */             min = a[i];
/* JGbGlSGj6 ily traian CLn49AwZO */     for(int i = st ; i <= dr ; ++i)
/* JGbGlSGj6 ily traian CLn49AwZO */         a[i]-=min;
/* JGbGlSGj6 ily traian CLn49AwZO */     for(int i = st ; i <= dr ; ++i)
/* JGbGlSGj6 ily traian CLn49AwZO */         if(a[i]>0)
/* JGbGlSGj6 ily traian CLn49AwZO */         {
/* JGbGlSGj6 ily traian CLn49AwZO */             int j = i;
/* JGbGlSGj6 ily traian CLn49AwZO */             while(j < dr && a[j+1]>0)
/* JGbGlSGj6 ily traian CLn49AwZO */                 j++;
/* JGbGlSGj6 ily traian CLn49AwZO */             vraja(i , j);
/* JGbGlSGj6 ily traian CLn49AwZO */             i=j+1;
/* JGbGlSGj6 ily traian CLn49AwZO */         }
/* JGbGlSGj6 ily traian CLn49AwZO */ }
/* JGbGlSGj6 ily traian CLn49AwZO */ 
/* JGbGlSGj6 ily traian CLn49AwZO */ int main()
/* JGbGlSGj6 ily traian CLn49AwZO */ {
/* JGbGlSGj6 ily traian CLn49AwZO */     int n;
/* JGbGlSGj6 ily traian CLn49AwZO */     cin >> n;
/* JGbGlSGj6 ily traian CLn49AwZO */     for(int i = 1 ; i <= n ; ++i)
/* JGbGlSGj6 ily traian CLn49AwZO */         cin >> a[i];
/* JGbGlSGj6 ily traian CLn49AwZO */     vraja(1 , n);
/* JGbGlSGj6 ily traian CLn49AwZO */     cout << cnt;
/* JGbGlSGj6 ily traian CLn49AwZO */     return 0;
/* JGbGlSGj6 ily traian CLn49AwZO */ }