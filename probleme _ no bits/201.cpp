/* ekxQ1oZgT ily traian VklvSP19W */ #include <algorithm>
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
/* ekxQ1oZgT ily traian VklvSP19W */ using namespace std;
/* ekxQ1oZgT ily traian VklvSP19W */ 
/* ekxQ1oZgT ily traian VklvSP19W */ ifstream cin("submdiv.in");
/* ekxQ1oZgT ily traian VklvSP19W */ ofstream cout("submdiv.out");
/* ekxQ1oZgT ily traian VklvSP19W */ 
/* ekxQ1oZgT ily traian VklvSP19W */ int n , m , x[20] , a[20] , p , cnt;
/* ekxQ1oZgT ily traian VklvSP19W */ 
/* ekxQ1oZgT ily traian VklvSP19W */ void afisare()
/* ekxQ1oZgT ily traian VklvSP19W */ {
/* ekxQ1oZgT ily traian VklvSP19W */     for(int i = 1 ; i <= m ; i++)
/* ekxQ1oZgT ily traian VklvSP19W */         cout << a[x[i]] << " ";
/* ekxQ1oZgT ily traian VklvSP19W */     cout << '\n';
/* ekxQ1oZgT ily traian VklvSP19W */     cnt++;
/* ekxQ1oZgT ily traian VklvSP19W */ }
/* ekxQ1oZgT ily traian VklvSP19W */ 
/* ekxQ1oZgT ily traian VklvSP19W */ 
/* ekxQ1oZgT ily traian VklvSP19W */ void back(int k)
/* ekxQ1oZgT ily traian VklvSP19W */ {
/* ekxQ1oZgT ily traian VklvSP19W */     for(int i = x[k - 1] + 1 ; i <= p ; i++)///se iau de la anterior + 1
/* ekxQ1oZgT ily traian VklvSP19W */     {
/* ekxQ1oZgT ily traian VklvSP19W */         x[k] = i;
/* ekxQ1oZgT ily traian VklvSP19W */         if(k == m) afisare();///daca s au pus m
/* ekxQ1oZgT ily traian VklvSP19W */         else back(k + 1);
/* ekxQ1oZgT ily traian VklvSP19W */     }
/* ekxQ1oZgT ily traian VklvSP19W */ }
/* ekxQ1oZgT ily traian VklvSP19W */ 
/* ekxQ1oZgT ily traian VklvSP19W */ int main()
/* ekxQ1oZgT ily traian VklvSP19W */ {
/* ekxQ1oZgT ily traian VklvSP19W */     cin >> n >> m;
/* ekxQ1oZgT ily traian VklvSP19W */     for(int i = 1 ; i <= n ; i++)
/* ekxQ1oZgT ily traian VklvSP19W */         if(n % i == 0) a[++p] = i;
/* ekxQ1oZgT ily traian VklvSP19W */     back(1);
/* ekxQ1oZgT ily traian VklvSP19W */     if(cnt == 0) cout << "fara solutie";
/* ekxQ1oZgT ily traian VklvSP19W */     return 0;
/* ekxQ1oZgT ily traian VklvSP19W */ }