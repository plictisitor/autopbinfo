/* FPYODRVNp ily traian cTjKvXljz */ #include <algorithm>
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
/* FPYODRVNp ily traian cTjKvXljz */ using namespace std;
/* FPYODRVNp ily traian cTjKvXljz */ 
/* FPYODRVNp ily traian cTjKvXljz */ int v[101];
/* FPYODRVNp ily traian cTjKvXljz */ 
/* FPYODRVNp ily traian cTjKvXljz */ void creare()
/* FPYODRVNp ily traian cTjKvXljz */ {
/* FPYODRVNp ily traian cTjKvXljz */     v[1]=1;
/* FPYODRVNp ily traian cTjKvXljz */     v[2]=2;
/* FPYODRVNp ily traian cTjKvXljz */     for(int i = 3 ; i <= 100 ; ++i)
/* FPYODRVNp ily traian cTjKvXljz */         v[i]=v[i-1]+v[i-2];
/* FPYODRVNp ily traian cTjKvXljz */ }
/* FPYODRVNp ily traian cTjKvXljz */ 
/* FPYODRVNp ily traian cTjKvXljz */ int main()
/* FPYODRVNp ily traian cTjKvXljz */ {
/* FPYODRVNp ily traian cTjKvXljz */     int ka , kb;
/* FPYODRVNp ily traian cTjKvXljz */     cin >> ka >> kb;
/* FPYODRVNp ily traian cTjKvXljz */     creare();
/* FPYODRVNp ily traian cTjKvXljz */     int cka = ka , ckb = kb;
/* FPYODRVNp ily traian cTjKvXljz */     int i = 1;
/* FPYODRVNp ily traian cTjKvXljz */     while(cka >= 0 && ckb >= 0)
/* FPYODRVNp ily traian cTjKvXljz */     {
/* FPYODRVNp ily traian cTjKvXljz */         ka=cka , kb=ckb;
/* FPYODRVNp ily traian cTjKvXljz */         if(v[i]%2==0)
/* FPYODRVNp ily traian cTjKvXljz */             cka-=v[i]/2 , ckb-=v[i]/2;
/* FPYODRVNp ily traian cTjKvXljz */         else
/* FPYODRVNp ily traian cTjKvXljz */             cka-=v[i]/2+1 , ckb-=v[i]/2;
/* FPYODRVNp ily traian cTjKvXljz */         i++;
/* FPYODRVNp ily traian cTjKvXljz */     }
/* FPYODRVNp ily traian cTjKvXljz */     cout << i-2 << endl;
/* FPYODRVNp ily traian cTjKvXljz */     cout << ka << endl << kb;
/* FPYODRVNp ily traian cTjKvXljz */     return 0;
/* FPYODRVNp ily traian cTjKvXljz */ }