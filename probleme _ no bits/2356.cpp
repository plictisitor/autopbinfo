/* laDE93lwu ily traian I06ylSaCm */ #include <algorithm>
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
/* laDE93lwu ily traian I06ylSaCm */ using namespace std;
/* laDE93lwu ily traian I06ylSaCm */ ifstream cin("pinguini.in");
/* laDE93lwu ily traian I06ylSaCm */ ofstream cout("pinguini.out");
/* laDE93lwu ily traian I06ylSaCm */ int main()
/* laDE93lwu ily traian I06ylSaCm */ {
/* laDE93lwu ily traian I06ylSaCm */     int n , c , a[10002] , cnt = 0 , l = 0 , maxi = 0;
/* laDE93lwu ily traian I06ylSaCm */     cin >> c >> n;
/* laDE93lwu ily traian I06ylSaCm */     for(int i = 1 ; i <= n ; ++i)
/* laDE93lwu ily traian I06ylSaCm */         cin >> a[i];
/* laDE93lwu ily traian I06ylSaCm */     a[n + 1] = 1;
/* laDE93lwu ily traian I06ylSaCm */     n++;
/* laDE93lwu ily traian I06ylSaCm */     if(c == 1)
/* laDE93lwu ily traian I06ylSaCm */     {
/* laDE93lwu ily traian I06ylSaCm */         for(int i = 1 ; i < n ; ++i)
/* laDE93lwu ily traian I06ylSaCm */             if(a[i]==2) cnt++;
/* laDE93lwu ily traian I06ylSaCm */         cout << cnt;
/* laDE93lwu ily traian I06ylSaCm */     }
/* laDE93lwu ily traian I06ylSaCm */     if(c == 2)
/* laDE93lwu ily traian I06ylSaCm */     {
/* laDE93lwu ily traian I06ylSaCm */         for(int i = 1 ; i <= n ; ++i)
/* laDE93lwu ily traian I06ylSaCm */         {
/* laDE93lwu ily traian I06ylSaCm */             if(a[i]==1 && l!=0)
/* laDE93lwu ily traian I06ylSaCm */             {
/* laDE93lwu ily traian I06ylSaCm */                 cnt++;
/* laDE93lwu ily traian I06ylSaCm */                 l = 0;
/* laDE93lwu ily traian I06ylSaCm */             }else if(a[i]!=1) l++;
/* laDE93lwu ily traian I06ylSaCm */         }
/* laDE93lwu ily traian I06ylSaCm */         cout << cnt;
/* laDE93lwu ily traian I06ylSaCm */     }
/* laDE93lwu ily traian I06ylSaCm */     if(c == 3)
/* laDE93lwu ily traian I06ylSaCm */     {
/* laDE93lwu ily traian I06ylSaCm */         for(int i = 1 ; i <= n ; ++i)
/* laDE93lwu ily traian I06ylSaCm */         {
/* laDE93lwu ily traian I06ylSaCm */             if(a[i] == 1)
/* laDE93lwu ily traian I06ylSaCm */             {
/* laDE93lwu ily traian I06ylSaCm */                 if(l > maxi) maxi = l;
/* laDE93lwu ily traian I06ylSaCm */                 l = 0;
/* laDE93lwu ily traian I06ylSaCm */             }else l++;
/* laDE93lwu ily traian I06ylSaCm */         }cout << maxi;
/* laDE93lwu ily traian I06ylSaCm */     }return 0;
/* laDE93lwu ily traian I06ylSaCm */ }