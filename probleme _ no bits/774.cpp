/* V80u4TDHo ily traian k0LSRujFJ */ #include <algorithm>
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
/* V80u4TDHo ily traian k0LSRujFJ */ 
/* V80u4TDHo ily traian k0LSRujFJ */ using namespace std;
/* V80u4TDHo ily traian k0LSRujFJ */ int  prim(int n)
/* V80u4TDHo ily traian k0LSRujFJ */ {
/* V80u4TDHo ily traian k0LSRujFJ */     int p=1;
/* V80u4TDHo ily traian k0LSRujFJ */     if(n==0 || n==1) p=0;
/* V80u4TDHo ily traian k0LSRujFJ */     else if(n%2==0 && n!=2) p=0;
/* V80u4TDHo ily traian k0LSRujFJ */     else
/* V80u4TDHo ily traian k0LSRujFJ */         for(int i=3;i*i<=n && p==1 ;i=i+2)
/* V80u4TDHo ily traian k0LSRujFJ */     {
/* V80u4TDHo ily traian k0LSRujFJ */         if(n%i==0) p=0;
/* V80u4TDHo ily traian k0LSRujFJ */     }
/* V80u4TDHo ily traian k0LSRujFJ */         if(p==1)
/* V80u4TDHo ily traian k0LSRujFJ */             return 1;
/* V80u4TDHo ily traian k0LSRujFJ */         else return 0;
/* V80u4TDHo ily traian k0LSRujFJ */ 
/* V80u4TDHo ily traian k0LSRujFJ */ }
/* V80u4TDHo ily traian k0LSRujFJ */ 
/* V80u4TDHo ily traian k0LSRujFJ */ int main()
/* V80u4TDHo ily traian k0LSRujFJ */ {
/* V80u4TDHo ily traian k0LSRujFJ */      int n,m,a[101][101];
/* V80u4TDHo ily traian k0LSRujFJ */      cin>>n>>m;
/* V80u4TDHo ily traian k0LSRujFJ */      for(int i = 1 ; i <=n ; ++i)
/* V80u4TDHo ily traian k0LSRujFJ */         for(int j = 1 ; j <=m ; ++j)
/* V80u4TDHo ily traian k0LSRujFJ */             cin>>a[i][j];
/* V80u4TDHo ily traian k0LSRujFJ */         for(int k=1;k<=n;k++)
/* V80u4TDHo ily traian k0LSRujFJ */         {
/* V80u4TDHo ily traian k0LSRujFJ */             if(prim(a[k][1])==1)
/* V80u4TDHo ily traian k0LSRujFJ */             {
/* V80u4TDHo ily traian k0LSRujFJ */                 for(int i=k;i<n;i++)
/* V80u4TDHo ily traian k0LSRujFJ */                     for(int j=1;j<=m;j++)
/* V80u4TDHo ily traian k0LSRujFJ */                     a[i][j]=a[i+1][j];
/* V80u4TDHo ily traian k0LSRujFJ */                 n--;
/* V80u4TDHo ily traian k0LSRujFJ */                 k--;
/* V80u4TDHo ily traian k0LSRujFJ */             }
/* V80u4TDHo ily traian k0LSRujFJ */         }
/* V80u4TDHo ily traian k0LSRujFJ */ 
/* V80u4TDHo ily traian k0LSRujFJ */     for(int i = 1 ; i <=n ; ++i)
/* V80u4TDHo ily traian k0LSRujFJ */         {
/* V80u4TDHo ily traian k0LSRujFJ */             for(int j = 1 ; j <=m ; ++j)
/* V80u4TDHo ily traian k0LSRujFJ */                 cout<<a[i][j]<<" ";
/* V80u4TDHo ily traian k0LSRujFJ */             cout<<endl;
/* V80u4TDHo ily traian k0LSRujFJ */         }
/* V80u4TDHo ily traian k0LSRujFJ */     return 0;
/* V80u4TDHo ily traian k0LSRujFJ */ }