/* YVxvs2Tow ily traian rBfIAaasR */ #include <algorithm>
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
/* YVxvs2Tow ily traian rBfIAaasR */ 
/* YVxvs2Tow ily traian rBfIAaasR */ using namespace std;
/* YVxvs2Tow ily traian rBfIAaasR */ 
/* YVxvs2Tow ily traian rBfIAaasR */ int n , m , x[30] , p[30] , cnt;
/* YVxvs2Tow ily traian rBfIAaasR */ char cuv[30] , s[30];
/* YVxvs2Tow ily traian rBfIAaasR */ 
/* YVxvs2Tow ily traian rBfIAaasR */ int voc(char s)
/* YVxvs2Tow ily traian rBfIAaasR */ {
/* YVxvs2Tow ily traian rBfIAaasR */     if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u') return 1;
/* YVxvs2Tow ily traian rBfIAaasR */     else return 0;
/* YVxvs2Tow ily traian rBfIAaasR */ }
/* YVxvs2Tow ily traian rBfIAaasR */ 
/* YVxvs2Tow ily traian rBfIAaasR */ int afisare()
/* YVxvs2Tow ily traian rBfIAaasR */ {
/* YVxvs2Tow ily traian rBfIAaasR */     int pp = 1;
/* YVxvs2Tow ily traian rBfIAaasR */     for(int i = 1 ; i <= n ; i++)
/* YVxvs2Tow ily traian rBfIAaasR */         if(!voc(cuv[i - 1])) cout << cuv[i - 1];
/* YVxvs2Tow ily traian rBfIAaasR */         else cout << s[x[pp]] , pp++;
/* YVxvs2Tow ily traian rBfIAaasR */     cout << '\n';
/* YVxvs2Tow ily traian rBfIAaasR */ }
/* YVxvs2Tow ily traian rBfIAaasR */ 
/* YVxvs2Tow ily traian rBfIAaasR */ 
/* YVxvs2Tow ily traian rBfIAaasR */ 
/* YVxvs2Tow ily traian rBfIAaasR */ void back(int k)
/* YVxvs2Tow ily traian rBfIAaasR */ {
/* YVxvs2Tow ily traian rBfIAaasR */     for(int i = 1 ; i <= cnt ; i++)
/* YVxvs2Tow ily traian rBfIAaasR */         if(!p[i])
/* YVxvs2Tow ily traian rBfIAaasR */         {
/* YVxvs2Tow ily traian rBfIAaasR */             x[k] = i;
/* YVxvs2Tow ily traian rBfIAaasR */             p[i] = 1;
/* YVxvs2Tow ily traian rBfIAaasR */             if(k == cnt) afisare();
/* YVxvs2Tow ily traian rBfIAaasR */             else back(k + 1);
/* YVxvs2Tow ily traian rBfIAaasR */             p[i] = 0;
/* YVxvs2Tow ily traian rBfIAaasR */         }
/* YVxvs2Tow ily traian rBfIAaasR */ }
/* YVxvs2Tow ily traian rBfIAaasR */ 
/* YVxvs2Tow ily traian rBfIAaasR */ int main()
/* YVxvs2Tow ily traian rBfIAaasR */ {
/* YVxvs2Tow ily traian rBfIAaasR */     cin >> cuv;
/* YVxvs2Tow ily traian rBfIAaasR */     n = strlen(cuv);
/* YVxvs2Tow ily traian rBfIAaasR */     for(int i = 0 ; i < n ; i++)
/* YVxvs2Tow ily traian rBfIAaasR */         if(voc(cuv[i])) s[++cnt] = cuv[i];
/* YVxvs2Tow ily traian rBfIAaasR */ 
/* YVxvs2Tow ily traian rBfIAaasR */     for(int i = 1 ; i <= cnt ; i++)
/* YVxvs2Tow ily traian rBfIAaasR */         for(int j = i + 1 ; j <= cnt ; j++)
/* YVxvs2Tow ily traian rBfIAaasR */             if(s[i] > s[j]) swap(s[i] , s[j]);
/* YVxvs2Tow ily traian rBfIAaasR */     back(1);
/* YVxvs2Tow ily traian rBfIAaasR */ }