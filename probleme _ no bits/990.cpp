/* KDAeAuENu ily traian s2q1eoOV6 */ #include <algorithm>
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
/* KDAeAuENu ily traian s2q1eoOV6 */ 
/* KDAeAuENu ily traian s2q1eoOV6 */ 
/* KDAeAuENu ily traian s2q1eoOV6 */ using namespace std;
/* KDAeAuENu ily traian s2q1eoOV6 */ 
/* KDAeAuENu ily traian s2q1eoOV6 */ ifstream cin("sortarecuvinte1.in");
/* KDAeAuENu ily traian s2q1eoOV6 */ ofstream cout("sortarecuvinte1.out");
/* KDAeAuENu ily traian s2q1eoOV6 */ 
/* KDAeAuENu ily traian s2q1eoOV6 */ int main()
/* KDAeAuENu ily traian s2q1eoOV6 */ {
/* KDAeAuENu ily traian s2q1eoOV6 */     map <string,int> M;
/* KDAeAuENu ily traian s2q1eoOV6 */     string s;
/* KDAeAuENu ily traian s2q1eoOV6 */     while(cin >> s)
/* KDAeAuENu ily traian s2q1eoOV6 */         M[s]=1;
/* KDAeAuENu ily traian s2q1eoOV6 */     for(auto x:M)
/* KDAeAuENu ily traian s2q1eoOV6 */     {
/* KDAeAuENu ily traian s2q1eoOV6 */         for(int i = 1 ; i <= x.second ; ++i)
/* KDAeAuENu ily traian s2q1eoOV6 */             cout << x.first << '\n';
/* KDAeAuENu ily traian s2q1eoOV6 */     }
/* KDAeAuENu ily traian s2q1eoOV6 */     return 0;
/* KDAeAuENu ily traian s2q1eoOV6 */ }