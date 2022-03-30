/* CbLJnchJk ily traian 1chEEYOqp */ #include <algorithm>
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
/* CbLJnchJk ily traian 1chEEYOqp */ 
/* CbLJnchJk ily traian 1chEEYOqp */ using namespace std;
/* CbLJnchJk ily traian 1chEEYOqp */ 
/* CbLJnchJk ily traian 1chEEYOqp */ ifstream cin("permutari2.in");
/* CbLJnchJk ily traian 1chEEYOqp */ ofstream cout("permutari2.out");
/* CbLJnchJk ily traian 1chEEYOqp */ 
/* CbLJnchJk ily traian 1chEEYOqp */ int n , x[10] , p[10] , a[10];
/* CbLJnchJk ily traian 1chEEYOqp */ 
/* CbLJnchJk ily traian 1chEEYOqp */ void afisare()
/* CbLJnchJk ily traian 1chEEYOqp */ {
/* CbLJnchJk ily traian 1chEEYOqp */     for(int i = 1 ; i <= n ; i++)
/* CbLJnchJk ily traian 1chEEYOqp */         cout << a[x[i]] << " ";
/* CbLJnchJk ily traian 1chEEYOqp */     cout << '\n';
/* CbLJnchJk ily traian 1chEEYOqp */ }
/* CbLJnchJk ily traian 1chEEYOqp */ 
/* CbLJnchJk ily traian 1chEEYOqp */ void back(int k)///k = poz la care am ajuns
/* CbLJnchJk ily traian 1chEEYOqp */ {
/* CbLJnchJk ily traian 1chEEYOqp */     for(int i = 1 ; i <= n ; i++)///de unde se ia x[k]
/* CbLJnchJk ily traian 1chEEYOqp */         if(!p[i]) ///daca nu e pus anterior
/* CbLJnchJk ily traian 1chEEYOqp */         {
/* CbLJnchJk ily traian 1chEEYOqp */             x[k] = i;///pun elementul
/* CbLJnchJk ily traian 1chEEYOqp */             p[i] = 1;///l am folosit pe i
/* CbLJnchJk ily traian 1chEEYOqp */             if(k == n) afisare();///solutie
/* CbLJnchJk ily traian 1chEEYOqp */             else back(k + 1);///trec la poz urmatoare
/* CbLJnchJk ily traian 1chEEYOqp */             p[i] = 0;///marchez ca nefolosit
/* CbLJnchJk ily traian 1chEEYOqp */         }
/* CbLJnchJk ily traian 1chEEYOqp */ }
/* CbLJnchJk ily traian 1chEEYOqp */ 
/* CbLJnchJk ily traian 1chEEYOqp */ int main()
/* CbLJnchJk ily traian 1chEEYOqp */ {
/* CbLJnchJk ily traian 1chEEYOqp */     cin >> n;
/* CbLJnchJk ily traian 1chEEYOqp */     for(int i = 1 ; i <= n ; i++)
/* CbLJnchJk ily traian 1chEEYOqp */         cin >> a[i];
/* CbLJnchJk ily traian 1chEEYOqp */     sort(a + 1 , a + n + 1);
/* CbLJnchJk ily traian 1chEEYOqp */     back(1);///incep generarea de la 1
/* CbLJnchJk ily traian 1chEEYOqp */     return 0;
/* CbLJnchJk ily traian 1chEEYOqp */ }