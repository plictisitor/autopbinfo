/* uO8xKa3DI ily traian 1VjMfozRg */ #include <algorithm>
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
/* uO8xKa3DI ily traian 1VjMfozRg */ using namespace std;
/* uO8xKa3DI ily traian 1VjMfozRg */ 
/* uO8xKa3DI ily traian 1VjMfozRg */ int sp[100001];  // a[0], a[1], a[2], a[3]...., a[999];
/* uO8xKa3DI ily traian 1VjMfozRg */ int n;
/* uO8xKa3DI ily traian 1VjMfozRg */ int k;     // nr de cifre 1 din sir
/* uO8xKa3DI ily traian 1VjMfozRg */ 
/* uO8xKa3DI ily traian 1VjMfozRg */ int main()
/* uO8xKa3DI ily traian 1VjMfozRg */ {
/* uO8xKa3DI ily traian 1VjMfozRg */     int x;
/* uO8xKa3DI ily traian 1VjMfozRg */     // citirea sirului
/* uO8xKa3DI ily traian 1VjMfozRg */     cin >> n;
/* uO8xKa3DI ily traian 1VjMfozRg */     for (int i = 1; i <= n; ++i)
/* uO8xKa3DI ily traian 1VjMfozRg */     {
/* uO8xKa3DI ily traian 1VjMfozRg */         cin >> x;
/* uO8xKa3DI ily traian 1VjMfozRg */         sp[i] = sp[i - 1] + x;
/* uO8xKa3DI ily traian 1VjMfozRg */     }
/* uO8xKa3DI ily traian 1VjMfozRg */     
/* uO8xKa3DI ily traian 1VjMfozRg */     k = sp[n];
/* uO8xKa3DI ily traian 1VjMfozRg */     
/* uO8xKa3DI ily traian 1VjMfozRg */     int smax = 0;
/* uO8xKa3DI ily traian 1VjMfozRg */     for (int i = k; i <= n; ++i)
/* uO8xKa3DI ily traian 1VjMfozRg */         if (sp[i] - sp[i - k] > smax)
/* uO8xKa3DI ily traian 1VjMfozRg */             smax = sp[i] - sp[i - k];
/* uO8xKa3DI ily traian 1VjMfozRg */             
/* uO8xKa3DI ily traian 1VjMfozRg */     cout << k - smax;
/* uO8xKa3DI ily traian 1VjMfozRg */     
/* uO8xKa3DI ily traian 1VjMfozRg */     return 0;
/* uO8xKa3DI ily traian 1VjMfozRg */     
/* uO8xKa3DI ily traian 1VjMfozRg */ }