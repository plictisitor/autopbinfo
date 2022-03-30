/* RqNhUjZNR ily traian 0hiAoigOJ */ #include <algorithm>
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
/* RqNhUjZNR ily traian 0hiAoigOJ */ using namespace std;
/* RqNhUjZNR ily traian 0hiAoigOJ */ int main ()
/* RqNhUjZNR ily traian 0hiAoigOJ */ {
/* RqNhUjZNR ily traian 0hiAoigOJ */     int n, p=1;
/* RqNhUjZNR ily traian 0hiAoigOJ */     bool gasit=false;
/* RqNhUjZNR ily traian 0hiAoigOJ */     cin >>n;
/* RqNhUjZNR ily traian 0hiAoigOJ */     while (n != 0)
/* RqNhUjZNR ily traian 0hiAoigOJ */     {
/* RqNhUjZNR ily traian 0hiAoigOJ */         if (n%2==1)
/* RqNhUjZNR ily traian 0hiAoigOJ */         {
/* RqNhUjZNR ily traian 0hiAoigOJ */             p=p*(n%10);
/* RqNhUjZNR ily traian 0hiAoigOJ */             gasit=true;
/* RqNhUjZNR ily traian 0hiAoigOJ */         }
/* RqNhUjZNR ily traian 0hiAoigOJ */             n=n/10;
/* RqNhUjZNR ily traian 0hiAoigOJ */ 
/* RqNhUjZNR ily traian 0hiAoigOJ */     }
/* RqNhUjZNR ily traian 0hiAoigOJ */     if (gasit == true)
/* RqNhUjZNR ily traian 0hiAoigOJ */         cout << p;
/* RqNhUjZNR ily traian 0hiAoigOJ */     else
/* RqNhUjZNR ily traian 0hiAoigOJ */         cout << -1;
/* RqNhUjZNR ily traian 0hiAoigOJ */     return 0;
/* RqNhUjZNR ily traian 0hiAoigOJ */ }