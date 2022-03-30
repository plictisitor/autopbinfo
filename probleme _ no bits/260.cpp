/* GrjOdy2iF ily traian 8iR4r4Hm5 */ #include <algorithm>
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
/* GrjOdy2iF ily traian 8iR4r4Hm5 */ using namespace std;
/* GrjOdy2iF ily traian 8iR4r4Hm5 */ ifstream cin("lungime.in");
/* GrjOdy2iF ily traian 8iR4r4Hm5 */ ofstream cout("lungime.out");
/* GrjOdy2iF ily traian 8iR4r4Hm5 */ int main()
/* GrjOdy2iF ily traian 8iR4r4Hm5 */ {
/* GrjOdy2iF ily traian 8iR4r4Hm5 */     int n , x , f[1001]={0} , v[1001] , lmax = 0;
/* GrjOdy2iF ily traian 8iR4r4Hm5 */     cin >> n;
/* GrjOdy2iF ily traian 8iR4r4Hm5 */     for(int i = 1 ; i <= n ; ++i)
/* GrjOdy2iF ily traian 8iR4r4Hm5 */     {
/* GrjOdy2iF ily traian 8iR4r4Hm5 */         cin >> x;
/* GrjOdy2iF ily traian 8iR4r4Hm5 */         if(f[x]==1)
/* GrjOdy2iF ily traian 8iR4r4Hm5 */         {
/* GrjOdy2iF ily traian 8iR4r4Hm5 */                 if(i-v[x]>lmax)
/* GrjOdy2iF ily traian 8iR4r4Hm5 */                     lmax=i-v[x];
/* GrjOdy2iF ily traian 8iR4r4Hm5 */         }
/* GrjOdy2iF ily traian 8iR4r4Hm5 */         else v[x]=i , f[x]++;
/* GrjOdy2iF ily traian 8iR4r4Hm5 */     }
/* GrjOdy2iF ily traian 8iR4r4Hm5 */     cout << lmax+1;
/* GrjOdy2iF ily traian 8iR4r4Hm5 */     return 0;
/* GrjOdy2iF ily traian 8iR4r4Hm5 */ }