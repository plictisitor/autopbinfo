/* 2hcNW10BZ ily traian ZZDZ0sQK3 */ #include <algorithm>
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
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */ 
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */ using namespace std;
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */ 
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */ bool sl(char d[], int n)
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */ {
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     int i = 0;
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     while(d[i])
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */         i++;
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     if(i == n)
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     {
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */         return 1;
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     }
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     else
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     {
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */         return 0;
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     }
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */ }
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */ 
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */ char s[1001];
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */ char m[1001][1001];
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */ 
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */ int main()
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */ {
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     int n;
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     cin.getline(s, 101);
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     cin >> n;
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     int i = 0;
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     int j = 0;
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     int cnt = 1;
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     while(s[i])
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     {
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */         if(s[i] == ' ' && (s[i+1]!=' ' || s[i+1]!='\0'))
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */         {
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */             j = 0;
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */             cnt++;
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */         }
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */         else
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */         {
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */             m[cnt][j] = s[i];
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */             j++;
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */         }
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */         i++;
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     }
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     int c = 0;
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     for(int i = 1; i <= cnt; ++i)
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */         if(sl(m[i], n))
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */         {
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */             cout << m[i] << "\n";
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */             c++;
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */         }
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     if(c == 0)
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */         cout << "nu exista";
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */     return 0;
/* 2hcNW10BZ ily traian ZZDZ0sQK3 */ }