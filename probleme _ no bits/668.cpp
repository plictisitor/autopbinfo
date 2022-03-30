/* xwGBHjTLN ily traian wmWGaJvQc */ #include <algorithm>
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
/* xwGBHjTLN ily traian wmWGaJvQc */ using namespace std;
/* xwGBHjTLN ily traian wmWGaJvQc */ 
/* xwGBHjTLN ily traian wmWGaJvQc */ int main()
/* xwGBHjTLN ily traian wmWGaJvQc */ {
/* xwGBHjTLN ily traian wmWGaJvQc */     int n , m , a[103][103] , ind , maxi , cate=0 , cnt = 0 , v[101];
/* xwGBHjTLN ily traian wmWGaJvQc */     cin >> n >> m;
/* xwGBHjTLN ily traian wmWGaJvQc */     for(int i = 0 ; i < n ; ++i)
/* xwGBHjTLN ily traian wmWGaJvQc */         for(int j = 0 ; j < m ; ++j) cin >> a[i][j];
/* xwGBHjTLN ily traian wmWGaJvQc */     for(int i = 0 ; i < n ; ++i)
/* xwGBHjTLN ily traian wmWGaJvQc */     {
/* xwGBHjTLN ily traian wmWGaJvQc */         cnt = 0;
/* xwGBHjTLN ily traian wmWGaJvQc */         for(int j = 0 ; j < m ; ++j)
/* xwGBHjTLN ily traian wmWGaJvQc */         {
/* xwGBHjTLN ily traian wmWGaJvQc */             if(v[j]==a[i][j])
/* xwGBHjTLN ily traian wmWGaJvQc */             cnt++;
/* xwGBHjTLN ily traian wmWGaJvQc */             v[j]=a[i][j];
/* xwGBHjTLN ily traian wmWGaJvQc */         }
/* xwGBHjTLN ily traian wmWGaJvQc */         if ( cnt == m) cate++;
/* xwGBHjTLN ily traian wmWGaJvQc */     }
/* xwGBHjTLN ily traian wmWGaJvQc */     cout<<cate;
/* xwGBHjTLN ily traian wmWGaJvQc */     return 0;
/* xwGBHjTLN ily traian wmWGaJvQc */ }