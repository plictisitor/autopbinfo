/* 201s38zbS ily traian yu0PLVdBQ */ #include <algorithm>
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
/* 201s38zbS ily traian yu0PLVdBQ */ using namespace std;
/* 201s38zbS ily traian yu0PLVdBQ */ ifstream cin("traversare.in");
/* 201s38zbS ily traian yu0PLVdBQ */ ofstream cout("traversare.out");
/* 201s38zbS ily traian yu0PLVdBQ */ const int di[]={-1 , 0 , 1 , 0};
/* 201s38zbS ily traian yu0PLVdBQ */ const int dj[]={0 , 1 , 0 , -1};
/* 201s38zbS ily traian yu0PLVdBQ */ int n , m ;
/* 201s38zbS ily traian yu0PLVdBQ */ int a[1002][1002], aux[1002][1002];
/* 201s38zbS ily traian yu0PLVdBQ */ 
/* 201s38zbS ily traian yu0PLVdBQ */ int ip , jp , is , js;
/* 201s38zbS ily traian yu0PLVdBQ */ 
/* 201s38zbS ily traian yu0PLVdBQ */ struct poz{int i , j;};
/* 201s38zbS ily traian yu0PLVdBQ */ poz q[1000000];
/* 201s38zbS ily traian yu0PLVdBQ */ 
/* 201s38zbS ily traian yu0PLVdBQ */ bool inside(int i , int j){return i>=1 && i<=n && j>=1 && j<=m;}
/* 201s38zbS ily traian yu0PLVdBQ */ int lee(int dr)
/* 201s38zbS ily traian yu0PLVdBQ */ {
/* 201s38zbS ily traian yu0PLVdBQ */     int st;
/* 201s38zbS ily traian yu0PLVdBQ */     st=1;
/* 201s38zbS ily traian yu0PLVdBQ */     while(st<=dr)
/* 201s38zbS ily traian yu0PLVdBQ */     {
/* 201s38zbS ily traian yu0PLVdBQ */         int i = q[st].i;
/* 201s38zbS ily traian yu0PLVdBQ */         int j = q[st].j;
/* 201s38zbS ily traian yu0PLVdBQ */         if (i == n)break;
/* 201s38zbS ily traian yu0PLVdBQ */         for(int d = 0 ; d < 4 ; d++)
/* 201s38zbS ily traian yu0PLVdBQ */         {
/* 201s38zbS ily traian yu0PLVdBQ */             int inou=i+di[d];
/* 201s38zbS ily traian yu0PLVdBQ */             int jnou=j+dj[d];
/* 201s38zbS ily traian yu0PLVdBQ */             if(inside(inou,jnou) && a[inou][jnou]==0)
/* 201s38zbS ily traian yu0PLVdBQ */             {
/* 201s38zbS ily traian yu0PLVdBQ */                 q[++dr].i=inou;
/* 201s38zbS ily traian yu0PLVdBQ */                 q[dr].j=jnou;
/* 201s38zbS ily traian yu0PLVdBQ */                 a[inou][jnou]=a[i][j]+1;
/* 201s38zbS ily traian yu0PLVdBQ */             }
/* 201s38zbS ily traian yu0PLVdBQ */         }
/* 201s38zbS ily traian yu0PLVdBQ */         st++;
/* 201s38zbS ily traian yu0PLVdBQ */     }
/* 201s38zbS ily traian yu0PLVdBQ */     return a[q[st].i][q[st].j];
/* 201s38zbS ily traian yu0PLVdBQ */ }
/* 201s38zbS ily traian yu0PLVdBQ */ void renew()
/* 201s38zbS ily traian yu0PLVdBQ */ {
/* 201s38zbS ily traian yu0PLVdBQ */     for(int i = 1 ; i <=n ; ++i)
/* 201s38zbS ily traian yu0PLVdBQ */         for(int j = 1 ; j <=m ; ++j)
/* 201s38zbS ily traian yu0PLVdBQ */             a[i][j] = aux[i][j];
/* 201s38zbS ily traian yu0PLVdBQ */ }
/* 201s38zbS ily traian yu0PLVdBQ */ int main()
/* 201s38zbS ily traian yu0PLVdBQ */ {
/* 201s38zbS ily traian yu0PLVdBQ */     cin >> n >> m;
/* 201s38zbS ily traian yu0PLVdBQ */     for(int i = 1 ; i <=n ; ++i)
/* 201s38zbS ily traian yu0PLVdBQ */         for(int j = 1 ; j <=m ; ++j)
/* 201s38zbS ily traian yu0PLVdBQ */         {cin >> a[i][j];
/* 201s38zbS ily traian yu0PLVdBQ */         }
/* 201s38zbS ily traian yu0PLVdBQ */ 
/* 201s38zbS ily traian yu0PLVdBQ */ 
/* 201s38zbS ily traian yu0PLVdBQ */     int dr = 0;
/* 201s38zbS ily traian yu0PLVdBQ */     for (int j = 1; j <= m; j ++)
/* 201s38zbS ily traian yu0PLVdBQ */     {
/* 201s38zbS ily traian yu0PLVdBQ */         if (a[1][j] == 0)
/* 201s38zbS ily traian yu0PLVdBQ */         {
/* 201s38zbS ily traian yu0PLVdBQ */             poz start;
/* 201s38zbS ily traian yu0PLVdBQ */             start.i = 1;
/* 201s38zbS ily traian yu0PLVdBQ */             start.j = j;
/* 201s38zbS ily traian yu0PLVdBQ */             a[1][j] = 1;
/* 201s38zbS ily traian yu0PLVdBQ */             q[++dr] = start;
/* 201s38zbS ily traian yu0PLVdBQ */         }
/* 201s38zbS ily traian yu0PLVdBQ */     }
/* 201s38zbS ily traian yu0PLVdBQ */     cout << lee(dr);
/* 201s38zbS ily traian yu0PLVdBQ */     return 0;
/* 201s38zbS ily traian yu0PLVdBQ */ }