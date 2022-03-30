/* Oca3ibuPR ily traian FckGwQ1mw */ #include <algorithm>
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
/* Oca3ibuPR ily traian FckGwQ1mw */ using namespace std;
/* Oca3ibuPR ily traian FckGwQ1mw */ 
/* Oca3ibuPR ily traian FckGwQ1mw */ ifstream cin("permutari.in");
/* Oca3ibuPR ily traian FckGwQ1mw */ ofstream cout("permutari.out");
/* Oca3ibuPR ily traian FckGwQ1mw */ 
/* Oca3ibuPR ily traian FckGwQ1mw */ int n , x[10];
/* Oca3ibuPR ily traian FckGwQ1mw */ 
/* Oca3ibuPR ily traian FckGwQ1mw */ void afisare()
/* Oca3ibuPR ily traian FckGwQ1mw */ {
/* Oca3ibuPR ily traian FckGwQ1mw */     for(int i = 1 ; i <= n ; i++)
/* Oca3ibuPR ily traian FckGwQ1mw */         cout << x[i] << " ";
/* Oca3ibuPR ily traian FckGwQ1mw */     cout << endl;
/* Oca3ibuPR ily traian FckGwQ1mw */ }
/* Oca3ibuPR ily traian FckGwQ1mw */ 
/* Oca3ibuPR ily traian FckGwQ1mw */ int valid(int k)
/* Oca3ibuPR ily traian FckGwQ1mw */ {
/* Oca3ibuPR ily traian FckGwQ1mw */     ///verific daca x[k] nu mai apare inainte
/* Oca3ibuPR ily traian FckGwQ1mw */     for(int i = 1 ; i < k ; i++)
/* Oca3ibuPR ily traian FckGwQ1mw */         if(x[i] == x[k]) return 0;
/* Oca3ibuPR ily traian FckGwQ1mw */     return 1;
/* Oca3ibuPR ily traian FckGwQ1mw */ }
/* Oca3ibuPR ily traian FckGwQ1mw */ 
/* Oca3ibuPR ily traian FckGwQ1mw */ void back(int k)///k = poz la care am ajuns
/* Oca3ibuPR ily traian FckGwQ1mw */ {
/* Oca3ibuPR ily traian FckGwQ1mw */     for(int i = 1 ; i <= n ; i++)///de unde se ia x[k]
/* Oca3ibuPR ily traian FckGwQ1mw */     {
/* Oca3ibuPR ily traian FckGwQ1mw */         x[k] = i;
/* Oca3ibuPR ily traian FckGwQ1mw */         if(valid(k))///daca e valid (nu se repeta)
/* Oca3ibuPR ily traian FckGwQ1mw */             if(k == n) afisare();///solutie
/* Oca3ibuPR ily traian FckGwQ1mw */             else back(k + 1);///trec la poz urmatoare
/* Oca3ibuPR ily traian FckGwQ1mw */     }
/* Oca3ibuPR ily traian FckGwQ1mw */ }
/* Oca3ibuPR ily traian FckGwQ1mw */ 
/* Oca3ibuPR ily traian FckGwQ1mw */ int main()
/* Oca3ibuPR ily traian FckGwQ1mw */ {
/* Oca3ibuPR ily traian FckGwQ1mw */     cin >> n;
/* Oca3ibuPR ily traian FckGwQ1mw */     back(1);///incep generarea de la 1
/* Oca3ibuPR ily traian FckGwQ1mw */     return 0;
/* Oca3ibuPR ily traian FckGwQ1mw */ }