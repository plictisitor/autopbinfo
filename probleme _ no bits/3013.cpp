/* wqN4oDW8W ily traian PLVqj1PiD */ #include <algorithm>
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
/* wqN4oDW8W ily traian PLVqj1PiD */ using namespace std;
/* wqN4oDW8W ily traian PLVqj1PiD */ 
/* wqN4oDW8W ily traian PLVqj1PiD */ ifstream cin("becuri1.in");
/* wqN4oDW8W ily traian PLVqj1PiD */ ofstream cout("becuri1.out");
/* wqN4oDW8W ily traian PLVqj1PiD */ 
/* wqN4oDW8W ily traian PLVqj1PiD */ int cer , n , a[201][201] , maxi;
/* wqN4oDW8W ily traian PLVqj1PiD */ long long x;
/* wqN4oDW8W ily traian PLVqj1PiD */ 
/* wqN4oDW8W ily traian PLVqj1PiD */ void afiseaza(int n , int p)
/* wqN4oDW8W ily traian PLVqj1PiD */ {
/* wqN4oDW8W ily traian PLVqj1PiD */     int cnt = 0 , c = 0;
/* wqN4oDW8W ily traian PLVqj1PiD */     while(n != 0)
/* wqN4oDW8W ily traian PLVqj1PiD */     {
/* wqN4oDW8W ily traian PLVqj1PiD */         a[p][++cnt] = n % 10;
/* wqN4oDW8W ily traian PLVqj1PiD */         n /= 10;
/* wqN4oDW8W ily traian PLVqj1PiD */         c++;
/* wqN4oDW8W ily traian PLVqj1PiD */     }
/* wqN4oDW8W ily traian PLVqj1PiD */     a[p][0] = c;
/* wqN4oDW8W ily traian PLVqj1PiD */     maxi = max(maxi , c);
/* wqN4oDW8W ily traian PLVqj1PiD */     for(int i = 1 ; i <= cnt / 2 ; i++)
/* wqN4oDW8W ily traian PLVqj1PiD */         swap(a[p][i] , a[p][cnt - i + 1]);
/* wqN4oDW8W ily traian PLVqj1PiD */ }
/* wqN4oDW8W ily traian PLVqj1PiD */ 
/* wqN4oDW8W ily traian PLVqj1PiD */ int prim (int n)
/* wqN4oDW8W ily traian PLVqj1PiD */ {
/* wqN4oDW8W ily traian PLVqj1PiD */     if(n == 0 || n == 1) return 0;
/* wqN4oDW8W ily traian PLVqj1PiD */     if(n == 2) return 1;
/* wqN4oDW8W ily traian PLVqj1PiD */     if(n % 2 == 0) return 0;
/* wqN4oDW8W ily traian PLVqj1PiD */     for(int i = 3 ; i * i <= n ; i += 2)
/* wqN4oDW8W ily traian PLVqj1PiD */         if(n % i ==0) return 0;
/* wqN4oDW8W ily traian PLVqj1PiD */     return 1;
/* wqN4oDW8W ily traian PLVqj1PiD */ }
/* wqN4oDW8W ily traian PLVqj1PiD */ 
/* wqN4oDW8W ily traian PLVqj1PiD */ int main()
/* wqN4oDW8W ily traian PLVqj1PiD */ {
/* wqN4oDW8W ily traian PLVqj1PiD */     cin >> cer >> n;
/* wqN4oDW8W ily traian PLVqj1PiD */     for(int i = 1 ; i <= n ; i++)
/* wqN4oDW8W ily traian PLVqj1PiD */     {
/* wqN4oDW8W ily traian PLVqj1PiD */         cin >> x;
/* wqN4oDW8W ily traian PLVqj1PiD */         if(x != 0)
/* wqN4oDW8W ily traian PLVqj1PiD */         afiseaza(x , i);
/* wqN4oDW8W ily traian PLVqj1PiD */     }
/* wqN4oDW8W ily traian PLVqj1PiD */     for(int i = 1 ; i <= n ; i++)
/* wqN4oDW8W ily traian PLVqj1PiD */         for(int j = 1 ; j <= maxi ; j++)
/* wqN4oDW8W ily traian PLVqj1PiD */         {
/* wqN4oDW8W ily traian PLVqj1PiD */             if(a[i][0] != 0)
/* wqN4oDW8W ily traian PLVqj1PiD */             {
/* wqN4oDW8W ily traian PLVqj1PiD */             if(a[i][j] == 0 && j % a[i][0] == 0) a[i][j] = a[i][a[i][0]];
/* wqN4oDW8W ily traian PLVqj1PiD */             else if(a[i][j] == 0 && j % a[i][0] != 0) a[i][j] = a[i][j % a[i][0]];
/* wqN4oDW8W ily traian PLVqj1PiD */             }
/* wqN4oDW8W ily traian PLVqj1PiD */         }
/* wqN4oDW8W ily traian PLVqj1PiD */ 
/* wqN4oDW8W ily traian PLVqj1PiD */     /*for(int i = 1 ; i <= n ; i++)
/* wqN4oDW8W ily traian PLVqj1PiD */     {
/* wqN4oDW8W ily traian PLVqj1PiD */         for(int j = 1 ; j <= maxi ; j++)
/* wqN4oDW8W ily traian PLVqj1PiD */             cout << a[i][j] << " ";
/* wqN4oDW8W ily traian PLVqj1PiD */             cout << '\n';
/* wqN4oDW8W ily traian PLVqj1PiD */     }*/
/* wqN4oDW8W ily traian PLVqj1PiD */ 
/* wqN4oDW8W ily traian PLVqj1PiD */     if(cer == 1)
/* wqN4oDW8W ily traian PLVqj1PiD */     {
/* wqN4oDW8W ily traian PLVqj1PiD */         int rez = 0;
/* wqN4oDW8W ily traian PLVqj1PiD */         for(int i = 1 ; i <= n ; i++)
/* wqN4oDW8W ily traian PLVqj1PiD */             if(prim(a[i][1])) rez++;
/* wqN4oDW8W ily traian PLVqj1PiD */ 
/* wqN4oDW8W ily traian PLVqj1PiD */         cout << rez;
/* wqN4oDW8W ily traian PLVqj1PiD */     }
/* wqN4oDW8W ily traian PLVqj1PiD */     else if(cer == 2)
/* wqN4oDW8W ily traian PLVqj1PiD */     {
/* wqN4oDW8W ily traian PLVqj1PiD */         int rmax = 0;
/* wqN4oDW8W ily traian PLVqj1PiD */         for(int j = 1 ; j <= maxi ; j++)
/* wqN4oDW8W ily traian PLVqj1PiD */         {
/* wqN4oDW8W ily traian PLVqj1PiD */             int rez = 0;
/* wqN4oDW8W ily traian PLVqj1PiD */             for(int i = 1 ; i <= n ; i++)
/* wqN4oDW8W ily traian PLVqj1PiD */                 if(prim(a[i][j])) rez++;
/* wqN4oDW8W ily traian PLVqj1PiD */             if(rez > rmax) rmax= rez;
/* wqN4oDW8W ily traian PLVqj1PiD */         }
/* wqN4oDW8W ily traian PLVqj1PiD */         cout << rmax;
/* wqN4oDW8W ily traian PLVqj1PiD */     }
/* wqN4oDW8W ily traian PLVqj1PiD */     else
/* wqN4oDW8W ily traian PLVqj1PiD */     {
/* wqN4oDW8W ily traian PLVqj1PiD */         int rmax = 0 , ok = 0;
/* wqN4oDW8W ily traian PLVqj1PiD */         for(int i = 1 ; i <= n ; i++)
/* wqN4oDW8W ily traian PLVqj1PiD */         {
/* wqN4oDW8W ily traian PLVqj1PiD */             int rez = 0;
/* wqN4oDW8W ily traian PLVqj1PiD */             for(int j = 1 ; j <= n ; j++)
/* wqN4oDW8W ily traian PLVqj1PiD */                 if(prim(a[i][j])) rez++;
/* wqN4oDW8W ily traian PLVqj1PiD */             if(rez > rmax) rmax= rez;
/* wqN4oDW8W ily traian PLVqj1PiD */         }
/* wqN4oDW8W ily traian PLVqj1PiD */         for(int i = 1 ; i <= n ; i++)
/* wqN4oDW8W ily traian PLVqj1PiD */         {
/* wqN4oDW8W ily traian PLVqj1PiD */             int rez = 0;
/* wqN4oDW8W ily traian PLVqj1PiD */             for(int j = 1 ; j <= n ; j++)
/* wqN4oDW8W ily traian PLVqj1PiD */                 if(prim(a[i][j])) rez++;
/* wqN4oDW8W ily traian PLVqj1PiD */             if(rez == rmax && rmax != 0) cout << i << " ", ok++;
/* wqN4oDW8W ily traian PLVqj1PiD */         }
/* wqN4oDW8W ily traian PLVqj1PiD */         if(ok == 0) cout << -1;
/* wqN4oDW8W ily traian PLVqj1PiD */     }
/* wqN4oDW8W ily traian PLVqj1PiD */ }