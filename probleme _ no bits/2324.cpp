/* YUwqimICY ily traian CUyaln51v */ #include <algorithm>
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
/* YUwqimICY ily traian CUyaln51v */ using namespace std;
/* YUwqimICY ily traian CUyaln51v */ 
/* YUwqimICY ily traian CUyaln51v */ int main()
/* YUwqimICY ily traian CUyaln51v */ {
/* YUwqimICY ily traian CUyaln51v */     long long int n;
/* YUwqimICY ily traian CUyaln51v */     cin >> n;
/* YUwqimICY ily traian CUyaln51v */     long long int dmax=0;
/* YUwqimICY ily traian CUyaln51v */     long long int d=2;
/* YUwqimICY ily traian CUyaln51v */     while(n>1)
/* YUwqimICY ily traian CUyaln51v */     {
/* YUwqimICY ily traian CUyaln51v */         int p = 0;
/* YUwqimICY ily traian CUyaln51v */         while(n%d==0)
/* YUwqimICY ily traian CUyaln51v */         {
/* YUwqimICY ily traian CUyaln51v */             n/=d;
/* YUwqimICY ily traian CUyaln51v */             p++;
/* YUwqimICY ily traian CUyaln51v */         }
/* YUwqimICY ily traian CUyaln51v */         if(p!=0)
/* YUwqimICY ily traian CUyaln51v */         {
/* YUwqimICY ily traian CUyaln51v */             dmax=d;    
/* YUwqimICY ily traian CUyaln51v */         }
/* YUwqimICY ily traian CUyaln51v */         d++;
/* YUwqimICY ily traian CUyaln51v */         if(d*d>n)
/* YUwqimICY ily traian CUyaln51v */         d=n;
/* YUwqimICY ily traian CUyaln51v */     }
/* YUwqimICY ily traian CUyaln51v */     cout << dmax;
/* YUwqimICY ily traian CUyaln51v */ }