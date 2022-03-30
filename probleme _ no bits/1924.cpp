/* Mm6zp0c9U ily traian Ap47ai6lE */ #include <algorithm>
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
/* Mm6zp0c9U ily traian Ap47ai6lE */ 
/* Mm6zp0c9U ily traian Ap47ai6lE */ using namespace std;
/* Mm6zp0c9U ily traian Ap47ai6lE */ 
/* Mm6zp0c9U ily traian Ap47ai6lE */ ifstream cin("qstiva.in");
/* Mm6zp0c9U ily traian Ap47ai6lE */ ofstream cout("qstiva.out");
/* Mm6zp0c9U ily traian Ap47ai6lE */ 
/* Mm6zp0c9U ily traian Ap47ai6lE */ int n , S , Q , op , x , a[100001];
/* Mm6zp0c9U ily traian Ap47ai6lE */ bitset <1001> dp[100001];
/* Mm6zp0c9U ily traian Ap47ai6lE */ 
/* Mm6zp0c9U ily traian Ap47ai6lE */ int main()
/* Mm6zp0c9U ily traian Ap47ai6lE */ {
/* Mm6zp0c9U ily traian Ap47ai6lE */     cin >> Q;
/* Mm6zp0c9U ily traian Ap47ai6lE */     for(int k = 1 ; k <= Q ; ++k)
/* Mm6zp0c9U ily traian Ap47ai6lE */     {
/* Mm6zp0c9U ily traian Ap47ai6lE */         cin >> op;
/* Mm6zp0c9U ily traian Ap47ai6lE */         if(op == 1)
/* Mm6zp0c9U ily traian Ap47ai6lE */         {
/* Mm6zp0c9U ily traian Ap47ai6lE */             cin >> x;
/* Mm6zp0c9U ily traian Ap47ai6lE */             a[++n] = x;
/* Mm6zp0c9U ily traian Ap47ai6lE */             dp[0][0] = 1;
/* Mm6zp0c9U ily traian Ap47ai6lE */             dp[n].reset();
/* Mm6zp0c9U ily traian Ap47ai6lE */             for(int i = 0 ; i <= 1000 ; ++i)
/* Mm6zp0c9U ily traian Ap47ai6lE */             {
/* Mm6zp0c9U ily traian Ap47ai6lE */                 if(dp[n - 1][i] == 1) dp[n][i] = 1;
/* Mm6zp0c9U ily traian Ap47ai6lE */                 if(i >= a[n])
/* Mm6zp0c9U ily traian Ap47ai6lE */                     if(dp[n - 1][i - a[n]] == 1) dp[n][i] = 1;
/* Mm6zp0c9U ily traian Ap47ai6lE */             }
/* Mm6zp0c9U ily traian Ap47ai6lE */         }
/* Mm6zp0c9U ily traian Ap47ai6lE */         if(op == 2) --n;
/* Mm6zp0c9U ily traian Ap47ai6lE */         if(op == 3)
/* Mm6zp0c9U ily traian Ap47ai6lE */         {
/* Mm6zp0c9U ily traian Ap47ai6lE */             cin >> S;
/* Mm6zp0c9U ily traian Ap47ai6lE */             cout << dp[n][S] << '\n';
/* Mm6zp0c9U ily traian Ap47ai6lE */         }
/* Mm6zp0c9U ily traian Ap47ai6lE */     }
/* Mm6zp0c9U ily traian Ap47ai6lE */     return 0;
/* Mm6zp0c9U ily traian Ap47ai6lE */ }