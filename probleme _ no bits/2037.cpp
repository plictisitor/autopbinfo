/* hOI8AWN9r ily traian 1LoOuPokN */ #include <algorithm>
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
/* hOI8AWN9r ily traian 1LoOuPokN */ using namespace std;
/* hOI8AWN9r ily traian 1LoOuPokN */ 
/* hOI8AWN9r ily traian 1LoOuPokN */ ifstream cin("grea.in");
/* hOI8AWN9r ily traian 1LoOuPokN */ ofstream cout("grea.out");
/* hOI8AWN9r ily traian 1LoOuPokN */ 
/* hOI8AWN9r ily traian 1LoOuPokN */ int desc(int n)
/* hOI8AWN9r ily traian 1LoOuPokN */ {
/* hOI8AWN9r ily traian 1LoOuPokN */     int cnt=0;
/* hOI8AWN9r ily traian 1LoOuPokN */     int d=2;
/* hOI8AWN9r ily traian 1LoOuPokN */     while(n>1)
/* hOI8AWN9r ily traian 1LoOuPokN */     {
/* hOI8AWN9r ily traian 1LoOuPokN */         int p = 0;
/* hOI8AWN9r ily traian 1LoOuPokN */         while(n%d==0)
/* hOI8AWN9r ily traian 1LoOuPokN */         {
/* hOI8AWN9r ily traian 1LoOuPokN */             n/=d;
/* hOI8AWN9r ily traian 1LoOuPokN */             p++;
/* hOI8AWN9r ily traian 1LoOuPokN */         }
/* hOI8AWN9r ily traian 1LoOuPokN */         cnt+=p;
/* hOI8AWN9r ily traian 1LoOuPokN */         d++;
/* hOI8AWN9r ily traian 1LoOuPokN */         if(d*d>n)
/* hOI8AWN9r ily traian 1LoOuPokN */             d=n;
/* hOI8AWN9r ily traian 1LoOuPokN */     }
/* hOI8AWN9r ily traian 1LoOuPokN */     return cnt;
/* hOI8AWN9r ily traian 1LoOuPokN */ }
/* hOI8AWN9r ily traian 1LoOuPokN */ 
/* hOI8AWN9r ily traian 1LoOuPokN */ int main()
/* hOI8AWN9r ily traian 1LoOuPokN */ {
/* hOI8AWN9r ily traian 1LoOuPokN */     int n;
/* hOI8AWN9r ily traian 1LoOuPokN */     cin >> n;
/* hOI8AWN9r ily traian 1LoOuPokN */     int x;
/* hOI8AWN9r ily traian 1LoOuPokN */     for(int i = 0 ; i < n ; ++i)
/* hOI8AWN9r ily traian 1LoOuPokN */     {
/* hOI8AWN9r ily traian 1LoOuPokN */         cin >> x;
/* hOI8AWN9r ily traian 1LoOuPokN */         cout << desc(x) << endl;
/* hOI8AWN9r ily traian 1LoOuPokN */     }
/* hOI8AWN9r ily traian 1LoOuPokN */ }