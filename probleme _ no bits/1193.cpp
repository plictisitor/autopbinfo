/* 557I2g2iI ily traian T0J83BglV */ #include <algorithm>
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
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */ using namespace std;
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */ ifstream fin ("cabana.in");
/* 557I2g2iI ily traian T0J83BglV */ ofstream fout("cabana.out");
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */ #define maxn 150010
/* 557I2g2iI ily traian T0J83BglV */ #define inf 1000000001
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */ struct punct
/* 557I2g2iI ily traian T0J83BglV */ {
/* 557I2g2iI ily traian T0J83BglV */     int x,y,i;
/* 557I2g2iI ily traian T0J83BglV */ }v[maxn], v1[maxn], v2[maxn];
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */ bool cmp1 (punct a, punct b)
/* 557I2g2iI ily traian T0J83BglV */ {
/* 557I2g2iI ily traian T0J83BglV */     if (a.x == b.x)
/* 557I2g2iI ily traian T0J83BglV */         return a.y > b.y;
/* 557I2g2iI ily traian T0J83BglV */     return a.x < b.x;
/* 557I2g2iI ily traian T0J83BglV */ }
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */ bool cmp2 (punct a, punct b)
/* 557I2g2iI ily traian T0J83BglV */ {
/* 557I2g2iI ily traian T0J83BglV */     if (a.y == b.y)
/* 557I2g2iI ily traian T0J83BglV */         return a.x < b.x;
/* 557I2g2iI ily traian T0J83BglV */     return a.y > b.y;
/* 557I2g2iI ily traian T0J83BglV */ }
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */ int bit[maxn], whichL[maxn], whichC[maxn], posL[maxn], posC[maxn], pointer[maxn];
/* 557I2g2iI ily traian T0J83BglV */ int sq, p, nr1, nr2, t, n;
/* 557I2g2iI ily traian T0J83BglV */ vector<int> C[maxn], L[maxn];
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */ void create_structure()
/* 557I2g2iI ily traian T0J83BglV */ {
/* 557I2g2iI ily traian T0J83BglV */     sq = sqrt(nr1);
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     v[0].y = -inf;
/* 557I2g2iI ily traian T0J83BglV */     int maxpoint = 0;
/* 557I2g2iI ily traian T0J83BglV */     t = 0;
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     for (int i = 1; i <= nr1; ++i)
/* 557I2g2iI ily traian T0J83BglV */     {
/* 557I2g2iI ily traian T0J83BglV */         if (v[C[i][0]].y > v[maxpoint].y)
/* 557I2g2iI ily traian T0J83BglV */             maxpoint = C[i][0];
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */         if (i % sq == 0)
/* 557I2g2iI ily traian T0J83BglV */         {
/* 557I2g2iI ily traian T0J83BglV */             ++t;
/* 557I2g2iI ily traian T0J83BglV */             bit[t] = maxpoint;
/* 557I2g2iI ily traian T0J83BglV */             maxpoint = 0;
/* 557I2g2iI ily traian T0J83BglV */         }
/* 557I2g2iI ily traian T0J83BglV */     }
/* 557I2g2iI ily traian T0J83BglV */ }
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */ void update (int pos)
/* 557I2g2iI ily traian T0J83BglV */ {
/* 557I2g2iI ily traian T0J83BglV */     int whbit = (pos-1)/sq+1;
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     if (whbit > t)
/* 557I2g2iI ily traian T0J83BglV */         return;
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     int maxpoint = 0;
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     for (int i = (whbit-1)*sq + 1; i <= whbit*sq; ++i)
/* 557I2g2iI ily traian T0J83BglV */     {
/* 557I2g2iI ily traian T0J83BglV */         if (v[C[i][pointer[i]]].y > v[maxpoint].y)
/* 557I2g2iI ily traian T0J83BglV */             maxpoint = C[i][pointer[i]];
/* 557I2g2iI ily traian T0J83BglV */     }
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     bit[whbit] = maxpoint;
/* 557I2g2iI ily traian T0J83BglV */ }
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */ int query (int left, int right)
/* 557I2g2iI ily traian T0J83BglV */ {
/* 557I2g2iI ily traian T0J83BglV */     int maxpoint = 0;
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     if (right - left + 1 <= sq)
/* 557I2g2iI ily traian T0J83BglV */     {
/* 557I2g2iI ily traian T0J83BglV */         for (int i = left; i <= right; ++i)
/* 557I2g2iI ily traian T0J83BglV */         {
/* 557I2g2iI ily traian T0J83BglV */             if (v[C[i][pointer[i]]].y > v[maxpoint].y)
/* 557I2g2iI ily traian T0J83BglV */             {
/* 557I2g2iI ily traian T0J83BglV */                 maxpoint = C[i][pointer[i]];
/* 557I2g2iI ily traian T0J83BglV */             }
/* 557I2g2iI ily traian T0J83BglV */         }
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */         p = whichC[maxpoint];
/* 557I2g2iI ily traian T0J83BglV */         return v[maxpoint].y;
/* 557I2g2iI ily traian T0J83BglV */     }
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     int whleft = (left-1)/sq+1;
/* 557I2g2iI ily traian T0J83BglV */     int whright = (right-1)/sq+1;
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     for (int i = whleft+1; i <= whright-1; ++i)
/* 557I2g2iI ily traian T0J83BglV */     {
/* 557I2g2iI ily traian T0J83BglV */         if (v[bit[i]].y > v[maxpoint].y)
/* 557I2g2iI ily traian T0J83BglV */             maxpoint = bit[i];
/* 557I2g2iI ily traian T0J83BglV */     }
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     for (int i = left; i <= whleft*sq; ++i)
/* 557I2g2iI ily traian T0J83BglV */     {
/* 557I2g2iI ily traian T0J83BglV */         if (v[C[i][pointer[i]]].y > v[maxpoint].y)
/* 557I2g2iI ily traian T0J83BglV */         {
/* 557I2g2iI ily traian T0J83BglV */             maxpoint = C[i][pointer[i]];
/* 557I2g2iI ily traian T0J83BglV */         }
/* 557I2g2iI ily traian T0J83BglV */     }
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     for (int i = (whright-1)*sq +1; i <= right; ++i)
/* 557I2g2iI ily traian T0J83BglV */     {
/* 557I2g2iI ily traian T0J83BglV */         if (v[C[i][pointer[i]]].y > v[maxpoint].y)
/* 557I2g2iI ily traian T0J83BglV */         {
/* 557I2g2iI ily traian T0J83BglV */             maxpoint = C[i][pointer[i]];
/* 557I2g2iI ily traian T0J83BglV */         }
/* 557I2g2iI ily traian T0J83BglV */     }
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     p = whichC[maxpoint];
/* 557I2g2iI ily traian T0J83BglV */     return v[maxpoint].y;
/* 557I2g2iI ily traian T0J83BglV */ }
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */ int main()
/* 557I2g2iI ily traian T0J83BglV */ {
/* 557I2g2iI ily traian T0J83BglV */     fin >> n;
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     for (int i = 1; i <= n; ++i)
/* 557I2g2iI ily traian T0J83BglV */     {
/* 557I2g2iI ily traian T0J83BglV */         fin >> v[i].x >> v[i].y;
/* 557I2g2iI ily traian T0J83BglV */         v1[i].x = v[i].x;
/* 557I2g2iI ily traian T0J83BglV */         v1[i].y = v[i].y;
/* 557I2g2iI ily traian T0J83BglV */         v2[i].x = v[i].x;
/* 557I2g2iI ily traian T0J83BglV */         v2[i].y = v[i].y;
/* 557I2g2iI ily traian T0J83BglV */         v1[i].i = i;
/* 557I2g2iI ily traian T0J83BglV */         v2[i].i = i;
/* 557I2g2iI ily traian T0J83BglV */     }
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     sort(v1+1, v1+n+1, cmp1);
/* 557I2g2iI ily traian T0J83BglV */     sort(v2+1, v2+n+1, cmp2);
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     v1[0].x = -inf;
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     for (int i=1 ; i <= n; ++i)
/* 557I2g2iI ily traian T0J83BglV */     {
/* 557I2g2iI ily traian T0J83BglV */         if (v1[i].x != v1[i-1].x)
/* 557I2g2iI ily traian T0J83BglV */         {
/* 557I2g2iI ily traian T0J83BglV */             ++nr1;
/* 557I2g2iI ily traian T0J83BglV */         }
/* 557I2g2iI ily traian T0J83BglV */         C[nr1].push_back(v1[i].i);
/* 557I2g2iI ily traian T0J83BglV */         whichC[v1[i].i] = nr1;
/* 557I2g2iI ily traian T0J83BglV */         posC[v1[i].i] = C[nr1].size()-1;
/* 557I2g2iI ily traian T0J83BglV */     }
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     v2[0].y = inf;
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     for (int i =1 ; i <= n; ++i)
/* 557I2g2iI ily traian T0J83BglV */     {
/* 557I2g2iI ily traian T0J83BglV */         if (v2[i].y != v2[i-1].y)
/* 557I2g2iI ily traian T0J83BglV */         {
/* 557I2g2iI ily traian T0J83BglV */             ++nr2;
/* 557I2g2iI ily traian T0J83BglV */         }
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */         L[nr2].push_back(v2[i].i);
/* 557I2g2iI ily traian T0J83BglV */         whichL[v2[i].i] = nr2;
/* 557I2g2iI ily traian T0J83BglV */         posL[v2[i].i] = L[nr2].size()-1;
/* 557I2g2iI ily traian T0J83BglV */     }
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     for (int i = 1; i <= nr1; ++i)
/* 557I2g2iI ily traian T0J83BglV */     {
/* 557I2g2iI ily traian T0J83BglV */         pointer[i] = 0;
/* 557I2g2iI ily traian T0J83BglV */         C[i].push_back(0);
/* 557I2g2iI ily traian T0J83BglV */     }
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     create_structure();
/* 557I2g2iI ily traian T0J83BglV */     long long answer = 0;
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     int cnt = 0;
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     while (query(1,nr1) != -inf)
/* 557I2g2iI ily traian T0J83BglV */     {
/* 557I2g2iI ily traian T0J83BglV */         ++cnt;
/* 557I2g2iI ily traian T0J83BglV */         punct LU = v[C[p][pointer[p]]];
/* 557I2g2iI ily traian T0J83BglV */         int whcol = p;
/* 557I2g2iI ily traian T0J83BglV */         int poscol = pointer[p];
/* 557I2g2iI ily traian T0J83BglV */         int whline = whichL[C[p][pointer[p]]];
/* 557I2g2iI ily traian T0J83BglV */         int posline = posL[C[p][pointer[p]]];
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */         if (posline + 1 < L[whline].size() && poscol + 1 < C[whcol].size()-1)
/* 557I2g2iI ily traian T0J83BglV */         {
/* 557I2g2iI ily traian T0J83BglV */             int rightp = L[whline][posline+1];
/* 557I2g2iI ily traian T0J83BglV */             int downp = C[whcol][poscol+1];
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */             punct RU = v[rightp];
/* 557I2g2iI ily traian T0J83BglV */             punct LD = v[downp];
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */             int newcol = whichC[rightp];
/* 557I2g2iI ily traian T0J83BglV */             int posnewcol = posC[rightp];
/* 557I2g2iI ily traian T0J83BglV */             int newline = whichL[downp];
/* 557I2g2iI ily traian T0J83BglV */             int posnewline = posL[downp];
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */             if (posnewcol + 1 < C[newcol].size()-1 && posnewline + 1 < L[newline].size() && C[newcol][posnewcol+1] == L[newline][posnewline+1])
/* 557I2g2iI ily traian T0J83BglV */             {
/* 557I2g2iI ily traian T0J83BglV */                 punct RD = v[C[newcol][posnewcol+1]];
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */                 int rez = query(whcol+1, newcol-1);
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */                 if (rez < RD.y)
/* 557I2g2iI ily traian T0J83BglV */                 {
/* 557I2g2iI ily traian T0J83BglV */                     answer = max(answer, 1LL*(RD.x - LD.x)*(RU.y - RD.y));
/* 557I2g2iI ily traian T0J83BglV */                 }
/* 557I2g2iI ily traian T0J83BglV */             }
/* 557I2g2iI ily traian T0J83BglV */         }
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */         ++pointer[whcol];
/* 557I2g2iI ily traian T0J83BglV */         update(whcol);
/* 557I2g2iI ily traian T0J83BglV */     }
/* 557I2g2iI ily traian T0J83BglV */ 
/* 557I2g2iI ily traian T0J83BglV */     fout << answer;
/* 557I2g2iI ily traian T0J83BglV */ }