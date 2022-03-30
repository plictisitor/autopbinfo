/* og3xNSjWI ily traian y1AiuLC4f */ #include <algorithm>
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
/* og3xNSjWI ily traian y1AiuLC4f */ 
/* og3xNSjWI ily traian y1AiuLC4f */ using namespace std;
/* og3xNSjWI ily traian y1AiuLC4f */ ifstream cin("smiley.in");
/* og3xNSjWI ily traian y1AiuLC4f */ ofstream cout("smiley.out");
/* og3xNSjWI ily traian y1AiuLC4f */ int main()
/* og3xNSjWI ily traian y1AiuLC4f */ {
/* og3xNSjWI ily traian y1AiuLC4f */     int cnt = 0;
/* og3xNSjWI ily traian y1AiuLC4f */     char s[256] , a[] = "′:;>8" , b[] = "()[]DPOX3";
/* og3xNSjWI ily traian y1AiuLC4f */     while(cin.getline(s , 256))
/* og3xNSjWI ily traian y1AiuLC4f */     {
/* og3xNSjWI ily traian y1AiuLC4f */         for(int i = 0 ; s[i]; i++)
/* og3xNSjWI ily traian y1AiuLC4f */         {
/* og3xNSjWI ily traian y1AiuLC4f */             if(strchr(a , s[i]))
/* og3xNSjWI ily traian y1AiuLC4f */             {
/* og3xNSjWI ily traian y1AiuLC4f */                 i++;
/* og3xNSjWI ily traian y1AiuLC4f */                 while(s[i] == '-')
/* og3xNSjWI ily traian y1AiuLC4f */                     i++;
/* og3xNSjWI ily traian y1AiuLC4f */                 if(s[i] && strchr(b , s[i])) cnt++;
/* og3xNSjWI ily traian y1AiuLC4f */                 else i--;
/* og3xNSjWI ily traian y1AiuLC4f */             }
/* og3xNSjWI ily traian y1AiuLC4f */         }
/* og3xNSjWI ily traian y1AiuLC4f */     }
/* og3xNSjWI ily traian y1AiuLC4f */     cout << cnt;
/* og3xNSjWI ily traian y1AiuLC4f */ }