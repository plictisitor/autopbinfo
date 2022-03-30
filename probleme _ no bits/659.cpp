/* kG47qTOmS ily traian ls5rlnT27 */ #include <algorithm>
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
/* kG47qTOmS ily traian ls5rlnT27 */ using namespace std;
/* kG47qTOmS ily traian ls5rlnT27 */ int main()
/* kG47qTOmS ily traian ls5rlnT27 */ {
/* kG47qTOmS ily traian ls5rlnT27 */     int n,m,s=0,maxi;
/* kG47qTOmS ily traian ls5rlnT27 */     int a[101][101];
/* kG47qTOmS ily traian ls5rlnT27 */     cin >> n >> m;
/* kG47qTOmS ily traian ls5rlnT27 */     for(int i=1;i<=n;++i)
/* kG47qTOmS ily traian ls5rlnT27 */         for(int j=1;j<=m;++j)
/* kG47qTOmS ily traian ls5rlnT27 */         cin >> a[i][j];
/* kG47qTOmS ily traian ls5rlnT27 */     for(int i=1;i<=n;++i)
/* kG47qTOmS ily traian ls5rlnT27 */     {
/* kG47qTOmS ily traian ls5rlnT27 */         s=0;
/* kG47qTOmS ily traian ls5rlnT27 */         maxi = a[i][1];///initializam maximul cu primul element de pe fecare linie
/* kG47qTOmS ily traian ls5rlnT27 */         for(int j=1;j<=m;++j)
/* kG47qTOmS ily traian ls5rlnT27 */         {
/* kG47qTOmS ily traian ls5rlnT27 */            if(maxi<a[i][j]) maxi=a[i][j];
/* kG47qTOmS ily traian ls5rlnT27 */             s=s+a[i][j];
/* kG47qTOmS ily traian ls5rlnT27 */         }
/* kG47qTOmS ily traian ls5rlnT27 */         cout << s-maxi<<" ";
/* kG47qTOmS ily traian ls5rlnT27 */     }
/* kG47qTOmS ily traian ls5rlnT27 */     return 0;
/* kG47qTOmS ily traian ls5rlnT27 */ 
/* kG47qTOmS ily traian ls5rlnT27 */ }