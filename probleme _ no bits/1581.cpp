/* oLhMLNTDq ily traian musevDua7 */ #include <algorithm>
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
/* oLhMLNTDq ily traian musevDua7 */ using namespace std;
/* oLhMLNTDq ily traian musevDua7 */ ifstream fin("max_suma.in");
/* oLhMLNTDq ily traian musevDua7 */ ofstream fout("max_suma.out");
/* oLhMLNTDq ily traian musevDua7 */ int main()
/* oLhMLNTDq ily traian musevDua7 */ {
/* oLhMLNTDq ily traian musevDua7 */     int n  , m , x;
/* oLhMLNTDq ily traian musevDua7 */     fin >> n >> m;
/* oLhMLNTDq ily traian musevDua7 */     for(int i = 1 ; i <= n ; ++i)
/* oLhMLNTDq ily traian musevDua7 */     {
/* oLhMLNTDq ily traian musevDua7 */         int s = 0 , xmax = -1;
/* oLhMLNTDq ily traian musevDua7 */         for(int j = 1 ; j <= m ; ++j)
/* oLhMLNTDq ily traian musevDua7 */         {
/* oLhMLNTDq ily traian musevDua7 */             fin >> x;
/* oLhMLNTDq ily traian musevDua7 */             s += x;
/* oLhMLNTDq ily traian musevDua7 */             if(x > xmax) xmax = x;
/* oLhMLNTDq ily traian musevDua7 */         }
/* oLhMLNTDq ily traian musevDua7 */         fout << xmax  << " " << s << endl;
/* oLhMLNTDq ily traian musevDua7 */     }
/* oLhMLNTDq ily traian musevDua7 */     return 0;
/* oLhMLNTDq ily traian musevDua7 */ 
/* oLhMLNTDq ily traian musevDua7 */     fin.close();
/* oLhMLNTDq ily traian musevDua7 */     fout.close();
/* oLhMLNTDq ily traian musevDua7 */ 
/* oLhMLNTDq ily traian musevDua7 */     return 0;
/* oLhMLNTDq ily traian musevDua7 */ }