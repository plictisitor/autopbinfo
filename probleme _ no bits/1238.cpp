/* ULyLcFVEY ily traian 7xIp53eeS */ #include <algorithm>
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
/* ULyLcFVEY ily traian 7xIp53eeS */ 
/* ULyLcFVEY ily traian 7xIp53eeS */ 
/* ULyLcFVEY ily traian 7xIp53eeS */ using namespace std;
/* ULyLcFVEY ily traian 7xIp53eeS */ ifstream cin("labirint.in");
/* ULyLcFVEY ily traian 7xIp53eeS */ ofstream cout("labirint.out");
/* ULyLcFVEY ily traian 7xIp53eeS */ 
/* ULyLcFVEY ily traian 7xIp53eeS */ int a[1001][1001] , b[1001][1001] , n , g;
/* ULyLcFVEY ily traian 7xIp53eeS */ 
/* ULyLcFVEY ily traian 7xIp53eeS */ int di[] = {-1 ,  0 , 0 , 1};
/* ULyLcFVEY ily traian 7xIp53eeS */ int dj[] = { 0 , -1 , 1 , 0};
/* ULyLcFVEY ily traian 7xIp53eeS */ 
/* ULyLcFVEY ily traian 7xIp53eeS */ struct poz
/* ULyLcFVEY ily traian 7xIp53eeS */ {
/* ULyLcFVEY ily traian 7xIp53eeS */     int i,j;
/* ULyLcFVEY ily traian 7xIp53eeS */ };
/* ULyLcFVEY ily traian 7xIp53eeS */ 
/* ULyLcFVEY ily traian 7xIp53eeS */ queue<poz> q;
/* ULyLcFVEY ily traian 7xIp53eeS */ 
/* ULyLcFVEY ily traian 7xIp53eeS */ bool inside(int i,int j)
/* ULyLcFVEY ily traian 7xIp53eeS */ {
/* ULyLcFVEY ily traian 7xIp53eeS */     return i > 0 && j > 0 && i <= n && j <= n;
/* ULyLcFVEY ily traian 7xIp53eeS */ }
/* ULyLcFVEY ily traian 7xIp53eeS */ 
/* ULyLcFVEY ily traian 7xIp53eeS */ int lee(poz start, int v)
/* ULyLcFVEY ily traian 7xIp53eeS */ {
/* ULyLcFVEY ily traian 7xIp53eeS */     if(a[1][1] > v) return 0;
/* ULyLcFVEY ily traian 7xIp53eeS */     for(int i = 1; i <= n; i++)
/* ULyLcFVEY ily traian 7xIp53eeS */         for(int j = 1; j <= n; j++)
/* ULyLcFVEY ily traian 7xIp53eeS */             b[i][j] = 0;
/* ULyLcFVEY ily traian 7xIp53eeS */     q.push(start);
/* ULyLcFVEY ily traian 7xIp53eeS */     b[1][1] = 1;
/* ULyLcFVEY ily traian 7xIp53eeS */     while(!q.empty())
/* ULyLcFVEY ily traian 7xIp53eeS */     {
/* ULyLcFVEY ily traian 7xIp53eeS */         poz x = q.front();
/* ULyLcFVEY ily traian 7xIp53eeS */         for(int d = 0; d < 4; d++)
/* ULyLcFVEY ily traian 7xIp53eeS */         {
/* ULyLcFVEY ily traian 7xIp53eeS */             int inou = x.i + di[d];
/* ULyLcFVEY ily traian 7xIp53eeS */             int jnou = x.j + dj[d];
/* ULyLcFVEY ily traian 7xIp53eeS */             if(inside(inou,jnou) && b[inou][jnou] == 0 && a[inou][jnou] <= v)
/* ULyLcFVEY ily traian 7xIp53eeS */             {
/* ULyLcFVEY ily traian 7xIp53eeS */                     b[inou][jnou] = b[x.i][x.j]+1;
/* ULyLcFVEY ily traian 7xIp53eeS */                     q.push({inou , jnou});
/* ULyLcFVEY ily traian 7xIp53eeS */             }
/* ULyLcFVEY ily traian 7xIp53eeS */         }
/* ULyLcFVEY ily traian 7xIp53eeS */         q.pop();
/* ULyLcFVEY ily traian 7xIp53eeS */     }
/* ULyLcFVEY ily traian 7xIp53eeS */     return b[n][n];
/* ULyLcFVEY ily traian 7xIp53eeS */ }
/* ULyLcFVEY ily traian 7xIp53eeS */ 
/* ULyLcFVEY ily traian 7xIp53eeS */ void cautabin(int st , int dr)
/* ULyLcFVEY ily traian 7xIp53eeS */ {
/* ULyLcFVEY ily traian 7xIp53eeS */     poz x;
/* ULyLcFVEY ily traian 7xIp53eeS */     x.i = 1;
/* ULyLcFVEY ily traian 7xIp53eeS */     x.j = 1;
/* ULyLcFVEY ily traian 7xIp53eeS */     while(st <= dr)
/* ULyLcFVEY ily traian 7xIp53eeS */         {
/* ULyLcFVEY ily traian 7xIp53eeS */             int mij = (st + dr)/2;
/* ULyLcFVEY ily traian 7xIp53eeS */             if(lee(x , mij)) dr = mij - 1;
/* ULyLcFVEY ily traian 7xIp53eeS */             else st = mij + 1;
/* ULyLcFVEY ily traian 7xIp53eeS */         }
/* ULyLcFVEY ily traian 7xIp53eeS */     cout << st;
/* ULyLcFVEY ily traian 7xIp53eeS */ }
/* ULyLcFVEY ily traian 7xIp53eeS */ int main()
/* ULyLcFVEY ily traian 7xIp53eeS */ {
/* ULyLcFVEY ily traian 7xIp53eeS */     cin >> n;
/* ULyLcFVEY ily traian 7xIp53eeS */     for(int i = 1; i <= n; i++)
/* ULyLcFVEY ily traian 7xIp53eeS */         for(int j = 1; j <= n; j++)
/* ULyLcFVEY ily traian 7xIp53eeS */             cin >> a[i][j];
/* ULyLcFVEY ily traian 7xIp53eeS */     cautabin(1 , 100000);
/* ULyLcFVEY ily traian 7xIp53eeS */     return 0;
/* ULyLcFVEY ily traian 7xIp53eeS */ }