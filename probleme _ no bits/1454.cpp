/* HhpjtSt2Y ily traian k6dnmzvY3 */ #include <algorithm>
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
/* HhpjtSt2Y ily traian k6dnmzvY3 */ using namespace std;
/* HhpjtSt2Y ily traian k6dnmzvY3 */ 
/* HhpjtSt2Y ily traian k6dnmzvY3 */ ifstream cin("permutarecuvant.in");
/* HhpjtSt2Y ily traian k6dnmzvY3 */ ofstream cout("permutarecuvant.out");
/* HhpjtSt2Y ily traian k6dnmzvY3 */ 
/* HhpjtSt2Y ily traian k6dnmzvY3 */ int main()
/* HhpjtSt2Y ily traian k6dnmzvY3 */ {
/* HhpjtSt2Y ily traian k6dnmzvY3 */     char ch[30];
/* HhpjtSt2Y ily traian k6dnmzvY3 */     cin >> ch;
/* HhpjtSt2Y ily traian k6dnmzvY3 */     int i = 0;
/* HhpjtSt2Y ily traian k6dnmzvY3 */     while(ch[i]!='\0')
/* HhpjtSt2Y ily traian k6dnmzvY3 */     {
/* HhpjtSt2Y ily traian k6dnmzvY3 */         int j = i;
/* HhpjtSt2Y ily traian k6dnmzvY3 */         while(ch[j]!='\0')
/* HhpjtSt2Y ily traian k6dnmzvY3 */         {
/* HhpjtSt2Y ily traian k6dnmzvY3 */             cout << ch[j];
/* HhpjtSt2Y ily traian k6dnmzvY3 */             j++;
/* HhpjtSt2Y ily traian k6dnmzvY3 */         }
/* HhpjtSt2Y ily traian k6dnmzvY3 */         for(int k = 0 ; k < i ; ++k)
/* HhpjtSt2Y ily traian k6dnmzvY3 */             cout << ch[k];
/* HhpjtSt2Y ily traian k6dnmzvY3 */         cout << ' ';
/* HhpjtSt2Y ily traian k6dnmzvY3 */         i++;
/* HhpjtSt2Y ily traian k6dnmzvY3 */     }
/* HhpjtSt2Y ily traian k6dnmzvY3 */     return 0;
/* HhpjtSt2Y ily traian k6dnmzvY3 */ }