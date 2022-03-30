/* tipm20VP0 ily traian XHiL1ifib */ #include <algorithm>
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
/* tipm20VP0 ily traian XHiL1ifib */ 
/* tipm20VP0 ily traian XHiL1ifib */ using namespace std;
/* tipm20VP0 ily traian XHiL1ifib */ #define mod 1234567
/* tipm20VP0 ily traian XHiL1ifib */ ifstream cin("scrabble.in");
/* tipm20VP0 ily traian XHiL1ifib */ ofstream cout("scrabble.out");
/* tipm20VP0 ily traian XHiL1ifib */ 
/* tipm20VP0 ily traian XHiL1ifib */ int n , nv , nc;
/* tipm20VP0 ily traian XHiL1ifib */ char s[3] , v[20][3] , c[20][3] , voc[] = "AEIOU";
/* tipm20VP0 ily traian XHiL1ifib */ 
/* tipm20VP0 ily traian XHiL1ifib */ void ord(char a[][3] , int n)
/* tipm20VP0 ily traian XHiL1ifib */ {
/* tipm20VP0 ily traian XHiL1ifib */     for(int i = 1 ; i <= n ; i++)
/* tipm20VP0 ily traian XHiL1ifib */         for(int j = i + 1 ; j <= n ; j++)
/* tipm20VP0 ily traian XHiL1ifib */             if(strcmp(a[i] , a[j]) < 0)
/* tipm20VP0 ily traian XHiL1ifib */                 {
/* tipm20VP0 ily traian XHiL1ifib */                     char aux[3];
/* tipm20VP0 ily traian XHiL1ifib */                     strcpy(aux , a[i]);
/* tipm20VP0 ily traian XHiL1ifib */                     strcpy(a[i] , a[j]);
/* tipm20VP0 ily traian XHiL1ifib */                     strcpy(a[j] , aux);
/* tipm20VP0 ily traian XHiL1ifib */                 }
/* tipm20VP0 ily traian XHiL1ifib */ }
/* tipm20VP0 ily traian XHiL1ifib */ 
/* tipm20VP0 ily traian XHiL1ifib */ int main()
/* tipm20VP0 ily traian XHiL1ifib */ {
/* tipm20VP0 ily traian XHiL1ifib */     cin >> n;
/* tipm20VP0 ily traian XHiL1ifib */     for(int i = 1 ; i <= n ; i++)
/* tipm20VP0 ily traian XHiL1ifib */     {
/* tipm20VP0 ily traian XHiL1ifib */         cin >> s;
/* tipm20VP0 ily traian XHiL1ifib */         if(strchr(voc , s[0])) strcpy(v[++nv] , s);
/* tipm20VP0 ily traian XHiL1ifib */         else strcpy(c[++nc] , s);
/* tipm20VP0 ily traian XHiL1ifib */     }
/* tipm20VP0 ily traian XHiL1ifib */     ord(v , nv);
/* tipm20VP0 ily traian XHiL1ifib */     ord(c , nc);
/* tipm20VP0 ily traian XHiL1ifib */     if(nc < nv)
/* tipm20VP0 ily traian XHiL1ifib */         for(int i = 1 ; i <= nv ; i++) cout << v[i];
/* tipm20VP0 ily traian XHiL1ifib */     else if(nv < nc)
/* tipm20VP0 ily traian XHiL1ifib */         for(int i = 1 ; i <= nc ; i++) cout << c[i];
/* tipm20VP0 ily traian XHiL1ifib */     else if(c[1][0] < v[1][0])
/* tipm20VP0 ily traian XHiL1ifib */         for(int i = 1 ; i <=nv ; i++) cout << v[i];
/* tipm20VP0 ily traian XHiL1ifib */     else
/* tipm20VP0 ily traian XHiL1ifib */         for(int i = 1 ; i <= nc ; i++) cout << c[i];
/* tipm20VP0 ily traian XHiL1ifib */ }