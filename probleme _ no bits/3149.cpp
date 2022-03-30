/* 5uFbKbHy6 ily traian LDWRZvRug */ #include <algorithm>
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
/* 5uFbKbHy6 ily traian LDWRZvRug */ 
/* 5uFbKbHy6 ily traian LDWRZvRug */ using namespace std;
/* 5uFbKbHy6 ily traian LDWRZvRug */ 
/* 5uFbKbHy6 ily traian LDWRZvRug */ int n , x[30] , p[30] , cnt;
/* 5uFbKbHy6 ily traian LDWRZvRug */ char cuv[30] , s[30];
/* 5uFbKbHy6 ily traian LDWRZvRug */ 
/* 5uFbKbHy6 ily traian LDWRZvRug */ int voc(char a)
/* 5uFbKbHy6 ily traian LDWRZvRug */ {
/* 5uFbKbHy6 ily traian LDWRZvRug */     return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
/* 5uFbKbHy6 ily traian LDWRZvRug */ }
/* 5uFbKbHy6 ily traian LDWRZvRug */ 
/* 5uFbKbHy6 ily traian LDWRZvRug */ int afisare()
/* 5uFbKbHy6 ily traian LDWRZvRug */ {
/* 5uFbKbHy6 ily traian LDWRZvRug */     int pp = 1;
/* 5uFbKbHy6 ily traian LDWRZvRug */     for(int i = 1 ; i <= n ; i++)
/* 5uFbKbHy6 ily traian LDWRZvRug */         cout << s[x[i] - 1];
/* 5uFbKbHy6 ily traian LDWRZvRug */     cout << '\n';
/* 5uFbKbHy6 ily traian LDWRZvRug */ }
/* 5uFbKbHy6 ily traian LDWRZvRug */ 
/* 5uFbKbHy6 ily traian LDWRZvRug */ void back(int k)
/* 5uFbKbHy6 ily traian LDWRZvRug */ {
/* 5uFbKbHy6 ily traian LDWRZvRug */     for(int i = 1 ; i <= n ; i++)
/* 5uFbKbHy6 ily traian LDWRZvRug */         if(!p[i])
/* 5uFbKbHy6 ily traian LDWRZvRug */         {
/* 5uFbKbHy6 ily traian LDWRZvRug */             x[k] = i;
/* 5uFbKbHy6 ily traian LDWRZvRug */             p[i] = 1;
/* 5uFbKbHy6 ily traian LDWRZvRug */             if(voc(s[x[1] - 1]))
/* 5uFbKbHy6 ily traian LDWRZvRug */                 if(k == n)
/* 5uFbKbHy6 ily traian LDWRZvRug */                  {
/* 5uFbKbHy6 ily traian LDWRZvRug */                     if(voc(s[x[k] - 1]))afisare();
/* 5uFbKbHy6 ily traian LDWRZvRug */                     }
/* 5uFbKbHy6 ily traian LDWRZvRug */             else back(k + 1);
/* 5uFbKbHy6 ily traian LDWRZvRug */             p[i] = 0;
/* 5uFbKbHy6 ily traian LDWRZvRug */         }
/* 5uFbKbHy6 ily traian LDWRZvRug */ }
/* 5uFbKbHy6 ily traian LDWRZvRug */ 
/* 5uFbKbHy6 ily traian LDWRZvRug */ int main()
/* 5uFbKbHy6 ily traian LDWRZvRug */ {
/* 5uFbKbHy6 ily traian LDWRZvRug */     cin >> s;
/* 5uFbKbHy6 ily traian LDWRZvRug */     n = strlen(s);
/* 5uFbKbHy6 ily traian LDWRZvRug */ 
/* 5uFbKbHy6 ily traian LDWRZvRug */     for(int i = 0 ; i < n ; i++)
/* 5uFbKbHy6 ily traian LDWRZvRug */         for(int j = i + 1 ; j < n ; j++)
/* 5uFbKbHy6 ily traian LDWRZvRug */             if(s[i] > s[j]) swap(s[i] , s[j]);
/* 5uFbKbHy6 ily traian LDWRZvRug */ 
/* 5uFbKbHy6 ily traian LDWRZvRug */     back(1);
/* 5uFbKbHy6 ily traian LDWRZvRug */ 
/* 5uFbKbHy6 ily traian LDWRZvRug */ }