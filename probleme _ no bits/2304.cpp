/* usFBUx5DT ily traian OR4A4584p */ #include <algorithm>
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
/* usFBUx5DT ily traian OR4A4584p */ using namespace std;
/* usFBUx5DT ily traian OR4A4584p */ 
/* usFBUx5DT ily traian OR4A4584p */ char a[1000][21];
/* usFBUx5DT ily traian OR4A4584p */ 
/* usFBUx5DT ily traian OR4A4584p */ int main()
/* usFBUx5DT ily traian OR4A4584p */ {
/* usFBUx5DT ily traian OR4A4584p */     int n;
/* usFBUx5DT ily traian OR4A4584p */     cin >> n;
/* usFBUx5DT ily traian OR4A4584p */     for(int i = 0 ; i < n ; ++i)
/* usFBUx5DT ily traian OR4A4584p */         cin >> a[i];
/* usFBUx5DT ily traian OR4A4584p */     int k;
/* usFBUx5DT ily traian OR4A4584p */     cin >> k;
/* usFBUx5DT ily traian OR4A4584p */     for(int i = 0 ; i < n ; ++i)
/* usFBUx5DT ily traian OR4A4584p */     {
/* usFBUx5DT ily traian OR4A4584p */         int j = 0;
/* usFBUx5DT ily traian OR4A4584p */         int cnt=0;
/* usFBUx5DT ily traian OR4A4584p */         while(a[i][j]!='\0')
/* usFBUx5DT ily traian OR4A4584p */         {
/* usFBUx5DT ily traian OR4A4584p */             cnt++;
/* usFBUx5DT ily traian OR4A4584p */             j++;
/* usFBUx5DT ily traian OR4A4584p */         }
/* usFBUx5DT ily traian OR4A4584p */         if(cnt==k)
/* usFBUx5DT ily traian OR4A4584p */         {
/* usFBUx5DT ily traian OR4A4584p */             j=0;
/* usFBUx5DT ily traian OR4A4584p */             while(a[i][j]!='\0')
/* usFBUx5DT ily traian OR4A4584p */             {
/* usFBUx5DT ily traian OR4A4584p */             cout << a[i][j];
/* usFBUx5DT ily traian OR4A4584p */             j++;
/* usFBUx5DT ily traian OR4A4584p */             }
/* usFBUx5DT ily traian OR4A4584p */             cout << ' ';
/* usFBUx5DT ily traian OR4A4584p */         }
/* usFBUx5DT ily traian OR4A4584p */     }
/* usFBUx5DT ily traian OR4A4584p */     for(int i = 0 ; i <= n ; ++i)
/* usFBUx5DT ily traian OR4A4584p */     {
/* usFBUx5DT ily traian OR4A4584p */         int j = 0;
/* usFBUx5DT ily traian OR4A4584p */         int cnt=0;
/* usFBUx5DT ily traian OR4A4584p */         while(a[i][j]!='\0')
/* usFBUx5DT ily traian OR4A4584p */         {
/* usFBUx5DT ily traian OR4A4584p */             cnt++;
/* usFBUx5DT ily traian OR4A4584p */             j++;
/* usFBUx5DT ily traian OR4A4584p */         }
/* usFBUx5DT ily traian OR4A4584p */         if(cnt!=k)
/* usFBUx5DT ily traian OR4A4584p */         {
/* usFBUx5DT ily traian OR4A4584p */             j=0;
/* usFBUx5DT ily traian OR4A4584p */             while(a[i][j]!='\0')
/* usFBUx5DT ily traian OR4A4584p */             {
/* usFBUx5DT ily traian OR4A4584p */             cout << a[i][j];
/* usFBUx5DT ily traian OR4A4584p */             j++;
/* usFBUx5DT ily traian OR4A4584p */             }
/* usFBUx5DT ily traian OR4A4584p */             if(i!=n)
/* usFBUx5DT ily traian OR4A4584p */             cout << ' ';
/* usFBUx5DT ily traian OR4A4584p */         }
/* usFBUx5DT ily traian OR4A4584p */     }
/* usFBUx5DT ily traian OR4A4584p */     return 0;
/* usFBUx5DT ily traian OR4A4584p */ }