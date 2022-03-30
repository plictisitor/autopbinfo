/* qTJh9KDsZ ily traian nGHYZXYu8 */ #include <algorithm>
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
/* qTJh9KDsZ ily traian nGHYZXYu8 */ using namespace std;
/* qTJh9KDsZ ily traian nGHYZXYu8 */ ifstream fin("benzinarii.in");
/* qTJh9KDsZ ily traian nGHYZXYu8 */ ofstream fout("benzinarii.out");
/* qTJh9KDsZ ily traian nGHYZXYu8 */ int pal(int n)
/* qTJh9KDsZ ily traian nGHYZXYu8 */ {
/* qTJh9KDsZ ily traian nGHYZXYu8 */     long long ogl = 0 , n1 = n;
/* qTJh9KDsZ ily traian nGHYZXYu8 */     while(n1 != 0)
/* qTJh9KDsZ ily traian nGHYZXYu8 */     {
/* qTJh9KDsZ ily traian nGHYZXYu8 */         ogl = ogl * 10 + n1 % 10;
/* qTJh9KDsZ ily traian nGHYZXYu8 */         n1 /= 10;
/* qTJh9KDsZ ily traian nGHYZXYu8 */     }
/* qTJh9KDsZ ily traian nGHYZXYu8 */     if(ogl == n) return 1;
/* qTJh9KDsZ ily traian nGHYZXYu8 */     else return 0;
/* qTJh9KDsZ ily traian nGHYZXYu8 */ }
/* qTJh9KDsZ ily traian nGHYZXYu8 */ 
/* qTJh9KDsZ ily traian nGHYZXYu8 */ int main()
/* qTJh9KDsZ ily traian nGHYZXYu8 */ {
/* qTJh9KDsZ ily traian nGHYZXYu8 */     long long n , mini = 1000000000 , d1 = 0 , p = 1;
/* qTJh9KDsZ ily traian nGHYZXYu8 */     fin >> n;
/* qTJh9KDsZ ily traian nGHYZXYu8 */     long long n1 = n , n2 = n;
/* qTJh9KDsZ ily traian nGHYZXYu8 */     while(p != 0)
/* qTJh9KDsZ ily traian nGHYZXYu8 */     {
/* qTJh9KDsZ ily traian nGHYZXYu8 */         d1++;
/* qTJh9KDsZ ily traian nGHYZXYu8 */         if(pal(n1+1)) p = 0;
/* qTJh9KDsZ ily traian nGHYZXYu8 */         else n1++;
/* qTJh9KDsZ ily traian nGHYZXYu8 */     }
/* qTJh9KDsZ ily traian nGHYZXYu8 */     if(d1 < mini) mini = d1;
/* qTJh9KDsZ ily traian nGHYZXYu8 */     int d2 = 0 ;
/* qTJh9KDsZ ily traian nGHYZXYu8 */      p = 1;
/* qTJh9KDsZ ily traian nGHYZXYu8 */      while(p != 0)
/* qTJh9KDsZ ily traian nGHYZXYu8 */     {
/* qTJh9KDsZ ily traian nGHYZXYu8 */         d2++;
/* qTJh9KDsZ ily traian nGHYZXYu8 */         if(pal(n-1)) p = 0;
/* qTJh9KDsZ ily traian nGHYZXYu8 */         else n--;
/* qTJh9KDsZ ily traian nGHYZXYu8 */     }
/* qTJh9KDsZ ily traian nGHYZXYu8 */     if(d2 < mini)mini = d2;
/* qTJh9KDsZ ily traian nGHYZXYu8 */     fout << mini << ' ' << mini + 1LL*n2;
/* qTJh9KDsZ ily traian nGHYZXYu8 */ 
/* qTJh9KDsZ ily traian nGHYZXYu8 */     fin.close();
/* qTJh9KDsZ ily traian nGHYZXYu8 */     fout.close();
/* qTJh9KDsZ ily traian nGHYZXYu8 */ 
/* qTJh9KDsZ ily traian nGHYZXYu8 */     return 0;
/* qTJh9KDsZ ily traian nGHYZXYu8 */ }