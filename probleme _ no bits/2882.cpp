/* Yw7TbucEN ily traian gqWL2LbkR */ #include <algorithm>
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
/* Yw7TbucEN ily traian gqWL2LbkR */ 
/* Yw7TbucEN ily traian gqWL2LbkR */ using namespace std;
/* Yw7TbucEN ily traian gqWL2LbkR */ 
/* Yw7TbucEN ily traian gqWL2LbkR */ ifstream cin ("no_pals.in");
/* Yw7TbucEN ily traian gqWL2LbkR */ ofstream cout ("no_pals.out");
/* Yw7TbucEN ily traian gqWL2LbkR */ 
/* Yw7TbucEN ily traian gqWL2LbkR */ #define MOD 666013
/* Yw7TbucEN ily traian gqWL2LbkR */ 
/* Yw7TbucEN ily traian gqWL2LbkR */ int n;
/* Yw7TbucEN ily traian gqWL2LbkR */ long long nr = 1, nrnr = 9, rez;
/* Yw7TbucEN ily traian gqWL2LbkR */ 
/* Yw7TbucEN ily traian gqWL2LbkR */ int calc(int x)
/* Yw7TbucEN ily traian gqWL2LbkR */ {
/* Yw7TbucEN ily traian gqWL2LbkR */     if (x == 1)return 0;
/* Yw7TbucEN ily traian gqWL2LbkR */     if (x % 2 == 0)
/* Yw7TbucEN ily traian gqWL2LbkR */     {
/* Yw7TbucEN ily traian gqWL2LbkR */         if (x == 2)nr *= 9;
/* Yw7TbucEN ily traian gqWL2LbkR */         else nr *= 10;
/* Yw7TbucEN ily traian gqWL2LbkR */         nr %= MOD;
/* Yw7TbucEN ily traian gqWL2LbkR */         rez = nrnr - nr;
/* Yw7TbucEN ily traian gqWL2LbkR */     }
/* Yw7TbucEN ily traian gqWL2LbkR */     else
/* Yw7TbucEN ily traian gqWL2LbkR */     {
/* Yw7TbucEN ily traian gqWL2LbkR */         long long aux = (nr * 10)%MOD;
/* Yw7TbucEN ily traian gqWL2LbkR */         rez = nrnr - aux;
/* Yw7TbucEN ily traian gqWL2LbkR */     }
/* Yw7TbucEN ily traian gqWL2LbkR */ 
/* Yw7TbucEN ily traian gqWL2LbkR */ 
/* Yw7TbucEN ily traian gqWL2LbkR */     while(rez < 0)rez += MOD;
/* Yw7TbucEN ily traian gqWL2LbkR */     rez %= MOD;
/* Yw7TbucEN ily traian gqWL2LbkR */     return rez;
/* Yw7TbucEN ily traian gqWL2LbkR */ }
/* Yw7TbucEN ily traian gqWL2LbkR */ int main()
/* Yw7TbucEN ily traian gqWL2LbkR */ {
/* Yw7TbucEN ily traian gqWL2LbkR */     cin >> n;
/* Yw7TbucEN ily traian gqWL2LbkR */     for (int i = 1; i <= n; ++ i)
/* Yw7TbucEN ily traian gqWL2LbkR */     {
/* Yw7TbucEN ily traian gqWL2LbkR */         cout << calc(i) << '\n';
/* Yw7TbucEN ily traian gqWL2LbkR */         nrnr *= 10;
/* Yw7TbucEN ily traian gqWL2LbkR */         nrnr %= MOD;
/* Yw7TbucEN ily traian gqWL2LbkR */     }
/* Yw7TbucEN ily traian gqWL2LbkR */ 
/* Yw7TbucEN ily traian gqWL2LbkR */     return 0;
/* Yw7TbucEN ily traian gqWL2LbkR */ }