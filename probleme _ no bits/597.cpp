/* QCY0iA5DT ily traian UzRNYLsi7 */ #include <algorithm>
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
/* QCY0iA5DT ily traian UzRNYLsi7 */ using namespace std;
/* QCY0iA5DT ily traian UzRNYLsi7 */ 
/* QCY0iA5DT ily traian UzRNYLsi7 */ int a[101][101], n, m;
/* QCY0iA5DT ily traian UzRNYLsi7 */ 
/* QCY0iA5DT ily traian UzRNYLsi7 */ int main(){
/* QCY0iA5DT ily traian UzRNYLsi7 */ 
/* QCY0iA5DT ily traian UzRNYLsi7 */     cin >> n >> m;
/* QCY0iA5DT ily traian UzRNYLsi7 */     for(int i = 1; i <= n; ++i)
/* QCY0iA5DT ily traian UzRNYLsi7 */         for(int j = 1; j <= m; ++j)
/* QCY0iA5DT ily traian UzRNYLsi7 */             cin >> a[i][j];
/* QCY0iA5DT ily traian UzRNYLsi7 */ 
/* QCY0iA5DT ily traian UzRNYLsi7 */     int imin = 101, imax = 0, jmin = 101, jmax = 0;
/* QCY0iA5DT ily traian UzRNYLsi7 */ 
/* QCY0iA5DT ily traian UzRNYLsi7 */     for(int i = 1; i <= n; ++i)
/* QCY0iA5DT ily traian UzRNYLsi7 */         for(int j = 1; j <= m; ++j)
/* QCY0iA5DT ily traian UzRNYLsi7 */             if(a[i][j] == 1){
/* QCY0iA5DT ily traian UzRNYLsi7 */                 if(i > imax)
/* QCY0iA5DT ily traian UzRNYLsi7 */                     imax = i;
/* QCY0iA5DT ily traian UzRNYLsi7 */                 if(i < imin)
/* QCY0iA5DT ily traian UzRNYLsi7 */                     imin = i;
/* QCY0iA5DT ily traian UzRNYLsi7 */                 if(j > jmax)
/* QCY0iA5DT ily traian UzRNYLsi7 */                     jmax = j;
/* QCY0iA5DT ily traian UzRNYLsi7 */                 if(j < jmin)
/* QCY0iA5DT ily traian UzRNYLsi7 */                     jmin = j;
/* QCY0iA5DT ily traian UzRNYLsi7 */             }
/* QCY0iA5DT ily traian UzRNYLsi7 */     cout << imax - imin + 1 << ' ' << jmax - jmin + 1 << endl;
/* QCY0iA5DT ily traian UzRNYLsi7 */     for(int i = imin; i <= imax; ++i, cout << endl)
/* QCY0iA5DT ily traian UzRNYLsi7 */         for(int j = jmin; j <= jmax; ++j)
/* QCY0iA5DT ily traian UzRNYLsi7 */             cout << a[i][j] << ' ';
/* QCY0iA5DT ily traian UzRNYLsi7 */ 
/* QCY0iA5DT ily traian UzRNYLsi7 */     return 0;
/* QCY0iA5DT ily traian UzRNYLsi7 */ }