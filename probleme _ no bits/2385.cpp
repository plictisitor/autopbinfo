/* NmZ1sTR0F ily traian u2FRQlcgW */ #include <algorithm>
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
/* NmZ1sTR0F ily traian u2FRQlcgW */ using namespace std;
/* NmZ1sTR0F ily traian u2FRQlcgW */ 
/* NmZ1sTR0F ily traian u2FRQlcgW */ ifstream cin("oaste.in");
/* NmZ1sTR0F ily traian u2FRQlcgW */ ofstream cout("oaste.out");
/* NmZ1sTR0F ily traian u2FRQlcgW */ 
/* NmZ1sTR0F ily traian u2FRQlcgW */ int a[102][102] , b[102][102];
/* NmZ1sTR0F ily traian u2FRQlcgW */ 
/* NmZ1sTR0F ily traian u2FRQlcgW */ void fill(int i , int j , int &c)
/* NmZ1sTR0F ily traian u2FRQlcgW */ {
/* NmZ1sTR0F ily traian u2FRQlcgW */     if(a[i][j]!=0)
/* NmZ1sTR0F ily traian u2FRQlcgW */     {
/* NmZ1sTR0F ily traian u2FRQlcgW */         c+=a[i][j];
/* NmZ1sTR0F ily traian u2FRQlcgW */         a[i][j]=0;
/* NmZ1sTR0F ily traian u2FRQlcgW */         if(a[i+1][j]!=0)
/* NmZ1sTR0F ily traian u2FRQlcgW */             fill(i+1 , j , c);
/* NmZ1sTR0F ily traian u2FRQlcgW */         if(a[i-1][j]!=0)
/* NmZ1sTR0F ily traian u2FRQlcgW */             fill(i-1 , j , c);
/* NmZ1sTR0F ily traian u2FRQlcgW */         if(a[i][j-1]!=0)
/* NmZ1sTR0F ily traian u2FRQlcgW */             fill(i , j-1 , c);
/* NmZ1sTR0F ily traian u2FRQlcgW */         if(a[i][j+1]!=0)
/* NmZ1sTR0F ily traian u2FRQlcgW */             fill(i , j+1 , c);
/* NmZ1sTR0F ily traian u2FRQlcgW */     }
/* NmZ1sTR0F ily traian u2FRQlcgW */ }
/* NmZ1sTR0F ily traian u2FRQlcgW */ 
/* NmZ1sTR0F ily traian u2FRQlcgW */ int ifi=0 , jfi=0;
/* NmZ1sTR0F ily traian u2FRQlcgW */ 
/* NmZ1sTR0F ily traian u2FRQlcgW */ void fill1(int i , int j , int &max)
/* NmZ1sTR0F ily traian u2FRQlcgW */ {
/* NmZ1sTR0F ily traian u2FRQlcgW */     if(b[i][j]!=0)
/* NmZ1sTR0F ily traian u2FRQlcgW */     {
/* NmZ1sTR0F ily traian u2FRQlcgW */         if(b[i][j]>max)
/* NmZ1sTR0F ily traian u2FRQlcgW */             max=b[i][j] , ifi=i , jfi=j;
/* NmZ1sTR0F ily traian u2FRQlcgW */         if(b[i][j]==max)
/* NmZ1sTR0F ily traian u2FRQlcgW */         {
/* NmZ1sTR0F ily traian u2FRQlcgW */             if(i < ifi)
/* NmZ1sTR0F ily traian u2FRQlcgW */                 ifi=i , jfi=j;
/* NmZ1sTR0F ily traian u2FRQlcgW */             if(i == ifi && j < jfi)
/* NmZ1sTR0F ily traian u2FRQlcgW */                 jfi=j;
/* NmZ1sTR0F ily traian u2FRQlcgW */                 
/* NmZ1sTR0F ily traian u2FRQlcgW */         }
/* NmZ1sTR0F ily traian u2FRQlcgW */         b[i][j]=0;
/* NmZ1sTR0F ily traian u2FRQlcgW */         if(b[i+1][j]!=0)
/* NmZ1sTR0F ily traian u2FRQlcgW */             fill1(i+1 , j , max);
/* NmZ1sTR0F ily traian u2FRQlcgW */         if(b[i-1][j]!=0)
/* NmZ1sTR0F ily traian u2FRQlcgW */             fill1(i-1 , j , max);
/* NmZ1sTR0F ily traian u2FRQlcgW */         if(b[i][j-1]!=0)
/* NmZ1sTR0F ily traian u2FRQlcgW */             fill1(i , j-1 , max);
/* NmZ1sTR0F ily traian u2FRQlcgW */         if(b[i][j+1]!=0)
/* NmZ1sTR0F ily traian u2FRQlcgW */             fill1(i , j+1 , max);
/* NmZ1sTR0F ily traian u2FRQlcgW */     }
/* NmZ1sTR0F ily traian u2FRQlcgW */ }
/* NmZ1sTR0F ily traian u2FRQlcgW */ 
/* NmZ1sTR0F ily traian u2FRQlcgW */ void fill2(int i , int j)
/* NmZ1sTR0F ily traian u2FRQlcgW */ {
/* NmZ1sTR0F ily traian u2FRQlcgW */     if(b[i][j]!=0)
/* NmZ1sTR0F ily traian u2FRQlcgW */     {
/* NmZ1sTR0F ily traian u2FRQlcgW */         b[i][j]=0;
/* NmZ1sTR0F ily traian u2FRQlcgW */         if(b[i+1][j]!=0)
/* NmZ1sTR0F ily traian u2FRQlcgW */             fill2(i+1 , j);
/* NmZ1sTR0F ily traian u2FRQlcgW */         if(b[i-1][j]!=0)
/* NmZ1sTR0F ily traian u2FRQlcgW */             fill2(i-1 , j);
/* NmZ1sTR0F ily traian u2FRQlcgW */         if(b[i][j-1]!=0)
/* NmZ1sTR0F ily traian u2FRQlcgW */             fill2(i , j-1);
/* NmZ1sTR0F ily traian u2FRQlcgW */         if(b[i][j+1]!=0)
/* NmZ1sTR0F ily traian u2FRQlcgW */             fill2(i , j+1);
/* NmZ1sTR0F ily traian u2FRQlcgW */     }
/* NmZ1sTR0F ily traian u2FRQlcgW */ }
/* NmZ1sTR0F ily traian u2FRQlcgW */ 
/* NmZ1sTR0F ily traian u2FRQlcgW */ int main()
/* NmZ1sTR0F ily traian u2FRQlcgW */ {
/* NmZ1sTR0F ily traian u2FRQlcgW */     int n , m;
/* NmZ1sTR0F ily traian u2FRQlcgW */     cin >> n >> m;
/* NmZ1sTR0F ily traian u2FRQlcgW */     int cnt=0;
/* NmZ1sTR0F ily traian u2FRQlcgW */     for(int i = 1 ; i <= n ; ++i)
/* NmZ1sTR0F ily traian u2FRQlcgW */         for(int j = 1 ; j <= m ; ++j)
/* NmZ1sTR0F ily traian u2FRQlcgW */             cin >> a[i][j] , b[i][j]=a[i][j];
/* NmZ1sTR0F ily traian u2FRQlcgW */     int max=0 , lmax=0;
/* NmZ1sTR0F ily traian u2FRQlcgW */     for(int i = 1 ; i <= n ; ++i)
/* NmZ1sTR0F ily traian u2FRQlcgW */         for(int j = 1 ; j <= m ; ++j)
/* NmZ1sTR0F ily traian u2FRQlcgW */             if(a[i][j]!=0)
/* NmZ1sTR0F ily traian u2FRQlcgW */             {
/* NmZ1sTR0F ily traian u2FRQlcgW */                 cnt++;
/* NmZ1sTR0F ily traian u2FRQlcgW */                 int c=0;
/* NmZ1sTR0F ily traian u2FRQlcgW */                 fill(i , j , c);
/* NmZ1sTR0F ily traian u2FRQlcgW */                 if(c > max)
/* NmZ1sTR0F ily traian u2FRQlcgW */                     max = c , lmax=cnt;
/* NmZ1sTR0F ily traian u2FRQlcgW */             }
/* NmZ1sTR0F ily traian u2FRQlcgW */     max=0;
/* NmZ1sTR0F ily traian u2FRQlcgW */     cnt=0;
/* NmZ1sTR0F ily traian u2FRQlcgW */     for(int i = 1 ; i <= n ; ++i)
/* NmZ1sTR0F ily traian u2FRQlcgW */         for(int j = 1 ; j <= m ; ++j)
/* NmZ1sTR0F ily traian u2FRQlcgW */             if(b[i][j]!=0)
/* NmZ1sTR0F ily traian u2FRQlcgW */             {
/* NmZ1sTR0F ily traian u2FRQlcgW */                 cnt++;
/* NmZ1sTR0F ily traian u2FRQlcgW */                 if(cnt==lmax)
/* NmZ1sTR0F ily traian u2FRQlcgW */                 {
/* NmZ1sTR0F ily traian u2FRQlcgW */                     fill1(i , j , max);
/* NmZ1sTR0F ily traian u2FRQlcgW */                     break;
/* NmZ1sTR0F ily traian u2FRQlcgW */                 }
/* NmZ1sTR0F ily traian u2FRQlcgW */                 else
/* NmZ1sTR0F ily traian u2FRQlcgW */                     fill2(i , j);
/* NmZ1sTR0F ily traian u2FRQlcgW */             }
/* NmZ1sTR0F ily traian u2FRQlcgW */     cout << max << ' ' << ifi << ' ' << jfi;
/* NmZ1sTR0F ily traian u2FRQlcgW */     return 0;
/* NmZ1sTR0F ily traian u2FRQlcgW */ }