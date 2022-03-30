/* BmkTHghCN ily traian foSchFxbH */ #include <algorithm>
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
/* BmkTHghCN ily traian foSchFxbH */ 
/* BmkTHghCN ily traian foSchFxbH */ using namespace std;
/* BmkTHghCN ily traian foSchFxbH */ 
/* BmkTHghCN ily traian foSchFxbH */ int main()
/* BmkTHghCN ily traian foSchFxbH */ {
/* BmkTHghCN ily traian foSchFxbH */     long long int n;
/* BmkTHghCN ily traian foSchFxbH */     char ch;
/* BmkTHghCN ily traian foSchFxbH */     cin >> ch >> n;
/* BmkTHghCN ily traian foSchFxbH */     if(ch == 'b')
/* BmkTHghCN ily traian foSchFxbH */     {
/* BmkTHghCN ily traian foSchFxbH */         int v[1001];
/* BmkTHghCN ily traian foSchFxbH */         int p = 0;
/* BmkTHghCN ily traian foSchFxbH */         while(n)
/* BmkTHghCN ily traian foSchFxbH */         {
/* BmkTHghCN ily traian foSchFxbH */             v[p] = n % 2;
/* BmkTHghCN ily traian foSchFxbH */             p++;
/* BmkTHghCN ily traian foSchFxbH */             n/=2;
/* BmkTHghCN ily traian foSchFxbH */         }
/* BmkTHghCN ily traian foSchFxbH */         for(int i = p - 1 ; i >= 0 ; --i)
/* BmkTHghCN ily traian foSchFxbH */             cout << v[i];
/* BmkTHghCN ily traian foSchFxbH */     }
/* BmkTHghCN ily traian foSchFxbH */     else if(ch == 'o')
/* BmkTHghCN ily traian foSchFxbH */     {
/* BmkTHghCN ily traian foSchFxbH */         int v[1001];
/* BmkTHghCN ily traian foSchFxbH */         int p = 0;
/* BmkTHghCN ily traian foSchFxbH */         while(n)
/* BmkTHghCN ily traian foSchFxbH */         {
/* BmkTHghCN ily traian foSchFxbH */             v[p] = n % 8;
/* BmkTHghCN ily traian foSchFxbH */             p++;
/* BmkTHghCN ily traian foSchFxbH */             n/=8;
/* BmkTHghCN ily traian foSchFxbH */         }
/* BmkTHghCN ily traian foSchFxbH */         for(int i = p - 1 ; i >= 0 ; --i)
/* BmkTHghCN ily traian foSchFxbH */             cout << v[i];
/* BmkTHghCN ily traian foSchFxbH */     }
/* BmkTHghCN ily traian foSchFxbH */     else
/* BmkTHghCN ily traian foSchFxbH */     {
/* BmkTHghCN ily traian foSchFxbH */         char v[1001];
/* BmkTHghCN ily traian foSchFxbH */         int p = 0;
/* BmkTHghCN ily traian foSchFxbH */         while(n)
/* BmkTHghCN ily traian foSchFxbH */         {
/* BmkTHghCN ily traian foSchFxbH */             if(n % 16 > 9)
/* BmkTHghCN ily traian foSchFxbH */             {
/* BmkTHghCN ily traian foSchFxbH */                 int nr = n % 16 - 9;
/* BmkTHghCN ily traian foSchFxbH */                 v[p] = (char) (nr + 'A' - 1);
/* BmkTHghCN ily traian foSchFxbH */             }
/* BmkTHghCN ily traian foSchFxbH */             else
/* BmkTHghCN ily traian foSchFxbH */                 v[p] = (char) (n % 16 + '0');
/* BmkTHghCN ily traian foSchFxbH */             p++;
/* BmkTHghCN ily traian foSchFxbH */             n/=16;
/* BmkTHghCN ily traian foSchFxbH */         }
/* BmkTHghCN ily traian foSchFxbH */         for(int i = p - 1 ; i >= 0 ; --i)
/* BmkTHghCN ily traian foSchFxbH */             cout << v[i];
/* BmkTHghCN ily traian foSchFxbH */     }
/* BmkTHghCN ily traian foSchFxbH */     return 0;
/* BmkTHghCN ily traian foSchFxbH */ }