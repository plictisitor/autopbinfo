/* WyEA1eOeW ily traian hLMn6VeNF */ #include <algorithm>
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
/* WyEA1eOeW ily traian hLMn6VeNF */ using namespace std;
/* WyEA1eOeW ily traian hLMn6VeNF */ int main()
/* WyEA1eOeW ily traian hLMn6VeNF */ {
/* WyEA1eOeW ily traian hLMn6VeNF */     int n;
/* WyEA1eOeW ily traian hLMn6VeNF */     cin >> n;
/* WyEA1eOeW ily traian hLMn6VeNF */     for(int i = 0 ; i <= 1 ; ++i)
/* WyEA1eOeW ily traian hLMn6VeNF */     {
/* WyEA1eOeW ily traian hLMn6VeNF */         if(n==1)
/* WyEA1eOeW ily traian hLMn6VeNF */             cout << i << endl;
/* WyEA1eOeW ily traian hLMn6VeNF */         else
/* WyEA1eOeW ily traian hLMn6VeNF */         for(int j = 0 ; j <= 1 ; j++)
/* WyEA1eOeW ily traian hLMn6VeNF */         {
/* WyEA1eOeW ily traian hLMn6VeNF */             if(n==2)
/* WyEA1eOeW ily traian hLMn6VeNF */                 cout << i << j << endl;
/* WyEA1eOeW ily traian hLMn6VeNF */             else
/* WyEA1eOeW ily traian hLMn6VeNF */             for(int r = 0 ; r <= 1 ; ++r)
/* WyEA1eOeW ily traian hLMn6VeNF */             {
/* WyEA1eOeW ily traian hLMn6VeNF */                 if(n==3)
/* WyEA1eOeW ily traian hLMn6VeNF */                 cout << i << j << r <<endl;
/* WyEA1eOeW ily traian hLMn6VeNF */                 else
/* WyEA1eOeW ily traian hLMn6VeNF */                 for(int p = 0 ; p <= 1 ; ++p)
/* WyEA1eOeW ily traian hLMn6VeNF */                 {
/* WyEA1eOeW ily traian hLMn6VeNF */                     if(n==4)
/* WyEA1eOeW ily traian hLMn6VeNF */                     cout << i << j << r << p << endl;
/* WyEA1eOeW ily traian hLMn6VeNF */                     else
/* WyEA1eOeW ily traian hLMn6VeNF */                     for(int k = 0 ; k <= 1 ; ++k)
/* WyEA1eOeW ily traian hLMn6VeNF */                     {
/* WyEA1eOeW ily traian hLMn6VeNF */                         if(n==5)
/* WyEA1eOeW ily traian hLMn6VeNF */                         cout << i << j << r << p << k << endl;
/* WyEA1eOeW ily traian hLMn6VeNF */                         else
/* WyEA1eOeW ily traian hLMn6VeNF */                         for(int q = 0 ; q <= 1 ; ++q)
/* WyEA1eOeW ily traian hLMn6VeNF */                         {
/* WyEA1eOeW ily traian hLMn6VeNF */                             if(n==6)
/* WyEA1eOeW ily traian hLMn6VeNF */                             cout << i << j << r << p << k << q << endl;
/* WyEA1eOeW ily traian hLMn6VeNF */                             else
/* WyEA1eOeW ily traian hLMn6VeNF */                             for(int s = 0 ; s <= 1 ; ++s)
/* WyEA1eOeW ily traian hLMn6VeNF */                             {
/* WyEA1eOeW ily traian hLMn6VeNF */                                 if(n==7)
/* WyEA1eOeW ily traian hLMn6VeNF */                                     cout << i << j << r << p << k << q << s << endl;
/* WyEA1eOeW ily traian hLMn6VeNF */                                 else
/* WyEA1eOeW ily traian hLMn6VeNF */                                 for(int t = 0 ; t <= 1 ; ++t)
/* WyEA1eOeW ily traian hLMn6VeNF */                                 {
/* WyEA1eOeW ily traian hLMn6VeNF */                                     if(n==8)
/* WyEA1eOeW ily traian hLMn6VeNF */                                         cout << i << j << r << p << k << q << s << t << endl;
/* WyEA1eOeW ily traian hLMn6VeNF */                                     else
/* WyEA1eOeW ily traian hLMn6VeNF */                                     for(int u = 0 ; u <= 1 ; ++u)
/* WyEA1eOeW ily traian hLMn6VeNF */                                     {
/* WyEA1eOeW ily traian hLMn6VeNF */                                         if(n==9)
/* WyEA1eOeW ily traian hLMn6VeNF */                                             cout << i << j << r << p << k << q << s << t << u << endl;
/* WyEA1eOeW ily traian hLMn6VeNF */                                         else
/* WyEA1eOeW ily traian hLMn6VeNF */                                         for(int v = 0 ; v <= 1 ; ++v)
/* WyEA1eOeW ily traian hLMn6VeNF */                                             cout << i << j << r << p << k << q << s << t << u << v << endl;
/* WyEA1eOeW ily traian hLMn6VeNF */                                     }
/* WyEA1eOeW ily traian hLMn6VeNF */                                 }
/* WyEA1eOeW ily traian hLMn6VeNF */                             }
/* WyEA1eOeW ily traian hLMn6VeNF */                         }
/* WyEA1eOeW ily traian hLMn6VeNF */                     }
/* WyEA1eOeW ily traian hLMn6VeNF */                 }
/* WyEA1eOeW ily traian hLMn6VeNF */             }
/* WyEA1eOeW ily traian hLMn6VeNF */         }
/* WyEA1eOeW ily traian hLMn6VeNF */     }
/* WyEA1eOeW ily traian hLMn6VeNF */ }