/* nalzf9Ao8 ily traian 3noGIkxLO */ #include <algorithm>
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
/* nalzf9Ao8 ily traian 3noGIkxLO */ using namespace std;
/* nalzf9Ao8 ily traian 3noGIkxLO */ ifstream cin("3cifre.in");
/* nalzf9Ao8 ily traian 3noGIkxLO */ ofstream cout("3cifre.out");
/* nalzf9Ao8 ily traian 3noGIkxLO */ long long int a[500000] , f[1002];
/* nalzf9Ao8 ily traian 3noGIkxLO */ int main()
/* nalzf9Ao8 ily traian 3noGIkxLO */ {
/* nalzf9Ao8 ily traian 3noGIkxLO */     int n , cer;
/* nalzf9Ao8 ily traian 3noGIkxLO */     long long int mini = 1000 , maxi = 99 , nrmin1 = 0 , nrmin2 = 0 , nrmax1 = 0 , nrmax2 = 0 , fmin = 0 , fmax = 0;
/* nalzf9Ao8 ily traian 3noGIkxLO */     cin >> n >> cer;
/* nalzf9Ao8 ily traian 3noGIkxLO */     if(cer == 1)
/* nalzf9Ao8 ily traian 3noGIkxLO */     {
/* nalzf9Ao8 ily traian 3noGIkxLO */         for(int i = 0 ; i < n ; ++i)
/* nalzf9Ao8 ily traian 3noGIkxLO */         {
/* nalzf9Ao8 ily traian 3noGIkxLO */             cin >> a[i];
/* nalzf9Ao8 ily traian 3noGIkxLO */             long long int x=a[i];
/* nalzf9Ao8 ily traian 3noGIkxLO */             while(x > 99)
/* nalzf9Ao8 ily traian 3noGIkxLO */             {
/* nalzf9Ao8 ily traian 3noGIkxLO */                 while((x/100)%10==0) x /= 10;
/* nalzf9Ao8 ily traian 3noGIkxLO */                 if(x%1000 < mini)
/* nalzf9Ao8 ily traian 3noGIkxLO */                 {
/* nalzf9Ao8 ily traian 3noGIkxLO */                     mini=x%1000;
/* nalzf9Ao8 ily traian 3noGIkxLO */                     nrmin1=a[i];
/* nalzf9Ao8 ily traian 3noGIkxLO */                     fmin=0;
/* nalzf9Ao8 ily traian 3noGIkxLO */                 }
/* nalzf9Ao8 ily traian 3noGIkxLO */                 if(x%1000 == mini)
/* nalzf9Ao8 ily traian 3noGIkxLO */                 {
/* nalzf9Ao8 ily traian 3noGIkxLO */                     fmin++;
/* nalzf9Ao8 ily traian 3noGIkxLO */                     nrmin2=a[i];
/* nalzf9Ao8 ily traian 3noGIkxLO */                 }
/* nalzf9Ao8 ily traian 3noGIkxLO */                 if(x%1000 > maxi)
/* nalzf9Ao8 ily traian 3noGIkxLO */                 {
/* nalzf9Ao8 ily traian 3noGIkxLO */                     maxi=x%1000;
/* nalzf9Ao8 ily traian 3noGIkxLO */                     nrmax1=a[i];
/* nalzf9Ao8 ily traian 3noGIkxLO */                     fmax=0;
/* nalzf9Ao8 ily traian 3noGIkxLO */                 }
/* nalzf9Ao8 ily traian 3noGIkxLO */                 if(x%1000 == maxi)
/* nalzf9Ao8 ily traian 3noGIkxLO */                 {
/* nalzf9Ao8 ily traian 3noGIkxLO */                     fmax++;
/* nalzf9Ao8 ily traian 3noGIkxLO */                     nrmax2=a[i];
/* nalzf9Ao8 ily traian 3noGIkxLO */                 }
/* nalzf9Ao8 ily traian 3noGIkxLO */                 x /= 10;
/* nalzf9Ao8 ily traian 3noGIkxLO */             }
/* nalzf9Ao8 ily traian 3noGIkxLO */         }
/* nalzf9Ao8 ily traian 3noGIkxLO */         cout << mini << ' ' << fmin << ' ' << nrmin1 << ' ' << nrmin2 << endl;
/* nalzf9Ao8 ily traian 3noGIkxLO */         cout << maxi << ' ' << fmax << ' ' << nrmax1 << ' ' << nrmax2;
/* nalzf9Ao8 ily traian 3noGIkxLO */     }
/* nalzf9Ao8 ily traian 3noGIkxLO */     if(cer == 2)
/* nalzf9Ao8 ily traian 3noGIkxLO */     {
/* nalzf9Ao8 ily traian 3noGIkxLO */         for(int i = 0 ; i < n ; ++i)
/* nalzf9Ao8 ily traian 3noGIkxLO */         {
/* nalzf9Ao8 ily traian 3noGIkxLO */             cin >> a[i];
/* nalzf9Ao8 ily traian 3noGIkxLO */             long long int x = a[i];
/* nalzf9Ao8 ily traian 3noGIkxLO */             while(x > 99)
/* nalzf9Ao8 ily traian 3noGIkxLO */             {
/* nalzf9Ao8 ily traian 3noGIkxLO */                 while((x/100)%10==0) x/=10;
/* nalzf9Ao8 ily traian 3noGIkxLO */                 f[x%1000]++;
/* nalzf9Ao8 ily traian 3noGIkxLO */                 x /= 10;
/* nalzf9Ao8 ily traian 3noGIkxLO */             }
/* nalzf9Ao8 ily traian 3noGIkxLO */         }
/* nalzf9Ao8 ily traian 3noGIkxLO */         maxi=0;
/* nalzf9Ao8 ily traian 3noGIkxLO */         for(int i = 100 ; i <= 999 ; ++i)
/* nalzf9Ao8 ily traian 3noGIkxLO */             if(f[i]>maxi)maxi=f[i];
/* nalzf9Ao8 ily traian 3noGIkxLO */         cout << maxi << endl;
/* nalzf9Ao8 ily traian 3noGIkxLO */         for(int i = 100 ; i <= 999 ; ++i)
/* nalzf9Ao8 ily traian 3noGIkxLO */         {
/* nalzf9Ao8 ily traian 3noGIkxLO */             if(f[i] == maxi)
/* nalzf9Ao8 ily traian 3noGIkxLO */                 cout << i << " ";
/* nalzf9Ao8 ily traian 3noGIkxLO */         }
/* nalzf9Ao8 ily traian 3noGIkxLO */     }
/* nalzf9Ao8 ily traian 3noGIkxLO */     return 0;
/* nalzf9Ao8 ily traian 3noGIkxLO */ }