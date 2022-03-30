/* essDzU83J ily traian yHpqHLnSj */ #include <algorithm>
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
/* essDzU83J ily traian yHpqHLnSj */ using namespace std;
/* essDzU83J ily traian yHpqHLnSj */ 
/* essDzU83J ily traian yHpqHLnSj */ int n , a[101][101] , b[101][101];
/* essDzU83J ily traian yHpqHLnSj */ 
/* essDzU83J ily traian yHpqHLnSj */ ifstream cin("castel1.in");
/* essDzU83J ily traian yHpqHLnSj */ ofstream cout("castel1.out");
/* essDzU83J ily traian yHpqHLnSj */ 
/* essDzU83J ily traian yHpqHLnSj */ void fill(int i , int j , int &inou , int &jnou , int &arie)
/* essDzU83J ily traian yHpqHLnSj */ {
/* essDzU83J ily traian yHpqHLnSj */     arie++;
/* essDzU83J ily traian yHpqHLnSj */     inou = max(i , inou);
/* essDzU83J ily traian yHpqHLnSj */     jnou = max(j , jnou);
/* essDzU83J ily traian yHpqHLnSj */     b[i][j]=1;
/* essDzU83J ily traian yHpqHLnSj */     if((a[i][j]&1)==0 && b[i][j-1]==0)
/* essDzU83J ily traian yHpqHLnSj */         fill(i , j-1 , inou , jnou , arie);
/* essDzU83J ily traian yHpqHLnSj */     if((a[i][j]&2)==0 && b[i+1][j]==0)
/* essDzU83J ily traian yHpqHLnSj */         fill(i+1 , j , inou , jnou , arie);
/* essDzU83J ily traian yHpqHLnSj */     if((a[i][j]&4)==0 && b[i][j+1]==0)
/* essDzU83J ily traian yHpqHLnSj */         fill(i , j+1 , inou , jnou , arie);
/* essDzU83J ily traian yHpqHLnSj */     if((a[i][j]&8)==0 && b[i-1][j]==0)
/* essDzU83J ily traian yHpqHLnSj */         fill(i-1 , j , inou , jnou , arie);
/* essDzU83J ily traian yHpqHLnSj */ }
/* essDzU83J ily traian yHpqHLnSj */ 
/* essDzU83J ily traian yHpqHLnSj */ int main()
/* essDzU83J ily traian yHpqHLnSj */ {
/* essDzU83J ily traian yHpqHLnSj */     int c;
/* essDzU83J ily traian yHpqHLnSj */     cin >> c;
/* essDzU83J ily traian yHpqHLnSj */     cin >> n;
/* essDzU83J ily traian yHpqHLnSj */     for(int i = 1 ; i <= n ; ++i)
/* essDzU83J ily traian yHpqHLnSj */         for(int j = 1 ; j <= n ; ++j)
/* essDzU83J ily traian yHpqHLnSj */             cin >> a[i][j];
/* essDzU83J ily traian yHpqHLnSj */     int cnt = 0;
/* essDzU83J ily traian yHpqHLnSj */     int max = 0 , xs , ys , xf , yf;
/* essDzU83J ily traian yHpqHLnSj */     for(int i = 1 ; i <= n ; ++i)
/* essDzU83J ily traian yHpqHLnSj */         for(int j = 1 ; j <= n ; ++j)
/* essDzU83J ily traian yHpqHLnSj */             if(a[i][j]==9 || a[i][j]==11 || a[i][j]==13 || a[i][j]==15)
/* essDzU83J ily traian yHpqHLnSj */             {
/* essDzU83J ily traian yHpqHLnSj */                 cnt++;
/* essDzU83J ily traian yHpqHLnSj */                 int arie = 0 , inou = 0 , jnou = 0;
/* essDzU83J ily traian yHpqHLnSj */                 fill(i , j , inou , jnou , arie);
/* essDzU83J ily traian yHpqHLnSj */                     if(arie > max)
/* essDzU83J ily traian yHpqHLnSj */                         max = arie , xs = i , ys = j , xf = inou , yf = jnou;
/* essDzU83J ily traian yHpqHLnSj */             }
/* essDzU83J ily traian yHpqHLnSj */     if(c == 1) cout << cnt;
/* essDzU83J ily traian yHpqHLnSj */     else if(c==2) cout << max;
/* essDzU83J ily traian yHpqHLnSj */     else cout << xs << ' ' << ys << ' ' << xf << ' ' << yf;
/* essDzU83J ily traian yHpqHLnSj */     return 0;
/* essDzU83J ily traian yHpqHLnSj */ }