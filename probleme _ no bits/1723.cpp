/* fTW8KQe1O ily traian HReR53OZ2 */ #include <algorithm>
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
/* fTW8KQe1O ily traian HReR53OZ2 */ using namespace std;
/* fTW8KQe1O ily traian HReR53OZ2 */ 
/* fTW8KQe1O ily traian HReR53OZ2 */ ifstream cin("culegere.in");
/* fTW8KQe1O ily traian HReR53OZ2 */ ofstream cout("culegere.out");
/* fTW8KQe1O ily traian HReR53OZ2 */ 
/* fTW8KQe1O ily traian HReR53OZ2 */ long long int p, n;
/* fTW8KQe1O ily traian HReR53OZ2 */ 
/* fTW8KQe1O ily traian HReR53OZ2 */ int main()
/* fTW8KQe1O ily traian HReR53OZ2 */ {
/* fTW8KQe1O ily traian HReR53OZ2 */     cin >> p >> n;
/* fTW8KQe1O ily traian HReR53OZ2 */     long long int nrp = p * (p + 1)/2, aux = nrp , pt = 10 , tcif = 0, nrcif = 0;
/* fTW8KQe1O ily traian HReR53OZ2 */     while (aux)
/* fTW8KQe1O ily traian HReR53OZ2 */         nrcif ++ , aux /= 10;
/* fTW8KQe1O ily traian HReR53OZ2 */     for (int i = 1; i < nrcif; i++ , pt*=10)
/* fTW8KQe1O ily traian HReR53OZ2 */         tcif += (i * (pt - pt / 10));
/* fTW8KQe1O ily traian HReR53OZ2 */     tcif += (nrcif * (nrp - pt/10 + 1));
/* fTW8KQe1O ily traian HReR53OZ2 */     cout << tcif << '\n';
/* fTW8KQe1O ily traian HReR53OZ2 */     long long int m = 1;
/* fTW8KQe1O ily traian HReR53OZ2 */     while (m * (m + 1) / 2 < n)
/* fTW8KQe1O ily traian HReR53OZ2 */         m++;
/* fTW8KQe1O ily traian HReR53OZ2 */     cout << m;
/* fTW8KQe1O ily traian HReR53OZ2 */     return 0;
/* fTW8KQe1O ily traian HReR53OZ2 */ }