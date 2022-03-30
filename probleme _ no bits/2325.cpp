/* NF3NXzfYo ily traian iGdwNQqA6 */ #include <algorithm>
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
/* NF3NXzfYo ily traian iGdwNQqA6 */ using namespace std;
/* NF3NXzfYo ily traian iGdwNQqA6 */ int n , a , b , p[1000000] , E[1000000] , s[1000000] , rez[1000000];
/* NF3NXzfYo ily traian iGdwNQqA6 */ int main()
/* NF3NXzfYo ily traian iGdwNQqA6 */ {
/* NF3NXzfYo ily traian iGdwNQqA6 */     p[0] = p[1] = 1;
/* NF3NXzfYo ily traian iGdwNQqA6 */     for(int i = 2 ; i <= 500000 ; ++i)
/* NF3NXzfYo ily traian iGdwNQqA6 */         for(int j = 2 ; i*j <= 1000000 ; ++j)
/* NF3NXzfYo ily traian iGdwNQqA6 */             p[i*j]=1;
/* NF3NXzfYo ily traian iGdwNQqA6 */     for(int i = 2 ; i <= 500000 ; ++i)
/* NF3NXzfYo ily traian iGdwNQqA6 */         for(int j = 2 ; i*j <= 1000000 ; ++j)
/* NF3NXzfYo ily traian iGdwNQqA6 */             if(p[i]==0 && p[j]==0)
/* NF3NXzfYo ily traian iGdwNQqA6 */                 E[i*j]=1;
/* NF3NXzfYo ily traian iGdwNQqA6 */     for(int i = 1 ; i <= 1000000 ; ++i)
/* NF3NXzfYo ily traian iGdwNQqA6 */     {
/* NF3NXzfYo ily traian iGdwNQqA6 */         s[i] = s[i-1];
/* NF3NXzfYo ily traian iGdwNQqA6 */         if(E[i] == 1) s[i]++;
/* NF3NXzfYo ily traian iGdwNQqA6 */     }
/* NF3NXzfYo ily traian iGdwNQqA6 */     cin >> n;
/* NF3NXzfYo ily traian iGdwNQqA6 */     for(int i = 1; i <= n ; ++i)
/* NF3NXzfYo ily traian iGdwNQqA6 */     {
/* NF3NXzfYo ily traian iGdwNQqA6 */         cin >> a >> b;
/* NF3NXzfYo ily traian iGdwNQqA6 */         if(E[a] == 1) rez[i] = s[b]-s[a]+1;
/* NF3NXzfYo ily traian iGdwNQqA6 */         else rez[i] = s[b]-s[a];
/* NF3NXzfYo ily traian iGdwNQqA6 */     }
/* NF3NXzfYo ily traian iGdwNQqA6 */     for(int i = 1 ; i <= n ;i++)
/* NF3NXzfYo ily traian iGdwNQqA6 */         cout << rez[i] << " ";
/* NF3NXzfYo ily traian iGdwNQqA6 */     return 0;
/* NF3NXzfYo ily traian iGdwNQqA6 */ }