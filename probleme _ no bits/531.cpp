/* cj2o2WvIl ily traian hdPCS5qHO */ #include <algorithm>
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
/* cj2o2WvIl ily traian hdPCS5qHO */ 
/* cj2o2WvIl ily traian hdPCS5qHO */ using namespace std;
/* cj2o2WvIl ily traian hdPCS5qHO */ 
/* cj2o2WvIl ily traian hdPCS5qHO */ int main()
/* cj2o2WvIl ily traian hdPCS5qHO */ {
/* cj2o2WvIl ily traian hdPCS5qHO */     int n , m;
/* cj2o2WvIl ily traian hdPCS5qHO */     cin >> n >> m;
/* cj2o2WvIl ily traian hdPCS5qHO */     double a[1001] , v[1001];
/* cj2o2WvIl ily traian hdPCS5qHO */     int b[51];
/* cj2o2WvIl ily traian hdPCS5qHO */     for(int i = 0 ; i < n ; ++i)
/* cj2o2WvIl ily traian hdPCS5qHO */     {
/* cj2o2WvIl ily traian hdPCS5qHO */         int min = 1001 , max=0;
/* cj2o2WvIl ily traian hdPCS5qHO */         for(int j = 0 ; j < m ; ++j)
/* cj2o2WvIl ily traian hdPCS5qHO */         {
/* cj2o2WvIl ily traian hdPCS5qHO */             cin >> b[j];
/* cj2o2WvIl ily traian hdPCS5qHO */             if(b[j]<min)
/* cj2o2WvIl ily traian hdPCS5qHO */                 min=b[j];
/* cj2o2WvIl ily traian hdPCS5qHO */             if(b[j]>max)
/* cj2o2WvIl ily traian hdPCS5qHO */                 max=b[j];
/* cj2o2WvIl ily traian hdPCS5qHO */         }
/* cj2o2WvIl ily traian hdPCS5qHO */         int cnt=0 , sum=0;
/* cj2o2WvIl ily traian hdPCS5qHO */         for(int j = 0 ; j < m ; ++j)
/* cj2o2WvIl ily traian hdPCS5qHO */         {
/* cj2o2WvIl ily traian hdPCS5qHO */             if(b[j]!=min && b[j]!=max)
/* cj2o2WvIl ily traian hdPCS5qHO */                 cnt++ , sum+=b[j];
/* cj2o2WvIl ily traian hdPCS5qHO */         }
/* cj2o2WvIl ily traian hdPCS5qHO */         a[i]=(double)sum/cnt;
/* cj2o2WvIl ily traian hdPCS5qHO */         v[i]=(double)sum/cnt;
/* cj2o2WvIl ily traian hdPCS5qHO */     }
/* cj2o2WvIl ily traian hdPCS5qHO */     sort(a , a+n);
/* cj2o2WvIl ily traian hdPCS5qHO */     for(int i = n-1 ; i >= 0 ; --i)
/* cj2o2WvIl ily traian hdPCS5qHO */     {
/* cj2o2WvIl ily traian hdPCS5qHO */         for(int j = 0 ; j < n ; ++j)
/* cj2o2WvIl ily traian hdPCS5qHO */         {
/* cj2o2WvIl ily traian hdPCS5qHO */             if(a[i]==v[j])
/* cj2o2WvIl ily traian hdPCS5qHO */             {
/* cj2o2WvIl ily traian hdPCS5qHO */                 cout << j+1 << ' ';
/* cj2o2WvIl ily traian hdPCS5qHO */                 v[j]=-1;
/* cj2o2WvIl ily traian hdPCS5qHO */                 break;
/* cj2o2WvIl ily traian hdPCS5qHO */             }
/* cj2o2WvIl ily traian hdPCS5qHO */         }
/* cj2o2WvIl ily traian hdPCS5qHO */     }
/* cj2o2WvIl ily traian hdPCS5qHO */     return 0;
/* cj2o2WvIl ily traian hdPCS5qHO */ }