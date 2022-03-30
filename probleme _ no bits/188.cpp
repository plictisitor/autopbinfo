/* bB5gSvyA8 ily traian RODJ5WXUf */ #include <algorithm>
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
/* bB5gSvyA8 ily traian RODJ5WXUf */ using namespace std;
/* bB5gSvyA8 ily traian RODJ5WXUf */ 
/* bB5gSvyA8 ily traian RODJ5WXUf */ ifstream cin("inlocuirecuvant.in");
/* bB5gSvyA8 ily traian RODJ5WXUf */ ofstream cout("inlocuirecuvant.out");
/* bB5gSvyA8 ily traian RODJ5WXUf */ 
/* bB5gSvyA8 ily traian RODJ5WXUf */ int main()
/* bB5gSvyA8 ily traian RODJ5WXUf */ {
/* bB5gSvyA8 ily traian RODJ5WXUf */     char a[100] , b[100];
/* bB5gSvyA8 ily traian RODJ5WXUf */     cin >> a >> b;
/* bB5gSvyA8 ily traian RODJ5WXUf */     char ch[100];
/* bB5gSvyA8 ily traian RODJ5WXUf */     while(cin >> ch)
/* bB5gSvyA8 ily traian RODJ5WXUf */     {
/* bB5gSvyA8 ily traian RODJ5WXUf */         int i = 0;
/* bB5gSvyA8 ily traian RODJ5WXUf */         bool ok=true;
/* bB5gSvyA8 ily traian RODJ5WXUf */         while(ch[i]!='\0')
/* bB5gSvyA8 ily traian RODJ5WXUf */         {
/* bB5gSvyA8 ily traian RODJ5WXUf */             if(ch[i]!=a[i])
/* bB5gSvyA8 ily traian RODJ5WXUf */                 ok=false;
/* bB5gSvyA8 ily traian RODJ5WXUf */             i++;    
/* bB5gSvyA8 ily traian RODJ5WXUf */         }
/* bB5gSvyA8 ily traian RODJ5WXUf */         if(ok)
/* bB5gSvyA8 ily traian RODJ5WXUf */             cout << b << ' ';
/* bB5gSvyA8 ily traian RODJ5WXUf */         else
/* bB5gSvyA8 ily traian RODJ5WXUf */             cout << ch << ' ';
/* bB5gSvyA8 ily traian RODJ5WXUf */     }
/* bB5gSvyA8 ily traian RODJ5WXUf */     return 0;    
/* bB5gSvyA8 ily traian RODJ5WXUf */ }