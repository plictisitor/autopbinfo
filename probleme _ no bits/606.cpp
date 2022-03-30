/* ZpV2VNGmS ily traian ZQMBwobXd */ #include <algorithm>
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
/* ZpV2VNGmS ily traian ZQMBwobXd */ 
/* ZpV2VNGmS ily traian ZQMBwobXd */ using namespace std;
/* ZpV2VNGmS ily traian ZQMBwobXd */ ifstream cin("culori.in");
/* ZpV2VNGmS ily traian ZQMBwobXd */ ofstream cout("culori.out");
/* ZpV2VNGmS ily traian ZQMBwobXd */ int main()
/* ZpV2VNGmS ily traian ZQMBwobXd */ {
/* ZpV2VNGmS ily traian ZQMBwobXd */     int n , a[1001] ,v[1001] , l = 1 , cnt = 0 , ok = 0;
/* ZpV2VNGmS ily traian ZQMBwobXd */     cin >> n;
/* ZpV2VNGmS ily traian ZQMBwobXd */     for(int i = 0 ; i < n ; ++i)
/* ZpV2VNGmS ily traian ZQMBwobXd */         cin >> a[i] , v[i]=a[i];
/* ZpV2VNGmS ily traian ZQMBwobXd */     sort(a , a+n);
/* ZpV2VNGmS ily traian ZQMBwobXd */     for(int i = 0 ; i < n ; ++i)
/* ZpV2VNGmS ily traian ZQMBwobXd */     {
/* ZpV2VNGmS ily traian ZQMBwobXd */         if(a[i]==a[i+1]) l++;
/* ZpV2VNGmS ily traian ZQMBwobXd */         else
/* ZpV2VNGmS ily traian ZQMBwobXd */         {
/* ZpV2VNGmS ily traian ZQMBwobXd */             int c = 0;
/* ZpV2VNGmS ily traian ZQMBwobXd */             for(int j = 0 ; j < n ; ++j)
/* ZpV2VNGmS ily traian ZQMBwobXd */             {
/* ZpV2VNGmS ily traian ZQMBwobXd */                 if(v[j]==a[i]) c++;
/* ZpV2VNGmS ily traian ZQMBwobXd */                 else if(c!=0) break;
/* ZpV2VNGmS ily traian ZQMBwobXd */             }
/* ZpV2VNGmS ily traian ZQMBwobXd */             if(c != l) ok = 1;
/* ZpV2VNGmS ily traian ZQMBwobXd */             cnt++;
/* ZpV2VNGmS ily traian ZQMBwobXd */             l = 1;
/* ZpV2VNGmS ily traian ZQMBwobXd */         }
/* ZpV2VNGmS ily traian ZQMBwobXd */     }
/* ZpV2VNGmS ily traian ZQMBwobXd */     cout << cnt << endl;
/* ZpV2VNGmS ily traian ZQMBwobXd */     if(ok == 0)cout << "DA";
/* ZpV2VNGmS ily traian ZQMBwobXd */     else cout << "NU";
/* ZpV2VNGmS ily traian ZQMBwobXd */     return 0;
/* ZpV2VNGmS ily traian ZQMBwobXd */ }