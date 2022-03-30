/* y7dbH321q ily traian XtFwmohib */ #include <algorithm>
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
/* y7dbH321q ily traian XtFwmohib */ using namespace std;
/* y7dbH321q ily traian XtFwmohib */ 
/* y7dbH321q ily traian XtFwmohib */ ifstream cin("taxe.in");
/* y7dbH321q ily traian XtFwmohib */ ofstream cout("taxe.out");
/* y7dbH321q ily traian XtFwmohib */ 
/* y7dbH321q ily traian XtFwmohib */ int n , m , a[201][201] , b[201][201] , sol;
/* y7dbH321q ily traian XtFwmohib */ 
/* y7dbH321q ily traian XtFwmohib */ int main()
/* y7dbH321q ily traian XtFwmohib */ {
/* y7dbH321q ily traian XtFwmohib */     cin >> n >> m;
/* y7dbH321q ily traian XtFwmohib */     for(int i = 0; i < n; i++)
/* y7dbH321q ily traian XtFwmohib */         for(int j = 0; j < m; j++)
/* y7dbH321q ily traian XtFwmohib */             cin >> a[i][j];
/* y7dbH321q ily traian XtFwmohib */ 
/* y7dbH321q ily traian XtFwmohib */     for(int i = 0 ; i < n; i++)
/* y7dbH321q ily traian XtFwmohib */         b[i][0] = a[i][0];
/* y7dbH321q ily traian XtFwmohib */ 
/* y7dbH321q ily traian XtFwmohib */     for(int j = 1; j < m; j++)
/* y7dbH321q ily traian XtFwmohib */     {
/* y7dbH321q ily traian XtFwmohib */         b[0][j] = a[0][j] + min(b[0][j - 1], b[1][j - 1]);
/* y7dbH321q ily traian XtFwmohib */         for (int i = 1; i + 1 < n; i++)
/* y7dbH321q ily traian XtFwmohib */             b[i][j] = a[i][j] + min(min(b[i - 1][j - 1], b[i][j - 1]), b[i + 1][j - 1]);
/* y7dbH321q ily traian XtFwmohib */         b[n - 1][j] = a[n - 1][j] + min(b[n - 2][j - 1], b[n - 1][j - 1]);
/* y7dbH321q ily traian XtFwmohib */     }
/* y7dbH321q ily traian XtFwmohib */ 
/* y7dbH321q ily traian XtFwmohib */     sol = b[0][m - 1];
/* y7dbH321q ily traian XtFwmohib */ 
/* y7dbH321q ily traian XtFwmohib */     for(int i = 1; i < n; i++)
/* y7dbH321q ily traian XtFwmohib */         sol = min(sol, b[i][m - 1]);
/* y7dbH321q ily traian XtFwmohib */     cout << sol;
/* y7dbH321q ily traian XtFwmohib */     return 0;
/* y7dbH321q ily traian XtFwmohib */ }