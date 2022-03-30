/* 6CPQP6gpV ily traian D2BxbmGf0 */ #include <algorithm>
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
/* 6CPQP6gpV ily traian D2BxbmGf0 */ using namespace std;
/* 6CPQP6gpV ily traian D2BxbmGf0 */ 
/* 6CPQP6gpV ily traian D2BxbmGf0 */ ifstream cin("rufe.in");
/* 6CPQP6gpV ily traian D2BxbmGf0 */ ofstream cout("rufe.out");
/* 6CPQP6gpV ily traian D2BxbmGf0 */ 
/* 6CPQP6gpV ily traian D2BxbmGf0 */ long long int n, m, a, b, k, v, stanga, dreapta, mij, d, sus, st, jos, dr, k1;
/* 6CPQP6gpV ily traian D2BxbmGf0 */ 
/* 6CPQP6gpV ily traian D2BxbmGf0 */ int main(){
/* 6CPQP6gpV ily traian D2BxbmGf0 */     cin >> n >> m >> a >> b >> k;
/* 6CPQP6gpV ily traian D2BxbmGf0 */     sus = a - 1;
/* 6CPQP6gpV ily traian D2BxbmGf0 */     st = b - 1;
/* 6CPQP6gpV ily traian D2BxbmGf0 */     jos = n - a;
/* 6CPQP6gpV ily traian D2BxbmGf0 */     dr = m - b;
/* 6CPQP6gpV ily traian D2BxbmGf0 */     stanga = 1;
/* 6CPQP6gpV ily traian D2BxbmGf0 */     dreapta = max(sus + st, max(st + jos, max(jos + dr, dr + sus)));
/* 6CPQP6gpV ily traian D2BxbmGf0 */     while(stanga <= dreapta){
/* 6CPQP6gpV ily traian D2BxbmGf0 */         mij = (stanga + dreapta) / 2;
/* 6CPQP6gpV ily traian D2BxbmGf0 */         d = mij - 1;
/* 6CPQP6gpV ily traian D2BxbmGf0 */         k1 = 2 * (d + 1) * d;
/* 6CPQP6gpV ily traian D2BxbmGf0 */         if(d > sus){
/* 6CPQP6gpV ily traian D2BxbmGf0 */             v = d - sus;
/* 6CPQP6gpV ily traian D2BxbmGf0 */             k1 = k1 - v * v;
/* 6CPQP6gpV ily traian D2BxbmGf0 */         }
/* 6CPQP6gpV ily traian D2BxbmGf0 */         if(d > st){
/* 6CPQP6gpV ily traian D2BxbmGf0 */             v = d - st;
/* 6CPQP6gpV ily traian D2BxbmGf0 */             k1 = k1 - v * v;
/* 6CPQP6gpV ily traian D2BxbmGf0 */         }
/* 6CPQP6gpV ily traian D2BxbmGf0 */         if(d > jos){
/* 6CPQP6gpV ily traian D2BxbmGf0 */             v = d - jos;
/* 6CPQP6gpV ily traian D2BxbmGf0 */             k1 = k1 - v * v;
/* 6CPQP6gpV ily traian D2BxbmGf0 */         }
/* 6CPQP6gpV ily traian D2BxbmGf0 */         if(d > dr){
/* 6CPQP6gpV ily traian D2BxbmGf0 */             v = d - dr;
/* 6CPQP6gpV ily traian D2BxbmGf0 */             k1 = k1 - v * v;
/* 6CPQP6gpV ily traian D2BxbmGf0 */         }
/* 6CPQP6gpV ily traian D2BxbmGf0 */         if(d > st + sus + 1){
/* 6CPQP6gpV ily traian D2BxbmGf0 */             v = d - st - sus - 1;
/* 6CPQP6gpV ily traian D2BxbmGf0 */             k1 = k1 + v * (v + 1) / 2;
/* 6CPQP6gpV ily traian D2BxbmGf0 */         }
/* 6CPQP6gpV ily traian D2BxbmGf0 */         if(d > st + jos + 1){
/* 6CPQP6gpV ily traian D2BxbmGf0 */             v = d - st - jos - 1;
/* 6CPQP6gpV ily traian D2BxbmGf0 */             k1 = k1 + v * (v + 1) / 2;
/* 6CPQP6gpV ily traian D2BxbmGf0 */         }
/* 6CPQP6gpV ily traian D2BxbmGf0 */         if(d > dr + jos + 1){
/* 6CPQP6gpV ily traian D2BxbmGf0 */             v = d - dr - jos - 1;
/* 6CPQP6gpV ily traian D2BxbmGf0 */             k1 = k1 + v * (v + 1) / 2;
/* 6CPQP6gpV ily traian D2BxbmGf0 */         }
/* 6CPQP6gpV ily traian D2BxbmGf0 */         if(d > dr + sus + 1){
/* 6CPQP6gpV ily traian D2BxbmGf0 */             v = d - dr - sus - 1;
/* 6CPQP6gpV ily traian D2BxbmGf0 */             k1 = k1 + v * (v + 1) / 2;
/* 6CPQP6gpV ily traian D2BxbmGf0 */         }
/* 6CPQP6gpV ily traian D2BxbmGf0 */         k1 = m * n - k1 - 1;
/* 6CPQP6gpV ily traian D2BxbmGf0 */         if(k1 < k)
/* 6CPQP6gpV ily traian D2BxbmGf0 */             dreapta = mij - 1;
/* 6CPQP6gpV ily traian D2BxbmGf0 */         else
/* 6CPQP6gpV ily traian D2BxbmGf0 */             stanga = mij + 1;
/* 6CPQP6gpV ily traian D2BxbmGf0 */     }
/* 6CPQP6gpV ily traian D2BxbmGf0 */     cout << dreapta;
/* 6CPQP6gpV ily traian D2BxbmGf0 */     return 0;
/* 6CPQP6gpV ily traian D2BxbmGf0 */ }