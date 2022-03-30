/* VcoQ4CWfU ily traian 5MY8AcLBW */ #include <algorithm>
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
/* VcoQ4CWfU ily traian 5MY8AcLBW */ using namespace std;
/* VcoQ4CWfU ily traian 5MY8AcLBW */ 
/* VcoQ4CWfU ily traian 5MY8AcLBW */ ifstream cin("combinari.in");
/* VcoQ4CWfU ily traian 5MY8AcLBW */ ofstream cout("combinari.out");
/* VcoQ4CWfU ily traian 5MY8AcLBW */ 
/* VcoQ4CWfU ily traian 5MY8AcLBW */ int n , m , x[20];
/* VcoQ4CWfU ily traian 5MY8AcLBW */ 
/* VcoQ4CWfU ily traian 5MY8AcLBW */ void afisare()
/* VcoQ4CWfU ily traian 5MY8AcLBW */ {
/* VcoQ4CWfU ily traian 5MY8AcLBW */     for(int i = 1 ; i <= m ; i++)
/* VcoQ4CWfU ily traian 5MY8AcLBW */         cout << x[i] << " ";
/* VcoQ4CWfU ily traian 5MY8AcLBW */     cout << '\n';
/* VcoQ4CWfU ily traian 5MY8AcLBW */ }
/* VcoQ4CWfU ily traian 5MY8AcLBW */ 
/* VcoQ4CWfU ily traian 5MY8AcLBW */ 
/* VcoQ4CWfU ily traian 5MY8AcLBW */ void back(int k)
/* VcoQ4CWfU ily traian 5MY8AcLBW */ {
/* VcoQ4CWfU ily traian 5MY8AcLBW */     for(int i = x[k - 1] + 1 ; i <= n ; i++)///se iau de la anterior + 1
/* VcoQ4CWfU ily traian 5MY8AcLBW */     {
/* VcoQ4CWfU ily traian 5MY8AcLBW */         x[k] = i;
/* VcoQ4CWfU ily traian 5MY8AcLBW */         if(k == m) afisare();///daca s au pus m
/* VcoQ4CWfU ily traian 5MY8AcLBW */         else back(k + 1);
/* VcoQ4CWfU ily traian 5MY8AcLBW */     }
/* VcoQ4CWfU ily traian 5MY8AcLBW */ }
/* VcoQ4CWfU ily traian 5MY8AcLBW */ 
/* VcoQ4CWfU ily traian 5MY8AcLBW */ int main()
/* VcoQ4CWfU ily traian 5MY8AcLBW */ {
/* VcoQ4CWfU ily traian 5MY8AcLBW */     cin >> n >> m;
/* VcoQ4CWfU ily traian 5MY8AcLBW */     back(1);
/* VcoQ4CWfU ily traian 5MY8AcLBW */     return 0;
/* VcoQ4CWfU ily traian 5MY8AcLBW */ }