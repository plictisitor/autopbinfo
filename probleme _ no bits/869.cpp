/* pI1PxiXVh ily traian A8hFT2aBU */ #include <algorithm>
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
/* pI1PxiXVh ily traian A8hFT2aBU */ 
/* pI1PxiXVh ily traian A8hFT2aBU */ using namespace std;
/* pI1PxiXVh ily traian A8hFT2aBU */ 
/* pI1PxiXVh ily traian A8hFT2aBU */ ifstream cin("acces2.in");
/* pI1PxiXVh ily traian A8hFT2aBU */ ofstream cout("acces2.out");
/* pI1PxiXVh ily traian A8hFT2aBU */ 
/* pI1PxiXVh ily traian A8hFT2aBU */ int n , m , a[1001][1001] , cnt , nrp , nrc , sum , pazi , pomp , ind;
/* pI1PxiXVh ily traian A8hFT2aBU */ char s;
/* pI1PxiXVh ily traian A8hFT2aBU */ 
/* pI1PxiXVh ily traian A8hFT2aBU */ const int di[] = { 0 , 0 , -1 , 1};
/* pI1PxiXVh ily traian A8hFT2aBU */ const int dj[] = {-1 , 1 ,  0 , 0};
/* pI1PxiXVh ily traian A8hFT2aBU */ 
/* pI1PxiXVh ily traian A8hFT2aBU */ struct poz
/* pI1PxiXVh ily traian A8hFT2aBU */ {
/* pI1PxiXVh ily traian A8hFT2aBU */     int i , j;
/* pI1PxiXVh ily traian A8hFT2aBU */ };
/* pI1PxiXVh ily traian A8hFT2aBU */ 
/* pI1PxiXVh ily traian A8hFT2aBU */ int inside(int i , int j)
/* pI1PxiXVh ily traian A8hFT2aBU */ {
/* pI1PxiXVh ily traian A8hFT2aBU */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* pI1PxiXVh ily traian A8hFT2aBU */ }
/* pI1PxiXVh ily traian A8hFT2aBU */ 
/* pI1PxiXVh ily traian A8hFT2aBU */ poz c[1001];
/* pI1PxiXVh ily traian A8hFT2aBU */ 
/* pI1PxiXVh ily traian A8hFT2aBU */ queue <poz> q;
/* pI1PxiXVh ily traian A8hFT2aBU */ 
/* pI1PxiXVh ily traian A8hFT2aBU */ void lee(int i , int j)
/* pI1PxiXVh ily traian A8hFT2aBU */ {
/* pI1PxiXVh ily traian A8hFT2aBU */     poz r;
/* pI1PxiXVh ily traian A8hFT2aBU */     r.i = i , r.j = j;
/* pI1PxiXVh ily traian A8hFT2aBU */     a[r.i][r.j] = ind;
/* pI1PxiXVh ily traian A8hFT2aBU */     q.push(r);
/* pI1PxiXVh ily traian A8hFT2aBU */     while(!q.empty())
/* pI1PxiXVh ily traian A8hFT2aBU */     {
/* pI1PxiXVh ily traian A8hFT2aBU */         poz r;
/* pI1PxiXVh ily traian A8hFT2aBU */         r = q.front();
/* pI1PxiXVh ily traian A8hFT2aBU */         for(int i = 0 ; i < 4 ; i++)
/* pI1PxiXVh ily traian A8hFT2aBU */         {
/* pI1PxiXVh ily traian A8hFT2aBU */             int inou = r.i + di[i];
/* pI1PxiXVh ily traian A8hFT2aBU */             int jnou = r.j + dj[i];
/* pI1PxiXVh ily traian A8hFT2aBU */             if(a[inou][jnou] == -2) nrp++;
/* pI1PxiXVh ily traian A8hFT2aBU */             if(inside(inou , jnou) && (a[inou][jnou] == 0 || a[inou][jnou] == -2))
/* pI1PxiXVh ily traian A8hFT2aBU */             {
/* pI1PxiXVh ily traian A8hFT2aBU */                 a[inou][jnou] = ind;
/* pI1PxiXVh ily traian A8hFT2aBU */                 q.push({inou , jnou});
/* pI1PxiXVh ily traian A8hFT2aBU */             }
/* pI1PxiXVh ily traian A8hFT2aBU */         }
/* pI1PxiXVh ily traian A8hFT2aBU */         q.pop();
/* pI1PxiXVh ily traian A8hFT2aBU */     }
/* pI1PxiXVh ily traian A8hFT2aBU */ }
/* pI1PxiXVh ily traian A8hFT2aBU */ int main()
/* pI1PxiXVh ily traian A8hFT2aBU */ {
/* pI1PxiXVh ily traian A8hFT2aBU */     cin >> n >> m;
/* pI1PxiXVh ily traian A8hFT2aBU */     for(int i = 1 ; i <= n ; i++)
/* pI1PxiXVh ily traian A8hFT2aBU */         for(int j = 1 ; j <= m ; j++)
/* pI1PxiXVh ily traian A8hFT2aBU */     {
/* pI1PxiXVh ily traian A8hFT2aBU */         cin >> s;
/* pI1PxiXVh ily traian A8hFT2aBU */         if(s == '#') a[i][j] = -1;
/* pI1PxiXVh ily traian A8hFT2aBU */         else if(s == '_') a[i][j] = 0;
/* pI1PxiXVh ily traian A8hFT2aBU */         else if(s == 'P') a[i][j] = -2;
/* pI1PxiXVh ily traian A8hFT2aBU */     }
/* pI1PxiXVh ily traian A8hFT2aBU */     for(int i = 1 ; i <= n ; i++)
/* pI1PxiXVh ily traian A8hFT2aBU */         for(int j = 1 ; j <= m ; j++)
/* pI1PxiXVh ily traian A8hFT2aBU */             if(a[i][j] == 0)
/* pI1PxiXVh ily traian A8hFT2aBU */             {
/* pI1PxiXVh ily traian A8hFT2aBU */                 ind++;
/* pI1PxiXVh ily traian A8hFT2aBU */                 nrp = 0;
/* pI1PxiXVh ily traian A8hFT2aBU */                 lee(i , j);
/* pI1PxiXVh ily traian A8hFT2aBU */                 if(nrp > 0) pomp += (nrp - 1);
/* pI1PxiXVh ily traian A8hFT2aBU */                 else nrc++;
/* pI1PxiXVh ily traian A8hFT2aBU */             }
/* pI1PxiXVh ily traian A8hFT2aBU */     if(pomp >= nrc) sum = pomp - nrc;
/* pI1PxiXVh ily traian A8hFT2aBU */     else sum += (2 * (nrc - pomp)) + pomp;
/* pI1PxiXVh ily traian A8hFT2aBU */     cout << sum;
/* pI1PxiXVh ily traian A8hFT2aBU */ }