/* pvYXMkIlv ily traian tedUYVTDa */ #include <algorithm>
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
/* pvYXMkIlv ily traian tedUYVTDa */ 
/* pvYXMkIlv ily traian tedUYVTDa */ using namespace std;
/* pvYXMkIlv ily traian tedUYVTDa */ 
/* pvYXMkIlv ily traian tedUYVTDa */ ifstream cin("triviador.in");
/* pvYXMkIlv ily traian tedUYVTDa */ ofstream cout("triviador.out");
/* pvYXMkIlv ily traian tedUYVTDa */ 
/* pvYXMkIlv ily traian tedUYVTDa */ int s[10001];
/* pvYXMkIlv ily traian tedUYVTDa */ 
/* pvYXMkIlv ily traian tedUYVTDa */ int main()
/* pvYXMkIlv ily traian tedUYVTDa */ {
/* pvYXMkIlv ily traian tedUYVTDa */     int n;
/* pvYXMkIlv ily traian tedUYVTDa */     cin >> n;
/* pvYXMkIlv ily traian tedUYVTDa */     for(int i = 1; i <= n; ++i)
/* pvYXMkIlv ily traian tedUYVTDa */     {
/* pvYXMkIlv ily traian tedUYVTDa */         int x, y, z;
/* pvYXMkIlv ily traian tedUYVTDa */         cin >> x >> y >> z;
/* pvYXMkIlv ily traian tedUYVTDa */         s[i - 1] = x + y + z;
/* pvYXMkIlv ily traian tedUYVTDa */     }
/* pvYXMkIlv ily traian tedUYVTDa */     sort(s, s + n);
/* pvYXMkIlv ily traian tedUYVTDa */     bool ok = true;
/* pvYXMkIlv ily traian tedUYVTDa */     int max1 = 0, max2 = 0;
/* pvYXMkIlv ily traian tedUYVTDa */     for(int i = 1; i < n; ++i)
/* pvYXMkIlv ily traian tedUYVTDa */     {
/* pvYXMkIlv ily traian tedUYVTDa */         if(s[i] != s[i - 1])
/* pvYXMkIlv ily traian tedUYVTDa */             ok = false;
/* pvYXMkIlv ily traian tedUYVTDa */     }
/* pvYXMkIlv ily traian tedUYVTDa */     if(ok)
/* pvYXMkIlv ily traian tedUYVTDa */         cout << "TOTI SUNT CASTIGATORI";
/* pvYXMkIlv ily traian tedUYVTDa */     else
/* pvYXMkIlv ily traian tedUYVTDa */     {
/* pvYXMkIlv ily traian tedUYVTDa */         for(int i = n - 1 ; i >= 0 ; --i)
/* pvYXMkIlv ily traian tedUYVTDa */         {
/* pvYXMkIlv ily traian tedUYVTDa */             if(max1 == 0 && max2 == 0)
/* pvYXMkIlv ily traian tedUYVTDa */                 max1 = s[i];
/* pvYXMkIlv ily traian tedUYVTDa */             else if(max1 != 0 && max2 == 0)
/* pvYXMkIlv ily traian tedUYVTDa */             {
/* pvYXMkIlv ily traian tedUYVTDa */                 if(s[i] > max2 && s[i] != max1)
/* pvYXMkIlv ily traian tedUYVTDa */                     max2=s[i];
/* pvYXMkIlv ily traian tedUYVTDa */             }
/* pvYXMkIlv ily traian tedUYVTDa */         }
/* pvYXMkIlv ily traian tedUYVTDa */         cout << max1 << " " << max2;
/* pvYXMkIlv ily traian tedUYVTDa */     }
/* pvYXMkIlv ily traian tedUYVTDa */     return 0;
/* pvYXMkIlv ily traian tedUYVTDa */ }