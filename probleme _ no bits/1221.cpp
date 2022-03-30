/* pHS63x6fU ily traian IkCCeab7s */ #include <algorithm>
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
/* pHS63x6fU ily traian IkCCeab7s */ using namespace std;
/* pHS63x6fU ily traian IkCCeab7s */ 
/* pHS63x6fU ily traian IkCCeab7s */ ifstream cin("piesesah.in");
/* pHS63x6fU ily traian IkCCeab7s */ ofstream cout("piesesah.out");
/* pHS63x6fU ily traian IkCCeab7s */ 
/* pHS63x6fU ily traian IkCCeab7s */ const int dit[] = {-1 , 0 , 1 ,  0};///tura
/* pHS63x6fU ily traian IkCCeab7s */ const int djt[] = { 0 , 1 , 0 , -1};
/* pHS63x6fU ily traian IkCCeab7s */ const int dip[] = {-1 , -1 , 1 ,  1};///pion si nebun
/* pHS63x6fU ily traian IkCCeab7s */ const int djp[] = { 1 , -1 , 1 , -1};
/* pHS63x6fU ily traian IkCCeab7s */ const int dir[] = {-1 , -1 , -1 ,  0 , 0 ,  1 , 1 , 1};///rege si regina
/* pHS63x6fU ily traian IkCCeab7s */ const int djr[] = {-1 ,  0 ,  1 , -1 , 1 , -1 , 0 , 1};
/* pHS63x6fU ily traian IkCCeab7s */ const int dic[] = {-2 , -2 , -1 , 1 , 2 ,  2 ,  1 , -1};///cal
/* pHS63x6fU ily traian IkCCeab7s */ const int djc[] = {-1 ,  1 ,  2 , 2 , 1 , -1 , -2 , -2};
/* pHS63x6fU ily traian IkCCeab7s */ 
/* pHS63x6fU ily traian IkCCeab7s */ struct piese
/* pHS63x6fU ily traian IkCCeab7s */ {
/* pHS63x6fU ily traian IkCCeab7s */     char t;
/* pHS63x6fU ily traian IkCCeab7s */     int i , j;
/* pHS63x6fU ily traian IkCCeab7s */ };
/* pHS63x6fU ily traian IkCCeab7s */ int a[1001][1001] , n;
/* pHS63x6fU ily traian IkCCeab7s */ piese p[1000001];
/* pHS63x6fU ily traian IkCCeab7s */ 
/* pHS63x6fU ily traian IkCCeab7s */ int inside(int i , int j)
/* pHS63x6fU ily traian IkCCeab7s */ {
/* pHS63x6fU ily traian IkCCeab7s */     return i >= 1 && i <= n  && j >= 1 && j <= n;
/* pHS63x6fU ily traian IkCCeab7s */ }
/* pHS63x6fU ily traian IkCCeab7s */ 
/* pHS63x6fU ily traian IkCCeab7s */ void tura(int x , int y)
/* pHS63x6fU ily traian IkCCeab7s */ {
/* pHS63x6fU ily traian IkCCeab7s */     for(int k = 0 ; k < 4 ; k++)
/* pHS63x6fU ily traian IkCCeab7s */     {
/* pHS63x6fU ily traian IkCCeab7s */         int i = x + dit[k];
/* pHS63x6fU ily traian IkCCeab7s */         int j = y + djt[k];
/* pHS63x6fU ily traian IkCCeab7s */         while(inside(i , j) && a[i][j] != 2)
/* pHS63x6fU ily traian IkCCeab7s */         {
/* pHS63x6fU ily traian IkCCeab7s */             a[i][j] = 1;
/* pHS63x6fU ily traian IkCCeab7s */             i += dit[k];
/* pHS63x6fU ily traian IkCCeab7s */             j += djt[k];
/* pHS63x6fU ily traian IkCCeab7s */         }
/* pHS63x6fU ily traian IkCCeab7s */     }
/* pHS63x6fU ily traian IkCCeab7s */ }
/* pHS63x6fU ily traian IkCCeab7s */ 
/* pHS63x6fU ily traian IkCCeab7s */ void nebun(int x , int y)
/* pHS63x6fU ily traian IkCCeab7s */ {
/* pHS63x6fU ily traian IkCCeab7s */     for(int k = 0 ; k < 4 ; k++)
/* pHS63x6fU ily traian IkCCeab7s */     {
/* pHS63x6fU ily traian IkCCeab7s */         int i = x + dip[k];
/* pHS63x6fU ily traian IkCCeab7s */         int j = y + djp[k];
/* pHS63x6fU ily traian IkCCeab7s */         while(inside(i , j) && a[i][j] != 2)
/* pHS63x6fU ily traian IkCCeab7s */         {
/* pHS63x6fU ily traian IkCCeab7s */             a[i][j] = 1;
/* pHS63x6fU ily traian IkCCeab7s */             i += dip[k];
/* pHS63x6fU ily traian IkCCeab7s */             j += djp[k];
/* pHS63x6fU ily traian IkCCeab7s */         }
/* pHS63x6fU ily traian IkCCeab7s */     }
/* pHS63x6fU ily traian IkCCeab7s */ }
/* pHS63x6fU ily traian IkCCeab7s */ 
/* pHS63x6fU ily traian IkCCeab7s */ void regina(int x , int y)
/* pHS63x6fU ily traian IkCCeab7s */ {
/* pHS63x6fU ily traian IkCCeab7s */     for(int k = 0 ; k < 8 ; k++)
/* pHS63x6fU ily traian IkCCeab7s */     {
/* pHS63x6fU ily traian IkCCeab7s */         int i = x + dir[k];
/* pHS63x6fU ily traian IkCCeab7s */         int j = y + djr[k];
/* pHS63x6fU ily traian IkCCeab7s */         while(inside(i , j) && a[i][j] != 2)
/* pHS63x6fU ily traian IkCCeab7s */         {
/* pHS63x6fU ily traian IkCCeab7s */             a[i][j] = 1;
/* pHS63x6fU ily traian IkCCeab7s */             i += dir[k];
/* pHS63x6fU ily traian IkCCeab7s */             j += djr[k];
/* pHS63x6fU ily traian IkCCeab7s */         }
/* pHS63x6fU ily traian IkCCeab7s */     }
/* pHS63x6fU ily traian IkCCeab7s */ }
/* pHS63x6fU ily traian IkCCeab7s */ 
/* pHS63x6fU ily traian IkCCeab7s */ void rege(int x , int y)
/* pHS63x6fU ily traian IkCCeab7s */ {
/* pHS63x6fU ily traian IkCCeab7s */     for(int k = 0 ; k < 8 ; k++)
/* pHS63x6fU ily traian IkCCeab7s */     {
/* pHS63x6fU ily traian IkCCeab7s */         int i = x + dir[k];
/* pHS63x6fU ily traian IkCCeab7s */         int j = y + djr[k];
/* pHS63x6fU ily traian IkCCeab7s */         if(inside(i , j) && a[i][j] == 0) a[i][j] = 1;
/* pHS63x6fU ily traian IkCCeab7s */     }
/* pHS63x6fU ily traian IkCCeab7s */ }
/* pHS63x6fU ily traian IkCCeab7s */ 
/* pHS63x6fU ily traian IkCCeab7s */ void cal(int x , int y)
/* pHS63x6fU ily traian IkCCeab7s */ {
/* pHS63x6fU ily traian IkCCeab7s */     for(int k = 0 ; k < 8 ; k++)
/* pHS63x6fU ily traian IkCCeab7s */     {
/* pHS63x6fU ily traian IkCCeab7s */         int i = x + dic[k];
/* pHS63x6fU ily traian IkCCeab7s */         int j = y + djc[k];
/* pHS63x6fU ily traian IkCCeab7s */         if(inside(i , j) && a[i][j] == 0) a[i][j] = 1;
/* pHS63x6fU ily traian IkCCeab7s */     }
/* pHS63x6fU ily traian IkCCeab7s */ }
/* pHS63x6fU ily traian IkCCeab7s */ 
/* pHS63x6fU ily traian IkCCeab7s */ void pion(int x , int y)
/* pHS63x6fU ily traian IkCCeab7s */ {
/* pHS63x6fU ily traian IkCCeab7s */     for(int k = 0 ; k < 4 ; k++)
/* pHS63x6fU ily traian IkCCeab7s */     {
/* pHS63x6fU ily traian IkCCeab7s */         int i = x + dip[k];
/* pHS63x6fU ily traian IkCCeab7s */         int j = y + djp[k];
/* pHS63x6fU ily traian IkCCeab7s */         if(inside(i , j) && a[i][j] == 0) a[i][j] = 1;
/* pHS63x6fU ily traian IkCCeab7s */     }
/* pHS63x6fU ily traian IkCCeab7s */ }
/* pHS63x6fU ily traian IkCCeab7s */ int main()
/* pHS63x6fU ily traian IkCCeab7s */ {
/* pHS63x6fU ily traian IkCCeab7s */     int m , t , x , y;
/* pHS63x6fU ily traian IkCCeab7s */     cin >> n >> m >> t;
/* pHS63x6fU ily traian IkCCeab7s */     for(int i = 1 ; i <= m ; i++)
/* pHS63x6fU ily traian IkCCeab7s */     {
/* pHS63x6fU ily traian IkCCeab7s */         cin >> p[i].t >> p[i].i >> p[i].j;
/* pHS63x6fU ily traian IkCCeab7s */         a[p[i].i][p[i].j] = 2;
/* pHS63x6fU ily traian IkCCeab7s */     }
/* pHS63x6fU ily traian IkCCeab7s */     for(int i = 1 ; i <= m ; i++)
/* pHS63x6fU ily traian IkCCeab7s */     {
/* pHS63x6fU ily traian IkCCeab7s */         if(p[i].t == 'n') nebun(p[i].i , p[i].j);
/* pHS63x6fU ily traian IkCCeab7s */         if(p[i].t == 't') tura(p[i].i , p[i].j);
/* pHS63x6fU ily traian IkCCeab7s */         if(p[i].t == 'q') regina(p[i].i , p[i].j);
/* pHS63x6fU ily traian IkCCeab7s */         if(p[i].t == 'c') cal(p[i].i , p[i].j);
/* pHS63x6fU ily traian IkCCeab7s */         if(p[i].t == 'p') pion(p[i].i , p[i].j);
/* pHS63x6fU ily traian IkCCeab7s */         if(p[i].t == 'r') rege(p[i].i , p[i].j);
/* pHS63x6fU ily traian IkCCeab7s */     }
/* pHS63x6fU ily traian IkCCeab7s */     for(int i = 1 ; i <= t ; i++)
/* pHS63x6fU ily traian IkCCeab7s */     {
/* pHS63x6fU ily traian IkCCeab7s */         cin >> x >> y;
/* pHS63x6fU ily traian IkCCeab7s */         cout << a[x][y] << '\n';
/* pHS63x6fU ily traian IkCCeab7s */     }
/* pHS63x6fU ily traian IkCCeab7s */ }