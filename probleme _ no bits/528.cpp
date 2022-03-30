/* jT9WTrPHo ily traian ZKbM1PhtY */ #include <algorithm>
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
/* jT9WTrPHo ily traian ZKbM1PhtY */ 
/* jT9WTrPHo ily traian ZKbM1PhtY */ using namespace std;
/* jT9WTrPHo ily traian ZKbM1PhtY */ int main()
/* jT9WTrPHo ily traian ZKbM1PhtY */ {
/* jT9WTrPHo ily traian ZKbM1PhtY */     int n , m , p = 0 , a[1001] , b[1001] , u[2002] , r[1001];
/* jT9WTrPHo ily traian ZKbM1PhtY */     cin >> n;
/* jT9WTrPHo ily traian ZKbM1PhtY */     for(int i = 0 ; i < n; ++i)
/* jT9WTrPHo ily traian ZKbM1PhtY */     {
/* jT9WTrPHo ily traian ZKbM1PhtY */         cin >> a[i];
/* jT9WTrPHo ily traian ZKbM1PhtY */         u[i]=a[i];
/* jT9WTrPHo ily traian ZKbM1PhtY */     }
/* jT9WTrPHo ily traian ZKbM1PhtY */     cin >> m;
/* jT9WTrPHo ily traian ZKbM1PhtY */     int s = n + m;
/* jT9WTrPHo ily traian ZKbM1PhtY */     for(int i = 0 ; i < m; ++i)
/* jT9WTrPHo ily traian ZKbM1PhtY */     {
/* jT9WTrPHo ily traian ZKbM1PhtY */         cin >> b[i];
/* jT9WTrPHo ily traian ZKbM1PhtY */         u[i+n]=b[i];
/* jT9WTrPHo ily traian ZKbM1PhtY */     }
/* jT9WTrPHo ily traian ZKbM1PhtY */     sort(u , u+s);
/* jT9WTrPHo ily traian ZKbM1PhtY */     for(int i = 0 ; i < s; ++i)
/* jT9WTrPHo ily traian ZKbM1PhtY */         if(u[i - 1] != u[i]) cout << u[i] << " ";
/* jT9WTrPHo ily traian ZKbM1PhtY */     cout << endl;
/* jT9WTrPHo ily traian ZKbM1PhtY */     for(int i = 0 ; i < n ; ++i)
/* jT9WTrPHo ily traian ZKbM1PhtY */     {
/* jT9WTrPHo ily traian ZKbM1PhtY */         for(int j = 0 ; j < m ; ++j)
/* jT9WTrPHo ily traian ZKbM1PhtY */             if(a[i]==b[j])
/* jT9WTrPHo ily traian ZKbM1PhtY */             {
/* jT9WTrPHo ily traian ZKbM1PhtY */                 r[p]=a[i];
/* jT9WTrPHo ily traian ZKbM1PhtY */                 p++;
/* jT9WTrPHo ily traian ZKbM1PhtY */             }
/* jT9WTrPHo ily traian ZKbM1PhtY */     }
/* jT9WTrPHo ily traian ZKbM1PhtY */     sort(r , r+p);
/* jT9WTrPHo ily traian ZKbM1PhtY */     for(int i = 0 ; i < p ; ++i)
/* jT9WTrPHo ily traian ZKbM1PhtY */         if(r[i-1]!=r[i])
/* jT9WTrPHo ily traian ZKbM1PhtY */             cout << r[i] << ' ';
/* jT9WTrPHo ily traian ZKbM1PhtY */     return 0;
/* jT9WTrPHo ily traian ZKbM1PhtY */ }