/* BweXGfQjm ily traian WcX83d36E */ #include <algorithm>
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
/* BweXGfQjm ily traian WcX83d36E */ 
/* BweXGfQjm ily traian WcX83d36E */ using namespace std;
/* BweXGfQjm ily traian WcX83d36E */ #define Inf 2000000000
/* BweXGfQjm ily traian WcX83d36E */ 
/* BweXGfQjm ily traian WcX83d36E */ int nrd[101], n;
/* BweXGfQjm ily traian WcX83d36E */ long long minim = Inf;
/* BweXGfQjm ily traian WcX83d36E */ int prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
/* BweXGfQjm ily traian WcX83d36E */ 
/* BweXGfQjm ily traian WcX83d36E */ long long calcnr (int ind)
/* BweXGfQjm ily traian WcX83d36E */ {
/* BweXGfQjm ily traian WcX83d36E */     int aux;
/* BweXGfQjm ily traian WcX83d36E */     long long nr = 1;
/* BweXGfQjm ily traian WcX83d36E */     for (int i = ind, l = 1; i >= 1; i --, l ++)
/* BweXGfQjm ily traian WcX83d36E */     {
/* BweXGfQjm ily traian WcX83d36E */         aux = nrd[i];
/* BweXGfQjm ily traian WcX83d36E */         while (aux > 1)
/* BweXGfQjm ily traian WcX83d36E */         {
/* BweXGfQjm ily traian WcX83d36E */             nr *= prime[l];
/* BweXGfQjm ily traian WcX83d36E */             aux --;
/* BweXGfQjm ily traian WcX83d36E */             if (nr > Inf)return Inf;
/* BweXGfQjm ily traian WcX83d36E */         }
/* BweXGfQjm ily traian WcX83d36E */     }
/* BweXGfQjm ily traian WcX83d36E */     return nr;
/* BweXGfQjm ily traian WcX83d36E */ }
/* BweXGfQjm ily traian WcX83d36E */ void back(int x, int ind)
/* BweXGfQjm ily traian WcX83d36E */ {
/* BweXGfQjm ily traian WcX83d36E */     if (x == 1)
/* BweXGfQjm ily traian WcX83d36E */     {
/* BweXGfQjm ily traian WcX83d36E */         minim = min(minim, calcnr(ind));
/* BweXGfQjm ily traian WcX83d36E */         return;
/* BweXGfQjm ily traian WcX83d36E */     }
/* BweXGfQjm ily traian WcX83d36E */     nrd[ind + 1] = x;
/* BweXGfQjm ily traian WcX83d36E */     back(1, ind + 1);
/* BweXGfQjm ily traian WcX83d36E */     for(int i = 0; prime[i] * prime[i] <= x && prime[i] <= x/prime[i]; i ++)
/* BweXGfQjm ily traian WcX83d36E */         if (x % prime[i] == 0)
/* BweXGfQjm ily traian WcX83d36E */         {
/* BweXGfQjm ily traian WcX83d36E */             nrd[ind + 1] = prime[i];
/* BweXGfQjm ily traian WcX83d36E */             back(x / prime[i], ind + 1);
/* BweXGfQjm ily traian WcX83d36E */         }
/* BweXGfQjm ily traian WcX83d36E */ }
/* BweXGfQjm ily traian WcX83d36E */ int main()
/* BweXGfQjm ily traian WcX83d36E */ {
/* BweXGfQjm ily traian WcX83d36E */     cin >> n;
/* BweXGfQjm ily traian WcX83d36E */     int div = 2, nrdiv = 1, x;
/* BweXGfQjm ily traian WcX83d36E */     while(n > 1)
/* BweXGfQjm ily traian WcX83d36E */     {
/* BweXGfQjm ily traian WcX83d36E */         if(n % div == 0)
/* BweXGfQjm ily traian WcX83d36E */         {
/* BweXGfQjm ily traian WcX83d36E */             x = 0;
/* BweXGfQjm ily traian WcX83d36E */             while(n % div == 0) x++ , n /= div;
/* BweXGfQjm ily traian WcX83d36E */             nrdiv *= (x + 1);
/* BweXGfQjm ily traian WcX83d36E */         }
/* BweXGfQjm ily traian WcX83d36E */         div ++;
/* BweXGfQjm ily traian WcX83d36E */     }
/* BweXGfQjm ily traian WcX83d36E */     back(nrdiv, 0);
/* BweXGfQjm ily traian WcX83d36E */     cout << minim;
/* BweXGfQjm ily traian WcX83d36E */     return 0;
/* BweXGfQjm ily traian WcX83d36E */ }