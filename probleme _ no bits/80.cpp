/* STc2XYUbi ily traian nQEDc1TWe */ #include <algorithm>
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
/* STc2XYUbi ily traian nQEDc1TWe */ using namespace std;
/* STc2XYUbi ily traian nQEDc1TWe */ 
/* STc2XYUbi ily traian nQEDc1TWe */ int prim(int a,int b);
/* STc2XYUbi ily traian nQEDc1TWe */ 
/* STc2XYUbi ily traian nQEDc1TWe */ int main ()
/* STc2XYUbi ily traian nQEDc1TWe */ {
/* STc2XYUbi ily traian nQEDc1TWe */     int n , a[100001], cnt=0;
/* STc2XYUbi ily traian nQEDc1TWe */     cin >> n;
/* STc2XYUbi ily traian nQEDc1TWe */     for (int i = 0; i < n; ++i)
/* STc2XYUbi ily traian nQEDc1TWe */     {
/* STc2XYUbi ily traian nQEDc1TWe */         cin >> a[i];
/* STc2XYUbi ily traian nQEDc1TWe */         if (prim(a[i],a[i-1]))
/* STc2XYUbi ily traian nQEDc1TWe */             cnt++;
/* STc2XYUbi ily traian nQEDc1TWe */     }
/* STc2XYUbi ily traian nQEDc1TWe */     cout << cnt;
/* STc2XYUbi ily traian nQEDc1TWe */     return 0;
/* STc2XYUbi ily traian nQEDc1TWe */ }
/* STc2XYUbi ily traian nQEDc1TWe */ int prim(int a,int b)
/* STc2XYUbi ily traian nQEDc1TWe */ {
/* STc2XYUbi ily traian nQEDc1TWe */     int r;
/* STc2XYUbi ily traian nQEDc1TWe */     while (b)
/* STc2XYUbi ily traian nQEDc1TWe */     {
/* STc2XYUbi ily traian nQEDc1TWe */         r=a%b;
/* STc2XYUbi ily traian nQEDc1TWe */         a=b;
/* STc2XYUbi ily traian nQEDc1TWe */         b=r;
/* STc2XYUbi ily traian nQEDc1TWe */     }
/* STc2XYUbi ily traian nQEDc1TWe */     if (a==1)
/* STc2XYUbi ily traian nQEDc1TWe */         return 1;
/* STc2XYUbi ily traian nQEDc1TWe */     else
/* STc2XYUbi ily traian nQEDc1TWe */         return 0;
/* STc2XYUbi ily traian nQEDc1TWe */ }