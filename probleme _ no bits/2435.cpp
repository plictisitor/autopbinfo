/* zdqNf9qsk ily traian F3bKPtI3G */ #include <algorithm>
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
/* zdqNf9qsk ily traian F3bKPtI3G */ 
/* zdqNf9qsk ily traian F3bKPtI3G */ 
/* zdqNf9qsk ily traian F3bKPtI3G */ using namespace std;
/* zdqNf9qsk ily traian F3bKPtI3G */ 
/* zdqNf9qsk ily traian F3bKPtI3G */ ifstream cin("fadema.in");
/* zdqNf9qsk ily traian F3bKPtI3G */ ofstream cout("fadema.out");
/* zdqNf9qsk ily traian F3bKPtI3G */ 
/* zdqNf9qsk ily traian F3bKPtI3G */ const int MaxN = 1001;
/* zdqNf9qsk ily traian F3bKPtI3G */ 
/* zdqNf9qsk ily traian F3bKPtI3G */ int h[MaxN][MaxN];
/* zdqNf9qsk ily traian F3bKPtI3G */ const int Nmax=1001;
/* zdqNf9qsk ily traian F3bKPtI3G */ 
/* zdqNf9qsk ily traian F3bKPtI3G */ bool a[Nmax][Nmax];
/* zdqNf9qsk ily traian F3bKPtI3G */ int mat[Nmax][Nmax] , mat1[Nmax][Nmax] , n , m;
/* zdqNf9qsk ily traian F3bKPtI3G */ 
/* zdqNf9qsk ily traian F3bKPtI3G */ int maxAreaInHist(int x[], int L)
/* zdqNf9qsk ily traian F3bKPtI3G */ {
/* zdqNf9qsk ily traian F3bKPtI3G */     stack<int> st;
/* zdqNf9qsk ily traian F3bKPtI3G */ 
/* zdqNf9qsk ily traian F3bKPtI3G */     int j = 0, tp;
/* zdqNf9qsk ily traian F3bKPtI3G */     int amax = 0, area;
/* zdqNf9qsk ily traian F3bKPtI3G */ 
/* zdqNf9qsk ily traian F3bKPtI3G */     while (j < max(n , m))
/* zdqNf9qsk ily traian F3bKPtI3G */     {
/* zdqNf9qsk ily traian F3bKPtI3G */         if (st.empty() || x[st.top()] <=  x[j])
/* zdqNf9qsk ily traian F3bKPtI3G */             st.push(j++);
/* zdqNf9qsk ily traian F3bKPtI3G */         else
/* zdqNf9qsk ily traian F3bKPtI3G */         {
/* zdqNf9qsk ily traian F3bKPtI3G */             tp = st.top();
/* zdqNf9qsk ily traian F3bKPtI3G */             st.pop();
/* zdqNf9qsk ily traian F3bKPtI3G */             area = x[tp] * (st.empty() ? j : j - st.top() - 1);
/* zdqNf9qsk ily traian F3bKPtI3G */             amax = max(amax, area);
/* zdqNf9qsk ily traian F3bKPtI3G */         }
/* zdqNf9qsk ily traian F3bKPtI3G */     }
/* zdqNf9qsk ily traian F3bKPtI3G */ 
/* zdqNf9qsk ily traian F3bKPtI3G */     while (!st.empty())
/* zdqNf9qsk ily traian F3bKPtI3G */     {
/* zdqNf9qsk ily traian F3bKPtI3G */         tp = st.top();
/* zdqNf9qsk ily traian F3bKPtI3G */         st.pop();
/* zdqNf9qsk ily traian F3bKPtI3G */         area = x[tp] * (st.empty() ? j : j - st.top() - 1);
/* zdqNf9qsk ily traian F3bKPtI3G */         amax = max(amax, area);
/* zdqNf9qsk ily traian F3bKPtI3G */     }
/* zdqNf9qsk ily traian F3bKPtI3G */ 
/* zdqNf9qsk ily traian F3bKPtI3G */     return amax;
/* zdqNf9qsk ily traian F3bKPtI3G */ }
/* zdqNf9qsk ily traian F3bKPtI3G */ 
/* zdqNf9qsk ily traian F3bKPtI3G */ int main()
/* zdqNf9qsk ily traian F3bKPtI3G */ {
/* zdqNf9qsk ily traian F3bKPtI3G */     cin >> n >> m;
/* zdqNf9qsk ily traian F3bKPtI3G */     for(int i = 0 ; i < n ; ++i)
/* zdqNf9qsk ily traian F3bKPtI3G */         for(int j = 0 ; j < m ; ++j)
/* zdqNf9qsk ily traian F3bKPtI3G */             cin >> a[i][j];
/* zdqNf9qsk ily traian F3bKPtI3G */     mat[0][0]=1;
/* zdqNf9qsk ily traian F3bKPtI3G */     for(int i = 1 ; i < m ; ++i)
/* zdqNf9qsk ily traian F3bKPtI3G */         mat[0][i]=!mat[0][i-1];
/* zdqNf9qsk ily traian F3bKPtI3G */     for(int i = 1 ; i < n ; ++i)
/* zdqNf9qsk ily traian F3bKPtI3G */         for(int j = 0 ; j < m ; ++j)
/* zdqNf9qsk ily traian F3bKPtI3G */             if(j==0)
/* zdqNf9qsk ily traian F3bKPtI3G */                 mat[i][j]=!mat[i-1][j];
/* zdqNf9qsk ily traian F3bKPtI3G */             else
/* zdqNf9qsk ily traian F3bKPtI3G */                 mat[i][j]=!mat[i][j-1];
/* zdqNf9qsk ily traian F3bKPtI3G */     for(int i = 0 ; i < n ; ++i)
/* zdqNf9qsk ily traian F3bKPtI3G */         for(int j = 0 ; j < m ; ++j)
/* zdqNf9qsk ily traian F3bKPtI3G */             if(mat[i][j]!=a[i][j])
/* zdqNf9qsk ily traian F3bKPtI3G */                 mat1[i][j]=0;
/* zdqNf9qsk ily traian F3bKPtI3G */             else
/* zdqNf9qsk ily traian F3bKPtI3G */                 mat1[i][j]=1;
/* zdqNf9qsk ily traian F3bKPtI3G */     for(int i = 0 ; i < n ; ++i)
/* zdqNf9qsk ily traian F3bKPtI3G */         for(int j = 0 ; j < m ; ++j)
/* zdqNf9qsk ily traian F3bKPtI3G */             a[i][j]=mat1[i][j];
/* zdqNf9qsk ily traian F3bKPtI3G */     int maxArea = 0;
/* zdqNf9qsk ily traian F3bKPtI3G */     for (int i = 0; i < n; i++)
/* zdqNf9qsk ily traian F3bKPtI3G */         for (int j = 0; j < m; j++)
/* zdqNf9qsk ily traian F3bKPtI3G */             if (a[i][j] == 0)
/* zdqNf9qsk ily traian F3bKPtI3G */                 h[i][j] = 0;
/* zdqNf9qsk ily traian F3bKPtI3G */             else
/* zdqNf9qsk ily traian F3bKPtI3G */             {
/* zdqNf9qsk ily traian F3bKPtI3G */                 if ( i == 0 )
/* zdqNf9qsk ily traian F3bKPtI3G */                     h[i][j] = 1;
/* zdqNf9qsk ily traian F3bKPtI3G */                 else
/* zdqNf9qsk ily traian F3bKPtI3G */                     h[i][j] = h[i - 1][j] + 1;
/* zdqNf9qsk ily traian F3bKPtI3G */             }
/* zdqNf9qsk ily traian F3bKPtI3G */ 
/* zdqNf9qsk ily traian F3bKPtI3G */     int area;
/* zdqNf9qsk ily traian F3bKPtI3G */     for (int i = 0; i < max(n , m); i++)
/* zdqNf9qsk ily traian F3bKPtI3G */     {
/* zdqNf9qsk ily traian F3bKPtI3G */         area = maxAreaInHist(h[i], i);
/* zdqNf9qsk ily traian F3bKPtI3G */         if (area > maxArea)
/* zdqNf9qsk ily traian F3bKPtI3G */             maxArea = area;
/* zdqNf9qsk ily traian F3bKPtI3G */     }
/* zdqNf9qsk ily traian F3bKPtI3G */     for(int i = 0 ; i < n ; ++i)
/* zdqNf9qsk ily traian F3bKPtI3G */         for(int j = 0 ; j < m ; ++j)
/* zdqNf9qsk ily traian F3bKPtI3G */             a[i][j]=!a[i][j];
/* zdqNf9qsk ily traian F3bKPtI3G */     for (int i = 0; i < n; i++)
/* zdqNf9qsk ily traian F3bKPtI3G */         for (int j = 0; j < m; j++)
/* zdqNf9qsk ily traian F3bKPtI3G */             if (a[i][j] == 0)
/* zdqNf9qsk ily traian F3bKPtI3G */                 h[i][j] = 0;
/* zdqNf9qsk ily traian F3bKPtI3G */             else
/* zdqNf9qsk ily traian F3bKPtI3G */             {
/* zdqNf9qsk ily traian F3bKPtI3G */                 if ( i == 0 )
/* zdqNf9qsk ily traian F3bKPtI3G */                     h[i][j] = 1;
/* zdqNf9qsk ily traian F3bKPtI3G */                 else
/* zdqNf9qsk ily traian F3bKPtI3G */                     h[i][j] = h[i - 1][j] + 1;
/* zdqNf9qsk ily traian F3bKPtI3G */             }
/* zdqNf9qsk ily traian F3bKPtI3G */     for (int i = 0; i < max(n , m); i++)
/* zdqNf9qsk ily traian F3bKPtI3G */     {
/* zdqNf9qsk ily traian F3bKPtI3G */         area = maxAreaInHist(h[i], i);
/* zdqNf9qsk ily traian F3bKPtI3G */         if (area > maxArea)
/* zdqNf9qsk ily traian F3bKPtI3G */             maxArea = area;
/* zdqNf9qsk ily traian F3bKPtI3G */     }
/* zdqNf9qsk ily traian F3bKPtI3G */     cout << maxArea;
/* zdqNf9qsk ily traian F3bKPtI3G */ }