/* zDBESFiFd ily traian Rkh6cvtDa */ #include <algorithm>
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
/* zDBESFiFd ily traian Rkh6cvtDa */ using namespace std;
/* zDBESFiFd ily traian Rkh6cvtDa */ 
/* zDBESFiFd ily traian Rkh6cvtDa */ ifstream cin("easyocr.in");
/* zDBESFiFd ily traian Rkh6cvtDa */ ofstream cout("easyocr.out");
/* zDBESFiFd ily traian Rkh6cvtDa */ 
/* zDBESFiFd ily traian Rkh6cvtDa */ bool a[1011][1011] , b[1011][1011];
/* zDBESFiFd ily traian Rkh6cvtDa */ int f[10] , n , m;
/* zDBESFiFd ily traian Rkh6cvtDa */ 
/* zDBESFiFd ily traian Rkh6cvtDa */ bool in(int i , int j)
/* zDBESFiFd ily traian Rkh6cvtDa */ {
/* zDBESFiFd ily traian Rkh6cvtDa */     return i <= n && i >= 1 && j <= m && j >= 1;
/* zDBESFiFd ily traian Rkh6cvtDa */ }
/* zDBESFiFd ily traian Rkh6cvtDa */ 
/* zDBESFiFd ily traian Rkh6cvtDa */ void fill(int i , int j , int &cnt)
/* zDBESFiFd ily traian Rkh6cvtDa */ {
/* zDBESFiFd ily traian Rkh6cvtDa */     a[i][j]=0;
/* zDBESFiFd ily traian Rkh6cvtDa */     cnt++;
/* zDBESFiFd ily traian Rkh6cvtDa */     if(a[i+1][j]==1 && in(i+1 , j))
/* zDBESFiFd ily traian Rkh6cvtDa */         fill(i+1 , j , cnt);
/* zDBESFiFd ily traian Rkh6cvtDa */     if(a[i-1][j]==1 && in(i-1 , j))
/* zDBESFiFd ily traian Rkh6cvtDa */         fill(i-1 , j , cnt);
/* zDBESFiFd ily traian Rkh6cvtDa */     if(a[i][j+1]==1 && in(i , j+1))
/* zDBESFiFd ily traian Rkh6cvtDa */         fill(i , j+1 , cnt);
/* zDBESFiFd ily traian Rkh6cvtDa */     if(a[i][j-1]==1 && in(i , j-1))
/* zDBESFiFd ily traian Rkh6cvtDa */         fill(i , j-1 , cnt);
/* zDBESFiFd ily traian Rkh6cvtDa */     if(a[i+1][j-1]==1 && in(i+1 , j-1))
/* zDBESFiFd ily traian Rkh6cvtDa */         fill(i+1 , j-1 , cnt);
/* zDBESFiFd ily traian Rkh6cvtDa */ }
/* zDBESFiFd ily traian Rkh6cvtDa */ 
/* zDBESFiFd ily traian Rkh6cvtDa */ int main()
/* zDBESFiFd ily traian Rkh6cvtDa */ {
/* zDBESFiFd ily traian Rkh6cvtDa */     cin >> n >> m;
/* zDBESFiFd ily traian Rkh6cvtDa */     char ch;
/* zDBESFiFd ily traian Rkh6cvtDa */     for(int i = 1 ; i <= n ; ++i)
/* zDBESFiFd ily traian Rkh6cvtDa */         for(int j = 1 ; j <= m ; ++j)
/* zDBESFiFd ily traian Rkh6cvtDa */         {
/* zDBESFiFd ily traian Rkh6cvtDa */             cin >> ch;
/* zDBESFiFd ily traian Rkh6cvtDa */             a[i][j]=ch - '0';
/* zDBESFiFd ily traian Rkh6cvtDa */             b[i][j]=a[i][j];
/* zDBESFiFd ily traian Rkh6cvtDa */         }
/* zDBESFiFd ily traian Rkh6cvtDa */     int nr=0;
/* zDBESFiFd ily traian Rkh6cvtDa */     for(int i = 1 ; i <= n ; ++i)
/* zDBESFiFd ily traian Rkh6cvtDa */     {
/* zDBESFiFd ily traian Rkh6cvtDa */         for(int j = 1 ; j <= m ; ++j)
/* zDBESFiFd ily traian Rkh6cvtDa */         {
/* zDBESFiFd ily traian Rkh6cvtDa */             if(a[i][j]==1)
/* zDBESFiFd ily traian Rkh6cvtDa */             {
/* zDBESFiFd ily traian Rkh6cvtDa */                 nr++;
/* zDBESFiFd ily traian Rkh6cvtDa */                 int cnt=0;
/* zDBESFiFd ily traian Rkh6cvtDa */                 fill(i , j , cnt);
/* zDBESFiFd ily traian Rkh6cvtDa */                 if(cnt==20)
/* zDBESFiFd ily traian Rkh6cvtDa */                     f[0]++;
/* zDBESFiFd ily traian Rkh6cvtDa */                 else if(cnt==8)
/* zDBESFiFd ily traian Rkh6cvtDa */                     f[1]++;
/* zDBESFiFd ily traian Rkh6cvtDa */                 else if(cnt==19)
/* zDBESFiFd ily traian Rkh6cvtDa */                 {
/* zDBESFiFd ily traian Rkh6cvtDa */                     if(b[i+4][j]==1)
/* zDBESFiFd ily traian Rkh6cvtDa */                         f[2]++;
/* zDBESFiFd ily traian Rkh6cvtDa */                     else if(b[i+1][j+4]==1)
/* zDBESFiFd ily traian Rkh6cvtDa */                         f[3]++;
/* zDBESFiFd ily traian Rkh6cvtDa */                     else
/* zDBESFiFd ily traian Rkh6cvtDa */                         f[5]++;
/* zDBESFiFd ily traian Rkh6cvtDa */                 }
/* zDBESFiFd ily traian Rkh6cvtDa */                 else if(cnt==14)
/* zDBESFiFd ily traian Rkh6cvtDa */                     f[4]++;
/* zDBESFiFd ily traian Rkh6cvtDa */                 else if(cnt==21)
/* zDBESFiFd ily traian Rkh6cvtDa */                 {
/* zDBESFiFd ily traian Rkh6cvtDa */                     if(b[i+1][j+4]==1)
/* zDBESFiFd ily traian Rkh6cvtDa */                         f[9]++;
/* zDBESFiFd ily traian Rkh6cvtDa */                     else
/* zDBESFiFd ily traian Rkh6cvtDa */                         f[6]++;
/* zDBESFiFd ily traian Rkh6cvtDa */                 }
/* zDBESFiFd ily traian Rkh6cvtDa */                 else if(cnt==11)
/* zDBESFiFd ily traian Rkh6cvtDa */                     f[7]++;
/* zDBESFiFd ily traian Rkh6cvtDa */                 else if(cnt==23)
/* zDBESFiFd ily traian Rkh6cvtDa */                     f[8]++;
/* zDBESFiFd ily traian Rkh6cvtDa */             }
/* zDBESFiFd ily traian Rkh6cvtDa */         }
/* zDBESFiFd ily traian Rkh6cvtDa */     }
/* zDBESFiFd ily traian Rkh6cvtDa */     cout << nr << endl;
/* zDBESFiFd ily traian Rkh6cvtDa */     for(int i = 0 ; i <= 9 ; ++i)
/* zDBESFiFd ily traian Rkh6cvtDa */         if(f[i]>0)
/* zDBESFiFd ily traian Rkh6cvtDa */             cout << i << ' ' << f[i] << ' ';
/* zDBESFiFd ily traian Rkh6cvtDa */     return 0;
/* zDBESFiFd ily traian Rkh6cvtDa */ }