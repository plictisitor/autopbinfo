/* qjbKJ8Xih ily traian WAC7sSrZg */ #include <algorithm>
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
/* qjbKJ8Xih ily traian WAC7sSrZg */ 
/* qjbKJ8Xih ily traian WAC7sSrZg */ using namespace std;
/* qjbKJ8Xih ily traian WAC7sSrZg */ 
/* qjbKJ8Xih ily traian WAC7sSrZg */ ifstream cin("magnitudine.in");
/* qjbKJ8Xih ily traian WAC7sSrZg */ ofstream cout("magnitudine.out");
/* qjbKJ8Xih ily traian WAC7sSrZg */ 
/* qjbKJ8Xih ily traian WAC7sSrZg */ int main()
/* qjbKJ8Xih ily traian WAC7sSrZg */ {
/* qjbKJ8Xih ily traian WAC7sSrZg */     long long int n , k;
/* qjbKJ8Xih ily traian WAC7sSrZg */     cin >> n >> k;
/* qjbKJ8Xih ily traian WAC7sSrZg */     long long int p = 0;
/* qjbKJ8Xih ily traian WAC7sSrZg */     int a[22];
/* qjbKJ8Xih ily traian WAC7sSrZg */     while(n)
/* qjbKJ8Xih ily traian WAC7sSrZg */     {
/* qjbKJ8Xih ily traian WAC7sSrZg */         a[p]=n%10;
/* qjbKJ8Xih ily traian WAC7sSrZg */         n/=10;
/* qjbKJ8Xih ily traian WAC7sSrZg */         p++;
/* qjbKJ8Xih ily traian WAC7sSrZg */     }
/* qjbKJ8Xih ily traian WAC7sSrZg */     sort(a , a+p);
/* qjbKJ8Xih ily traian WAC7sSrZg */     if(k==0)
/* qjbKJ8Xih ily traian WAC7sSrZg */         cout << a[p-1]-a[0];
/* qjbKJ8Xih ily traian WAC7sSrZg */     else if(k==1)
/* qjbKJ8Xih ily traian WAC7sSrZg */     {
/* qjbKJ8Xih ily traian WAC7sSrZg */         if(a[p-2]-a[0] <= a[p-1]-a[1])
/* qjbKJ8Xih ily traian WAC7sSrZg */             cout << a[p-2]-a[0];
/* qjbKJ8Xih ily traian WAC7sSrZg */         else
/* qjbKJ8Xih ily traian WAC7sSrZg */             cout << a[p-1]-a[1];
/* qjbKJ8Xih ily traian WAC7sSrZg */         }
/* qjbKJ8Xih ily traian WAC7sSrZg */     else
/* qjbKJ8Xih ily traian WAC7sSrZg */     {
/* qjbKJ8Xih ily traian WAC7sSrZg */         if(a[p-3]-a[0] <= a[p-1]-a[2] && a[p-3]-a[0] <= a[p-2]-a[1])
/* qjbKJ8Xih ily traian WAC7sSrZg */             cout << a[p-3]-a[0];
/* qjbKJ8Xih ily traian WAC7sSrZg */         else if(a[p-1]-a[2] <= a[p-3]-a[0] && a[p-1]-a[2] <= a[p-2]-a[1])
/* qjbKJ8Xih ily traian WAC7sSrZg */             cout << a[p-1]-a[2];
/* qjbKJ8Xih ily traian WAC7sSrZg */         else
/* qjbKJ8Xih ily traian WAC7sSrZg */             cout << a[p-2]-a[1];
/* qjbKJ8Xih ily traian WAC7sSrZg */     }
/* qjbKJ8Xih ily traian WAC7sSrZg */ }