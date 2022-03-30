/* kIOkNYBaD ily traian gS5OJMpIU */ #include <algorithm>
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
/* kIOkNYBaD ily traian gS5OJMpIU */ using namespace std;
/* kIOkNYBaD ily traian gS5OJMpIU */ 
/* kIOkNYBaD ily traian gS5OJMpIU */ ifstream cin("maxim.in");
/* kIOkNYBaD ily traian gS5OJMpIU */ ofstream cout("maxim.out");
/* kIOkNYBaD ily traian gS5OJMpIU */ 
/* kIOkNYBaD ily traian gS5OJMpIU */ int f[10] , b[10] , cer , n , m , c , x;
/* kIOkNYBaD ily traian gS5OJMpIU */ int a[500001];
/* kIOkNYBaD ily traian gS5OJMpIU */ 
/* kIOkNYBaD ily traian gS5OJMpIU */ int maimare(int f[] , int b[])
/* kIOkNYBaD ily traian gS5OJMpIU */ {
/* kIOkNYBaD ily traian gS5OJMpIU */     for(int i = 9 ; i >= 0 ; i--)
/* kIOkNYBaD ily traian gS5OJMpIU */         if(f[i] > b[i]) return 1;
/* kIOkNYBaD ily traian gS5OJMpIU */         else if(f[i] < b[i]) return 0;
/* kIOkNYBaD ily traian gS5OJMpIU */     return 1;
/* kIOkNYBaD ily traian gS5OJMpIU */ }
/* kIOkNYBaD ily traian gS5OJMpIU */ 
/* kIOkNYBaD ily traian gS5OJMpIU */ int main()
/* kIOkNYBaD ily traian gS5OJMpIU */ {
/* kIOkNYBaD ily traian gS5OJMpIU */     cin >> cer >> n >> m;
/* kIOkNYBaD ily traian gS5OJMpIU */     if(cer == 1)
/* kIOkNYBaD ily traian gS5OJMpIU */     {
/* kIOkNYBaD ily traian gS5OJMpIU */         for(int i = 1 ; i <= m ; i++)
/* kIOkNYBaD ily traian gS5OJMpIU */         {
/* kIOkNYBaD ily traian gS5OJMpIU */             cin >> c;
/* kIOkNYBaD ily traian gS5OJMpIU */             b[c]++;
/* kIOkNYBaD ily traian gS5OJMpIU */         }
/* kIOkNYBaD ily traian gS5OJMpIU */         for(int i = 9 ; i >= 0 ; i--)
/* kIOkNYBaD ily traian gS5OJMpIU */             for(int j = 1 ; j <= b[i] ; j++)
/* kIOkNYBaD ily traian gS5OJMpIU */                 cout << i;
/* kIOkNYBaD ily traian gS5OJMpIU */     }
/* kIOkNYBaD ily traian gS5OJMpIU */     else
/* kIOkNYBaD ily traian gS5OJMpIU */     {
/* kIOkNYBaD ily traian gS5OJMpIU */         x = 1;
/* kIOkNYBaD ily traian gS5OJMpIU */         for(int i = 1 ; i <= m ; i++)
/* kIOkNYBaD ily traian gS5OJMpIU */         {
/* kIOkNYBaD ily traian gS5OJMpIU */             cin >> a[i];
/* kIOkNYBaD ily traian gS5OJMpIU */             b[a[i]]++;
/* kIOkNYBaD ily traian gS5OJMpIU */             f[a[i]]++;
/* kIOkNYBaD ily traian gS5OJMpIU */         }
/* kIOkNYBaD ily traian gS5OJMpIU */         for(int i = m + 1 ; i <= n ; i++)
/* kIOkNYBaD ily traian gS5OJMpIU */         {
/* kIOkNYBaD ily traian gS5OJMpIU */             cin >> a[i];
/* kIOkNYBaD ily traian gS5OJMpIU */             f[a[i]]++;
/* kIOkNYBaD ily traian gS5OJMpIU */             f[a[i - m]]--;
/* kIOkNYBaD ily traian gS5OJMpIU */             if(maimare(f , b))
/* kIOkNYBaD ily traian gS5OJMpIU */             {
/* kIOkNYBaD ily traian gS5OJMpIU */                 x = i - m + 1;
/* kIOkNYBaD ily traian gS5OJMpIU */                 for(int j = 0 ; j <= 9 ; j++)
/* kIOkNYBaD ily traian gS5OJMpIU */                   b[j] = f[j];
/* kIOkNYBaD ily traian gS5OJMpIU */             }
/* kIOkNYBaD ily traian gS5OJMpIU */         }
/* kIOkNYBaD ily traian gS5OJMpIU */         cout << x;
/* kIOkNYBaD ily traian gS5OJMpIU */     }
/* kIOkNYBaD ily traian gS5OJMpIU */ 
/* kIOkNYBaD ily traian gS5OJMpIU */ }