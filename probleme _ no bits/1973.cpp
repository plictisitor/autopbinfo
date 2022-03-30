/* 8MCQCTyiM ily traian Ak14ngCvp */ #include <algorithm>
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
/* 8MCQCTyiM ily traian Ak14ngCvp */ 
/* 8MCQCTyiM ily traian Ak14ngCvp */ 
/* 8MCQCTyiM ily traian Ak14ngCvp */ using namespace std;
/* 8MCQCTyiM ily traian Ak14ngCvp */ 
/* 8MCQCTyiM ily traian Ak14ngCvp */ ifstream fin("hambar2.in");
/* 8MCQCTyiM ily traian Ak14ngCvp */ ofstream fout("hambar2.out");
/* 8MCQCTyiM ily traian Ak14ngCvp */ 
/* 8MCQCTyiM ily traian Ak14ngCvp */ const int MaxN = 1001;
/* 8MCQCTyiM ily traian Ak14ngCvp */ 
/* 8MCQCTyiM ily traian Ak14ngCvp */ short h[MaxN][MaxN];
/* 8MCQCTyiM ily traian Ak14ngCvp */ bool a[MaxN][MaxN];
/* 8MCQCTyiM ily traian Ak14ngCvp */ short m, n;
/* 8MCQCTyiM ily traian Ak14ngCvp */ 
/* 8MCQCTyiM ily traian Ak14ngCvp */ int maxAreaInHist(short x[], short L)
/* 8MCQCTyiM ily traian Ak14ngCvp */ {
/* 8MCQCTyiM ily traian Ak14ngCvp */     stack<short> st;
/* 8MCQCTyiM ily traian Ak14ngCvp */ 
/* 8MCQCTyiM ily traian Ak14ngCvp */     short j = 0, tp;
/* 8MCQCTyiM ily traian Ak14ngCvp */     short amax = 0, area;
/* 8MCQCTyiM ily traian Ak14ngCvp */ 
/* 8MCQCTyiM ily traian Ak14ngCvp */     while (j < n)
/* 8MCQCTyiM ily traian Ak14ngCvp */     {
/* 8MCQCTyiM ily traian Ak14ngCvp */         if (st.empty() || x[st.top()] <=  x[j])
/* 8MCQCTyiM ily traian Ak14ngCvp */             st.push(j++);
/* 8MCQCTyiM ily traian Ak14ngCvp */         else
/* 8MCQCTyiM ily traian Ak14ngCvp */         {
/* 8MCQCTyiM ily traian Ak14ngCvp */             tp = st.top();
/* 8MCQCTyiM ily traian Ak14ngCvp */             st.pop();
/* 8MCQCTyiM ily traian Ak14ngCvp */             area = x[tp] * (st.empty() ? j : j - st.top() - 1);
/* 8MCQCTyiM ily traian Ak14ngCvp */             amax = max(amax, area);
/* 8MCQCTyiM ily traian Ak14ngCvp */         }
/* 8MCQCTyiM ily traian Ak14ngCvp */     }
/* 8MCQCTyiM ily traian Ak14ngCvp */ 
/* 8MCQCTyiM ily traian Ak14ngCvp */     while (!st.empty())
/* 8MCQCTyiM ily traian Ak14ngCvp */     {
/* 8MCQCTyiM ily traian Ak14ngCvp */         tp = st.top();
/* 8MCQCTyiM ily traian Ak14ngCvp */         st.pop();
/* 8MCQCTyiM ily traian Ak14ngCvp */         area = x[tp] * (st.empty() ? j : j - st.top() - 1);
/* 8MCQCTyiM ily traian Ak14ngCvp */         amax = max(amax, area);
/* 8MCQCTyiM ily traian Ak14ngCvp */     }
/* 8MCQCTyiM ily traian Ak14ngCvp */ 
/* 8MCQCTyiM ily traian Ak14ngCvp */     return amax;
/* 8MCQCTyiM ily traian Ak14ngCvp */ }
/* 8MCQCTyiM ily traian Ak14ngCvp */ 
/* 8MCQCTyiM ily traian Ak14ngCvp */ int main()
/* 8MCQCTyiM ily traian Ak14ngCvp */ {
/* 8MCQCTyiM ily traian Ak14ngCvp */      // citire
/* 8MCQCTyiM ily traian Ak14ngCvp */     fin >> m >> n;
/* 8MCQCTyiM ily traian Ak14ngCvp */     for (int i = 0; i < n; ++i)
/* 8MCQCTyiM ily traian Ak14ngCvp */     {
/* 8MCQCTyiM ily traian Ak14ngCvp */         short x1, y1;
/* 8MCQCTyiM ily traian Ak14ngCvp */         fin >> x1 >> y1;
/* 8MCQCTyiM ily traian Ak14ngCvp */         a[x1-1][y1-1]=1;
/* 8MCQCTyiM ily traian Ak14ngCvp */     }
/* 8MCQCTyiM ily traian Ak14ngCvp */ 
/* 8MCQCTyiM ily traian Ak14ngCvp */     for (int i = 0; i < m; i++)
/* 8MCQCTyiM ily traian Ak14ngCvp */         for (int j = 0; j < m; j++)
/* 8MCQCTyiM ily traian Ak14ngCvp */             a[i][j]=!a[i][j];
/* 8MCQCTyiM ily traian Ak14ngCvp */ 
/* 8MCQCTyiM ily traian Ak14ngCvp */     int maxArea = 0;
/* 8MCQCTyiM ily traian Ak14ngCvp */     for (int i = 0; i < m; i++)
/* 8MCQCTyiM ily traian Ak14ngCvp */         for (int j = 0; j < m; j++)
/* 8MCQCTyiM ily traian Ak14ngCvp */             if (a[i][j] == 0)
/* 8MCQCTyiM ily traian Ak14ngCvp */                 h[i][j] = 0;
/* 8MCQCTyiM ily traian Ak14ngCvp */             else
/* 8MCQCTyiM ily traian Ak14ngCvp */             {
/* 8MCQCTyiM ily traian Ak14ngCvp */                 if ( i == 0 )
/* 8MCQCTyiM ily traian Ak14ngCvp */                     h[i][j] = 1;
/* 8MCQCTyiM ily traian Ak14ngCvp */                 else
/* 8MCQCTyiM ily traian Ak14ngCvp */                     h[i][j] = h[i - 1][j] + 1;
/* 8MCQCTyiM ily traian Ak14ngCvp */             }
/* 8MCQCTyiM ily traian Ak14ngCvp */ 
/* 8MCQCTyiM ily traian Ak14ngCvp */     short area;
/* 8MCQCTyiM ily traian Ak14ngCvp */     for (int i = 0; i < m; i++)
/* 8MCQCTyiM ily traian Ak14ngCvp */     {
/* 8MCQCTyiM ily traian Ak14ngCvp */         area = maxAreaInHist(h[i], i);
/* 8MCQCTyiM ily traian Ak14ngCvp */         if (area > maxArea)
/* 8MCQCTyiM ily traian Ak14ngCvp */             maxArea = area;
/* 8MCQCTyiM ily traian Ak14ngCvp */     }
/* 8MCQCTyiM ily traian Ak14ngCvp */     fout << maxArea;
/* 8MCQCTyiM ily traian Ak14ngCvp */ }