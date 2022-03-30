/* 0G1vtT7mt ily traian nOXjR0147 */ #include <algorithm>
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
/* 0G1vtT7mt ily traian nOXjR0147 */ 
/* 0G1vtT7mt ily traian nOXjR0147 */ 
/* 0G1vtT7mt ily traian nOXjR0147 */ using namespace std;
/* 0G1vtT7mt ily traian nOXjR0147 */ 
/* 0G1vtT7mt ily traian nOXjR0147 */ char s[256], c[130], r[129];
/* 0G1vtT7mt ily traian nOXjR0147 */ int n, nrap;
/* 0G1vtT7mt ily traian nOXjR0147 */ 
/* 0G1vtT7mt ily traian nOXjR0147 */ int main()
/* 0G1vtT7mt ily traian nOXjR0147 */ {
/* 0G1vtT7mt ily traian nOXjR0147 */     cin.getline(s, 256);
/* 0G1vtT7mt ily traian nOXjR0147 */     n = strlen(s)/2;
/* 0G1vtT7mt ily traian nOXjR0147 */     for(int i = 2; i <= n; i++)
/* 0G1vtT7mt ily traian nOXjR0147 */     {
/* 0G1vtT7mt ily traian nOXjR0147 */         for(int j = 0; s[j] != '\0'; j++)
/* 0G1vtT7mt ily traian nOXjR0147 */         {
/* 0G1vtT7mt ily traian nOXjR0147 */             strcpy(c,"");
/* 0G1vtT7mt ily traian nOXjR0147 */             strncpy(c, s+j, i);
/* 0G1vtT7mt ily traian nOXjR0147 */ 
/* 0G1vtT7mt ily traian nOXjR0147 */             c[i] = '\0';
/* 0G1vtT7mt ily traian nOXjR0147 */             nrap = 0;
/* 0G1vtT7mt ily traian nOXjR0147 */ 
/* 0G1vtT7mt ily traian nOXjR0147 */             char* p = strstr(s+j, c);
/* 0G1vtT7mt ily traian nOXjR0147 */ 
/* 0G1vtT7mt ily traian nOXjR0147 */             while(p && nrap < 2)
/* 0G1vtT7mt ily traian nOXjR0147 */             {
/* 0G1vtT7mt ily traian nOXjR0147 */                 nrap++;
/* 0G1vtT7mt ily traian nOXjR0147 */                 if(nrap > 1)
/* 0G1vtT7mt ily traian nOXjR0147 */                 {
/* 0G1vtT7mt ily traian nOXjR0147 */                     if(strlen(c)>strlen(r))strncpy(r, c, i);
/* 0G1vtT7mt ily traian nOXjR0147 */                     else if(strlen(c) == strlen(r) && strcmp(r, c)>0)strncpy(r, c, i);
/* 0G1vtT7mt ily traian nOXjR0147 */                 }
/* 0G1vtT7mt ily traian nOXjR0147 */                 p=strstr(p+i, c);
/* 0G1vtT7mt ily traian nOXjR0147 */             }
/* 0G1vtT7mt ily traian nOXjR0147 */         }
/* 0G1vtT7mt ily traian nOXjR0147 */     }
/* 0G1vtT7mt ily traian nOXjR0147 */     cout << r;
/* 0G1vtT7mt ily traian nOXjR0147 */     return 0;
/* 0G1vtT7mt ily traian nOXjR0147 */ }