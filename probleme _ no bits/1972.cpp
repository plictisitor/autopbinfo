/* Zeadx8KVW ily traian 1Rizc84pW */ #include <algorithm>
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
/* Zeadx8KVW ily traian 1Rizc84pW */ 
/* Zeadx8KVW ily traian 1Rizc84pW */ 
/* Zeadx8KVW ily traian 1Rizc84pW */ using namespace std;
/* Zeadx8KVW ily traian 1Rizc84pW */ 
/* Zeadx8KVW ily traian 1Rizc84pW */ ifstream fin("hambar.in");
/* Zeadx8KVW ily traian 1Rizc84pW */ ofstream fout("hambar.out");
/* Zeadx8KVW ily traian 1Rizc84pW */ 
/* Zeadx8KVW ily traian 1Rizc84pW */ const int MaxN = 1001;
/* Zeadx8KVW ily traian 1Rizc84pW */ 
/* Zeadx8KVW ily traian 1Rizc84pW */ int h[MaxN][MaxN];
/* Zeadx8KVW ily traian 1Rizc84pW */ bool a[MaxN][MaxN];
/* Zeadx8KVW ily traian 1Rizc84pW */ int m, n;
/* Zeadx8KVW ily traian 1Rizc84pW */ 
/* Zeadx8KVW ily traian 1Rizc84pW */ int maxAreaInHist(int x[], int L)
/* Zeadx8KVW ily traian 1Rizc84pW */ {
/* Zeadx8KVW ily traian 1Rizc84pW */     stack<int> st;
/* Zeadx8KVW ily traian 1Rizc84pW */ 
/* Zeadx8KVW ily traian 1Rizc84pW */     int j = 0, tp;
/* Zeadx8KVW ily traian 1Rizc84pW */     int amax = 0, area;
/* Zeadx8KVW ily traian 1Rizc84pW */ 
/* Zeadx8KVW ily traian 1Rizc84pW */     while (j < n)
/* Zeadx8KVW ily traian 1Rizc84pW */     {
/* Zeadx8KVW ily traian 1Rizc84pW */         if (st.empty() || x[st.top()] <=  x[j])
/* Zeadx8KVW ily traian 1Rizc84pW */             st.push(j++);
/* Zeadx8KVW ily traian 1Rizc84pW */         else
/* Zeadx8KVW ily traian 1Rizc84pW */         {
/* Zeadx8KVW ily traian 1Rizc84pW */             tp = st.top();
/* Zeadx8KVW ily traian 1Rizc84pW */             st.pop();
/* Zeadx8KVW ily traian 1Rizc84pW */             area = x[tp] * (st.empty() ? j : j - st.top() - 1);
/* Zeadx8KVW ily traian 1Rizc84pW */             amax = max(amax, area);
/* Zeadx8KVW ily traian 1Rizc84pW */         }
/* Zeadx8KVW ily traian 1Rizc84pW */     }
/* Zeadx8KVW ily traian 1Rizc84pW */ 
/* Zeadx8KVW ily traian 1Rizc84pW */     while (!st.empty())
/* Zeadx8KVW ily traian 1Rizc84pW */     {
/* Zeadx8KVW ily traian 1Rizc84pW */         tp = st.top();
/* Zeadx8KVW ily traian 1Rizc84pW */         st.pop();
/* Zeadx8KVW ily traian 1Rizc84pW */         area = x[tp] * (st.empty() ? j : j - st.top() - 1);
/* Zeadx8KVW ily traian 1Rizc84pW */         amax = max(amax, area);
/* Zeadx8KVW ily traian 1Rizc84pW */     }
/* Zeadx8KVW ily traian 1Rizc84pW */ 
/* Zeadx8KVW ily traian 1Rizc84pW */     return amax;
/* Zeadx8KVW ily traian 1Rizc84pW */ }
/* Zeadx8KVW ily traian 1Rizc84pW */ 
/* Zeadx8KVW ily traian 1Rizc84pW */ int main()
/* Zeadx8KVW ily traian 1Rizc84pW */ {
/* Zeadx8KVW ily traian 1Rizc84pW */      // citire
/* Zeadx8KVW ily traian 1Rizc84pW */     fin >> m >> n;
/* Zeadx8KVW ily traian 1Rizc84pW */     for (int i = 0; i < n; ++i)
/* Zeadx8KVW ily traian 1Rizc84pW */     {
/* Zeadx8KVW ily traian 1Rizc84pW */         int x1, y1;
/* Zeadx8KVW ily traian 1Rizc84pW */         fin >> x1 >> y1;
/* Zeadx8KVW ily traian 1Rizc84pW */         a[x1-1][y1-1]=1;
/* Zeadx8KVW ily traian 1Rizc84pW */     }
/* Zeadx8KVW ily traian 1Rizc84pW */ 
/* Zeadx8KVW ily traian 1Rizc84pW */     for (int i = 0; i < m; i++)
/* Zeadx8KVW ily traian 1Rizc84pW */         for (int j = 0; j < m; j++)
/* Zeadx8KVW ily traian 1Rizc84pW */             a[i][j]=!a[i][j];
/* Zeadx8KVW ily traian 1Rizc84pW */ 
/* Zeadx8KVW ily traian 1Rizc84pW */     int maxArea = 0;
/* Zeadx8KVW ily traian 1Rizc84pW */     for (int i = 0; i < m; i++)
/* Zeadx8KVW ily traian 1Rizc84pW */         for (int j = 0; j < m; j++)
/* Zeadx8KVW ily traian 1Rizc84pW */             if (a[i][j] == 0)
/* Zeadx8KVW ily traian 1Rizc84pW */                 h[i][j] = 0;
/* Zeadx8KVW ily traian 1Rizc84pW */             else
/* Zeadx8KVW ily traian 1Rizc84pW */             {
/* Zeadx8KVW ily traian 1Rizc84pW */                 if ( i == 0 )
/* Zeadx8KVW ily traian 1Rizc84pW */                     h[i][j] = 1;
/* Zeadx8KVW ily traian 1Rizc84pW */                 else
/* Zeadx8KVW ily traian 1Rizc84pW */                     h[i][j] = h[i - 1][j] + 1;
/* Zeadx8KVW ily traian 1Rizc84pW */             }
/* Zeadx8KVW ily traian 1Rizc84pW */ 
/* Zeadx8KVW ily traian 1Rizc84pW */     int area;
/* Zeadx8KVW ily traian 1Rizc84pW */     for (int i = 0; i < m; i++)
/* Zeadx8KVW ily traian 1Rizc84pW */     {
/* Zeadx8KVW ily traian 1Rizc84pW */         area = maxAreaInHist(h[i], i);
/* Zeadx8KVW ily traian 1Rizc84pW */         if (area > maxArea)
/* Zeadx8KVW ily traian 1Rizc84pW */             maxArea = area;
/* Zeadx8KVW ily traian 1Rizc84pW */     }
/* Zeadx8KVW ily traian 1Rizc84pW */     fout << maxArea;
/* Zeadx8KVW ily traian 1Rizc84pW */ }