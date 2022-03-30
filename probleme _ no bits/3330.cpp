/* OoEnqIRne ily traian zAbjNXEPn */ #include <algorithm>
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
/* OoEnqIRne ily traian zAbjNXEPn */ using namespace std;
/* OoEnqIRne ily traian zAbjNXEPn */ 
/* OoEnqIRne ily traian zAbjNXEPn */ int n , k , v[1001];
/* OoEnqIRne ily traian zAbjNXEPn */ 
/* OoEnqIRne ily traian zAbjNXEPn */ void comb(int n , int k)
/* OoEnqIRne ily traian zAbjNXEPn */ {
/* OoEnqIRne ily traian zAbjNXEPn */     for(int i = 1 ; i <= k ; i++)
/* OoEnqIRne ily traian zAbjNXEPn */         v[i] = n - i + 1;
/* OoEnqIRne ily traian zAbjNXEPn */     for(int i = 1 ; i <= k ; i++)
/* OoEnqIRne ily traian zAbjNXEPn */     {
/* OoEnqIRne ily traian zAbjNXEPn */         int x = i , d = 2;
/* OoEnqIRne ily traian zAbjNXEPn */         while(x > 1)
/* OoEnqIRne ily traian zAbjNXEPn */         {
/* OoEnqIRne ily traian zAbjNXEPn */             if(x % d == 0)
/* OoEnqIRne ily traian zAbjNXEPn */             {
/* OoEnqIRne ily traian zAbjNXEPn */                 int p = 0;
/* OoEnqIRne ily traian zAbjNXEPn */                 for(int j = 1 ; j <= k ; j++)
/* OoEnqIRne ily traian zAbjNXEPn */                     if(v[j] % d == 0) p = j;
/* OoEnqIRne ily traian zAbjNXEPn */                 v[p] /= d;
/* OoEnqIRne ily traian zAbjNXEPn */                 x /= d;
/* OoEnqIRne ily traian zAbjNXEPn */             }
/* OoEnqIRne ily traian zAbjNXEPn */             else d++;
/* OoEnqIRne ily traian zAbjNXEPn */             if(d * d > x) d = x;
/* OoEnqIRne ily traian zAbjNXEPn */         }
/* OoEnqIRne ily traian zAbjNXEPn */     }
/* OoEnqIRne ily traian zAbjNXEPn */     int r[1001];
/* OoEnqIRne ily traian zAbjNXEPn */     r[0] = 1 , r[1] = 1;
/* OoEnqIRne ily traian zAbjNXEPn */     for(int i = 1 ; i <= k ; i++)
/* OoEnqIRne ily traian zAbjNXEPn */     {
/* OoEnqIRne ily traian zAbjNXEPn */         int t = 0;
/* OoEnqIRne ily traian zAbjNXEPn */         for(int j = 1 ; j <= r[0] ; j++)
/* OoEnqIRne ily traian zAbjNXEPn */         {
/* OoEnqIRne ily traian zAbjNXEPn */             int x = t + r[j] * v[i];
/* OoEnqIRne ily traian zAbjNXEPn */             r[j] = x % 10;
/* OoEnqIRne ily traian zAbjNXEPn */             t = x / 10;
/* OoEnqIRne ily traian zAbjNXEPn */         }
/* OoEnqIRne ily traian zAbjNXEPn */         while(t) r[++r[0]] = t % 10 , t /=10;
/* OoEnqIRne ily traian zAbjNXEPn */     }
/* OoEnqIRne ily traian zAbjNXEPn */     for(int i = r[0] ; i > 0 ; i--)
/* OoEnqIRne ily traian zAbjNXEPn */         cout << r[i];
/* OoEnqIRne ily traian zAbjNXEPn */ }
/* OoEnqIRne ily traian zAbjNXEPn */ 
/* OoEnqIRne ily traian zAbjNXEPn */ int main()
/* OoEnqIRne ily traian zAbjNXEPn */ {
/* OoEnqIRne ily traian zAbjNXEPn */     cin >> n >> k;
/* OoEnqIRne ily traian zAbjNXEPn */     comb(n , k);
/* OoEnqIRne ily traian zAbjNXEPn */ }