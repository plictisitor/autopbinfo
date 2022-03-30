/* 9a5GM0A5D ily traian bX0uyoPm7 */ #include <algorithm>
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
/* 9a5GM0A5D ily traian bX0uyoPm7 */ using namespace std;
/* 9a5GM0A5D ily traian bX0uyoPm7 */ 
/* 9a5GM0A5D ily traian bX0uyoPm7 */ ifstream cin("prosir.in");
/* 9a5GM0A5D ily traian bX0uyoPm7 */ ofstream cout("prosir.out");
/* 9a5GM0A5D ily traian bX0uyoPm7 */ 
/* 9a5GM0A5D ily traian bX0uyoPm7 */ char ch[256];
/* 9a5GM0A5D ily traian bX0uyoPm7 */ 
/* 9a5GM0A5D ily traian bX0uyoPm7 */ int main()
/* 9a5GM0A5D ily traian bX0uyoPm7 */ {
/* 9a5GM0A5D ily traian bX0uyoPm7 */     cin.getline(ch , 256);
/* 9a5GM0A5D ily traian bX0uyoPm7 */     int i = 0;
/* 9a5GM0A5D ily traian bX0uyoPm7 */     while(ch[i]!='.')
/* 9a5GM0A5D ily traian bX0uyoPm7 */     {
/* 9a5GM0A5D ily traian bX0uyoPm7 */         if(((int)ch[i+1]==32 || ch[i+1]=='.') && ch[i]!=' ') 
/* 9a5GM0A5D ily traian bX0uyoPm7 */         {
/* 9a5GM0A5D ily traian bX0uyoPm7 */             cout << 5;
/* 9a5GM0A5D ily traian bX0uyoPm7 */         }
/* 9a5GM0A5D ily traian bX0uyoPm7 */         else
/* 9a5GM0A5D ily traian bX0uyoPm7 */             cout << ch[i];
/* 9a5GM0A5D ily traian bX0uyoPm7 */         i++;
/* 9a5GM0A5D ily traian bX0uyoPm7 */     }
/* 9a5GM0A5D ily traian bX0uyoPm7 */     cout << '.';
/* 9a5GM0A5D ily traian bX0uyoPm7 */     return 0;
/* 9a5GM0A5D ily traian bX0uyoPm7 */ }