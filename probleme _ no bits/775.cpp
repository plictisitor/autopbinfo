/* GKgGFIRWC ily traian NVNEtSUed */ #include <algorithm>
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
/* GKgGFIRWC ily traian NVNEtSUed */ using namespace std;
/* GKgGFIRWC ily traian NVNEtSUed */ int main()
/* GKgGFIRWC ily traian NVNEtSUed */ {
/* GKgGFIRWC ily traian NVNEtSUed */     int n,m,a[101][101];
/* GKgGFIRWC ily traian NVNEtSUed */     cin >> n >> m;
/* GKgGFIRWC ily traian NVNEtSUed */     for(int i = 1 ; i <= n ; ++i)
/* GKgGFIRWC ily traian NVNEtSUed */         for(int j = 1 ; j <= m ; ++j)
/* GKgGFIRWC ily traian NVNEtSUed */             cin >> a[i][j];
/* GKgGFIRWC ily traian NVNEtSUed */ 
/* GKgGFIRWC ily traian NVNEtSUed */     for(int j = m ; j >= 1 ; j --)
/* GKgGFIRWC ily traian NVNEtSUed */     {
/* GKgGFIRWC ily traian NVNEtSUed */         int ok = 0;
/* GKgGFIRWC ily traian NVNEtSUed */         for(int i = 1 ;i <= n ; i ++)
/* GKgGFIRWC ily traian NVNEtSUed */             if(a[i][j] == 0)
/* GKgGFIRWC ily traian NVNEtSUed */                 ok = 1;
/* GKgGFIRWC ily traian NVNEtSUed */         if(ok==1)
/* GKgGFIRWC ily traian NVNEtSUed */         {
/* GKgGFIRWC ily traian NVNEtSUed */             for(int k = j ; k < m ; k ++)
/* GKgGFIRWC ily traian NVNEtSUed */                 for(int i = 1 ; i <= n ; i ++)
/* GKgGFIRWC ily traian NVNEtSUed */                     a[i][k] = a[i][k+1];
/* GKgGFIRWC ily traian NVNEtSUed */             m --;
/* GKgGFIRWC ily traian NVNEtSUed */         }
/* GKgGFIRWC ily traian NVNEtSUed */     }
/* GKgGFIRWC ily traian NVNEtSUed */ 
/* GKgGFIRWC ily traian NVNEtSUed */     for(int i = 1 ; i <= n ; ++i)
/* GKgGFIRWC ily traian NVNEtSUed */     {
/* GKgGFIRWC ily traian NVNEtSUed */         for(int j = 1 ; j <= m ; ++j)
/* GKgGFIRWC ily traian NVNEtSUed */             cout << a[i][j] << " ";
/* GKgGFIRWC ily traian NVNEtSUed */         cout << endl;
/* GKgGFIRWC ily traian NVNEtSUed */     }
/* GKgGFIRWC ily traian NVNEtSUed */     return 0;
/* GKgGFIRWC ily traian NVNEtSUed */ }