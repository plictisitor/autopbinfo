/* dkhvlCnSk ily traian 2BXgVWL7K */ #include <algorithm>
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
/* dkhvlCnSk ily traian 2BXgVWL7K */ 
/* dkhvlCnSk ily traian 2BXgVWL7K */ using namespace std;
/* dkhvlCnSk ily traian 2BXgVWL7K */ 
/* dkhvlCnSk ily traian 2BXgVWL7K */ ifstream cin("colectie.in");
/* dkhvlCnSk ily traian 2BXgVWL7K */ ofstream cout("colectie.out");
/* dkhvlCnSk ily traian 2BXgVWL7K */ 
/* dkhvlCnSk ily traian 2BXgVWL7K */ bitset<9000000>f;
/* dkhvlCnSk ily traian 2BXgVWL7K */ bitset<9000000>f2;
/* dkhvlCnSk ily traian 2BXgVWL7K */ int n , x , cnt;
/* dkhvlCnSk ily traian 2BXgVWL7K */ int main()
/* dkhvlCnSk ily traian 2BXgVWL7K */ {
/* dkhvlCnSk ily traian 2BXgVWL7K */     cin >> n;
/* dkhvlCnSk ily traian 2BXgVWL7K */     for(int i = 1 ; i <= n ; ++i)
/* dkhvlCnSk ily traian 2BXgVWL7K */     {
/* dkhvlCnSk ily traian 2BXgVWL7K */         cin >> x;
/* dkhvlCnSk ily traian 2BXgVWL7K */         if(f[x] == 0 && f2[x] == 0) f[x] = 1 , cnt++;
/* dkhvlCnSk ily traian 2BXgVWL7K */         else if(f[x] == 1) cnt-- , f2[x] = 1 , f[x] = 0;
/* dkhvlCnSk ily traian 2BXgVWL7K */     }
/* dkhvlCnSk ily traian 2BXgVWL7K */     cout << cnt;
/* dkhvlCnSk ily traian 2BXgVWL7K */     return 0;
/* dkhvlCnSk ily traian 2BXgVWL7K */ }