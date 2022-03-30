/* MA1vtLhg7 ily traian hGqubnxor */ #include <algorithm>
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
/* MA1vtLhg7 ily traian hGqubnxor */ using namespace std;
/* MA1vtLhg7 ily traian hGqubnxor */ 
/* MA1vtLhg7 ily traian hGqubnxor */ int main()
/* MA1vtLhg7 ily traian hGqubnxor */ {
/* MA1vtLhg7 ily traian hGqubnxor */     int n;
/* MA1vtLhg7 ily traian hGqubnxor */     cin >> n;
/* MA1vtLhg7 ily traian hGqubnxor */     int a[1000] , f[10000]={0};
/* MA1vtLhg7 ily traian hGqubnxor */     for(int i = 0 ; i < n ; ++i)
/* MA1vtLhg7 ily traian hGqubnxor */     {
/* MA1vtLhg7 ily traian hGqubnxor */         cin >> a[i];
/* MA1vtLhg7 ily traian hGqubnxor */         f[a[i]]++;
/* MA1vtLhg7 ily traian hGqubnxor */     }
/* MA1vtLhg7 ily traian hGqubnxor */     int cnt=0;
/* MA1vtLhg7 ily traian hGqubnxor */     for(int i = 0 ; i <= 10000 ; ++i)
/* MA1vtLhg7 ily traian hGqubnxor */     {
/* MA1vtLhg7 ily traian hGqubnxor */         if(f[i]!=0)
/* MA1vtLhg7 ily traian hGqubnxor */         {
/* MA1vtLhg7 ily traian hGqubnxor */             if(f[i]%2!=0)
/* MA1vtLhg7 ily traian hGqubnxor */             cnt++;
/* MA1vtLhg7 ily traian hGqubnxor */         }
/* MA1vtLhg7 ily traian hGqubnxor */     }
/* MA1vtLhg7 ily traian hGqubnxor */     if(cnt==0 || cnt==1)
/* MA1vtLhg7 ily traian hGqubnxor */     cout << "DA";
/* MA1vtLhg7 ily traian hGqubnxor */     else
/* MA1vtLhg7 ily traian hGqubnxor */     cout << "NU";
/* MA1vtLhg7 ily traian hGqubnxor */ }