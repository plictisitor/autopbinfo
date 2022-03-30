/* So1tcWMDW ily traian Kz9O0sk9T */ #include <algorithm>
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
/* So1tcWMDW ily traian Kz9O0sk9T */ using namespace std;
/* So1tcWMDW ily traian Kz9O0sk9T */ 
/* So1tcWMDW ily traian Kz9O0sk9T */ ifstream fin ("b2.in");
/* So1tcWMDW ily traian Kz9O0sk9T */ ofstream fout ("b2.out");
/* So1tcWMDW ily traian Kz9O0sk9T */ 
/* So1tcWMDW ily traian Kz9O0sk9T */ int main ()
/* So1tcWMDW ily traian Kz9O0sk9T */ {
/* So1tcWMDW ily traian Kz9O0sk9T */     int nc=0;
/* So1tcWMDW ily traian Kz9O0sk9T */     unsigned long long int x,n;
/* So1tcWMDW ily traian Kz9O0sk9T */     fin >> n;
/* So1tcWMDW ily traian Kz9O0sk9T */     x=n;
/* So1tcWMDW ily traian Kz9O0sk9T */     while(x)
/* So1tcWMDW ily traian Kz9O0sk9T */     {
/* So1tcWMDW ily traian Kz9O0sk9T */         x/=2;
/* So1tcWMDW ily traian Kz9O0sk9T */         nc++;
/* So1tcWMDW ily traian Kz9O0sk9T */     }
/* So1tcWMDW ily traian Kz9O0sk9T */     for (int i = 1; i <nc; ++i)
/* So1tcWMDW ily traian Kz9O0sk9T */         for(int j = 0 ; j <i; ++j)
/* So1tcWMDW ily traian Kz9O0sk9T */     {
/* So1tcWMDW ily traian Kz9O0sk9T */         x=(1ull<<i)+(1ull<<j);
/* So1tcWMDW ily traian Kz9O0sk9T */         if (x<=n) fout << x << ' ';
/* So1tcWMDW ily traian Kz9O0sk9T */     }
/* So1tcWMDW ily traian Kz9O0sk9T */     return 0;
/* So1tcWMDW ily traian Kz9O0sk9T */ }