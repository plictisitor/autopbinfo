/* o4X8HEYG3 ily traian MrXBcWeIn */ #include <algorithm>
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
/* o4X8HEYG3 ily traian MrXBcWeIn */ int cmmnr(int n)
/* o4X8HEYG3 ily traian MrXBcWeIn */ {
/* o4X8HEYG3 ily traian MrXBcWeIn */     long long int v[10] , o=0 ,p=0 , cnt=0;
/* o4X8HEYG3 ily traian MrXBcWeIn */     while(n)
/* o4X8HEYG3 ily traian MrXBcWeIn */     {
/* o4X8HEYG3 ily traian MrXBcWeIn */         if(n%10==0)
/* o4X8HEYG3 ily traian MrXBcWeIn */         cnt++;
/* o4X8HEYG3 ily traian MrXBcWeIn */         else
/* o4X8HEYG3 ily traian MrXBcWeIn */         {
/* o4X8HEYG3 ily traian MrXBcWeIn */         v[p]=n%10;
/* o4X8HEYG3 ily traian MrXBcWeIn */         p++;
/* o4X8HEYG3 ily traian MrXBcWeIn */         }
/* o4X8HEYG3 ily traian MrXBcWeIn */         n/=10;
/* o4X8HEYG3 ily traian MrXBcWeIn */     }
/* o4X8HEYG3 ily traian MrXBcWeIn */     sort(v , v+p);
/* o4X8HEYG3 ily traian MrXBcWeIn */     int ok=0;
/* o4X8HEYG3 ily traian MrXBcWeIn */     for(int i = 0 ; i < p ; ++i)
/* o4X8HEYG3 ily traian MrXBcWeIn */     {
/* o4X8HEYG3 ily traian MrXBcWeIn */         o=o*10+v[i];
/* o4X8HEYG3 ily traian MrXBcWeIn */         ok++;
/* o4X8HEYG3 ily traian MrXBcWeIn */         if(ok==1)
/* o4X8HEYG3 ily traian MrXBcWeIn */         {
/* o4X8HEYG3 ily traian MrXBcWeIn */             for(int i = 0 ; i < cnt ; ++i)
/* o4X8HEYG3 ily traian MrXBcWeIn */             {
/* o4X8HEYG3 ily traian MrXBcWeIn */                 o=o*10;
/* o4X8HEYG3 ily traian MrXBcWeIn */             }
/* o4X8HEYG3 ily traian MrXBcWeIn */         }
/* o4X8HEYG3 ily traian MrXBcWeIn */     }
/* o4X8HEYG3 ily traian MrXBcWeIn */         return o;
/* o4X8HEYG3 ily traian MrXBcWeIn */ }