/* uclxyjkTz ily traian rTAPKBG5u */ #include <algorithm>
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
/* uclxyjkTz ily traian rTAPKBG5u */ 
/* uclxyjkTz ily traian rTAPKBG5u */ 
/* uclxyjkTz ily traian rTAPKBG5u */ 
/* uclxyjkTz ily traian rTAPKBG5u */ 
/* uclxyjkTz ily traian rTAPKBG5u */ using namespace std;
/* uclxyjkTz ily traian rTAPKBG5u */ 
/* uclxyjkTz ily traian rTAPKBG5u */ ifstream f("dir.in");
/* uclxyjkTz ily traian rTAPKBG5u */ ofstream g("dir.out");
/* uclxyjkTz ily traian rTAPKBG5u */ 
/* uclxyjkTz ily traian rTAPKBG5u */ char sir[1605], st[256];
/* uclxyjkTz ily traian rTAPKBG5u */ char a[105][256];
/* uclxyjkTz ily traian rTAPKBG5u */ 
/* uclxyjkTz ily traian rTAPKBG5u */ int i, j, cnt, k, l;
/* uclxyjkTz ily traian rTAPKBG5u */ 
/* uclxyjkTz ily traian rTAPKBG5u */ int main()
/* uclxyjkTz ily traian rTAPKBG5u */ {
/* uclxyjkTz ily traian rTAPKBG5u */     if (f.is_open())
/* uclxyjkTz ily traian rTAPKBG5u */     {
/* uclxyjkTz ily traian rTAPKBG5u */         f >> sir;
/* uclxyjkTz ily traian rTAPKBG5u */ 
/* uclxyjkTz ily traian rTAPKBG5u */         for (i = 0; sir[i] != 0; i++)
/* uclxyjkTz ily traian rTAPKBG5u */         {
/* uclxyjkTz ily traian rTAPKBG5u */             if (islower(sir[i]))
/* uclxyjkTz ily traian rTAPKBG5u */             {
/* uclxyjkTz ily traian rTAPKBG5u */                 cnt++;
/* uclxyjkTz ily traian rTAPKBG5u */                 while (islower(sir[i]) || isdigit(sir[i]))
/* uclxyjkTz ily traian rTAPKBG5u */                     i++;
/* uclxyjkTz ily traian rTAPKBG5u */             }
/* uclxyjkTz ily traian rTAPKBG5u */         }
/* uclxyjkTz ily traian rTAPKBG5u */ 
/* uclxyjkTz ily traian rTAPKBG5u */         g << cnt << "\n";
/* uclxyjkTz ily traian rTAPKBG5u */ 
/* uclxyjkTz ily traian rTAPKBG5u */         for (i = 0; sir[i] != 0; i++)
/* uclxyjkTz ily traian rTAPKBG5u */         {
/* uclxyjkTz ily traian rTAPKBG5u */             if (isdigit(sir[i]) || (sir[i] >= 'A'&&sir[i] <= 'z'))
/* uclxyjkTz ily traian rTAPKBG5u */             {
/* uclxyjkTz ily traian rTAPKBG5u */                 st[k++] = sir[i];
/* uclxyjkTz ily traian rTAPKBG5u */                 continue;
/* uclxyjkTz ily traian rTAPKBG5u */             }
/* uclxyjkTz ily traian rTAPKBG5u */ 
/* uclxyjkTz ily traian rTAPKBG5u */             if (sir[i] == ',' && ((st[k - 1] >= 'a'&&st[k - 1] <= 'z') || (st[k - 1] >= '0'&&st[k - 1] <= '9')))
/* uclxyjkTz ily traian rTAPKBG5u */             {
/* uclxyjkTz ily traian rTAPKBG5u */                 st[k] = '\0';
/* uclxyjkTz ily traian rTAPKBG5u */                 l++;
/* uclxyjkTz ily traian rTAPKBG5u */                 strcpy(a[l], st);
/* uclxyjkTz ily traian rTAPKBG5u */                 while (st[k] != '\\')
/* uclxyjkTz ily traian rTAPKBG5u */                     k--;
/* uclxyjkTz ily traian rTAPKBG5u */                 k++;
/* uclxyjkTz ily traian rTAPKBG5u */                 continue;
/* uclxyjkTz ily traian rTAPKBG5u */             }
/* uclxyjkTz ily traian rTAPKBG5u */ 
/* uclxyjkTz ily traian rTAPKBG5u */             if (sir[i] == '(')
/* uclxyjkTz ily traian rTAPKBG5u */             {
/* uclxyjkTz ily traian rTAPKBG5u */                 st[k++] = '\\';
/* uclxyjkTz ily traian rTAPKBG5u */                 continue;
/* uclxyjkTz ily traian rTAPKBG5u */             }
/* uclxyjkTz ily traian rTAPKBG5u */ 
/* uclxyjkTz ily traian rTAPKBG5u */             if (sir[i] == ')') {
/* uclxyjkTz ily traian rTAPKBG5u */                 if ((st[k - 1] >= 'a'&&st[k - 1] <= 'z') || (st[k - 1] >= '0'&&st[k - 1] <= '9'))
/* uclxyjkTz ily traian rTAPKBG5u */                 {
/* uclxyjkTz ily traian rTAPKBG5u */                     st[k] = '\0';
/* uclxyjkTz ily traian rTAPKBG5u */                     l++;
/* uclxyjkTz ily traian rTAPKBG5u */                     strcpy(a[l], st);
/* uclxyjkTz ily traian rTAPKBG5u */                     while (st[k] != '\\')
/* uclxyjkTz ily traian rTAPKBG5u */                         k--;
/* uclxyjkTz ily traian rTAPKBG5u */                     k--;
/* uclxyjkTz ily traian rTAPKBG5u */                     while (st[k] != '\\')
/* uclxyjkTz ily traian rTAPKBG5u */                         k--;
/* uclxyjkTz ily traian rTAPKBG5u */                     k++;
/* uclxyjkTz ily traian rTAPKBG5u */                 }
/* uclxyjkTz ily traian rTAPKBG5u */ 
/* uclxyjkTz ily traian rTAPKBG5u */                 else
/* uclxyjkTz ily traian rTAPKBG5u */                 {
/* uclxyjkTz ily traian rTAPKBG5u */                     if (st[k - 1] == '\\')
/* uclxyjkTz ily traian rTAPKBG5u */                     {
/* uclxyjkTz ily traian rTAPKBG5u */                         k -= 2;
/* uclxyjkTz ily traian rTAPKBG5u */                         while (st[k] != '\\')
/* uclxyjkTz ily traian rTAPKBG5u */                             k--;
/* uclxyjkTz ily traian rTAPKBG5u */                         k++;
/* uclxyjkTz ily traian rTAPKBG5u */                     }
/* uclxyjkTz ily traian rTAPKBG5u */                 }
/* uclxyjkTz ily traian rTAPKBG5u */             }
/* uclxyjkTz ily traian rTAPKBG5u */         }
/* uclxyjkTz ily traian rTAPKBG5u */ 
/* uclxyjkTz ily traian rTAPKBG5u */         for (i = 1; i < l; i++) {
/* uclxyjkTz ily traian rTAPKBG5u */             for (j = i + 1; j <= l; j++)
/* uclxyjkTz ily traian rTAPKBG5u */             {
/* uclxyjkTz ily traian rTAPKBG5u */                 if (strcmp(a[i], a[j]) > 0)
/* uclxyjkTz ily traian rTAPKBG5u */                 {
/* uclxyjkTz ily traian rTAPKBG5u */                     swap(a[i], a[j]);
/* uclxyjkTz ily traian rTAPKBG5u */                 }
/* uclxyjkTz ily traian rTAPKBG5u */             }
/* uclxyjkTz ily traian rTAPKBG5u */         }
/* uclxyjkTz ily traian rTAPKBG5u */ 
/* uclxyjkTz ily traian rTAPKBG5u */         for (i = 1; i <= l; i++) {
/* uclxyjkTz ily traian rTAPKBG5u */             g << a[i] << "\n";
/* uclxyjkTz ily traian rTAPKBG5u */         }
/* uclxyjkTz ily traian rTAPKBG5u */     }
/* uclxyjkTz ily traian rTAPKBG5u */     return 0;
/* uclxyjkTz ily traian rTAPKBG5u */ }