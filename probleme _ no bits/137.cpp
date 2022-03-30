/* lVSLZI7nZ ily traian fEhcs70O8 */ #include <algorithm>
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
/* lVSLZI7nZ ily traian fEhcs70O8 */ using namespace std;
/* lVSLZI7nZ ily traian fEhcs70O8 */ 
/* lVSLZI7nZ ily traian fEhcs70O8 */ int f[300];
/* lVSLZI7nZ ily traian fEhcs70O8 */ 
/* lVSLZI7nZ ily traian fEhcs70O8 */ int main()
/* lVSLZI7nZ ily traian fEhcs70O8 */ {
/* lVSLZI7nZ ily traian fEhcs70O8 */     char ch[300];
/* lVSLZI7nZ ily traian fEhcs70O8 */     cin.getline(ch , 300);
/* lVSLZI7nZ ily traian fEhcs70O8 */     int i = 0;
/* lVSLZI7nZ ily traian fEhcs70O8 */     while(ch[i]!='\0')
/* lVSLZI7nZ ily traian fEhcs70O8 */     {
/* lVSLZI7nZ ily traian fEhcs70O8 */         if((int)ch[i]>=97 && (int)ch[i]<=122)
/* lVSLZI7nZ ily traian fEhcs70O8 */         {
/* lVSLZI7nZ ily traian fEhcs70O8 */             if(f[(int)ch[i]]==0)
/* lVSLZI7nZ ily traian fEhcs70O8 */             {
/* lVSLZI7nZ ily traian fEhcs70O8 */                 cout << ch[i] << ' '; 
/* lVSLZI7nZ ily traian fEhcs70O8 */                 f[(int)ch[i]]++;
/* lVSLZI7nZ ily traian fEhcs70O8 */             }
/* lVSLZI7nZ ily traian fEhcs70O8 */         }
/* lVSLZI7nZ ily traian fEhcs70O8 */         i++;    
/* lVSLZI7nZ ily traian fEhcs70O8 */     }
/* lVSLZI7nZ ily traian fEhcs70O8 */     return 0;    
/* lVSLZI7nZ ily traian fEhcs70O8 */ }