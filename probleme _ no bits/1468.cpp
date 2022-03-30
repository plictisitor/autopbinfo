/* OQYTAVQSn ily traian JWlK7IN40 */ #include <algorithm>
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
/* OQYTAVQSn ily traian JWlK7IN40 */ using namespace std;
/* OQYTAVQSn ily traian JWlK7IN40 */ 
/* OQYTAVQSn ily traian JWlK7IN40 */ ifstream cin("relativ.in");
/* OQYTAVQSn ily traian JWlK7IN40 */ ofstream cout("relativ.out");
/* OQYTAVQSn ily traian JWlK7IN40 */ 
/* OQYTAVQSn ily traian JWlK7IN40 */ int main()
/* OQYTAVQSn ily traian JWlK7IN40 */ {
/* OQYTAVQSn ily traian JWlK7IN40 */     int n;
/* OQYTAVQSn ily traian JWlK7IN40 */     cin >> n;
/* OQYTAVQSn ily traian JWlK7IN40 */     int x;
/* OQYTAVQSn ily traian JWlK7IN40 */     int cnt=0;
/* OQYTAVQSn ily traian JWlK7IN40 */     int min=1000000001;
/* OQYTAVQSn ily traian JWlK7IN40 */     long long int max=0 , s=0;
/* OQYTAVQSn ily traian JWlK7IN40 */     for(int i = 0 ; i < n ; ++i)
/* OQYTAVQSn ily traian JWlK7IN40 */     {
/* OQYTAVQSn ily traian JWlK7IN40 */         cin >> x;
/* OQYTAVQSn ily traian JWlK7IN40 */         if(x <= min)
/* OQYTAVQSn ily traian JWlK7IN40 */         {
/* OQYTAVQSn ily traian JWlK7IN40 */         if(s+x>max)
/* OQYTAVQSn ily traian JWlK7IN40 */         max=s+x;
/* OQYTAVQSn ily traian JWlK7IN40 */         cnt++ , min=x , s=x;
/* OQYTAVQSn ily traian JWlK7IN40 */         }
/* OQYTAVQSn ily traian JWlK7IN40 */         if(x>min)
/* OQYTAVQSn ily traian JWlK7IN40 */         s+=x;
/* OQYTAVQSn ily traian JWlK7IN40 */     }
/* OQYTAVQSn ily traian JWlK7IN40 */     cout << cnt << endl << max;
/* OQYTAVQSn ily traian JWlK7IN40 */ }