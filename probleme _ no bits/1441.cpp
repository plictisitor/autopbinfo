/* Z9VP0lmP3 ily traian Gn6CKt4If */ #include <algorithm>
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
/* Z9VP0lmP3 ily traian Gn6CKt4If */ using namespace std;
/* Z9VP0lmP3 ily traian Gn6CKt4If */ ifstream cin("submatrix.in");
/* Z9VP0lmP3 ily traian Gn6CKt4If */ ofstream cout("submatrix.out");
/* Z9VP0lmP3 ily traian Gn6CKt4If */ int n , a[1001][1001] , d[1001][1001] , maxi;
/* Z9VP0lmP3 ily traian Gn6CKt4If */ int main()
/* Z9VP0lmP3 ily traian Gn6CKt4If */ {
/* Z9VP0lmP3 ily traian Gn6CKt4If */     cin >> n;
/* Z9VP0lmP3 ily traian Gn6CKt4If */     for(int i = 1 ; i <= n ; ++i)
/* Z9VP0lmP3 ily traian Gn6CKt4If */         for(int j = 1 ; j <= n ; ++j)
/* Z9VP0lmP3 ily traian Gn6CKt4If */     {
/* Z9VP0lmP3 ily traian Gn6CKt4If */         cin >> a[i][j];
/* Z9VP0lmP3 ily traian Gn6CKt4If */         if(i==1) d[1][j]=a[i][j];
/* Z9VP0lmP3 ily traian Gn6CKt4If */         else if(j==1) d[i][1]=a[i][j];
/* Z9VP0lmP3 ily traian Gn6CKt4If */     }
/* Z9VP0lmP3 ily traian Gn6CKt4If */     for(int i = 2 ; i <= n ; ++i)
/* Z9VP0lmP3 ily traian Gn6CKt4If */         for(int j = 2 ; j <= n ; ++j)
/* Z9VP0lmP3 ily traian Gn6CKt4If */         {
/* Z9VP0lmP3 ily traian Gn6CKt4If */             if(a[i][j]==1) d[i][j]=min(d[i-1][j] , min(d[i-1][j-1] , d[i][j-1]))+1;
/* Z9VP0lmP3 ily traian Gn6CKt4If */             if(d[i][j]>maxi) maxi=d[i][j];
/* Z9VP0lmP3 ily traian Gn6CKt4If */         }
/* Z9VP0lmP3 ily traian Gn6CKt4If */     cout << maxi;
/* Z9VP0lmP3 ily traian Gn6CKt4If */ }