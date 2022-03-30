/* R6qS9jcTP ily traian 4XCNCkMPM */ #include <algorithm>
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
/* R6qS9jcTP ily traian 4XCNCkMPM */ 
/* R6qS9jcTP ily traian 4XCNCkMPM */ using namespace std;
/* R6qS9jcTP ily traian 4XCNCkMPM */ 
/* R6qS9jcTP ily traian 4XCNCkMPM */ int prim (int n);
/* R6qS9jcTP ily traian 4XCNCkMPM */ 
/* R6qS9jcTP ily traian 4XCNCkMPM */ int main()
/* R6qS9jcTP ily traian 4XCNCkMPM */ {
/* R6qS9jcTP ily traian 4XCNCkMPM */     int a;
/* R6qS9jcTP ily traian 4XCNCkMPM */     cin >> a;
/* R6qS9jcTP ily traian 4XCNCkMPM */     a++;
/* R6qS9jcTP ily traian 4XCNCkMPM */     while (prim(a)==0)
/* R6qS9jcTP ily traian 4XCNCkMPM */     a++;
/* R6qS9jcTP ily traian 4XCNCkMPM */     cout << a;
/* R6qS9jcTP ily traian 4XCNCkMPM */     return 0;
/* R6qS9jcTP ily traian 4XCNCkMPM */ }
/* R6qS9jcTP ily traian 4XCNCkMPM */ int prim(int n)
/* R6qS9jcTP ily traian 4XCNCkMPM */ {
/* R6qS9jcTP ily traian 4XCNCkMPM */     int div=0;
/* R6qS9jcTP ily traian 4XCNCkMPM */     for (int i = 1 ; i*i <= n;++i )
/* R6qS9jcTP ily traian 4XCNCkMPM */     {
/* R6qS9jcTP ily traian 4XCNCkMPM */         if (n%i==0)
/* R6qS9jcTP ily traian 4XCNCkMPM */         {
/* R6qS9jcTP ily traian 4XCNCkMPM */         div+=i;
/* R6qS9jcTP ily traian 4XCNCkMPM */         div+=n/i;
/* R6qS9jcTP ily traian 4XCNCkMPM */         }
/* R6qS9jcTP ily traian 4XCNCkMPM */         if (i*i==n)
/* R6qS9jcTP ily traian 4XCNCkMPM */         div-=i;
/* R6qS9jcTP ily traian 4XCNCkMPM */     }
/* R6qS9jcTP ily traian 4XCNCkMPM */     if (div==n+1)
/* R6qS9jcTP ily traian 4XCNCkMPM */     return 1;
/* R6qS9jcTP ily traian 4XCNCkMPM */     else 
/* R6qS9jcTP ily traian 4XCNCkMPM */     return 0;    
/* R6qS9jcTP ily traian 4XCNCkMPM */ }