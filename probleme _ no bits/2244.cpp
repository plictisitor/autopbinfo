/* 162EumEWj ily traian 2flkk29Jm */ #include <algorithm>
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
/* 162EumEWj ily traian 2flkk29Jm */ using namespace std;
/* 162EumEWj ily traian 2flkk29Jm */ 
/* 162EumEWj ily traian 2flkk29Jm */ ifstream cin("traseucalmax.in");
/* 162EumEWj ily traian 2flkk29Jm */ ofstream cout("traseucalmax.out");
/* 162EumEWj ily traian 2flkk29Jm */ 
/* 162EumEWj ily traian 2flkk29Jm */ int n , m , is , js , ib , jb , a[11][11] , cnt , b[11][11] , maxi;
/* 162EumEWj ily traian 2flkk29Jm */ 
/* 162EumEWj ily traian 2flkk29Jm */ const int dic[] = {-2 , -2 , -1 , 1 , 2 ,  2 ,  1 , -1};
/* 162EumEWj ily traian 2flkk29Jm */ const int djc[] = {-1 ,  1 ,  2 , 2 , 1 , -1 , -2 , -2};
/* 162EumEWj ily traian 2flkk29Jm */ 
/* 162EumEWj ily traian 2flkk29Jm */ int inside(int i , int j)
/* 162EumEWj ily traian 2flkk29Jm */ {
/* 162EumEWj ily traian 2flkk29Jm */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* 162EumEWj ily traian 2flkk29Jm */ }
/* 162EumEWj ily traian 2flkk29Jm */ 
/* 162EumEWj ily traian 2flkk29Jm */ void copie()
/* 162EumEWj ily traian 2flkk29Jm */ {
/* 162EumEWj ily traian 2flkk29Jm */     for(int i = 1 ; i <= n ; i++)
/* 162EumEWj ily traian 2flkk29Jm */         for(int j = 1 ; j <= m ; j++)
/* 162EumEWj ily traian 2flkk29Jm */             b[i][j] = a[i][j];
/* 162EumEWj ily traian 2flkk29Jm */     cnt++;
/* 162EumEWj ily traian 2flkk29Jm */ }
/* 162EumEWj ily traian 2flkk29Jm */ 
/* 162EumEWj ily traian 2flkk29Jm */ void afis()
/* 162EumEWj ily traian 2flkk29Jm */ {
/* 162EumEWj ily traian 2flkk29Jm */     for(int i = 1 ; i <= n ; i++)
/* 162EumEWj ily traian 2flkk29Jm */     {
/* 162EumEWj ily traian 2flkk29Jm */         for(int j = 1 ; j <= m ; j++)
/* 162EumEWj ily traian 2flkk29Jm */         if(b[i][j] == -1) cout << 0 << " ";
/* 162EumEWj ily traian 2flkk29Jm */             else cout << b[i][j] << " ";
/* 162EumEWj ily traian 2flkk29Jm */         cout << '\n';
/* 162EumEWj ily traian 2flkk29Jm */     }
/* 162EumEWj ily traian 2flkk29Jm */ }
/* 162EumEWj ily traian 2flkk29Jm */ 
/* 162EumEWj ily traian 2flkk29Jm */ void back(int i , int j , int pas)
/* 162EumEWj ily traian 2flkk29Jm */ {
/* 162EumEWj ily traian 2flkk29Jm */     for(int d = 0 ; d < 8 ; d++)
/* 162EumEWj ily traian 2flkk29Jm */     {
/* 162EumEWj ily traian 2flkk29Jm */         int inou = i + dic[d];
/* 162EumEWj ily traian 2flkk29Jm */         int jnou = j + djc[d];
/* 162EumEWj ily traian 2flkk29Jm */         if(inside(inou , jnou) && a[inou][jnou] == 0)
/* 162EumEWj ily traian 2flkk29Jm */         {
/* 162EumEWj ily traian 2flkk29Jm */             a[inou][jnou] = pas;
/* 162EumEWj ily traian 2flkk29Jm */             if(inou == n && jnou == m && pas > maxi)
/* 162EumEWj ily traian 2flkk29Jm */             {
/* 162EumEWj ily traian 2flkk29Jm */                 maxi = pas;
/* 162EumEWj ily traian 2flkk29Jm */                 copie();
/* 162EumEWj ily traian 2flkk29Jm */             }
/* 162EumEWj ily traian 2flkk29Jm */             else back(inou , jnou , pas + 1);
/* 162EumEWj ily traian 2flkk29Jm */             a[inou][jnou] = 0;
/* 162EumEWj ily traian 2flkk29Jm */         }
/* 162EumEWj ily traian 2flkk29Jm */     }
/* 162EumEWj ily traian 2flkk29Jm */ }
/* 162EumEWj ily traian 2flkk29Jm */ int main()
/* 162EumEWj ily traian 2flkk29Jm */ {
/* 162EumEWj ily traian 2flkk29Jm */     cin >> n >> m;
/* 162EumEWj ily traian 2flkk29Jm */     for(int i = 1 ; i <= n ; i++)
/* 162EumEWj ily traian 2flkk29Jm */         for(int j = 1 ; j <= m ; j++)
/* 162EumEWj ily traian 2flkk29Jm */             cin >> a[i][j] , a[i][j] = -a[i][j];
/* 162EumEWj ily traian 2flkk29Jm */ 
/* 162EumEWj ily traian 2flkk29Jm */     a[1][1] = 1;
/* 162EumEWj ily traian 2flkk29Jm */     back(1 , 1 , 2);
/* 162EumEWj ily traian 2flkk29Jm */     afis();
/* 162EumEWj ily traian 2flkk29Jm */     if(cnt == 0)
/* 162EumEWj ily traian 2flkk29Jm */         for(int i = 1 ; i <= n ; i++)
/* 162EumEWj ily traian 2flkk29Jm */         {
/* 162EumEWj ily traian 2flkk29Jm */             for(int j = 1 ; j <= m ; j++)
/* 162EumEWj ily traian 2flkk29Jm */                 cout << 0 << " ";
/* 162EumEWj ily traian 2flkk29Jm */             cout << '\n';
/* 162EumEWj ily traian 2flkk29Jm */         }
/* 162EumEWj ily traian 2flkk29Jm */     return 0;
/* 162EumEWj ily traian 2flkk29Jm */ }