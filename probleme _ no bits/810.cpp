/* egIA5ku4H ily traian jnSUeYeo6 */ #include <algorithm>
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
/* egIA5ku4H ily traian jnSUeYeo6 */ using namespace std;
/* egIA5ku4H ily traian jnSUeYeo6 */ 
/* egIA5ku4H ily traian jnSUeYeo6 */ int main()
/* egIA5ku4H ily traian jnSUeYeo6 */ {
/* egIA5ku4H ily traian jnSUeYeo6 */     char ch[300];
/* egIA5ku4H ily traian jnSUeYeo6 */     cin.getline(ch , 300);
/* egIA5ku4H ily traian jnSUeYeo6 */     int i = 0;
/* egIA5ku4H ily traian jnSUeYeo6 */     int cnt=0;
/* egIA5ku4H ily traian jnSUeYeo6 */     int ok=0;
/* egIA5ku4H ily traian jnSUeYeo6 */     while(ch[i]!='\0')
/* egIA5ku4H ily traian jnSUeYeo6 */     {
/* egIA5ku4H ily traian jnSUeYeo6 */         if(ch[i]=='a' && ok==0)
/* egIA5ku4H ily traian jnSUeYeo6 */         {
/* egIA5ku4H ily traian jnSUeYeo6 */             ok++;
/* egIA5ku4H ily traian jnSUeYeo6 */             cnt++;
/* egIA5ku4H ily traian jnSUeYeo6 */         }
/* egIA5ku4H ily traian jnSUeYeo6 */         if(ch[i]==' ')
/* egIA5ku4H ily traian jnSUeYeo6 */             ok=0;
/* egIA5ku4H ily traian jnSUeYeo6 */         i++;
/* egIA5ku4H ily traian jnSUeYeo6 */     }
/* egIA5ku4H ily traian jnSUeYeo6 */     cout << cnt;
/* egIA5ku4H ily traian jnSUeYeo6 */     return 0;
/* egIA5ku4H ily traian jnSUeYeo6 */ }