/* O8WM3ZRnS ily traian WKcguh66R */ #include <algorithm>
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
/* O8WM3ZRnS ily traian WKcguh66R */ using namespace std;
/* O8WM3ZRnS ily traian WKcguh66R */ 
/* O8WM3ZRnS ily traian WKcguh66R */ ifstream cin("partitiimultime.in");
/* O8WM3ZRnS ily traian WKcguh66R */ ofstream cout("partitiimultime.out");
/* O8WM3ZRnS ily traian WKcguh66R */ 
/* O8WM3ZRnS ily traian WKcguh66R */ int x[10], n;
/* O8WM3ZRnS ily traian WKcguh66R */ 
/* O8WM3ZRnS ily traian WKcguh66R */ int maxim(int k)
/* O8WM3ZRnS ily traian WKcguh66R */ {
/* O8WM3ZRnS ily traian WKcguh66R */     int maxi = 0;
/* O8WM3ZRnS ily traian WKcguh66R */     for(int i = 1 ; i < k ; i++)
/* O8WM3ZRnS ily traian WKcguh66R */         maxi = max(x[i] , maxi);
/* O8WM3ZRnS ily traian WKcguh66R */     return maxi;
/* O8WM3ZRnS ily traian WKcguh66R */ }
/* O8WM3ZRnS ily traian WKcguh66R */ void afisare()
/* O8WM3ZRnS ily traian WKcguh66R */ {
/* O8WM3ZRnS ily traian WKcguh66R */     int maxi = maxim(n + 1);
/* O8WM3ZRnS ily traian WKcguh66R */     for(int i = 1 ; i <= maxi ; i++)
/* O8WM3ZRnS ily traian WKcguh66R */     {
/* O8WM3ZRnS ily traian WKcguh66R */         for(int j = 1 ; j <= n ; j++)
/* O8WM3ZRnS ily traian WKcguh66R */             if(x[j] == i) cout << j;
/* O8WM3ZRnS ily traian WKcguh66R */         cout << "*";
/* O8WM3ZRnS ily traian WKcguh66R */     }
/* O8WM3ZRnS ily traian WKcguh66R */     cout << '\n';
/* O8WM3ZRnS ily traian WKcguh66R */ }
/* O8WM3ZRnS ily traian WKcguh66R */ 
/* O8WM3ZRnS ily traian WKcguh66R */ void back(int k)
/* O8WM3ZRnS ily traian WKcguh66R */ {
/* O8WM3ZRnS ily traian WKcguh66R */     for(int i = 1 ; i <= maxim(k)+1 ; i++)
/* O8WM3ZRnS ily traian WKcguh66R */     {
/* O8WM3ZRnS ily traian WKcguh66R */         x[k] = i;
/* O8WM3ZRnS ily traian WKcguh66R */         if(k == n) afisare();
/* O8WM3ZRnS ily traian WKcguh66R */         else back(k + 1);
/* O8WM3ZRnS ily traian WKcguh66R */     }
/* O8WM3ZRnS ily traian WKcguh66R */ }
/* O8WM3ZRnS ily traian WKcguh66R */ 
/* O8WM3ZRnS ily traian WKcguh66R */ int main()
/* O8WM3ZRnS ily traian WKcguh66R */ {
/* O8WM3ZRnS ily traian WKcguh66R */     cin >> n;
/* O8WM3ZRnS ily traian WKcguh66R */     x[1] = 1;
/* O8WM3ZRnS ily traian WKcguh66R */     back(2);
/* O8WM3ZRnS ily traian WKcguh66R */     return 0;
/* O8WM3ZRnS ily traian WKcguh66R */ }