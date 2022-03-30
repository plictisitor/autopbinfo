/* wZobtTWil ily traian AzYDV8O7S */ #include <algorithm>
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
/* wZobtTWil ily traian AzYDV8O7S */ using namespace std;
/* wZobtTWil ily traian AzYDV8O7S */ 
/* wZobtTWil ily traian AzYDV8O7S */ char s[101] , m[101][101];
/* wZobtTWil ily traian AzYDV8O7S */ 
/* wZobtTWil ily traian AzYDV8O7S */ bool DO(char a , char b)
/* wZobtTWil ily traian AzYDV8O7S */ {
/* wZobtTWil ily traian AzYDV8O7S */     if(a=='D' && b=='O')
/* wZobtTWil ily traian AzYDV8O7S */         return 1;
/* wZobtTWil ily traian AzYDV8O7S */     return 0;
/* wZobtTWil ily traian AzYDV8O7S */ }
/* wZobtTWil ily traian AzYDV8O7S */ 
/* wZobtTWil ily traian AzYDV8O7S */ bool RE(char a , char b)
/* wZobtTWil ily traian AzYDV8O7S */ {
/* wZobtTWil ily traian AzYDV8O7S */     if(a=='R' && b=='E')
/* wZobtTWil ily traian AzYDV8O7S */         return 1;
/* wZobtTWil ily traian AzYDV8O7S */     return 0;
/* wZobtTWil ily traian AzYDV8O7S */ }
/* wZobtTWil ily traian AzYDV8O7S */ 
/* wZobtTWil ily traian AzYDV8O7S */ bool MI(char a , char b)
/* wZobtTWil ily traian AzYDV8O7S */ {
/* wZobtTWil ily traian AzYDV8O7S */     if(a=='M' && b=='I')
/* wZobtTWil ily traian AzYDV8O7S */         return 1;
/* wZobtTWil ily traian AzYDV8O7S */     return 0;
/* wZobtTWil ily traian AzYDV8O7S */ }
/* wZobtTWil ily traian AzYDV8O7S */ 
/* wZobtTWil ily traian AzYDV8O7S */ bool FA(char a , char b)
/* wZobtTWil ily traian AzYDV8O7S */ {
/* wZobtTWil ily traian AzYDV8O7S */     if(a=='F' && b=='A')
/* wZobtTWil ily traian AzYDV8O7S */         return 1;
/* wZobtTWil ily traian AzYDV8O7S */     return 0;
/* wZobtTWil ily traian AzYDV8O7S */ }
/* wZobtTWil ily traian AzYDV8O7S */ 
/* wZobtTWil ily traian AzYDV8O7S */ bool SOL(char a , char b)
/* wZobtTWil ily traian AzYDV8O7S */ {
/* wZobtTWil ily traian AzYDV8O7S */     if(a=='S' && b=='O')
/* wZobtTWil ily traian AzYDV8O7S */         return 1;
/* wZobtTWil ily traian AzYDV8O7S */     return 0;
/* wZobtTWil ily traian AzYDV8O7S */ }
/* wZobtTWil ily traian AzYDV8O7S */ 
/* wZobtTWil ily traian AzYDV8O7S */ bool LA(char a , char b)
/* wZobtTWil ily traian AzYDV8O7S */ {
/* wZobtTWil ily traian AzYDV8O7S */     if(a=='L' && b=='A')
/* wZobtTWil ily traian AzYDV8O7S */         return 1;
/* wZobtTWil ily traian AzYDV8O7S */     return 0;
/* wZobtTWil ily traian AzYDV8O7S */ }
/* wZobtTWil ily traian AzYDV8O7S */ 
/* wZobtTWil ily traian AzYDV8O7S */ bool SI(char a , char b)
/* wZobtTWil ily traian AzYDV8O7S */ {
/* wZobtTWil ily traian AzYDV8O7S */     if(a=='S' && b=='I')
/* wZobtTWil ily traian AzYDV8O7S */         return 1;
/* wZobtTWil ily traian AzYDV8O7S */     return 0;
/* wZobtTWil ily traian AzYDV8O7S */ }
/* wZobtTWil ily traian AzYDV8O7S */ 
/* wZobtTWil ily traian AzYDV8O7S */ bool oke(int i)
/* wZobtTWil ily traian AzYDV8O7S */ {
/* wZobtTWil ily traian AzYDV8O7S */     int j = 1;
/* wZobtTWil ily traian AzYDV8O7S */     while(m[i][j]!='\0')
/* wZobtTWil ily traian AzYDV8O7S */     {
/* wZobtTWil ily traian AzYDV8O7S */         if(RE(m[i][j-1] , m[i][j]))
/* wZobtTWil ily traian AzYDV8O7S */             return 1;
/* wZobtTWil ily traian AzYDV8O7S */         if(DO(m[i][j-1] , m[i][j]))
/* wZobtTWil ily traian AzYDV8O7S */             return 1;
/* wZobtTWil ily traian AzYDV8O7S */         if(MI(m[i][j-1] , m[i][j]))
/* wZobtTWil ily traian AzYDV8O7S */             return 1;
/* wZobtTWil ily traian AzYDV8O7S */         if(FA(m[i][j-1] , m[i][j]))
/* wZobtTWil ily traian AzYDV8O7S */             return 1;
/* wZobtTWil ily traian AzYDV8O7S */         if(SOL(m[i][j-1] , m[i][j]) && m[i][j+1] == 'L')
/* wZobtTWil ily traian AzYDV8O7S */             return 1;
/* wZobtTWil ily traian AzYDV8O7S */         if(LA(m[i][j-1] , m[i][j]))
/* wZobtTWil ily traian AzYDV8O7S */             return 1;
/* wZobtTWil ily traian AzYDV8O7S */         if(SI(m[i][j-1] , m[i][j]))
/* wZobtTWil ily traian AzYDV8O7S */             return 1;
/* wZobtTWil ily traian AzYDV8O7S */         j++;
/* wZobtTWil ily traian AzYDV8O7S */     }
/* wZobtTWil ily traian AzYDV8O7S */ }
/* wZobtTWil ily traian AzYDV8O7S */ 
/* wZobtTWil ily traian AzYDV8O7S */ int main()
/* wZobtTWil ily traian AzYDV8O7S */ {
/* wZobtTWil ily traian AzYDV8O7S */     cin.getline(s , 101);
/* wZobtTWil ily traian AzYDV8O7S */     bool ok = true;
/* wZobtTWil ily traian AzYDV8O7S */     int cnt = 1 , j = 0;
/* wZobtTWil ily traian AzYDV8O7S */     int i = 0;
/* wZobtTWil ily traian AzYDV8O7S */     while(s[i]!='\0')
/* wZobtTWil ily traian AzYDV8O7S */     {
/* wZobtTWil ily traian AzYDV8O7S */         if(s[i]==' ' && s[i-1]!=' ')
/* wZobtTWil ily traian AzYDV8O7S */         {
/* wZobtTWil ily traian AzYDV8O7S */             cnt++;
/* wZobtTWil ily traian AzYDV8O7S */             j=0;
/* wZobtTWil ily traian AzYDV8O7S */         }
/* wZobtTWil ily traian AzYDV8O7S */         else
/* wZobtTWil ily traian AzYDV8O7S */             m[cnt][j]=s[i] , j++;
/* wZobtTWil ily traian AzYDV8O7S */         i++;
/* wZobtTWil ily traian AzYDV8O7S */     }
/* wZobtTWil ily traian AzYDV8O7S */     int r = 0;
/* wZobtTWil ily traian AzYDV8O7S */     for(int i = 1 ; i <= cnt ; ++i)
/* wZobtTWil ily traian AzYDV8O7S */     {
/* wZobtTWil ily traian AzYDV8O7S */         if(oke(i))
/* wZobtTWil ily traian AzYDV8O7S */             cout << m[i] << endl , r++;
/* wZobtTWil ily traian AzYDV8O7S */     }
/* wZobtTWil ily traian AzYDV8O7S */     if(!r)
/* wZobtTWil ily traian AzYDV8O7S */         cout << "nu exista";
/* wZobtTWil ily traian AzYDV8O7S */     return 0;
/* wZobtTWil ily traian AzYDV8O7S */ }