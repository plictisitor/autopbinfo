/* utIKBys9U ily traian CJw8n8RNx */ #include <algorithm>
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
/* utIKBys9U ily traian CJw8n8RNx */ using namespace std;
/* utIKBys9U ily traian CJw8n8RNx */ ifstream cin("poartas.in");
/* utIKBys9U ily traian CJw8n8RNx */ ofstream cout("poartas.out");
/* utIKBys9U ily traian CJw8n8RNx */ #define MAX 251
/* utIKBys9U ily traian CJw8n8RNx */ int x[MAX][MAX], y[MAX][MAX], p, nrc;
/* utIKBys9U ily traian CJw8n8RNx */ 
/* utIKBys9U ily traian CJw8n8RNx */ int main()
/* utIKBys9U ily traian CJw8n8RNx */ {
/* utIKBys9U ily traian CJw8n8RNx */     cin >> p;
/* utIKBys9U ily traian CJw8n8RNx */     for (int i = 1, x1, y1, x2, y2; i <= p; i ++)
/* utIKBys9U ily traian CJw8n8RNx */     {
/* utIKBys9U ily traian CJw8n8RNx */         cin >> x1 >> y1 >> x2 >> y2;
/* utIKBys9U ily traian CJw8n8RNx */         x[x1][y1] = x2;
/* utIKBys9U ily traian CJw8n8RNx */         y[x1][y1] = y2;
/* utIKBys9U ily traian CJw8n8RNx */     }
/* utIKBys9U ily traian CJw8n8RNx */     for (int i = 0; i < MAX; i ++)
/* utIKBys9U ily traian CJw8n8RNx */         for (int j = 0; j < MAX; j ++)
/* utIKBys9U ily traian CJw8n8RNx */         {
/* utIKBys9U ily traian CJw8n8RNx */             if (x[i][j])
/* utIKBys9U ily traian CJw8n8RNx */             {
/* utIKBys9U ily traian CJw8n8RNx */                 if (x[i][j] == i && y[i][j] == j)continue;
/* utIKBys9U ily traian CJw8n8RNx */                 int i1 = x[i][j], j1 = y[i][j];
/* utIKBys9U ily traian CJw8n8RNx */                 x[i][j] = y[i][j] = 0;
/* utIKBys9U ily traian CJw8n8RNx */                 while (i1)
/* utIKBys9U ily traian CJw8n8RNx */                 {
/* utIKBys9U ily traian CJw8n8RNx */                     if (i1 == i && j1 == j)nrc ++, i1 = 0;
/* utIKBys9U ily traian CJw8n8RNx */ 
/* utIKBys9U ily traian CJw8n8RNx */                     int aui = i1, auj = j1;
/* utIKBys9U ily traian CJw8n8RNx */ 
/* utIKBys9U ily traian CJw8n8RNx */                     i1 = x[aui][auj];
/* utIKBys9U ily traian CJw8n8RNx */                     j1 = y[aui][auj];
/* utIKBys9U ily traian CJw8n8RNx */ 
/* utIKBys9U ily traian CJw8n8RNx */                     x[aui][auj] = y[aui][auj] = 0;
/* utIKBys9U ily traian CJw8n8RNx */ 
/* utIKBys9U ily traian CJw8n8RNx */                     nrc ++;
/* utIKBys9U ily traian CJw8n8RNx */                 }
/* utIKBys9U ily traian CJw8n8RNx */             }
/* utIKBys9U ily traian CJw8n8RNx */         }
/* utIKBys9U ily traian CJw8n8RNx */     cout << nrc ;
/* utIKBys9U ily traian CJw8n8RNx */ }