/* 63VILtRsh ily traian euiLbfyXR */ #include <algorithm>
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
/* 63VILtRsh ily traian euiLbfyXR */ using namespace std;
/* 63VILtRsh ily traian euiLbfyXR */ 
/* 63VILtRsh ily traian euiLbfyXR */ ifstream cin("subarbori.in");
/* 63VILtRsh ily traian euiLbfyXR */ ofstream cout("subarbori.out");
/* 63VILtRsh ily traian euiLbfyXR */ 
/* 63VILtRsh ily traian euiLbfyXR */ int n , k , t[101] , v[101] , cnt , f[101];
/* 63VILtRsh ily traian euiLbfyXR */ 
/* 63VILtRsh ily traian euiLbfyXR */ int main()
/* 63VILtRsh ily traian euiLbfyXR */ {
/* 63VILtRsh ily traian euiLbfyXR */     cin >> n;
/* 63VILtRsh ily traian euiLbfyXR */     for(int i = 1 ; i <= n ; i++)
/* 63VILtRsh ily traian euiLbfyXR */         cin >> t[i];
/* 63VILtRsh ily traian euiLbfyXR */ 
/* 63VILtRsh ily traian euiLbfyXR */     for(int i = 1 ; i <= n ; i++)
/* 63VILtRsh ily traian euiLbfyXR */     {
/* 63VILtRsh ily traian euiLbfyXR */         int p = t[i];
/* 63VILtRsh ily traian euiLbfyXR */         while(p)
/* 63VILtRsh ily traian euiLbfyXR */         {
/* 63VILtRsh ily traian euiLbfyXR */             f[p]++;
/* 63VILtRsh ily traian euiLbfyXR */             p = t[p];
/* 63VILtRsh ily traian euiLbfyXR */         }
/* 63VILtRsh ily traian euiLbfyXR */     }
/* 63VILtRsh ily traian euiLbfyXR */     for(int i = 1 ; i <= n ; i++)
/* 63VILtRsh ily traian euiLbfyXR */         for(int j = i + 1 ; j <= n ; j++)
/* 63VILtRsh ily traian euiLbfyXR */             if(f[i] == f[j] && f[i] != 0) cnt++;
/* 63VILtRsh ily traian euiLbfyXR */     cout << cnt;
/* 63VILtRsh ily traian euiLbfyXR */ 
/* 63VILtRsh ily traian euiLbfyXR */ }