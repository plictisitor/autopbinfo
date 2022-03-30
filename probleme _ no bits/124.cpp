/* Iv021BP8K ily traian BgW3ikDuj */ #include <algorithm>
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
/* Iv021BP8K ily traian BgW3ikDuj */ using namespace std;
/* Iv021BP8K ily traian BgW3ikDuj */ 
/* Iv021BP8K ily traian BgW3ikDuj */ ifstream cin("permutari1.in");
/* Iv021BP8K ily traian BgW3ikDuj */ ofstream cout("permutari1.out");
/* Iv021BP8K ily traian BgW3ikDuj */ 
/* Iv021BP8K ily traian BgW3ikDuj */ int n;
/* Iv021BP8K ily traian BgW3ikDuj */ int x[10];
/* Iv021BP8K ily traian BgW3ikDuj */ bool f[10];
/* Iv021BP8K ily traian BgW3ikDuj */ 
/* Iv021BP8K ily traian BgW3ikDuj */ void write()
/* Iv021BP8K ily traian BgW3ikDuj */ {
/* Iv021BP8K ily traian BgW3ikDuj */     for(int i = 1 ; i <= n ; ++i)
/* Iv021BP8K ily traian BgW3ikDuj */         cout << x[i] << ' ';
/* Iv021BP8K ily traian BgW3ikDuj */     cout << '\n';
/* Iv021BP8K ily traian BgW3ikDuj */ }
/* Iv021BP8K ily traian BgW3ikDuj */ 
/* Iv021BP8K ily traian BgW3ikDuj */ void Perm(int k)
/* Iv021BP8K ily traian BgW3ikDuj */ {
/* Iv021BP8K ily traian BgW3ikDuj */     if(k > n)
/* Iv021BP8K ily traian BgW3ikDuj */     {
/* Iv021BP8K ily traian BgW3ikDuj */         write();
/* Iv021BP8K ily traian BgW3ikDuj */         return;
/* Iv021BP8K ily traian BgW3ikDuj */     }
/* Iv021BP8K ily traian BgW3ikDuj */     else
/* Iv021BP8K ily traian BgW3ikDuj */     {
/* Iv021BP8K ily traian BgW3ikDuj */         for(int i = n ; i >= 1 ; --i)
/* Iv021BP8K ily traian BgW3ikDuj */         {
/* Iv021BP8K ily traian BgW3ikDuj */             if(f[i]==0)
/* Iv021BP8K ily traian BgW3ikDuj */             {
/* Iv021BP8K ily traian BgW3ikDuj */                 x[k]=i;
/* Iv021BP8K ily traian BgW3ikDuj */                 f[i]=true;
/* Iv021BP8K ily traian BgW3ikDuj */                 Perm(k+1);
/* Iv021BP8K ily traian BgW3ikDuj */                 f[i]=false;
/* Iv021BP8K ily traian BgW3ikDuj */             }
/* Iv021BP8K ily traian BgW3ikDuj */         }
/* Iv021BP8K ily traian BgW3ikDuj */     }
/* Iv021BP8K ily traian BgW3ikDuj */ }
/* Iv021BP8K ily traian BgW3ikDuj */ 
/* Iv021BP8K ily traian BgW3ikDuj */ int main()
/* Iv021BP8K ily traian BgW3ikDuj */ {
/* Iv021BP8K ily traian BgW3ikDuj */     cin >> n;
/* Iv021BP8K ily traian BgW3ikDuj */     Perm(1);
/* Iv021BP8K ily traian BgW3ikDuj */     return 0;
/* Iv021BP8K ily traian BgW3ikDuj */ }