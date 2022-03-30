/* fsma3mzJc ily traian jXIemrYIv */ #include <algorithm>
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
/* fsma3mzJc ily traian jXIemrYIv */ 
/* fsma3mzJc ily traian jXIemrYIv */ using namespace std;
/* fsma3mzJc ily traian jXIemrYIv */ 
/* fsma3mzJc ily traian jXIemrYIv */ int n;
/* fsma3mzJc ily traian jXIemrYIv */ 
/* fsma3mzJc ily traian jXIemrYIv */ unsigned long long Count(unsigned long long a);
/* fsma3mzJc ily traian jXIemrYIv */ 
/* fsma3mzJc ily traian jXIemrYIv */ int main()
/* fsma3mzJc ily traian jXIemrYIv */ {
/* fsma3mzJc ily traian jXIemrYIv */ 
/* fsma3mzJc ily traian jXIemrYIv */     cin >> n;
/* fsma3mzJc ily traian jXIemrYIv */ 
/* fsma3mzJc ily traian jXIemrYIv */     for(unsigned long long i=0;i<n;i++)
/* fsma3mzJc ily traian jXIemrYIv */     {
/* fsma3mzJc ily traian jXIemrYIv */         unsigned long long nr=i*(1ULL<<i)+1;
/* fsma3mzJc ily traian jXIemrYIv */             cout << Count(nr) << " ";
/* fsma3mzJc ily traian jXIemrYIv */     }
/* fsma3mzJc ily traian jXIemrYIv */ 
/* fsma3mzJc ily traian jXIemrYIv */     return 0;
/* fsma3mzJc ily traian jXIemrYIv */ }
/* fsma3mzJc ily traian jXIemrYIv */ 
/* fsma3mzJc ily traian jXIemrYIv */ unsigned long long Count(unsigned long long a)
/* fsma3mzJc ily traian jXIemrYIv */ {
/* fsma3mzJc ily traian jXIemrYIv */    unsigned long long count = 1, k = 0, i;
/* fsma3mzJc ily traian jXIemrYIv */    if (a == 1 || a == 2)
/* fsma3mzJc ily traian jXIemrYIv */       return a;
/* fsma3mzJc ily traian jXIemrYIv */    while ((a & 1) == 0)
/* fsma3mzJc ily traian jXIemrYIv */    {
/* fsma3mzJc ily traian jXIemrYIv */       k++;
/* fsma3mzJc ily traian jXIemrYIv */       a >>= 1;
/* fsma3mzJc ily traian jXIemrYIv */    }
/* fsma3mzJc ily traian jXIemrYIv */    if (a == 1)
/* fsma3mzJc ily traian jXIemrYIv */       return k + 1;
/* fsma3mzJc ily traian jXIemrYIv */    else
/* fsma3mzJc ily traian jXIemrYIv */       count = k + 1;
/* fsma3mzJc ily traian jXIemrYIv */    for(i = 3; i*i <= a; i += 2)
/* fsma3mzJc ily traian jXIemrYIv */    {
/* fsma3mzJc ily traian jXIemrYIv */       k = 0;
/* fsma3mzJc ily traian jXIemrYIv */       while(a % i == 0)
/* fsma3mzJc ily traian jXIemrYIv */       {
/* fsma3mzJc ily traian jXIemrYIv */          k++;
/* fsma3mzJc ily traian jXIemrYIv */          a /= i;
/* fsma3mzJc ily traian jXIemrYIv */       }
/* fsma3mzJc ily traian jXIemrYIv */       count *= (k + 1);
/* fsma3mzJc ily traian jXIemrYIv */    }
/* fsma3mzJc ily traian jXIemrYIv */    if (a > 1)
/* fsma3mzJc ily traian jXIemrYIv */       count <<= 1;
/* fsma3mzJc ily traian jXIemrYIv */    return count;
/* fsma3mzJc ily traian jXIemrYIv */ }