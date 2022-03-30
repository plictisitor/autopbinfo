/* fPR4ckGgX ily traian 45M2cKNx2 */ #include <algorithm>
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
/* fPR4ckGgX ily traian 45M2cKNx2 */ using namespace std;
/* fPR4ckGgX ily traian 45M2cKNx2 */ 
/* fPR4ckGgX ily traian 45M2cKNx2 */ ifstream cin("minusk.in");
/* fPR4ckGgX ily traian 45M2cKNx2 */ ofstream cout("minusk.out");
/* fPR4ckGgX ily traian 45M2cKNx2 */ 
/* fPR4ckGgX ily traian 45M2cKNx2 */ int n , k , m[1000001] , p[1000001];
/* fPR4ckGgX ily traian 45M2cKNx2 */ 
/* fPR4ckGgX ily traian 45M2cKNx2 */ int main()
/* fPR4ckGgX ily traian 45M2cKNx2 */ {
/* fPR4ckGgX ily traian 45M2cKNx2 */     cin >> n >> k;
/* fPR4ckGgX ily traian 45M2cKNx2 */     p[0] = p[1] = m[1] = 1;
/* fPR4ckGgX ily traian 45M2cKNx2 */     for(int i = 2 ; i <= n ; i++)
/* fPR4ckGgX ily traian 45M2cKNx2 */     {
/* fPR4ckGgX ily traian 45M2cKNx2 */         p[i] = m[i] = (m[i - 1] + p[i - 1]) % 2011;
/* fPR4ckGgX ily traian 45M2cKNx2 */         if(i >= k)
/* fPR4ckGgX ily traian 45M2cKNx2 */         {
/* fPR4ckGgX ily traian 45M2cKNx2 */             if(m[i] > p[i - k]) m[i] = (m[i] - p[i - k]) % 2011;
/* fPR4ckGgX ily traian 45M2cKNx2 */             else m[i] = (m[i] + 2011 - p[i - k]) % 2011;
/* fPR4ckGgX ily traian 45M2cKNx2 */         }
/* fPR4ckGgX ily traian 45M2cKNx2 */     }
/* fPR4ckGgX ily traian 45M2cKNx2 */     cout << (m[n] + p[n]) % 2011;
/* fPR4ckGgX ily traian 45M2cKNx2 */     return 0;
/* fPR4ckGgX ily traian 45M2cKNx2 */ }