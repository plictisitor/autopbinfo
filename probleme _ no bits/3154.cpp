/* u1Vd0bohZ ily traian D3wQs5BWv */ #include <algorithm>
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
/* u1Vd0bohZ ily traian D3wQs5BWv */ 
/* u1Vd0bohZ ily traian D3wQs5BWv */ using namespace std;
/* u1Vd0bohZ ily traian D3wQs5BWv */ 
/* u1Vd0bohZ ily traian D3wQs5BWv */ int n , x[30] , p[30] , cnt;
/* u1Vd0bohZ ily traian D3wQs5BWv */ char cuv[30] , s[30];
/* u1Vd0bohZ ily traian D3wQs5BWv */ 
/* u1Vd0bohZ ily traian D3wQs5BWv */ int voc(char a)
/* u1Vd0bohZ ily traian D3wQs5BWv */ {
/* u1Vd0bohZ ily traian D3wQs5BWv */     return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
/* u1Vd0bohZ ily traian D3wQs5BWv */ }
/* u1Vd0bohZ ily traian D3wQs5BWv */ 
/* u1Vd0bohZ ily traian D3wQs5BWv */ int afisare()
/* u1Vd0bohZ ily traian D3wQs5BWv */ {
/* u1Vd0bohZ ily traian D3wQs5BWv */     int pp = 1;
/* u1Vd0bohZ ily traian D3wQs5BWv */     for(int i = 1 ; i <= n ; i++)
/* u1Vd0bohZ ily traian D3wQs5BWv */         if(voc(cuv[i - 1])) cout << cuv[i - 1];
/* u1Vd0bohZ ily traian D3wQs5BWv */         else cout << s[x[pp++]];
/* u1Vd0bohZ ily traian D3wQs5BWv */         cout << '\n';
/* u1Vd0bohZ ily traian D3wQs5BWv */ }
/* u1Vd0bohZ ily traian D3wQs5BWv */ 
/* u1Vd0bohZ ily traian D3wQs5BWv */ void back(int k)
/* u1Vd0bohZ ily traian D3wQs5BWv */ {
/* u1Vd0bohZ ily traian D3wQs5BWv */     for(int i = 1 ; i <= cnt ; i++)
/* u1Vd0bohZ ily traian D3wQs5BWv */         if(!p[i])
/* u1Vd0bohZ ily traian D3wQs5BWv */         {
/* u1Vd0bohZ ily traian D3wQs5BWv */             x[k] = i;
/* u1Vd0bohZ ily traian D3wQs5BWv */             p[i] = 1;
/* u1Vd0bohZ ily traian D3wQs5BWv */             if(k == cnt) afisare();
/* u1Vd0bohZ ily traian D3wQs5BWv */             else back(k + 1);
/* u1Vd0bohZ ily traian D3wQs5BWv */             p[i] = 0;
/* u1Vd0bohZ ily traian D3wQs5BWv */         }
/* u1Vd0bohZ ily traian D3wQs5BWv */ }
/* u1Vd0bohZ ily traian D3wQs5BWv */ 
/* u1Vd0bohZ ily traian D3wQs5BWv */ int main()
/* u1Vd0bohZ ily traian D3wQs5BWv */ {
/* u1Vd0bohZ ily traian D3wQs5BWv */     cin >> cuv;
/* u1Vd0bohZ ily traian D3wQs5BWv */     n = strlen(cuv);
/* u1Vd0bohZ ily traian D3wQs5BWv */     for(int i = 0 ; i < n ; i++)
/* u1Vd0bohZ ily traian D3wQs5BWv */         if(!voc(cuv[i])) s[++cnt] = cuv[i];
/* u1Vd0bohZ ily traian D3wQs5BWv */ 
/* u1Vd0bohZ ily traian D3wQs5BWv */     for(int i = 1 ; i <= cnt ; i++)
/* u1Vd0bohZ ily traian D3wQs5BWv */         for(int j = i + 1 ; j <= cnt ; j++)
/* u1Vd0bohZ ily traian D3wQs5BWv */             if(s[i] > s[j]) swap(s[i] , s[j]);
/* u1Vd0bohZ ily traian D3wQs5BWv */ 
/* u1Vd0bohZ ily traian D3wQs5BWv */     back(1);
/* u1Vd0bohZ ily traian D3wQs5BWv */ 
/* u1Vd0bohZ ily traian D3wQs5BWv */ }