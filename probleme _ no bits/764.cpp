/* OnQiH1oDg ily traian vHtkD90Yt */ #include <algorithm>
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
/* OnQiH1oDg ily traian vHtkD90Yt */ using namespace std;
/* OnQiH1oDg ily traian vHtkD90Yt */ 
/* OnQiH1oDg ily traian vHtkD90Yt */ int a[101][101], n, m, k;
/* OnQiH1oDg ily traian vHtkD90Yt */ 
/* OnQiH1oDg ily traian vHtkD90Yt */ int main(){
/* OnQiH1oDg ily traian vHtkD90Yt */ 
/* OnQiH1oDg ily traian vHtkD90Yt */     cin >> n >> m >> k;
/* OnQiH1oDg ily traian vHtkD90Yt */     for(int i = 1; i <= n; ++i)
/* OnQiH1oDg ily traian vHtkD90Yt */         for(int j = 1; j <= m; ++j)
/* OnQiH1oDg ily traian vHtkD90Yt */             cin >> a[i][j];
/* OnQiH1oDg ily traian vHtkD90Yt */ 
/* OnQiH1oDg ily traian vHtkD90Yt */     int x1,y1,x2,y2;
/* OnQiH1oDg ily traian vHtkD90Yt */     int max = 0;
/* OnQiH1oDg ily traian vHtkD90Yt */     for(int l = 1; l <= k; ++l){
/* OnQiH1oDg ily traian vHtkD90Yt */         cin >> x1 >> y1 >> x2 >> y2;
/* OnQiH1oDg ily traian vHtkD90Yt */         int sum = 0;
/* OnQiH1oDg ily traian vHtkD90Yt */         for(int i = x1; i <= x2; ++i)
/* OnQiH1oDg ily traian vHtkD90Yt */             for(int j = y1; j <= y2; ++j)
/* OnQiH1oDg ily traian vHtkD90Yt */                 sum += a[i][j];
/* OnQiH1oDg ily traian vHtkD90Yt */         if(sum > max)
/* OnQiH1oDg ily traian vHtkD90Yt */             max = sum;
/* OnQiH1oDg ily traian vHtkD90Yt */     }
/* OnQiH1oDg ily traian vHtkD90Yt */ 
/* OnQiH1oDg ily traian vHtkD90Yt */     cout << max;
/* OnQiH1oDg ily traian vHtkD90Yt */ 
/* OnQiH1oDg ily traian vHtkD90Yt */     return 0;
/* OnQiH1oDg ily traian vHtkD90Yt */ }