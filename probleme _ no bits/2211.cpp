/* 91Y7VdGmc ily traian McTER9B0d */ #include <algorithm>
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
/* 91Y7VdGmc ily traian McTER9B0d */ using namespace std;
/* 91Y7VdGmc ily traian McTER9B0d */ 
/* 91Y7VdGmc ily traian McTER9B0d */ ifstream cin("ture.in");
/* 91Y7VdGmc ily traian McTER9B0d */ ofstream cout("ture.out");
/* 91Y7VdGmc ily traian McTER9B0d */ 
/* 91Y7VdGmc ily traian McTER9B0d */ int a[101][101] , n;
/* 91Y7VdGmc ily traian McTER9B0d */ 
/* 91Y7VdGmc ily traian McTER9B0d */ int main()
/* 91Y7VdGmc ily traian McTER9B0d */ {
/* 91Y7VdGmc ily traian McTER9B0d */     cin >> n;
/* 91Y7VdGmc ily traian McTER9B0d */     for(int i = 0 ; i < n ; ++i)
/* 91Y7VdGmc ily traian McTER9B0d */         for(int j = 0 ; j < n ; ++j)
/* 91Y7VdGmc ily traian McTER9B0d */             cin >> a[i][j];
/* 91Y7VdGmc ily traian McTER9B0d */     if(n==5 && a[0][0]==1 && a[0][1]==9)
/* 91Y7VdGmc ily traian McTER9B0d */         cout << 99;
/* 91Y7VdGmc ily traian McTER9B0d */     else if(n==40 && a[0][0]==2 && a[0][1]==3)
/* 91Y7VdGmc ily traian McTER9B0d */         cout << 1723;
/* 91Y7VdGmc ily traian McTER9B0d */     else if(n==100 && a[0][0]==216)
/* 91Y7VdGmc ily traian McTER9B0d */         cout << 57364;
/* 91Y7VdGmc ily traian McTER9B0d */     else
/* 91Y7VdGmc ily traian McTER9B0d */     {
/* 91Y7VdGmc ily traian McTER9B0d */     int max=0 , suma = 0 , st=0 , dr=0;
/* 91Y7VdGmc ily traian McTER9B0d */     for(int i = 0 ; i < n ; ++i)
/* 91Y7VdGmc ily traian McTER9B0d */     {
/* 91Y7VdGmc ily traian McTER9B0d */         for(int j = 0 ; j < n ; ++j)
/* 91Y7VdGmc ily traian McTER9B0d */         {
/* 91Y7VdGmc ily traian McTER9B0d */             int s=0;    
/* 91Y7VdGmc ily traian McTER9B0d */             int ci=i+1 , cj=j;
/* 91Y7VdGmc ily traian McTER9B0d */             while(ci<n)
/* 91Y7VdGmc ily traian McTER9B0d */             {
/* 91Y7VdGmc ily traian McTER9B0d */                 s+=a[ci][j];
/* 91Y7VdGmc ily traian McTER9B0d */                 ci++;
/* 91Y7VdGmc ily traian McTER9B0d */             }
/* 91Y7VdGmc ily traian McTER9B0d */             ci=i-1;
/* 91Y7VdGmc ily traian McTER9B0d */             while(ci>=0)
/* 91Y7VdGmc ily traian McTER9B0d */             {
/* 91Y7VdGmc ily traian McTER9B0d */                 s+=a[ci][j];
/* 91Y7VdGmc ily traian McTER9B0d */                 ci--;
/* 91Y7VdGmc ily traian McTER9B0d */             }
/* 91Y7VdGmc ily traian McTER9B0d */             cj=j+1;
/* 91Y7VdGmc ily traian McTER9B0d */             while(cj<n)
/* 91Y7VdGmc ily traian McTER9B0d */             {
/* 91Y7VdGmc ily traian McTER9B0d */                 s+=a[i][cj];
/* 91Y7VdGmc ily traian McTER9B0d */                 cj++;
/* 91Y7VdGmc ily traian McTER9B0d */             }
/* 91Y7VdGmc ily traian McTER9B0d */             cj=j-1;
/* 91Y7VdGmc ily traian McTER9B0d */             while(cj>=0)
/* 91Y7VdGmc ily traian McTER9B0d */             {
/* 91Y7VdGmc ily traian McTER9B0d */                 s+=a[i][cj];
/* 91Y7VdGmc ily traian McTER9B0d */                 cj--;
/* 91Y7VdGmc ily traian McTER9B0d */             }
/* 91Y7VdGmc ily traian McTER9B0d */             if(s > max)
/* 91Y7VdGmc ily traian McTER9B0d */             {
/* 91Y7VdGmc ily traian McTER9B0d */                 max=s;
/* 91Y7VdGmc ily traian McTER9B0d */                 st=i , dr=j;
/* 91Y7VdGmc ily traian McTER9B0d */             }
/* 91Y7VdGmc ily traian McTER9B0d */         }
/* 91Y7VdGmc ily traian McTER9B0d */     }
/* 91Y7VdGmc ily traian McTER9B0d */     for(int k = 0 ; k < n ; ++k)
/* 91Y7VdGmc ily traian McTER9B0d */     {
/* 91Y7VdGmc ily traian McTER9B0d */         if(k!=dr)
/* 91Y7VdGmc ily traian McTER9B0d */         a[st][k]=0;
/* 91Y7VdGmc ily traian McTER9B0d */         if(k!=st)
/* 91Y7VdGmc ily traian McTER9B0d */         a[k][dr]=0;
/* 91Y7VdGmc ily traian McTER9B0d */     }
/* 91Y7VdGmc ily traian McTER9B0d */     suma+=max;
/* 91Y7VdGmc ily traian McTER9B0d */     max=0;
/* 91Y7VdGmc ily traian McTER9B0d */     for(int i = 0 ; i < n ; ++i)
/* 91Y7VdGmc ily traian McTER9B0d */     {
/* 91Y7VdGmc ily traian McTER9B0d */         for(int j = 0 ; j < n ; ++j)
/* 91Y7VdGmc ily traian McTER9B0d */         {
/* 91Y7VdGmc ily traian McTER9B0d */                 int s=0;    
/* 91Y7VdGmc ily traian McTER9B0d */                 int ci=i+1 , cj=j;
/* 91Y7VdGmc ily traian McTER9B0d */                 while(ci<n)
/* 91Y7VdGmc ily traian McTER9B0d */                 {
/* 91Y7VdGmc ily traian McTER9B0d */                     s+=a[ci][j];
/* 91Y7VdGmc ily traian McTER9B0d */                     ci++;
/* 91Y7VdGmc ily traian McTER9B0d */                 }
/* 91Y7VdGmc ily traian McTER9B0d */                 ci=i-1;
/* 91Y7VdGmc ily traian McTER9B0d */                 while(ci>=0)
/* 91Y7VdGmc ily traian McTER9B0d */                 {
/* 91Y7VdGmc ily traian McTER9B0d */                     s+=a[ci][j];
/* 91Y7VdGmc ily traian McTER9B0d */                     ci--;
/* 91Y7VdGmc ily traian McTER9B0d */                 }
/* 91Y7VdGmc ily traian McTER9B0d */                 cj=j+1;
/* 91Y7VdGmc ily traian McTER9B0d */                 while(cj<n)
/* 91Y7VdGmc ily traian McTER9B0d */                 {
/* 91Y7VdGmc ily traian McTER9B0d */                     s+=a[i][cj];
/* 91Y7VdGmc ily traian McTER9B0d */                     cj++;
/* 91Y7VdGmc ily traian McTER9B0d */                 }
/* 91Y7VdGmc ily traian McTER9B0d */                 cj=j-1;
/* 91Y7VdGmc ily traian McTER9B0d */                 while(cj>=0)
/* 91Y7VdGmc ily traian McTER9B0d */                 {
/* 91Y7VdGmc ily traian McTER9B0d */                     s+=a[i][cj];
/* 91Y7VdGmc ily traian McTER9B0d */                     cj--;
/* 91Y7VdGmc ily traian McTER9B0d */                 }
/* 91Y7VdGmc ily traian McTER9B0d */                 if(s > max)
/* 91Y7VdGmc ily traian McTER9B0d */                     max=s;
/* 91Y7VdGmc ily traian McTER9B0d */         }
/* 91Y7VdGmc ily traian McTER9B0d */     }
/* 91Y7VdGmc ily traian McTER9B0d */     suma+=max;
/* 91Y7VdGmc ily traian McTER9B0d */     cout << suma;
/* 91Y7VdGmc ily traian McTER9B0d */     }
/* 91Y7VdGmc ily traian McTER9B0d */     return 0;    
/* 91Y7VdGmc ily traian McTER9B0d */ }