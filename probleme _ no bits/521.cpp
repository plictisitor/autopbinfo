/* Umh6lqSfu ily traian cLIiae0Su */ #include <algorithm>
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
/* Umh6lqSfu ily traian cLIiae0Su */ 
/* Umh6lqSfu ily traian cLIiae0Su */ using namespace std;
/* Umh6lqSfu ily traian cLIiae0Su */ 
/* Umh6lqSfu ily traian cLIiae0Su */ int main()
/* Umh6lqSfu ily traian cLIiae0Su */ {
/* Umh6lqSfu ily traian cLIiae0Su */     int n;
/* Umh6lqSfu ily traian cLIiae0Su */     cin >> n;
/* Umh6lqSfu ily traian cLIiae0Su */     int a[1000] , v[1000];
/* Umh6lqSfu ily traian cLIiae0Su */     int k;
/* Umh6lqSfu ily traian cLIiae0Su */     cin >> k;
/* Umh6lqSfu ily traian cLIiae0Su */     int ls=n/k;
/* Umh6lqSfu ily traian cLIiae0Su */     int st=0 , dr=0;
/* Umh6lqSfu ily traian cLIiae0Su */     for(int i = 0 ; i < n ; ++i)
/* Umh6lqSfu ily traian cLIiae0Su */     cin >> a[i];
/* Umh6lqSfu ily traian cLIiae0Su */     for(int i = 0 ; i < n ; i+=ls)
/* Umh6lqSfu ily traian cLIiae0Su */     {
/* Umh6lqSfu ily traian cLIiae0Su */         int p = 0;
/* Umh6lqSfu ily traian cLIiae0Su */         for(int j = i ; j < i+ls ; ++j)
/* Umh6lqSfu ily traian cLIiae0Su */         {
/* Umh6lqSfu ily traian cLIiae0Su */             v[p]=a[j];
/* Umh6lqSfu ily traian cLIiae0Su */             p++;
/* Umh6lqSfu ily traian cLIiae0Su */         }
/* Umh6lqSfu ily traian cLIiae0Su */         for(int j = i+ls ; j < n ; j+=ls)
/* Umh6lqSfu ily traian cLIiae0Su */         {
/* Umh6lqSfu ily traian cLIiae0Su */             int cnt=0;
/* Umh6lqSfu ily traian cLIiae0Su */             p=0;
/* Umh6lqSfu ily traian cLIiae0Su */             for(int m = j; m < j+ls ; ++m)
/* Umh6lqSfu ily traian cLIiae0Su */             {
/* Umh6lqSfu ily traian cLIiae0Su */                 if(v[p]==a[m])
/* Umh6lqSfu ily traian cLIiae0Su */                 cnt++;
/* Umh6lqSfu ily traian cLIiae0Su */                 p++;
/* Umh6lqSfu ily traian cLIiae0Su */             }
/* Umh6lqSfu ily traian cLIiae0Su */             if(cnt==ls && dr==0 && st==0)
/* Umh6lqSfu ily traian cLIiae0Su */             st=i/ls+1 , dr=j/ls+1;
/* Umh6lqSfu ily traian cLIiae0Su */         }
/* Umh6lqSfu ily traian cLIiae0Su */     }
/* Umh6lqSfu ily traian cLIiae0Su */     cout << st << ' ' << dr;
/* Umh6lqSfu ily traian cLIiae0Su */ }