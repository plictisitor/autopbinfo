/* tOa3mOyIR ily traian vwo10jxv8 */ #include <algorithm>
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
/* tOa3mOyIR ily traian vwo10jxv8 */ using namespace std;
/* tOa3mOyIR ily traian vwo10jxv8 */ ifstream fin("mincols1.in");
/* tOa3mOyIR ily traian vwo10jxv8 */ ofstream fout("mincols1.out");
/* tOa3mOyIR ily traian vwo10jxv8 */ int main()
/* tOa3mOyIR ily traian vwo10jxv8 */ {
/* tOa3mOyIR ily traian vwo10jxv8 */     long long n , a[30][30] , p = 1 , mini;
/* tOa3mOyIR ily traian vwo10jxv8 */     fin >> n;
/* tOa3mOyIR ily traian vwo10jxv8 */     for(int i = 0 ; i < n ; ++i)
/* tOa3mOyIR ily traian vwo10jxv8 */         for(int j = 0 ; j < n ; ++j) fin >> a[i][j];
/* tOa3mOyIR ily traian vwo10jxv8 */     for(int i = 0 ; i < n ; ++i)
/* tOa3mOyIR ily traian vwo10jxv8 */     {
/* tOa3mOyIR ily traian vwo10jxv8 */         for(int j = 0 ; j < n ; ++j)
/* tOa3mOyIR ily traian vwo10jxv8 */         {
/* tOa3mOyIR ily traian vwo10jxv8 */             if(i + j == n - 1)
/* tOa3mOyIR ily traian vwo10jxv8 */             {
/* tOa3mOyIR ily traian vwo10jxv8 */                 mini=a[i][j];
/* tOa3mOyIR ily traian vwo10jxv8 */                 int cnt=0;
/* tOa3mOyIR ily traian vwo10jxv8 */                 for(int k = 0 ; k < n ; ++k)
/* tOa3mOyIR ily traian vwo10jxv8 */                 {
/* tOa3mOyIR ily traian vwo10jxv8 */                     if(a[k][j]>=mini)
/* tOa3mOyIR ily traian vwo10jxv8 */                     cnt++;
/* tOa3mOyIR ily traian vwo10jxv8 */                 }
/* tOa3mOyIR ily traian vwo10jxv8 */                 if(cnt==n)
/* tOa3mOyIR ily traian vwo10jxv8 */                 p*=mini;
/* tOa3mOyIR ily traian vwo10jxv8 */                 p = p % 10;
/* tOa3mOyIR ily traian vwo10jxv8 */             }
/* tOa3mOyIR ily traian vwo10jxv8 */         }
/* tOa3mOyIR ily traian vwo10jxv8 */     }
/* tOa3mOyIR ily traian vwo10jxv8 */     fout << p%10;
/* tOa3mOyIR ily traian vwo10jxv8 */ }