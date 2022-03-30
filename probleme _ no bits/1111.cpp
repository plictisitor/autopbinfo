/* Bs5WmoO8s ily traian WZo9xQsvU */ #include <algorithm>
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
/* Bs5WmoO8s ily traian WZo9xQsvU */ using namespace std;
/* Bs5WmoO8s ily traian WZo9xQsvU */ 
/* Bs5WmoO8s ily traian WZo9xQsvU */ ifstream cin("zimeria.in");
/* Bs5WmoO8s ily traian WZo9xQsvU */ ofstream cout("zimeria.out");
/* Bs5WmoO8s ily traian WZo9xQsvU */ 
/* Bs5WmoO8s ily traian WZo9xQsvU */ int f[13][13][13][13][13];
/* Bs5WmoO8s ily traian WZo9xQsvU */ char s[13];
/* Bs5WmoO8s ily traian WZo9xQsvU */ 
/* Bs5WmoO8s ily traian WZo9xQsvU */ int poz(char ch)
/* Bs5WmoO8s ily traian WZo9xQsvU */ {
/* Bs5WmoO8s ily traian WZo9xQsvU */     int i = 0;
/* Bs5WmoO8s ily traian WZo9xQsvU */     while(s[i]!='\0')
/* Bs5WmoO8s ily traian WZo9xQsvU */     {
/* Bs5WmoO8s ily traian WZo9xQsvU */         if(s[i]==ch)
/* Bs5WmoO8s ily traian WZo9xQsvU */             return i;
/* Bs5WmoO8s ily traian WZo9xQsvU */         i++;
/* Bs5WmoO8s ily traian WZo9xQsvU */     }
/* Bs5WmoO8s ily traian WZo9xQsvU */ }
/* Bs5WmoO8s ily traian WZo9xQsvU */ 
/* Bs5WmoO8s ily traian WZo9xQsvU */ int main()
/* Bs5WmoO8s ily traian WZo9xQsvU */ {
/* Bs5WmoO8s ily traian WZo9xQsvU */     int tr , q;
/* Bs5WmoO8s ily traian WZo9xQsvU */     cin >> tr >> q;
/* Bs5WmoO8s ily traian WZo9xQsvU */     cin >> s;
/* Bs5WmoO8s ily traian WZo9xQsvU */     char a , b , c , d , e;
/* Bs5WmoO8s ily traian WZo9xQsvU */     while(cin >> a)
/* Bs5WmoO8s ily traian WZo9xQsvU */     {
/* Bs5WmoO8s ily traian WZo9xQsvU */         cin >> b >> c >> d >> e;
/* Bs5WmoO8s ily traian WZo9xQsvU */         f[poz(a)][poz(b)][poz(c)][poz(d)][poz(e)]++;
/* Bs5WmoO8s ily traian WZo9xQsvU */     }
/* Bs5WmoO8s ily traian WZo9xQsvU */     if(tr == 1)
/* Bs5WmoO8s ily traian WZo9xQsvU */     {
/* Bs5WmoO8s ily traian WZo9xQsvU */         int cnt = 0;
/* Bs5WmoO8s ily traian WZo9xQsvU */         for(int i = 0 ; i <= 11 ; ++i)
/* Bs5WmoO8s ily traian WZo9xQsvU */         for(int j = 0 ; j <= 11 ; ++j)
/* Bs5WmoO8s ily traian WZo9xQsvU */             for(int k = 0 ; k <= 11 ; ++k)
/* Bs5WmoO8s ily traian WZo9xQsvU */                 for(int t = 0 ; t <= 11 ; ++t)
/* Bs5WmoO8s ily traian WZo9xQsvU */                     for(int w = 0 ; w <= 11 ; ++w)
/* Bs5WmoO8s ily traian WZo9xQsvU */                     if(f[i][j][k][t][w])
/* Bs5WmoO8s ily traian WZo9xQsvU */                         cnt++;
/* Bs5WmoO8s ily traian WZo9xQsvU */         cout << cnt;
/* Bs5WmoO8s ily traian WZo9xQsvU */         return 0;
/* Bs5WmoO8s ily traian WZo9xQsvU */     }
/* Bs5WmoO8s ily traian WZo9xQsvU */     for(int i = 0 ; i <= 11 ; ++i)
/* Bs5WmoO8s ily traian WZo9xQsvU */         for(int j = 0 ; j <= 11 ; ++j)
/* Bs5WmoO8s ily traian WZo9xQsvU */             for(int k = 0 ; k <= 11 ; ++k)
/* Bs5WmoO8s ily traian WZo9xQsvU */                 for(int t = 0 ; t <= 11 ; ++t)
/* Bs5WmoO8s ily traian WZo9xQsvU */                     for(int w = 0 ; w <= 11 ; ++w)
/* Bs5WmoO8s ily traian WZo9xQsvU */                     if(f[i][j][k][t][w])
/* Bs5WmoO8s ily traian WZo9xQsvU */                         for(int g = 0 ; g < f[i][j][k][t][w] ; ++g)
/* Bs5WmoO8s ily traian WZo9xQsvU */                             cout << s[i] << s[j] << s[k] << s[t] << s[w] << '\n';
/* Bs5WmoO8s ily traian WZo9xQsvU */     return 0;
/* Bs5WmoO8s ily traian WZo9xQsvU */ }