/* YV8fWh9as ily traian Er6ahWC3o */ #include <algorithm>
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
/* YV8fWh9as ily traian Er6ahWC3o */ using namespace std;
/* YV8fWh9as ily traian Er6ahWC3o */ 
/* YV8fWh9as ily traian Er6ahWC3o */ int a[30];
/* YV8fWh9as ily traian Er6ahWC3o */ 
/* YV8fWh9as ily traian Er6ahWC3o */ int main()
/* YV8fWh9as ily traian Er6ahWC3o */ {
/* YV8fWh9as ily traian Er6ahWC3o */     string s;
/* YV8fWh9as ily traian Er6ahWC3o */     cin >> s;
/* YV8fWh9as ily traian Er6ahWC3o */     unsigned int nrlitdif=0,i,j=0,Min=s.size(),k=0;
/* YV8fWh9as ily traian Er6ahWC3o */     for (i = 0; i<s.size(); i++)
/* YV8fWh9as ily traian Er6ahWC3o */         if (!a[s[i]-'a'])
/* YV8fWh9as ily traian Er6ahWC3o */         {
/* YV8fWh9as ily traian Er6ahWC3o */             a[s[i]-'a'] = -1;
/* YV8fWh9as ily traian Er6ahWC3o */             nrlitdif++;
/* YV8fWh9as ily traian Er6ahWC3o */         }
/* YV8fWh9as ily traian Er6ahWC3o */     for (i = 0; i<s.size();)
/* YV8fWh9as ily traian Er6ahWC3o */     {
/* YV8fWh9as ily traian Er6ahWC3o */         a[s[i]-'a']++;
/* YV8fWh9as ily traian Er6ahWC3o */         if (!a[s[i]-'a'])
/* YV8fWh9as ily traian Er6ahWC3o */             k++;
/* YV8fWh9as ily traian Er6ahWC3o */         if (k == nrlitdif)
/* YV8fWh9as ily traian Er6ahWC3o */         {
/* YV8fWh9as ily traian Er6ahWC3o */             while (a[s[j]-'a']!=0)
/* YV8fWh9as ily traian Er6ahWC3o */             {
/* YV8fWh9as ily traian Er6ahWC3o */                 a[s[j]-'a']--;
/* YV8fWh9as ily traian Er6ahWC3o */                 j++;
/* YV8fWh9as ily traian Er6ahWC3o */             }
/* YV8fWh9as ily traian Er6ahWC3o */             Min = min(Min,i-j+1);
/* YV8fWh9as ily traian Er6ahWC3o */         }
/* YV8fWh9as ily traian Er6ahWC3o */         i++;
/* YV8fWh9as ily traian Er6ahWC3o */     }
/* YV8fWh9as ily traian Er6ahWC3o */     cout << Min;
/* YV8fWh9as ily traian Er6ahWC3o */ }