/* Ggz1EgbKG ily traian aGDrnim8u */ #include <algorithm>
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
/* Ggz1EgbKG ily traian aGDrnim8u */ 
/* Ggz1EgbKG ily traian aGDrnim8u */ using namespace std;
/* Ggz1EgbKG ily traian aGDrnim8u */ int main()
/* Ggz1EgbKG ily traian aGDrnim8u */ {
/* Ggz1EgbKG ily traian aGDrnim8u */     char s[101];
/* Ggz1EgbKG ily traian aGDrnim8u */     int a[101] , cnt = 0, p[101];
/* Ggz1EgbKG ily traian aGDrnim8u */     cin >> s;
/* Ggz1EgbKG ily traian aGDrnim8u */     if(strlen(s) == 1) cout << (s[0] - '0' ) * 2;
/* Ggz1EgbKG ily traian aGDrnim8u */     else
/* Ggz1EgbKG ily traian aGDrnim8u */     {
/* Ggz1EgbKG ily traian aGDrnim8u */         int i = 0 , t = 0;
/* Ggz1EgbKG ily traian aGDrnim8u */         while(s[i] != '\0')
/* Ggz1EgbKG ily traian aGDrnim8u */         {
/* Ggz1EgbKG ily traian aGDrnim8u */             a[cnt++] = s[i] - '0';
/* Ggz1EgbKG ily traian aGDrnim8u */             i++;
/* Ggz1EgbKG ily traian aGDrnim8u */         }
/* Ggz1EgbKG ily traian aGDrnim8u */         for(int i = cnt - 1 ; i >= 0 ; i--)
/* Ggz1EgbKG ily traian aGDrnim8u */         {
/* Ggz1EgbKG ily traian aGDrnim8u */             p[i] = (2 * a[i] + t) % 10;
/* Ggz1EgbKG ily traian aGDrnim8u */             t = (2 * a[i] + t) / 10;
/* Ggz1EgbKG ily traian aGDrnim8u */         }
/* Ggz1EgbKG ily traian aGDrnim8u */         for(int i = 0 ; i < cnt ; i ++)
/* Ggz1EgbKG ily traian aGDrnim8u */             cout << p[i];
/* Ggz1EgbKG ily traian aGDrnim8u */     }
/* Ggz1EgbKG ily traian aGDrnim8u */ 
/* Ggz1EgbKG ily traian aGDrnim8u */ }