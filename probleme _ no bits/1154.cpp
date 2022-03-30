/* ZbLYq5WFh ily traian 3fuyivNET */ #include <algorithm>
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
/* ZbLYq5WFh ily traian 3fuyivNET */ using namespace std;
/* ZbLYq5WFh ily traian 3fuyivNET */ 
/* ZbLYq5WFh ily traian 3fuyivNET */ bool gasesc(int elem, int a[], int st, int dr){
/* ZbLYq5WFh ily traian 3fuyivNET */     if(st == dr)
/* ZbLYq5WFh ily traian 3fuyivNET */         return a[st] == elem;
/* ZbLYq5WFh ily traian 3fuyivNET */     else{
/* ZbLYq5WFh ily traian 3fuyivNET */         int mij = (st + dr) / 2;
/* ZbLYq5WFh ily traian 3fuyivNET */         return gasesc(elem, a, st, mij) || gasesc(elem, a, mij + 1, dr);
/* ZbLYq5WFh ily traian 3fuyivNET */     }
/* ZbLYq5WFh ily traian 3fuyivNET */ }
/* ZbLYq5WFh ily traian 3fuyivNET */ 
/* ZbLYq5WFh ily traian 3fuyivNET */ int main()
/* ZbLYq5WFh ily traian 3fuyivNET */ {
/* ZbLYq5WFh ily traian 3fuyivNET */     int n, m, a[1001], b[1001];
/* ZbLYq5WFh ily traian 3fuyivNET */     cin >> n;
/* ZbLYq5WFh ily traian 3fuyivNET */     for(int i = 1; i <= n; ++i)
/* ZbLYq5WFh ily traian 3fuyivNET */         cin >> a[i];
/* ZbLYq5WFh ily traian 3fuyivNET */     cin >> m;
/* ZbLYq5WFh ily traian 3fuyivNET */     for(int i = 1; i <= m; ++i)
/* ZbLYq5WFh ily traian 3fuyivNET */         cin >> b[i];
/* ZbLYq5WFh ily traian 3fuyivNET */     for(int i = 1; i <= m; ++i)
/* ZbLYq5WFh ily traian 3fuyivNET */         if(gasesc(b[i], a, 1, n))
/* ZbLYq5WFh ily traian 3fuyivNET */             cout << 1 << ' ';
/* ZbLYq5WFh ily traian 3fuyivNET */         else
/* ZbLYq5WFh ily traian 3fuyivNET */             cout << 0 << ' ';
/* ZbLYq5WFh ily traian 3fuyivNET */     return 0;
/* ZbLYq5WFh ily traian 3fuyivNET */ }