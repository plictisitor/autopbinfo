/* fW4AYc1oZ ily traian Q18Iv5IEZ */ #include <algorithm>
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
/* fW4AYc1oZ ily traian Q18Iv5IEZ */ 
/* fW4AYc1oZ ily traian Q18Iv5IEZ */ using namespace std;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */ int a[100001], n;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */ 
/* fW4AYc1oZ ily traian Q18Iv5IEZ */ ifstream fin("piramide.in");
/* fW4AYc1oZ ily traian Q18Iv5IEZ */ ofstream fout("piramide.out");
/* fW4AYc1oZ ily traian Q18Iv5IEZ */ 
/* fW4AYc1oZ ily traian Q18Iv5IEZ */ int main()
/* fW4AYc1oZ ily traian Q18Iv5IEZ */ {
/* fW4AYc1oZ ily traian Q18Iv5IEZ */     int pir = 0, nefolosite, x, c, cate, maxim = 0, nrp = 0;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */     fin >> n >> x;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */     a[1] = 3;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */     int    ind = 1;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */     while(a[ind] < n)
/* fW4AYc1oZ ily traian Q18Iv5IEZ */     {
/* fW4AYc1oZ ily traian Q18Iv5IEZ */         a[++ind] = a[ind - 1] + (ind + 1) * (ind + 2) / 2;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */         if(x <= a[ind]  && x > a[ind - 1]) pir = ind;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */     }
/* fW4AYc1oZ ily traian Q18Iv5IEZ */     if(a[ind] > n ) ind = ind - 1;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */     if(pir > ind) pir = 0;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */     nefolosite = n - a[ind]; ///numar total de cartonase - numarul din ultima completa
/* fW4AYc1oZ ily traian Q18Iv5IEZ */ 
/* fW4AYc1oZ ily traian Q18Iv5IEZ */     fout << pir << "\n" << ind << "\n" << nefolosite << " \n";
/* fW4AYc1oZ ily traian Q18Iv5IEZ */     int t = 1, nrc = 0, cart;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */     fin >> c;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */     fin >> cart;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */        while( a[t] < cart) ++t;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */     for(int i = 2; i <= c; ++i)
/* fW4AYc1oZ ily traian Q18Iv5IEZ */     {
/* fW4AYc1oZ ily traian Q18Iv5IEZ */         if(cart == a[t]) nrc = 1;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */         else
/* fW4AYc1oZ ily traian Q18Iv5IEZ */         {
/* fW4AYc1oZ ily traian Q18Iv5IEZ */            if(cart < a[t] && t <= ind)nrc++;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */            else
/* fW4AYc1oZ ily traian Q18Iv5IEZ */            {
/* fW4AYc1oZ ily traian Q18Iv5IEZ */                t++;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */                nrc = 0;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */            }
/* fW4AYc1oZ ily traian Q18Iv5IEZ */         }
/* fW4AYc1oZ ily traian Q18Iv5IEZ */         if(nrc > maxim)
/* fW4AYc1oZ ily traian Q18Iv5IEZ */         {
/* fW4AYc1oZ ily traian Q18Iv5IEZ */             maxim = nrc;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */             nrp = t;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */         }
/* fW4AYc1oZ ily traian Q18Iv5IEZ */         fin >> cart;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */     }
/* fW4AYc1oZ ily traian Q18Iv5IEZ */ 
/* fW4AYc1oZ ily traian Q18Iv5IEZ */      fout << nrp ;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */ 
/* fW4AYc1oZ ily traian Q18Iv5IEZ */     return 0;
/* fW4AYc1oZ ily traian Q18Iv5IEZ */ }