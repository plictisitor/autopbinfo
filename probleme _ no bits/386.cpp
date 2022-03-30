/* uA9Fk87VI ily traian mLAd5hsfD */ #include <algorithm>
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
/* uA9Fk87VI ily traian mLAd5hsfD */ using namespace std;
/* uA9Fk87VI ily traian mLAd5hsfD */ 
/* uA9Fk87VI ily traian mLAd5hsfD */ ifstream cin("sumtri1.in");
/* uA9Fk87VI ily traian mLAd5hsfD */ ofstream cout("sumtri1.out");
/* uA9Fk87VI ily traian mLAd5hsfD */ 
/* uA9Fk87VI ily traian mLAd5hsfD */ int n , a[101][101] , mini = 100000000 , b[101][101] , ifinal , c[101][101] , rasp[101];
/* uA9Fk87VI ily traian mLAd5hsfD */ 
/* uA9Fk87VI ily traian mLAd5hsfD */ int main()
/* uA9Fk87VI ily traian mLAd5hsfD */ {
/* uA9Fk87VI ily traian mLAd5hsfD */     cin >> n;
/* uA9Fk87VI ily traian mLAd5hsfD */     for(int i = 1; i < 101 ; i++)
/* uA9Fk87VI ily traian mLAd5hsfD */         for(int j = 0 ; j < 101 ; j++) a[i][j] = 100000001;
/* uA9Fk87VI ily traian mLAd5hsfD */ 
/* uA9Fk87VI ily traian mLAd5hsfD */     for(int i = 1 ; i <= n ; i++)
/* uA9Fk87VI ily traian mLAd5hsfD */     {
/* uA9Fk87VI ily traian mLAd5hsfD */         for(int j = 1 ; j <= i ; j++)
/* uA9Fk87VI ily traian mLAd5hsfD */             cin >> a[i][j] , c[i][j] = a[i][j];
/* uA9Fk87VI ily traian mLAd5hsfD */     }
/* uA9Fk87VI ily traian mLAd5hsfD */     for(int i = 1 ; i <= n ; i++)
/* uA9Fk87VI ily traian mLAd5hsfD */     {
/* uA9Fk87VI ily traian mLAd5hsfD */         for(int j = 1 ; j <= i ; j++)
/* uA9Fk87VI ily traian mLAd5hsfD */         {
/* uA9Fk87VI ily traian mLAd5hsfD */             a[i][j] += min(a[i - 1][j] , a[i - 1][j - 1]);
/* uA9Fk87VI ily traian mLAd5hsfD */             if(a[i - 1][j] > a[i - 1][j - 1]) b[i][j] = 0;
/* uA9Fk87VI ily traian mLAd5hsfD */             else b[i][j] = 1;
/* uA9Fk87VI ily traian mLAd5hsfD */         }
/* uA9Fk87VI ily traian mLAd5hsfD */     }
/* uA9Fk87VI ily traian mLAd5hsfD */ 
/* uA9Fk87VI ily traian mLAd5hsfD */     for(int i = 1 ; i <= n ; i++)
/* uA9Fk87VI ily traian mLAd5hsfD */         if(a[n][i] < mini) mini = a[n][i] , ifinal = i;
/* uA9Fk87VI ily traian mLAd5hsfD */ 
/* uA9Fk87VI ily traian mLAd5hsfD */     cout << mini << '\n';
/* uA9Fk87VI ily traian mLAd5hsfD */ 
/* uA9Fk87VI ily traian mLAd5hsfD */     int i = n, j = ifinal, ind = 0;
/* uA9Fk87VI ily traian mLAd5hsfD */     while (i >= 1)
/* uA9Fk87VI ily traian mLAd5hsfD */     {
/* uA9Fk87VI ily traian mLAd5hsfD */         rasp[++ ind] = c[i][j];
/* uA9Fk87VI ily traian mLAd5hsfD */         if (b[i][j] == 0)j --;
/* uA9Fk87VI ily traian mLAd5hsfD */         i --;
/* uA9Fk87VI ily traian mLAd5hsfD */     }
/* uA9Fk87VI ily traian mLAd5hsfD */     for (int i = n; i >= 1; -- i)
/* uA9Fk87VI ily traian mLAd5hsfD */         cout << rasp[i] << ' ';
/* uA9Fk87VI ily traian mLAd5hsfD */ }