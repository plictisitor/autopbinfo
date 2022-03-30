/* E2SGLKpo3 ily traian EcrUastuX */ #include <algorithm>
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
/* E2SGLKpo3 ily traian EcrUastuX */ using namespace std;
/* E2SGLKpo3 ily traian EcrUastuX */ 
/* E2SGLKpo3 ily traian EcrUastuX */ ifstream cin("af.in");
/* E2SGLKpo3 ily traian EcrUastuX */ ofstream cout("af.out");
/* E2SGLKpo3 ily traian EcrUastuX */ 
/* E2SGLKpo3 ily traian EcrUastuX */ int main()
/* E2SGLKpo3 ily traian EcrUastuX */ {
/* E2SGLKpo3 ily traian EcrUastuX */     int n;
/* E2SGLKpo3 ily traian EcrUastuX */     cin >> n;
/* E2SGLKpo3 ily traian EcrUastuX */     for(int i = 0 ; i < n ; ++i)
/* E2SGLKpo3 ily traian EcrUastuX */     {
/* E2SGLKpo3 ily traian EcrUastuX */         long long int x , y , z;
/* E2SGLKpo3 ily traian EcrUastuX */         char c1 , c2;
/* E2SGLKpo3 ily traian EcrUastuX */         cin >> x >> c1 >> y >> c2 >> z;
/* E2SGLKpo3 ily traian EcrUastuX */         if(c1=='+')
/* E2SGLKpo3 ily traian EcrUastuX */             if(x + y == z)
/* E2SGLKpo3 ily traian EcrUastuX */                 cout << "Adevarat" << '\n';
/* E2SGLKpo3 ily traian EcrUastuX */             else
/* E2SGLKpo3 ily traian EcrUastuX */                 cout << "Fals" << '\n';
/* E2SGLKpo3 ily traian EcrUastuX */         if(c1=='-')
/* E2SGLKpo3 ily traian EcrUastuX */             if(x - y == z)
/* E2SGLKpo3 ily traian EcrUastuX */                 cout << "Adevarat" << '\n';
/* E2SGLKpo3 ily traian EcrUastuX */             else
/* E2SGLKpo3 ily traian EcrUastuX */                 cout << "Fals" << '\n';
/* E2SGLKpo3 ily traian EcrUastuX */         if(c1=='x')
/* E2SGLKpo3 ily traian EcrUastuX */             if(x * y == z)
/* E2SGLKpo3 ily traian EcrUastuX */                 cout << "Adevarat" << '\n';
/* E2SGLKpo3 ily traian EcrUastuX */             else
/* E2SGLKpo3 ily traian EcrUastuX */                 cout << "Fals" << '\n';
/* E2SGLKpo3 ily traian EcrUastuX */         if(c1==':' && y != 0)
/* E2SGLKpo3 ily traian EcrUastuX */             if(x / y == z)
/* E2SGLKpo3 ily traian EcrUastuX */                 cout << "Adevarat" << '\n';
/* E2SGLKpo3 ily traian EcrUastuX */             else
/* E2SGLKpo3 ily traian EcrUastuX */                 cout << "Fals" << '\n';
/* E2SGLKpo3 ily traian EcrUastuX */         else if(c1==':')
/* E2SGLKpo3 ily traian EcrUastuX */                 cout << "Fals" << '\n';
/* E2SGLKpo3 ily traian EcrUastuX */     }
/* E2SGLKpo3 ily traian EcrUastuX */     return 0;
/* E2SGLKpo3 ily traian EcrUastuX */ }