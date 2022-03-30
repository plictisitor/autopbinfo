/* rSLMCZVIu ily traian hldLQZVDK */ #include <algorithm>
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
/* rSLMCZVIu ily traian hldLQZVDK */ 
/* rSLMCZVIu ily traian hldLQZVDK */ using namespace std;
/* rSLMCZVIu ily traian hldLQZVDK */ 
/* rSLMCZVIu ily traian hldLQZVDK */ int main ()
/* rSLMCZVIu ily traian hldLQZVDK */ {
/* rSLMCZVIu ily traian hldLQZVDK */     int n;
/* rSLMCZVIu ily traian hldLQZVDK */     cin >> n;
/* rSLMCZVIu ily traian hldLQZVDK */     int s=0;
/* rSLMCZVIu ily traian hldLQZVDK */     for (int i = 1 ; i*i <= n;++i )
/* rSLMCZVIu ily traian hldLQZVDK */     {
/* rSLMCZVIu ily traian hldLQZVDK */         if (n%i==0)
/* rSLMCZVIu ily traian hldLQZVDK */         {
/* rSLMCZVIu ily traian hldLQZVDK */         s+=i; 
/* rSLMCZVIu ily traian hldLQZVDK */         s+=n/i;
/* rSLMCZVIu ily traian hldLQZVDK */         }
/* rSLMCZVIu ily traian hldLQZVDK */         if (i*i==n)
/* rSLMCZVIu ily traian hldLQZVDK */         s-=i;
/* rSLMCZVIu ily traian hldLQZVDK */     }
/* rSLMCZVIu ily traian hldLQZVDK */     if (s%n==0)
/* rSLMCZVIu ily traian hldLQZVDK */     cout << "DA";
/* rSLMCZVIu ily traian hldLQZVDK */     else 
/* rSLMCZVIu ily traian hldLQZVDK */     cout << "NU";
/* rSLMCZVIu ily traian hldLQZVDK */     return 0;    
/* rSLMCZVIu ily traian hldLQZVDK */ }