/* r0rbMTRlt ily traian fMJ1il0g6 */ #include <algorithm>
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
/* r0rbMTRlt ily traian fMJ1il0g6 */ using namespace std;
/* r0rbMTRlt ily traian fMJ1il0g6 */ 
/* r0rbMTRlt ily traian fMJ1il0g6 */ ifstream cin ("ab3.in");
/* r0rbMTRlt ily traian fMJ1il0g6 */ ofstream cout ("ab3.out");
/* r0rbMTRlt ily traian fMJ1il0g6 */ 
/* r0rbMTRlt ily traian fMJ1il0g6 */ unsigned long long cautare(unsigned long long x , unsigned long long st , unsigned long long dr)
/* r0rbMTRlt ily traian fMJ1il0g6 */ {
/* r0rbMTRlt ily traian fMJ1il0g6 */     unsigned long long mij = (st + dr) / 2;
/* r0rbMTRlt ily traian fMJ1il0g6 */     if(x == 1) return 0;
/* r0rbMTRlt ily traian fMJ1il0g6 */     if(mij * mij * mij + mij == x || (mij * mij * mij + mij < x && (mij + 1) * (mij + 1) * (mij + 1) + (mij + 1) > x))
/* r0rbMTRlt ily traian fMJ1il0g6 */        return mij;
/* r0rbMTRlt ily traian fMJ1il0g6 */     if(mij * mij * mij + mij < x) return cautare(x , mij + 1 , dr);
/* r0rbMTRlt ily traian fMJ1il0g6 */     if(mij * mij * mij + mij > x) return cautare(x , st , mij - 1);
/* r0rbMTRlt ily traian fMJ1il0g6 */ }
/* r0rbMTRlt ily traian fMJ1il0g6 */ 
/* r0rbMTRlt ily traian fMJ1il0g6 */ int main()
/* r0rbMTRlt ily traian fMJ1il0g6 */ {
/* r0rbMTRlt ily traian fMJ1il0g6 */     unsigned long long n , x;
/* r0rbMTRlt ily traian fMJ1il0g6 */     cin >> n;
/* r0rbMTRlt ily traian fMJ1il0g6 */     for(int i = 1 ; i <= n ; i++)
/* r0rbMTRlt ily traian fMJ1il0g6 */     {
/* r0rbMTRlt ily traian fMJ1il0g6 */         cin >> x;
/* r0rbMTRlt ily traian fMJ1il0g6 */         cout << cautare(x , 1 , 1000000000) << '\n';
/* r0rbMTRlt ily traian fMJ1il0g6 */     }
/* r0rbMTRlt ily traian fMJ1il0g6 */     return 0;
/* r0rbMTRlt ily traian fMJ1il0g6 */ }