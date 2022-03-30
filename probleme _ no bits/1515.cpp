/* IoWSYCJP4 ily traian knI2jpJXk */ #include <algorithm>
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
/* IoWSYCJP4 ily traian knI2jpJXk */ using namespace std;
/* IoWSYCJP4 ily traian knI2jpJXk */ ifstream cin("gradina.in");
/* IoWSYCJP4 ily traian knI2jpJXk */ ofstream cout("gradina.out");
/* IoWSYCJP4 ily traian knI2jpJXk */ int n , p , k , a[1001][1001] ,d[1001][1001] , x , y , cnt , maxi , s;
/* IoWSYCJP4 ily traian knI2jpJXk */ int main()
/* IoWSYCJP4 ily traian knI2jpJXk */ {
/* IoWSYCJP4 ily traian knI2jpJXk */     cin >> n >> p >> k;
/* IoWSYCJP4 ily traian knI2jpJXk */     for(int i = 0 ; i < p ; ++i)
/* IoWSYCJP4 ily traian knI2jpJXk */         cin >> x >> y , a[x][y]=1;
/* IoWSYCJP4 ily traian knI2jpJXk */     for(int i = 1 ; i <= n ; ++i)
/* IoWSYCJP4 ily traian knI2jpJXk */         for(int j = 1 ; j <= n ; ++j)
/* IoWSYCJP4 ily traian knI2jpJXk */             d[i][j]=d[i-1][j]+d[i][j-1]-d[i-1][j-1]+a[i][j];
/* IoWSYCJP4 ily traian knI2jpJXk */     for(int i = k ; i <= n ; ++i)
/* IoWSYCJP4 ily traian knI2jpJXk */         for(int j = k ; j <= n ; ++j)
/* IoWSYCJP4 ily traian knI2jpJXk */         {
/* IoWSYCJP4 ily traian knI2jpJXk */             s=d[i][j]-d[i-k][j]-d[i][j-k]+d[i-k][j-k];
/* IoWSYCJP4 ily traian knI2jpJXk */             if(s > maxi) maxi=s , cnt=0;
/* IoWSYCJP4 ily traian knI2jpJXk */             if(s == maxi) cnt++;
/* IoWSYCJP4 ily traian knI2jpJXk */         }
/* IoWSYCJP4 ily traian knI2jpJXk */     cout << maxi << endl << cnt;
/* IoWSYCJP4 ily traian knI2jpJXk */     return 0;
/* IoWSYCJP4 ily traian knI2jpJXk */ }