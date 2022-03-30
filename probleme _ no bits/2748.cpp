/* mtZ68xsZt ily traian 4v2REDyih */ #include <algorithm>
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
/* mtZ68xsZt ily traian 4v2REDyih */ using namespace std;
/* mtZ68xsZt ily traian 4v2REDyih */ 
/* mtZ68xsZt ily traian 4v2REDyih */ long long int cmmdc(long long int a , long long int b)
/* mtZ68xsZt ily traian 4v2REDyih */ {
/* mtZ68xsZt ily traian 4v2REDyih */     while(b)
/* mtZ68xsZt ily traian 4v2REDyih */     {
/* mtZ68xsZt ily traian 4v2REDyih */         long long int r = a % b;
/* mtZ68xsZt ily traian 4v2REDyih */         a=b;
/* mtZ68xsZt ily traian 4v2REDyih */         b=r;
/* mtZ68xsZt ily traian 4v2REDyih */     }
/* mtZ68xsZt ily traian 4v2REDyih */     return a;
/* mtZ68xsZt ily traian 4v2REDyih */ }
/* mtZ68xsZt ily traian 4v2REDyih */ 
/* mtZ68xsZt ily traian 4v2REDyih */ long long int cmmmc(long long int a ,long long int b)
/* mtZ68xsZt ily traian 4v2REDyih */ {
/* mtZ68xsZt ily traian 4v2REDyih */     return a * b / cmmdc(a , b);
/* mtZ68xsZt ily traian 4v2REDyih */ }
/* mtZ68xsZt ily traian 4v2REDyih */ 
/* mtZ68xsZt ily traian 4v2REDyih */ int main()
/* mtZ68xsZt ily traian 4v2REDyih */ {
/* mtZ68xsZt ily traian 4v2REDyih */     int n;
/* mtZ68xsZt ily traian 4v2REDyih */     cin >> n;
/* mtZ68xsZt ily traian 4v2REDyih */     long long int c1 = n * 2 + (n-2) * 2;
/* mtZ68xsZt ily traian 4v2REDyih */     n-=2;
/* mtZ68xsZt ily traian 4v2REDyih */     long long int c2 = n * 2 + (n-2) * 2;
/* mtZ68xsZt ily traian 4v2REDyih */     n-=2;
/* mtZ68xsZt ily traian 4v2REDyih */     long long int c3 = n * 2 + (n-2) * 2;
/* mtZ68xsZt ily traian 4v2REDyih */     long long int c4=cmmmc(c1 , c2);
/* mtZ68xsZt ily traian 4v2REDyih */     long long int rez = cmmmc(c3 , c4);
/* mtZ68xsZt ily traian 4v2REDyih */     cout << rez/c1 << ' ' << rez/c2 << ' ' << rez/c3;
/* mtZ68xsZt ily traian 4v2REDyih */     return 0;
/* mtZ68xsZt ily traian 4v2REDyih */ }