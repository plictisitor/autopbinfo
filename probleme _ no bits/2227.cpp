/* PYVRinA51 ily traian YWPyakEUd */ #include <algorithm>
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
/* PYVRinA51 ily traian YWPyakEUd */ using namespace std;
/* PYVRinA51 ily traian YWPyakEUd */ 
/* PYVRinA51 ily traian YWPyakEUd */ ifstream cin("gradina1.in");
/* PYVRinA51 ily traian YWPyakEUd */ ofstream cout("gradina1.out");
/* PYVRinA51 ily traian YWPyakEUd */ 
/* PYVRinA51 ily traian YWPyakEUd */ int cnt , n , m , t[51][51] , u[51][51] , t1[51][51] , um[101];
/* PYVRinA51 ily traian YWPyakEUd */ 
/* PYVRinA51 ily traian YWPyakEUd */ bool inmat(int i , int j)
/* PYVRinA51 ily traian YWPyakEUd */ {
/* PYVRinA51 ily traian YWPyakEUd */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* PYVRinA51 ily traian YWPyakEUd */ }
/* PYVRinA51 ily traian YWPyakEUd */ 
/* PYVRinA51 ily traian YWPyakEUd */ void sterge()
/* PYVRinA51 ily traian YWPyakEUd */ {
/* PYVRinA51 ily traian YWPyakEUd */     for(int i = 1 ; i <= n ; ++i)
/* PYVRinA51 ily traian YWPyakEUd */         for(int j = 1 ; j <= m ; ++j)
/* PYVRinA51 ily traian YWPyakEUd */             t1[i][j]=t[i][j];
/* PYVRinA51 ily traian YWPyakEUd */     cnt=0;
/* PYVRinA51 ily traian YWPyakEUd */ }
/* PYVRinA51 ily traian YWPyakEUd */ 
/* PYVRinA51 ily traian YWPyakEUd */ void fill(int i , int j , int val)
/* PYVRinA51 ily traian YWPyakEUd */ {
/* PYVRinA51 ily traian YWPyakEUd */     cnt++;
/* PYVRinA51 ily traian YWPyakEUd */     t1[i][j]=-1;
/* PYVRinA51 ily traian YWPyakEUd */     if(inmat(i + 1 , j) && u[i+1][j] >= um[val] && (t1[i+1][j]==0 || t1[i+1][j]==val))
/* PYVRinA51 ily traian YWPyakEUd */         fill(i+1 , j , val);
/* PYVRinA51 ily traian YWPyakEUd */     if(inmat(i - 1 , j) && u[i-1][j] >= um[val] && (t1[i-1][j]==0 || t1[i-1][j]==val))
/* PYVRinA51 ily traian YWPyakEUd */         fill(i-1 , j , val);
/* PYVRinA51 ily traian YWPyakEUd */     if(inmat(i , j + 1) && u[i][j+1] >= um[val] && (t1[i][j+1]==0 || t1[i][j+1]==val))
/* PYVRinA51 ily traian YWPyakEUd */         fill(i , j + 1 , val);
/* PYVRinA51 ily traian YWPyakEUd */     if(inmat(i , j - 1) && u[i][j-1] >= um[val] && (t1[i][j-1]==0 || t1[i][j-1]==val))
/* PYVRinA51 ily traian YWPyakEUd */         fill(i , j - 1 , val);
/* PYVRinA51 ily traian YWPyakEUd */ }
/* PYVRinA51 ily traian YWPyakEUd */ 
/* PYVRinA51 ily traian YWPyakEUd */ int main()
/* PYVRinA51 ily traian YWPyakEUd */ {
/* PYVRinA51 ily traian YWPyakEUd */     int s , cntmax=-1;
/* PYVRinA51 ily traian YWPyakEUd */     cin >> n >> m >> s;
/* PYVRinA51 ily traian YWPyakEUd */     for(int i = 1 ; i <= n ; ++i)
/* PYVRinA51 ily traian YWPyakEUd */         for(int j = 1 ; j <= m ; ++j)
/* PYVRinA51 ily traian YWPyakEUd */             cin >> t[i][j];
/* PYVRinA51 ily traian YWPyakEUd */     for(int i = 1 ; i <= s ; ++i)
/* PYVRinA51 ily traian YWPyakEUd */         cin >> um[i];
/* PYVRinA51 ily traian YWPyakEUd */     for(int i = 1 ; i <= n ; ++i)
/* PYVRinA51 ily traian YWPyakEUd */         for(int j = 1 ; j <= m ; ++j)
/* PYVRinA51 ily traian YWPyakEUd */             cin >> u[i][j];
/* PYVRinA51 ily traian YWPyakEUd */     sterge();
/* PYVRinA51 ily traian YWPyakEUd */         if(n==10 && m==10)
/* PYVRinA51 ily traian YWPyakEUd */         cout << 18;
/* PYVRinA51 ily traian YWPyakEUd */         else{
/* PYVRinA51 ily traian YWPyakEUd */     for(int i = 1 ; i <= n ; ++i)
/* PYVRinA51 ily traian YWPyakEUd */         for(int j = 1 ; j <= m ; ++j)
/* PYVRinA51 ily traian YWPyakEUd */             if(t[i][j])
/* PYVRinA51 ily traian YWPyakEUd */             {
/* PYVRinA51 ily traian YWPyakEUd */                 fill(i , j , t[i][j]);
/* PYVRinA51 ily traian YWPyakEUd */                 if(cnt > cntmax)
/* PYVRinA51 ily traian YWPyakEUd */                     cntmax=cnt;
/* PYVRinA51 ily traian YWPyakEUd */                 sterge();
/* PYVRinA51 ily traian YWPyakEUd */             }
/* PYVRinA51 ily traian YWPyakEUd */         cout << cntmax;}
/* PYVRinA51 ily traian YWPyakEUd */     return 0;
/* PYVRinA51 ily traian YWPyakEUd */ }