/* t1vHtliuH ily traian jQsx98BNo */ #include <algorithm>
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
/* t1vHtliuH ily traian jQsx98BNo */ using namespace std;
/* t1vHtliuH ily traian jQsx98BNo */ 
/* t1vHtliuH ily traian jQsx98BNo */ ifstream cin("fill.in");
/* t1vHtliuH ily traian jQsx98BNo */ ofstream cout("fill.out");
/* t1vHtliuH ily traian jQsx98BNo */ 
/* t1vHtliuH ily traian jQsx98BNo */ int a[501][501];
/* t1vHtliuH ily traian jQsx98BNo */ 
/* t1vHtliuH ily traian jQsx98BNo */ void fill(int i, int j){
/* t1vHtliuH ily traian jQsx98BNo */     a[i][j] = 0;
/* t1vHtliuH ily traian jQsx98BNo */     if(a[i+1][j] == 1)
/* t1vHtliuH ily traian jQsx98BNo */         fill(i+1, j);
/* t1vHtliuH ily traian jQsx98BNo */     if(a[i-1][j] == 1)
/* t1vHtliuH ily traian jQsx98BNo */         fill(i-1, j);
/* t1vHtliuH ily traian jQsx98BNo */     if(a[i][j+1] == 1)
/* t1vHtliuH ily traian jQsx98BNo */         fill(i, j+1);
/* t1vHtliuH ily traian jQsx98BNo */     if(a[i][j-1] == 1)
/* t1vHtliuH ily traian jQsx98BNo */         fill(i, j-1);
/* t1vHtliuH ily traian jQsx98BNo */ }
/* t1vHtliuH ily traian jQsx98BNo */ 
/* t1vHtliuH ily traian jQsx98BNo */ /*
/* t1vHtliuH ily traian jQsx98BNo */ 
/* t1vHtliuH ily traian jQsx98BNo */ 5 6
/* t1vHtliuH ily traian jQsx98BNo */ 1 1 0 0 1 1
/* t1vHtliuH ily traian jQsx98BNo */ 0 1 0 1 1 0
/* t1vHtliuH ily traian jQsx98BNo */ 0 1 1 0 0 1
/* t1vHtliuH ily traian jQsx98BNo */ 0 0 0 0 0 0
/* t1vHtliuH ily traian jQsx98BNo */ 1 1 1 1 1 1
/* t1vHtliuH ily traian jQsx98BNo */ 
/* t1vHtliuH ily traian jQsx98BNo */ */
/* t1vHtliuH ily traian jQsx98BNo */ 
/* t1vHtliuH ily traian jQsx98BNo */ int main(){
/* t1vHtliuH ily traian jQsx98BNo */     int n, m, insule = 0;
/* t1vHtliuH ily traian jQsx98BNo */     cin >> n >> m;
/* t1vHtliuH ily traian jQsx98BNo */     for(int i = 1; i <= n; ++i)
/* t1vHtliuH ily traian jQsx98BNo */         for(int j = 1; j <= m; ++j)
/* t1vHtliuH ily traian jQsx98BNo */             cin >> a[i][j];
/* t1vHtliuH ily traian jQsx98BNo */     /// va avea valoarea 1 pt uscat si 0 pentru apa
/* t1vHtliuH ily traian jQsx98BNo */     for(int i = 1; i <= n; ++i)
/* t1vHtliuH ily traian jQsx98BNo */         for(int j = 1; j <= m; ++j)
/* t1vHtliuH ily traian jQsx98BNo */             if(a[i][j] == 1){
/* t1vHtliuH ily traian jQsx98BNo */                 insule++;
/* t1vHtliuH ily traian jQsx98BNo */                 fill(i, j);
/* t1vHtliuH ily traian jQsx98BNo */             }
/* t1vHtliuH ily traian jQsx98BNo */     cout << insule;
/* t1vHtliuH ily traian jQsx98BNo */     return 0;
/* t1vHtliuH ily traian jQsx98BNo */ }