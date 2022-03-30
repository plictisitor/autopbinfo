/* 7lC7K1Lmy ily traian VUlmJdpw8 */ #include <algorithm>
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
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ 
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ using namespace std;
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ 
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ ifstream cin("anagrame1.in");
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ ofstream cout("anagrame1.out");
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ 
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ int n , x[10] , p[10] , a[10];
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ char s[10];
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ 
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ void afisare()
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ {
/* 7lC7K1Lmy ily traian VUlmJdpw8 */     for(int i = 1 ; i <= n ; i++)
/* 7lC7K1Lmy ily traian VUlmJdpw8 */         cout << s[x[i]];
/* 7lC7K1Lmy ily traian VUlmJdpw8 */     cout << '\n';
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ }
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ 
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ void back(int k)///k = poz la care am ajuns
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ {
/* 7lC7K1Lmy ily traian VUlmJdpw8 */     for(int i = 0 ; i < n ; i++)///de unde se ia x[k]
/* 7lC7K1Lmy ily traian VUlmJdpw8 */         if(!p[i]) ///daca nu e pus anterior
/* 7lC7K1Lmy ily traian VUlmJdpw8 */         {
/* 7lC7K1Lmy ily traian VUlmJdpw8 */             x[k] = i;///pun elementul
/* 7lC7K1Lmy ily traian VUlmJdpw8 */             p[i] = 1;///l am folosit pe i
/* 7lC7K1Lmy ily traian VUlmJdpw8 */             if(k == n) afisare();///solutie
/* 7lC7K1Lmy ily traian VUlmJdpw8 */             else back(k + 1);///trec la poz urmatoare
/* 7lC7K1Lmy ily traian VUlmJdpw8 */             p[i] = 0;///marchez ca nefolosit
/* 7lC7K1Lmy ily traian VUlmJdpw8 */         }
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ }
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ 
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ int main()
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ {
/* 7lC7K1Lmy ily traian VUlmJdpw8 */     cin >> s;
/* 7lC7K1Lmy ily traian VUlmJdpw8 */     n = strlen(s);
/* 7lC7K1Lmy ily traian VUlmJdpw8 */     for(int i = 0 ; i < n ; ++i)
/* 7lC7K1Lmy ily traian VUlmJdpw8 */         for(int j = i + 1 ; j < n ; j++)
/* 7lC7K1Lmy ily traian VUlmJdpw8 */             if(s[i] > s[j])
/* 7lC7K1Lmy ily traian VUlmJdpw8 */             {
/* 7lC7K1Lmy ily traian VUlmJdpw8 */                 char aux = s[i];
/* 7lC7K1Lmy ily traian VUlmJdpw8 */                 s[i] = s[j];
/* 7lC7K1Lmy ily traian VUlmJdpw8 */                 s[j] = aux;
/* 7lC7K1Lmy ily traian VUlmJdpw8 */             }
/* 7lC7K1Lmy ily traian VUlmJdpw8 */     back(1);
/* 7lC7K1Lmy ily traian VUlmJdpw8 */     return 0;
/* 7lC7K1Lmy ily traian VUlmJdpw8 */ }