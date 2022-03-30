/* GI4vshyMV ily traian bwscTDu5e */ #include <algorithm>
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
/* GI4vshyMV ily traian bwscTDu5e */ using namespace std;
/* GI4vshyMV ily traian bwscTDu5e */ ifstream cin("babilon.in");
/* GI4vshyMV ily traian bwscTDu5e */ ofstream cout("babilon.out");
/* GI4vshyMV ily traian bwscTDu5e */ int cer , n , i , a[121] , l , lmax , prec;
/* GI4vshyMV ily traian bwscTDu5e */ long long cnt;
/* GI4vshyMV ily traian bwscTDu5e */ int main()
/* GI4vshyMV ily traian bwscTDu5e */ {
/* GI4vshyMV ily traian bwscTDu5e */     cin >> cer >> n;
/* GI4vshyMV ily traian bwscTDu5e */     for(i = 1 ; i <= n ; i++) cin >> a[i];
/* GI4vshyMV ily traian bwscTDu5e */     if(cer == 1)
/* GI4vshyMV ily traian bwscTDu5e */     {
/* GI4vshyMV ily traian bwscTDu5e */         for(i = 1 ; i <= n ; i++)
/* GI4vshyMV ily traian bwscTDu5e */         {
/* GI4vshyMV ily traian bwscTDu5e */             if(a[i]==1) l++;
/* GI4vshyMV ily traian bwscTDu5e */             else
/* GI4vshyMV ily traian bwscTDu5e */             {
/* GI4vshyMV ily traian bwscTDu5e */                 if(l > lmax) lmax = l;
/* GI4vshyMV ily traian bwscTDu5e */                 l = 0;
/* GI4vshyMV ily traian bwscTDu5e */             }
/* GI4vshyMV ily traian bwscTDu5e */         }
/* GI4vshyMV ily traian bwscTDu5e */         if(l > lmax) lmax = l;
/* GI4vshyMV ily traian bwscTDu5e */         l=0;
/* GI4vshyMV ily traian bwscTDu5e */         cout << lmax << endl;
/* GI4vshyMV ily traian bwscTDu5e */     }
/* GI4vshyMV ily traian bwscTDu5e */     else
/* GI4vshyMV ily traian bwscTDu5e */     {
/* GI4vshyMV ily traian bwscTDu5e */         for(i = 1 ; i <= n ; i++)
/* GI4vshyMV ily traian bwscTDu5e */            if(a[i] == 1) cnt++ , prec=a[i];
/* GI4vshyMV ily traian bwscTDu5e */            else if(a[i]==3) cnt *= 60;
/* GI4vshyMV ily traian bwscTDu5e */                 else
/* GI4vshyMV ily traian bwscTDu5e */                 {
/* GI4vshyMV ily traian bwscTDu5e */                     if(prec == 1)cnt *= 60;
/* GI4vshyMV ily traian bwscTDu5e */                     cnt += 10;
/* GI4vshyMV ily traian bwscTDu5e */                     prec = a[i];
/* GI4vshyMV ily traian bwscTDu5e */                 }
/* GI4vshyMV ily traian bwscTDu5e */         cout << cnt;
/* GI4vshyMV ily traian bwscTDu5e */     }
/* GI4vshyMV ily traian bwscTDu5e */ }