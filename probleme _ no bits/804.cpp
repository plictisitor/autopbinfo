/* KLO5Gd0mh ily traian sDGOSavD7 */ #include <algorithm>
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
/* KLO5Gd0mh ily traian sDGOSavD7 */ using namespace std;
/* KLO5Gd0mh ily traian sDGOSavD7 */ int main()
/* KLO5Gd0mh ily traian sDGOSavD7 */ {
/* KLO5Gd0mh ily traian sDGOSavD7 */     int n,m,s=0,maxi;
/* KLO5Gd0mh ily traian sDGOSavD7 */     int a[101][101];
/* KLO5Gd0mh ily traian sDGOSavD7 */     bool ok, gasit = false;
/* KLO5Gd0mh ily traian sDGOSavD7 */     cin >> m >> n;
/* KLO5Gd0mh ily traian sDGOSavD7 */     for(int i=1;i<=m;++i)
/* KLO5Gd0mh ily traian sDGOSavD7 */         for(int j=1;j<=n;++j)
/* KLO5Gd0mh ily traian sDGOSavD7 */         cin >> a[i][j];
/* KLO5Gd0mh ily traian sDGOSavD7 */     for(int j=1;j<=n;++j)
/* KLO5Gd0mh ily traian sDGOSavD7 */     {
/* KLO5Gd0mh ily traian sDGOSavD7 */        ok=true;
/* KLO5Gd0mh ily traian sDGOSavD7 */        for(int i =1;i<m;++i)
/* KLO5Gd0mh ily traian sDGOSavD7 */         if(a[i][j] != a[i+1][j]) ok=false;
/* KLO5Gd0mh ily traian sDGOSavD7 */        if(ok==true)
/* KLO5Gd0mh ily traian sDGOSavD7 */        {
/* KLO5Gd0mh ily traian sDGOSavD7 */            a[0][j]=1;
/* KLO5Gd0mh ily traian sDGOSavD7 */            gasit = true;
/* KLO5Gd0mh ily traian sDGOSavD7 */        }
/* KLO5Gd0mh ily traian sDGOSavD7 */        else a[0][j]=0;
/* KLO5Gd0mh ily traian sDGOSavD7 */ 
/* KLO5Gd0mh ily traian sDGOSavD7 */      }
/* KLO5Gd0mh ily traian sDGOSavD7 */      if( gasit == false)
/* KLO5Gd0mh ily traian sDGOSavD7 */         cout << "nu exista";
/* KLO5Gd0mh ily traian sDGOSavD7 */      else
/* KLO5Gd0mh ily traian sDGOSavD7 */      for(int j=1;j<=n;++j)
/* KLO5Gd0mh ily traian sDGOSavD7 */         if(a[0][j]==1) cout << a[1][j]<<" ";
/* KLO5Gd0mh ily traian sDGOSavD7 */     return 0;
/* KLO5Gd0mh ily traian sDGOSavD7 */ 
/* KLO5Gd0mh ily traian sDGOSavD7 */ }