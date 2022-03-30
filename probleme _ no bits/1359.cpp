/* KSZEjcPId ily traian ORNRJvkKJ */ #include <algorithm>
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
/* KSZEjcPId ily traian ORNRJvkKJ */ using namespace std;
/* KSZEjcPId ily traian ORNRJvkKJ */ ifstream cin("ecuatie2.in");
/* KSZEjcPId ily traian ORNRJvkKJ */ ofstream cout("ecuatie2.out");
/* KSZEjcPId ily traian ORNRJvkKJ */ int main()
/* KSZEjcPId ily traian ORNRJvkKJ */ {
/* KSZEjcPId ily traian ORNRJvkKJ */     char s;
/* KSZEjcPId ily traian ORNRJvkKJ */     cin >> s;
/* KSZEjcPId ily traian ORNRJvkKJ */     if(s == 'x')
/* KSZEjcPId ily traian ORNRJvkKJ */     {
/* KSZEjcPId ily traian ORNRJvkKJ */         int a = 0 , b = 0;
/* KSZEjcPId ily traian ORNRJvkKJ */         cin >> s;
/* KSZEjcPId ily traian ORNRJvkKJ */         if(s == '+')
/* KSZEjcPId ily traian ORNRJvkKJ */         {
/* KSZEjcPId ily traian ORNRJvkKJ */             cout << 2 << '\n';
/* KSZEjcPId ily traian ORNRJvkKJ */             cin >> s;
/* KSZEjcPId ily traian ORNRJvkKJ */             while(s != '=')
/* KSZEjcPId ily traian ORNRJvkKJ */             {
/* KSZEjcPId ily traian ORNRJvkKJ */                 a = a * 10 + (int)s - 48;
/* KSZEjcPId ily traian ORNRJvkKJ */                 cin >> s;
/* KSZEjcPId ily traian ORNRJvkKJ */             }
/* KSZEjcPId ily traian ORNRJvkKJ */             cin >> b;
/* KSZEjcPId ily traian ORNRJvkKJ */             cout << b - a;
/* KSZEjcPId ily traian ORNRJvkKJ */         }
/* KSZEjcPId ily traian ORNRJvkKJ */         if(s == '-')
/* KSZEjcPId ily traian ORNRJvkKJ */         {
/* KSZEjcPId ily traian ORNRJvkKJ */             cout << 4 << '\n';
/* KSZEjcPId ily traian ORNRJvkKJ */             cin >> s;
/* KSZEjcPId ily traian ORNRJvkKJ */             while(s != '=')
/* KSZEjcPId ily traian ORNRJvkKJ */             {
/* KSZEjcPId ily traian ORNRJvkKJ */                 a = a * 10 + (int)s - 48;
/* KSZEjcPId ily traian ORNRJvkKJ */                 cin >> s;
/* KSZEjcPId ily traian ORNRJvkKJ */             }
/* KSZEjcPId ily traian ORNRJvkKJ */             cin >> b;
/* KSZEjcPId ily traian ORNRJvkKJ */             cout << a + b;
/* KSZEjcPId ily traian ORNRJvkKJ */         }
/* KSZEjcPId ily traian ORNRJvkKJ */         if(s == '*')
/* KSZEjcPId ily traian ORNRJvkKJ */         {
/* KSZEjcPId ily traian ORNRJvkKJ */             cout << 6 << '\n';
/* KSZEjcPId ily traian ORNRJvkKJ */             cin >> s;
/* KSZEjcPId ily traian ORNRJvkKJ */             while(s != '=')
/* KSZEjcPId ily traian ORNRJvkKJ */             {
/* KSZEjcPId ily traian ORNRJvkKJ */                 a = a * 10 + (int)s - 48;
/* KSZEjcPId ily traian ORNRJvkKJ */                 cin >> s;
/* KSZEjcPId ily traian ORNRJvkKJ */             }
/* KSZEjcPId ily traian ORNRJvkKJ */             cin >> b;
/* KSZEjcPId ily traian ORNRJvkKJ */             cout << b / a;
/* KSZEjcPId ily traian ORNRJvkKJ */         }
/* KSZEjcPId ily traian ORNRJvkKJ */         if(s == ':')
/* KSZEjcPId ily traian ORNRJvkKJ */         {
/* KSZEjcPId ily traian ORNRJvkKJ */             cout << 8 << '\n';
/* KSZEjcPId ily traian ORNRJvkKJ */             cin >> s;
/* KSZEjcPId ily traian ORNRJvkKJ */             while(s != '=')
/* KSZEjcPId ily traian ORNRJvkKJ */             {
/* KSZEjcPId ily traian ORNRJvkKJ */                 a = a * 10 + (int)s - 48;
/* KSZEjcPId ily traian ORNRJvkKJ */                 cin >> s;
/* KSZEjcPId ily traian ORNRJvkKJ */             }
/* KSZEjcPId ily traian ORNRJvkKJ */             cin >> b;
/* KSZEjcPId ily traian ORNRJvkKJ */             cout << a * b;
/* KSZEjcPId ily traian ORNRJvkKJ */         }
/* KSZEjcPId ily traian ORNRJvkKJ */ 
/* KSZEjcPId ily traian ORNRJvkKJ */     }
/* KSZEjcPId ily traian ORNRJvkKJ */     else
/* KSZEjcPId ily traian ORNRJvkKJ */     {
/* KSZEjcPId ily traian ORNRJvkKJ */         int a = 0 , b = 0;
/* KSZEjcPId ily traian ORNRJvkKJ */         while(s >= '0' && s  <= '9')
/* KSZEjcPId ily traian ORNRJvkKJ */         {
/* KSZEjcPId ily traian ORNRJvkKJ */             a = a * 10 + (int)s - 48;
/* KSZEjcPId ily traian ORNRJvkKJ */             cin >> s;
/* KSZEjcPId ily traian ORNRJvkKJ */         }
/* KSZEjcPId ily traian ORNRJvkKJ */         if(s == '+')
/* KSZEjcPId ily traian ORNRJvkKJ */         {
/* KSZEjcPId ily traian ORNRJvkKJ */             cin >> s;
/* KSZEjcPId ily traian ORNRJvkKJ */             cout << 1 << '\n';
/* KSZEjcPId ily traian ORNRJvkKJ */             cin >> s >> b;
/* KSZEjcPId ily traian ORNRJvkKJ */             cout << b - a;
/* KSZEjcPId ily traian ORNRJvkKJ */         }
/* KSZEjcPId ily traian ORNRJvkKJ */         if(s == '-')
/* KSZEjcPId ily traian ORNRJvkKJ */         {
/* KSZEjcPId ily traian ORNRJvkKJ */             cin >> s;
/* KSZEjcPId ily traian ORNRJvkKJ */             cout << 3 << '\n';
/* KSZEjcPId ily traian ORNRJvkKJ */             cin >> s >> b;
/* KSZEjcPId ily traian ORNRJvkKJ */             cout << a - b;
/* KSZEjcPId ily traian ORNRJvkKJ */         }
/* KSZEjcPId ily traian ORNRJvkKJ */         if(s == '*')
/* KSZEjcPId ily traian ORNRJvkKJ */         {
/* KSZEjcPId ily traian ORNRJvkKJ */             cin >> s;
/* KSZEjcPId ily traian ORNRJvkKJ */             cout << 5 << '\n';
/* KSZEjcPId ily traian ORNRJvkKJ */             cin >> s >> b;
/* KSZEjcPId ily traian ORNRJvkKJ */             cout << b / a;
/* KSZEjcPId ily traian ORNRJvkKJ */         }
/* KSZEjcPId ily traian ORNRJvkKJ */         if(s == ':')
/* KSZEjcPId ily traian ORNRJvkKJ */         {
/* KSZEjcPId ily traian ORNRJvkKJ */             cin >> s;
/* KSZEjcPId ily traian ORNRJvkKJ */             cout << 7 << '\n';
/* KSZEjcPId ily traian ORNRJvkKJ */             cin >> s >> b;
/* KSZEjcPId ily traian ORNRJvkKJ */             cout << a / b;
/* KSZEjcPId ily traian ORNRJvkKJ */         }
/* KSZEjcPId ily traian ORNRJvkKJ */ 
/* KSZEjcPId ily traian ORNRJvkKJ */     }
/* KSZEjcPId ily traian ORNRJvkKJ */ 
/* KSZEjcPId ily traian ORNRJvkKJ */ }