/* HQYdq5UV1 ily traian aSrxxeQyw */ #include <algorithm>
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
/* HQYdq5UV1 ily traian aSrxxeQyw */ 
/* HQYdq5UV1 ily traian aSrxxeQyw */ using namespace std;
/* HQYdq5UV1 ily traian aSrxxeQyw */ 
/* HQYdq5UV1 ily traian aSrxxeQyw */ ifstream cin("interclasare1.in");
/* HQYdq5UV1 ily traian aSrxxeQyw */ ofstream cout("interclasare1.out");
/* HQYdq5UV1 ily traian aSrxxeQyw */ 
/* HQYdq5UV1 ily traian aSrxxeQyw */ int main()
/* HQYdq5UV1 ily traian aSrxxeQyw */ {
/* HQYdq5UV1 ily traian aSrxxeQyw */     int n, m, k = 0;
/* HQYdq5UV1 ily traian aSrxxeQyw */     int a[100001], b[100001], c[200001];
/* HQYdq5UV1 ily traian aSrxxeQyw */     cin >> n;
/* HQYdq5UV1 ily traian aSrxxeQyw */     for(int i = 1; i <= n; ++i)
/* HQYdq5UV1 ily traian aSrxxeQyw */         cin >> a[i];
/* HQYdq5UV1 ily traian aSrxxeQyw */     cin >> m;
/* HQYdq5UV1 ily traian aSrxxeQyw */     for(int i = 1; i <= m; ++i)
/* HQYdq5UV1 ily traian aSrxxeQyw */         cin >> b[i];
/* HQYdq5UV1 ily traian aSrxxeQyw */ 
/* HQYdq5UV1 ily traian aSrxxeQyw */     int i = 1, j = 1;
/* HQYdq5UV1 ily traian aSrxxeQyw */ 
/* HQYdq5UV1 ily traian aSrxxeQyw */     while(i <= n && j <= m)
/* HQYdq5UV1 ily traian aSrxxeQyw */         if(a[i] < b[j])
/* HQYdq5UV1 ily traian aSrxxeQyw */             c[++k] = a[i], i++;
/* HQYdq5UV1 ily traian aSrxxeQyw */         else
/* HQYdq5UV1 ily traian aSrxxeQyw */             if(a[i] > b[j])
/* HQYdq5UV1 ily traian aSrxxeQyw */                 c[++k] = b[j], j++;
/* HQYdq5UV1 ily traian aSrxxeQyw */             else
/* HQYdq5UV1 ily traian aSrxxeQyw */                 i++;
/* HQYdq5UV1 ily traian aSrxxeQyw */ 
/* HQYdq5UV1 ily traian aSrxxeQyw */     while(i <= n)
/* HQYdq5UV1 ily traian aSrxxeQyw */         c[++k] = a[i], i++;
/* HQYdq5UV1 ily traian aSrxxeQyw */ 
/* HQYdq5UV1 ily traian aSrxxeQyw */     while(j <= m)
/* HQYdq5UV1 ily traian aSrxxeQyw */         c[++k] = b[j], j++;
/* HQYdq5UV1 ily traian aSrxxeQyw */ 
/* HQYdq5UV1 ily traian aSrxxeQyw */     for(int i = 1; i <= k; ++i){
/* HQYdq5UV1 ily traian aSrxxeQyw */         cout << c[i] << " ";
/* HQYdq5UV1 ily traian aSrxxeQyw */         if(i % 10 == 0)
/* HQYdq5UV1 ily traian aSrxxeQyw */             cout << endl;
/* HQYdq5UV1 ily traian aSrxxeQyw */     }
/* HQYdq5UV1 ily traian aSrxxeQyw */ 
/* HQYdq5UV1 ily traian aSrxxeQyw */     return 0;
/* HQYdq5UV1 ily traian aSrxxeQyw */ }