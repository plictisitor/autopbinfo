/* 3CMjsArYQ ily traian iHda4LVla */ #include <algorithm>
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
/* 3CMjsArYQ ily traian iHda4LVla */ 
/* 3CMjsArYQ ily traian iHda4LVla */ using namespace std;
/* 3CMjsArYQ ily traian iHda4LVla */ 
/* 3CMjsArYQ ily traian iHda4LVla */ int main()
/* 3CMjsArYQ ily traian iHda4LVla */ {
/* 3CMjsArYQ ily traian iHda4LVla */     int n , a[1001] , v[1001] , p=0;
/* 3CMjsArYQ ily traian iHda4LVla */     cin >> n;
/* 3CMjsArYQ ily traian iHda4LVla */     int k;
/* 3CMjsArYQ ily traian iHda4LVla */     cin >> k;
/* 3CMjsArYQ ily traian iHda4LVla */     for(int i = 0 ; i < n ; ++i)
/* 3CMjsArYQ ily traian iHda4LVla */         cin >> a[i];
/* 3CMjsArYQ ily traian iHda4LVla */     for(int i = 0; i < k ; ++i)
/* 3CMjsArYQ ily traian iHda4LVla */     {
/* 3CMjsArYQ ily traian iHda4LVla */         p=0;
/* 3CMjsArYQ ily traian iHda4LVla */         for(int j = i ; j < n; j+=k)
/* 3CMjsArYQ ily traian iHda4LVla */         {
/* 3CMjsArYQ ily traian iHda4LVla */             v[p]=a[j];
/* 3CMjsArYQ ily traian iHda4LVla */             p++;
/* 3CMjsArYQ ily traian iHda4LVla */         }
/* 3CMjsArYQ ily traian iHda4LVla */         sort(v , v+p);
/* 3CMjsArYQ ily traian iHda4LVla */         p=0;
/* 3CMjsArYQ ily traian iHda4LVla */         for(int j = i ; j < n ; j+=k)
/* 3CMjsArYQ ily traian iHda4LVla */         {
/* 3CMjsArYQ ily traian iHda4LVla */             a[j] = v[p];
/* 3CMjsArYQ ily traian iHda4LVla */             p++;
/* 3CMjsArYQ ily traian iHda4LVla */         }
/* 3CMjsArYQ ily traian iHda4LVla */     }
/* 3CMjsArYQ ily traian iHda4LVla */      for(int i = 0; i < n ; ++i)
/* 3CMjsArYQ ily traian iHda4LVla */         cout << a[i]<<" ";
/* 3CMjsArYQ ily traian iHda4LVla */     return 0;
/* 3CMjsArYQ ily traian iHda4LVla */ }