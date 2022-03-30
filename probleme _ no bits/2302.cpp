/* BtRcRqGCy ily traian 1Brfg9123 */ #include <algorithm>
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
/* BtRcRqGCy ily traian 1Brfg9123 */ using namespace std;
/* BtRcRqGCy ily traian 1Brfg9123 */ ifstream fin("memory009.in");
/* BtRcRqGCy ily traian 1Brfg9123 */ ofstream fout("memory009.out");
/* BtRcRqGCy ily traian 1Brfg9123 */ int main()
/* BtRcRqGCy ily traian 1Brfg9123 */ {
/* BtRcRqGCy ily traian 1Brfg9123 */     int n , m , x , f1[32]={0} , f2[32]={0};
/* BtRcRqGCy ily traian 1Brfg9123 */     fin >> n >> m;
/* BtRcRqGCy ily traian 1Brfg9123 */     for(int i = 0 ; i < n ; ++i)
/* BtRcRqGCy ily traian 1Brfg9123 */     {
/* BtRcRqGCy ily traian 1Brfg9123 */         fin >> x;
/* BtRcRqGCy ily traian 1Brfg9123 */         f1[x]++;
/* BtRcRqGCy ily traian 1Brfg9123 */     }
/* BtRcRqGCy ily traian 1Brfg9123 */     for(int i = 0 ; i < m ; ++i)
/* BtRcRqGCy ily traian 1Brfg9123 */     {
/* BtRcRqGCy ily traian 1Brfg9123 */         fin >> x;
/* BtRcRqGCy ily traian 1Brfg9123 */         f2[x]++;
/* BtRcRqGCy ily traian 1Brfg9123 */     }
/* BtRcRqGCy ily traian 1Brfg9123 */     for(int i = 0 ; i <= 30 ; ++i)
/* BtRcRqGCy ily traian 1Brfg9123 */     {
/* BtRcRqGCy ily traian 1Brfg9123 */         if(f2[i]!=0 && f1[i]!=0)
/* BtRcRqGCy ily traian 1Brfg9123 */             fout << i <<" ";
/* BtRcRqGCy ily traian 1Brfg9123 */     }
/* BtRcRqGCy ily traian 1Brfg9123 */ 
/* BtRcRqGCy ily traian 1Brfg9123 */     fin.close();
/* BtRcRqGCy ily traian 1Brfg9123 */     fout.close();
/* BtRcRqGCy ily traian 1Brfg9123 */ 
/* BtRcRqGCy ily traian 1Brfg9123 */     return 0;
/* BtRcRqGCy ily traian 1Brfg9123 */ }