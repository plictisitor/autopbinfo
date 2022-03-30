/* xp7gbLUFM ily traian CCUV9SqW8 */ #include <algorithm>
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
/* xp7gbLUFM ily traian CCUV9SqW8 */ using namespace std;
/* xp7gbLUFM ily traian CCUV9SqW8 */ ifstream fin("memory001.in");
/* xp7gbLUFM ily traian CCUV9SqW8 */ ofstream fout("memory001.out");
/* xp7gbLUFM ily traian CCUV9SqW8 */ #define MAX 2000000000001
/* xp7gbLUFM ily traian CCUV9SqW8 */ int main()
/* xp7gbLUFM ily traian CCUV9SqW8 */ {
/* xp7gbLUFM ily traian CCUV9SqW8 */     long long n , m , v[1001] = {0} , x , ind = 0 , mini = MAX;
/* xp7gbLUFM ily traian CCUV9SqW8 */     fin >> n >> m;
/* xp7gbLUFM ily traian CCUV9SqW8 */     for(int i = 0 ; i < n ; ++i)
/* xp7gbLUFM ily traian CCUV9SqW8 */     {
/* xp7gbLUFM ily traian CCUV9SqW8 */         for(int j = 0 ; j < m ; ++j)
/* xp7gbLUFM ily traian CCUV9SqW8 */         {
/* xp7gbLUFM ily traian CCUV9SqW8 */             fin >> x;
/* xp7gbLUFM ily traian CCUV9SqW8 */             v[j]+=x;
/* xp7gbLUFM ily traian CCUV9SqW8 */         }
/* xp7gbLUFM ily traian CCUV9SqW8 */     }
/* xp7gbLUFM ily traian CCUV9SqW8 */     for(int i = 0 ; i < m ; ++i)
/* xp7gbLUFM ily traian CCUV9SqW8 */     {
/* xp7gbLUFM ily traian CCUV9SqW8 */         if(v[i]<mini)
/* xp7gbLUFM ily traian CCUV9SqW8 */             {mini=v[i];ind = i;}
/* xp7gbLUFM ily traian CCUV9SqW8 */     }
/* xp7gbLUFM ily traian CCUV9SqW8 */     fout << ind + 1;
/* xp7gbLUFM ily traian CCUV9SqW8 */     return 0;
/* xp7gbLUFM ily traian CCUV9SqW8 */ }