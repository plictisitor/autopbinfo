/* uZjVJukQh ily traian WhQsfbu9f */ #include <algorithm>
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
/* uZjVJukQh ily traian WhQsfbu9f */ using namespace std;
/* uZjVJukQh ily traian WhQsfbu9f */ 
/* uZjVJukQh ily traian WhQsfbu9f */ ifstream cin("catsfood.in");
/* uZjVJukQh ily traian WhQsfbu9f */ ofstream cout("catsfood.out");
/* uZjVJukQh ily traian WhQsfbu9f */ 
/* uZjVJukQh ily traian WhQsfbu9f */ int a , b , c , n , x , cnt , rez;
/* uZjVJukQh ily traian WhQsfbu9f */ 
/* uZjVJukQh ily traian WhQsfbu9f */ int main()
/* uZjVJukQh ily traian WhQsfbu9f */ {
/* uZjVJukQh ily traian WhQsfbu9f */     cin >> a >> b >> c;
/* uZjVJukQh ily traian WhQsfbu9f */     int a1 = a * 100 + b * 10 + c;
/* uZjVJukQh ily traian WhQsfbu9f */     int a2 = a * 100 + c * 10 + b;
/* uZjVJukQh ily traian WhQsfbu9f */ 
/* uZjVJukQh ily traian WhQsfbu9f */     int b1 = b * 100 + a * 10 + c;
/* uZjVJukQh ily traian WhQsfbu9f */     int b2 = b * 100 + c * 10 + a;
/* uZjVJukQh ily traian WhQsfbu9f */ 
/* uZjVJukQh ily traian WhQsfbu9f */     int c1 = c * 100 + a * 10 + b;
/* uZjVJukQh ily traian WhQsfbu9f */     int c2 = c * 100 + b * 10 + a;
/* uZjVJukQh ily traian WhQsfbu9f */ 
/* uZjVJukQh ily traian WhQsfbu9f */     cin >> n;
/* uZjVJukQh ily traian WhQsfbu9f */     for(int i = 1 ; i <= n ; i++)
/* uZjVJukQh ily traian WhQsfbu9f */     {
/* uZjVJukQh ily traian WhQsfbu9f */         cin >> x;
/* uZjVJukQh ily traian WhQsfbu9f */         if(x == a1 || x == a2 || x == b1 || x == b2 && x == c1 || x == c2) rez++;
/* uZjVJukQh ily traian WhQsfbu9f */         int ok = 0 , aux = x;
/* uZjVJukQh ily traian WhQsfbu9f */         while(x)
/* uZjVJukQh ily traian WhQsfbu9f */         {
/* uZjVJukQh ily traian WhQsfbu9f */             if(x % 10 == a || x % 10 == b || x % 10 == c) ok++;
/* uZjVJukQh ily traian WhQsfbu9f */             x /= 10;
/* uZjVJukQh ily traian WhQsfbu9f */         }
/* uZjVJukQh ily traian WhQsfbu9f */         if(ok > 0) cnt++;
/* uZjVJukQh ily traian WhQsfbu9f */     }
/* uZjVJukQh ily traian WhQsfbu9f */     cout << cnt << '\n';
/* uZjVJukQh ily traian WhQsfbu9f */     if(rez > 0) cout << "DA";
/* uZjVJukQh ily traian WhQsfbu9f */     else cout << "NU";
/* uZjVJukQh ily traian WhQsfbu9f */ }