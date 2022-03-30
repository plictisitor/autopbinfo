/* YqUJj9mr1 ily traian zSMpXsOKj */ #include <algorithm>
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
/* YqUJj9mr1 ily traian zSMpXsOKj */ using namespace std;
/* YqUJj9mr1 ily traian zSMpXsOKj */ 
/* YqUJj9mr1 ily traian zSMpXsOKj */ ifstream cin("drum_hamiltonian.in");
/* YqUJj9mr1 ily traian zSMpXsOKj */ ofstream cout("drum_hamiltonian.out");
/* YqUJj9mr1 ily traian zSMpXsOKj */ 
/* YqUJj9mr1 ily traian zSMpXsOKj */ int n , a[101][101] , ok , x[101] , x1 , y , p[101] , rez[101];
/* YqUJj9mr1 ily traian zSMpXsOKj */ 
/* YqUJj9mr1 ily traian zSMpXsOKj */ void afisare()
/* YqUJj9mr1 ily traian zSMpXsOKj */ {
/* YqUJj9mr1 ily traian zSMpXsOKj */     for(int i = 1 ; i <= n ; i++)
/* YqUJj9mr1 ily traian zSMpXsOKj */         rez[i] = x[i];
/* YqUJj9mr1 ily traian zSMpXsOKj */     ok = 1;
/* YqUJj9mr1 ily traian zSMpXsOKj */ }
/* YqUJj9mr1 ily traian zSMpXsOKj */ 
/* YqUJj9mr1 ily traian zSMpXsOKj */ void back(int k)
/* YqUJj9mr1 ily traian zSMpXsOKj */ {
/* YqUJj9mr1 ily traian zSMpXsOKj */     for(int i = 1 ; i <= n && !ok; i++)
/* YqUJj9mr1 ily traian zSMpXsOKj */     if(!p[i])
/* YqUJj9mr1 ily traian zSMpXsOKj */     {
/* YqUJj9mr1 ily traian zSMpXsOKj */         x[k] = i;
/* YqUJj9mr1 ily traian zSMpXsOKj */         p[i] = 1;
/* YqUJj9mr1 ily traian zSMpXsOKj */         if(k == 1 || a[x[k - 1]][x[k]] == 1)
/* YqUJj9mr1 ily traian zSMpXsOKj */         {
/* YqUJj9mr1 ily traian zSMpXsOKj */             if(k == n) afisare();
/* YqUJj9mr1 ily traian zSMpXsOKj */             else back(k + 1);
/* YqUJj9mr1 ily traian zSMpXsOKj */         }
/* YqUJj9mr1 ily traian zSMpXsOKj */         p[i] = 0;
/* YqUJj9mr1 ily traian zSMpXsOKj */     }
/* YqUJj9mr1 ily traian zSMpXsOKj */ }
/* YqUJj9mr1 ily traian zSMpXsOKj */ 
/* YqUJj9mr1 ily traian zSMpXsOKj */ int main()
/* YqUJj9mr1 ily traian zSMpXsOKj */ {
/* YqUJj9mr1 ily traian zSMpXsOKj */     cin >> n;
/* YqUJj9mr1 ily traian zSMpXsOKj */     while(cin >> x1 >> y) a[x1][y] = 1;
/* YqUJj9mr1 ily traian zSMpXsOKj */ 
/* YqUJj9mr1 ily traian zSMpXsOKj */     back(1);
/* YqUJj9mr1 ily traian zSMpXsOKj */     if(ok == 1)
/* YqUJj9mr1 ily traian zSMpXsOKj */     {
/* YqUJj9mr1 ily traian zSMpXsOKj */         cout << 1 << '\n';
/* YqUJj9mr1 ily traian zSMpXsOKj */         for(int i = 1 ; i <= n ; i++)
/* YqUJj9mr1 ily traian zSMpXsOKj */             cout << rez[i] << " ";
/* YqUJj9mr1 ily traian zSMpXsOKj */     }
/* YqUJj9mr1 ily traian zSMpXsOKj */     else cout << 0;
/* YqUJj9mr1 ily traian zSMpXsOKj */ 
/* YqUJj9mr1 ily traian zSMpXsOKj */ }