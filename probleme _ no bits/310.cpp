/* e4A1dTCFJ ily traian EXnHlE57k */ #include <algorithm>
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
/* e4A1dTCFJ ily traian EXnHlE57k */ using namespace std;
/* e4A1dTCFJ ily traian EXnHlE57k */ 
/* e4A1dTCFJ ily traian EXnHlE57k */ ifstream fin("secvpal.in");
/* e4A1dTCFJ ily traian EXnHlE57k */ ofstream fout("secvpal.out");
/* e4A1dTCFJ ily traian EXnHlE57k */ 
/* e4A1dTCFJ ily traian EXnHlE57k */ int main()
/* e4A1dTCFJ ily traian EXnHlE57k */ {
/* e4A1dTCFJ ily traian EXnHlE57k */     int a[1001], n ,st=0 , dr=0;
/* e4A1dTCFJ ily traian EXnHlE57k */     fin >> n;
/* e4A1dTCFJ ily traian EXnHlE57k */     for(int i = 1 ; i <= n ; ++i)
/* e4A1dTCFJ ily traian EXnHlE57k */         fin >> a[i];
/* e4A1dTCFJ ily traian EXnHlE57k */     for(int i = 1 ; i <= n ; ++i)
/* e4A1dTCFJ ily traian EXnHlE57k */     {
/* e4A1dTCFJ ily traian EXnHlE57k */         for(int j = i + 1 ; j <= n ; ++j)
/* e4A1dTCFJ ily traian EXnHlE57k */         {
/* e4A1dTCFJ ily traian EXnHlE57k */             if(a[i]==a[j])
/* e4A1dTCFJ ily traian EXnHlE57k */             {
/* e4A1dTCFJ ily traian EXnHlE57k */                 int ok=1;
/* e4A1dTCFJ ily traian EXnHlE57k */                 for(int x=i , y=j ; x<y ; x++ , y--)
/* e4A1dTCFJ ily traian EXnHlE57k */                     if(a[x]!=a[y]) ok=0;
/* e4A1dTCFJ ily traian EXnHlE57k */                 if(ok)
/* e4A1dTCFJ ily traian EXnHlE57k */                     if(j-i>dr-st)
/* e4A1dTCFJ ily traian EXnHlE57k */                 {
/* e4A1dTCFJ ily traian EXnHlE57k */                     st=i;
/* e4A1dTCFJ ily traian EXnHlE57k */                     dr=j;
/* e4A1dTCFJ ily traian EXnHlE57k */                 }
/* e4A1dTCFJ ily traian EXnHlE57k */             }
/* e4A1dTCFJ ily traian EXnHlE57k */         }
/* e4A1dTCFJ ily traian EXnHlE57k */     }
/* e4A1dTCFJ ily traian EXnHlE57k */ 
/* e4A1dTCFJ ily traian EXnHlE57k */     fout << st << ' ' << dr;
/* e4A1dTCFJ ily traian EXnHlE57k */ 
/* e4A1dTCFJ ily traian EXnHlE57k */     fin.close();
/* e4A1dTCFJ ily traian EXnHlE57k */     fout.close();
/* e4A1dTCFJ ily traian EXnHlE57k */ 
/* e4A1dTCFJ ily traian EXnHlE57k */     return 0;
/* e4A1dTCFJ ily traian EXnHlE57k */ }