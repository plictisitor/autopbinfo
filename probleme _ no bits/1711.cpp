/* D80DcW8El ily traian al9DGPvB1 */ #include <algorithm>
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
/* D80DcW8El ily traian al9DGPvB1 */ 
/* D80DcW8El ily traian al9DGPvB1 */ using namespace std;
/* D80DcW8El ily traian al9DGPvB1 */ 
/* D80DcW8El ily traian al9DGPvB1 */ ifstream cin("siruri_concatenate.in");
/* D80DcW8El ily traian al9DGPvB1 */ ofstream cout("siruri_concatenate.out");
/* D80DcW8El ily traian al9DGPvB1 */ 
/* D80DcW8El ily traian al9DGPvB1 */ int main()
/* D80DcW8El ily traian al9DGPvB1 */ {
/* D80DcW8El ily traian al9DGPvB1 */     int n;
/* D80DcW8El ily traian al9DGPvB1 */     cin >> n;
/* D80DcW8El ily traian al9DGPvB1 */     int cnt=0;
/* D80DcW8El ily traian al9DGPvB1 */     for(int i = 1 ; i <= n ; ++i)
/* D80DcW8El ily traian al9DGPvB1 */     {
/* D80DcW8El ily traian al9DGPvB1 */         char s[5001];
/* D80DcW8El ily traian al9DGPvB1 */         cin >> s;
/* D80DcW8El ily traian al9DGPvB1 */         bool ok = true;
/* D80DcW8El ily traian al9DGPvB1 */         if(strlen(s)%2==0)
/* D80DcW8El ily traian al9DGPvB1 */         {
/* D80DcW8El ily traian al9DGPvB1 */             for(int j = 0 , q = strlen(s) / 2 ; s[q]!='\0' ; ++j , ++q)
/* D80DcW8El ily traian al9DGPvB1 */             if(s[q]!=s[j])
/* D80DcW8El ily traian al9DGPvB1 */             {
/* D80DcW8El ily traian al9DGPvB1 */                 ok=false;
/* D80DcW8El ily traian al9DGPvB1 */                 break;
/* D80DcW8El ily traian al9DGPvB1 */             }
/* D80DcW8El ily traian al9DGPvB1 */         }
/* D80DcW8El ily traian al9DGPvB1 */         else
/* D80DcW8El ily traian al9DGPvB1 */             ok=false;
/* D80DcW8El ily traian al9DGPvB1 */         if(ok)
/* D80DcW8El ily traian al9DGPvB1 */             cnt++;
/* D80DcW8El ily traian al9DGPvB1 */     }
/* D80DcW8El ily traian al9DGPvB1 */     cout << cnt;
/* D80DcW8El ily traian al9DGPvB1 */     return 0;
/* D80DcW8El ily traian al9DGPvB1 */ }