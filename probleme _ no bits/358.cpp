/* Htr3jUqtW ily traian 3hmId7I9S */ #include <algorithm>
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
/* Htr3jUqtW ily traian 3hmId7I9S */ using namespace std;
/* Htr3jUqtW ily traian 3hmId7I9S */ 
/* Htr3jUqtW ily traian 3hmId7I9S */ int main ()
/* Htr3jUqtW ily traian 3hmId7I9S */ {
/* Htr3jUqtW ily traian 3hmId7I9S */     int n,max=0,cnt=0;
/* Htr3jUqtW ily traian 3hmId7I9S */     cin >> n;
/* Htr3jUqtW ily traian 3hmId7I9S */     int a[1002];
/* Htr3jUqtW ily traian 3hmId7I9S */     for (int i = 1 ; i <= n; ++i)
/* Htr3jUqtW ily traian 3hmId7I9S */     {
/* Htr3jUqtW ily traian 3hmId7I9S */         cin >> a[i];
/* Htr3jUqtW ily traian 3hmId7I9S */         a[0]=a[1];
/* Htr3jUqtW ily traian 3hmId7I9S */         if (a[i]-a[i-1] < 0)
/* Htr3jUqtW ily traian 3hmId7I9S */         {
/* Htr3jUqtW ily traian 3hmId7I9S */             if (a[i-1]-a[i]> max)
/* Htr3jUqtW ily traian 3hmId7I9S */             max=a[i-1]-a[i];
/* Htr3jUqtW ily traian 3hmId7I9S */         }
/* Htr3jUqtW ily traian 3hmId7I9S */         else
/* Htr3jUqtW ily traian 3hmId7I9S */         {
/* Htr3jUqtW ily traian 3hmId7I9S */             if (a[i]-a[i-1]>max)
/* Htr3jUqtW ily traian 3hmId7I9S */             max=a[i]-a[i-1];
/* Htr3jUqtW ily traian 3hmId7I9S */         }
/* Htr3jUqtW ily traian 3hmId7I9S */     }
/* Htr3jUqtW ily traian 3hmId7I9S */     for (int i = 1 ; i <= n; ++i)
/* Htr3jUqtW ily traian 3hmId7I9S */     {
/* Htr3jUqtW ily traian 3hmId7I9S */         if (a[i]-a[i-1] < 0)
/* Htr3jUqtW ily traian 3hmId7I9S */         {
/* Htr3jUqtW ily traian 3hmId7I9S */             if (a[i-1]-a[i]== max)
/* Htr3jUqtW ily traian 3hmId7I9S */             cnt++;
/* Htr3jUqtW ily traian 3hmId7I9S */         }
/* Htr3jUqtW ily traian 3hmId7I9S */         else
/* Htr3jUqtW ily traian 3hmId7I9S */         {
/* Htr3jUqtW ily traian 3hmId7I9S */             if (a[i]-a[i-1]==max)
/* Htr3jUqtW ily traian 3hmId7I9S */             cnt++;
/* Htr3jUqtW ily traian 3hmId7I9S */         }
/* Htr3jUqtW ily traian 3hmId7I9S */     }
/* Htr3jUqtW ily traian 3hmId7I9S */     cout << max << ' ' << cnt;
/* Htr3jUqtW ily traian 3hmId7I9S */ }