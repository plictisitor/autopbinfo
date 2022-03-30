/* x5DzNDL7J ily traian tIOqhxDSW */ #include <algorithm>
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
/* x5DzNDL7J ily traian tIOqhxDSW */ using namespace std;
/* x5DzNDL7J ily traian tIOqhxDSW */ 
/* x5DzNDL7J ily traian tIOqhxDSW */ long long int a[11] , sum;
/* x5DzNDL7J ily traian tIOqhxDSW */ 
/* x5DzNDL7J ily traian tIOqhxDSW */ int nrdiv(int n)
/* x5DzNDL7J ily traian tIOqhxDSW */ {
/* x5DzNDL7J ily traian tIOqhxDSW */     int cnt = 0;
/* x5DzNDL7J ily traian tIOqhxDSW */     for(int i = 1 ; i * i <= n ; ++i)
/* x5DzNDL7J ily traian tIOqhxDSW */     {
/* x5DzNDL7J ily traian tIOqhxDSW */         if(n % i == 0)
/* x5DzNDL7J ily traian tIOqhxDSW */             cnt+=2;
/* x5DzNDL7J ily traian tIOqhxDSW */         if(i * i == n)
/* x5DzNDL7J ily traian tIOqhxDSW */             cnt--;
/* x5DzNDL7J ily traian tIOqhxDSW */     }
/* x5DzNDL7J ily traian tIOqhxDSW */     return cnt;
/* x5DzNDL7J ily traian tIOqhxDSW */ }
/* x5DzNDL7J ily traian tIOqhxDSW */ 
/* x5DzNDL7J ily traian tIOqhxDSW */ int main()
/* x5DzNDL7J ily traian tIOqhxDSW */ {
/* x5DzNDL7J ily traian tIOqhxDSW */     int n , t , p;
/* x5DzNDL7J ily traian tIOqhxDSW */     cin >> n >> t >> p;
/* x5DzNDL7J ily traian tIOqhxDSW */     for(int i = 1 ; i <= n ; ++i)
/* x5DzNDL7J ily traian tIOqhxDSW */         cin >> a[i] , sum += a[i];
/* x5DzNDL7J ily traian tIOqhxDSW */     int min = 1000000000;
/* x5DzNDL7J ily traian tIOqhxDSW */     for(int i = 1 ; i <= p ; ++i)
/* x5DzNDL7J ily traian tIOqhxDSW */         if(a[i] < min)
/* x5DzNDL7J ily traian tIOqhxDSW */             min = a[i];
/* x5DzNDL7J ily traian tIOqhxDSW */     int max = 0;
/* x5DzNDL7J ily traian tIOqhxDSW */     for(int i = 1 ; i <= p ; ++i)
/* x5DzNDL7J ily traian tIOqhxDSW */         if(a[i] > max)
/* x5DzNDL7J ily traian tIOqhxDSW */             max=a[i];
/* x5DzNDL7J ily traian tIOqhxDSW */     if(t == 1)
/* x5DzNDL7J ily traian tIOqhxDSW */     {
/* x5DzNDL7J ily traian tIOqhxDSW */         int s = 0;
/* x5DzNDL7J ily traian tIOqhxDSW */         while(min)
/* x5DzNDL7J ily traian tIOqhxDSW */         {
/* x5DzNDL7J ily traian tIOqhxDSW */             s+=min%10;
/* x5DzNDL7J ily traian tIOqhxDSW */             min/=10;
/* x5DzNDL7J ily traian tIOqhxDSW */         }
/* x5DzNDL7J ily traian tIOqhxDSW */         cout << s << endl << sum;
/* x5DzNDL7J ily traian tIOqhxDSW */     }
/* x5DzNDL7J ily traian tIOqhxDSW */     else
/* x5DzNDL7J ily traian tIOqhxDSW */     {
/* x5DzNDL7J ily traian tIOqhxDSW */         cout<< nrdiv(max) << endl << sum;
/* x5DzNDL7J ily traian tIOqhxDSW */     }
/* x5DzNDL7J ily traian tIOqhxDSW */     return 0;
/* x5DzNDL7J ily traian tIOqhxDSW */ }