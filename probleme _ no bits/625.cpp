/* pCZzmVdzK ily traian zaBjbK2ns */ #include <algorithm>
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
/* pCZzmVdzK ily traian zaBjbK2ns */ 
/* pCZzmVdzK ily traian zaBjbK2ns */ using namespace std;
/* pCZzmVdzK ily traian zaBjbK2ns */ ifstream cin("vraji.in");
/* pCZzmVdzK ily traian zaBjbK2ns */ ofstream cout("vraji.out");
/* pCZzmVdzK ily traian zaBjbK2ns */ int n , v , c , cer , cnt , cate , maxi;
/* pCZzmVdzK ily traian zaBjbK2ns */ char vmax[51];
/* pCZzmVdzK ily traian zaBjbK2ns */ int put(int x , int y)
/* pCZzmVdzK ily traian zaBjbK2ns */ {
/* pCZzmVdzK ily traian zaBjbK2ns */     int p = 1;
/* pCZzmVdzK ily traian zaBjbK2ns */     for(int i = 1 ; i <= y ; i++)
/* pCZzmVdzK ily traian zaBjbK2ns */         p *= x;
/* pCZzmVdzK ily traian zaBjbK2ns */     return p;
/* pCZzmVdzK ily traian zaBjbK2ns */ }
/* pCZzmVdzK ily traian zaBjbK2ns */ int vocala(char a)
/* pCZzmVdzK ily traian zaBjbK2ns */ {
/* pCZzmVdzK ily traian zaBjbK2ns */     return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'q' || a == 'w' || a == 'y';
/* pCZzmVdzK ily traian zaBjbK2ns */ }
/* pCZzmVdzK ily traian zaBjbK2ns */ int consoana(char a)
/* pCZzmVdzK ily traian zaBjbK2ns */ {
/* pCZzmVdzK ily traian zaBjbK2ns */     if(a >= 'a' && a <= 'z' && !vocala(a)) return 1;
/* pCZzmVdzK ily traian zaBjbK2ns */     else return 0;
/* pCZzmVdzK ily traian zaBjbK2ns */ }
/* pCZzmVdzK ily traian zaBjbK2ns */ 
/* pCZzmVdzK ily traian zaBjbK2ns */ int calcul(char s[])
/* pCZzmVdzK ily traian zaBjbK2ns */ {
/* pCZzmVdzK ily traian zaBjbK2ns */     int i = 0;
/* pCZzmVdzK ily traian zaBjbK2ns */     int catevoc = 0 , catecons = 0 , f[30] = {0} , suma = 0 , dist = 0;
/* pCZzmVdzK ily traian zaBjbK2ns */     while(s[i] != '\0')
/* pCZzmVdzK ily traian zaBjbK2ns */     {
/* pCZzmVdzK ily traian zaBjbK2ns */         if(vocala(s[i])) catevoc++;
/* pCZzmVdzK ily traian zaBjbK2ns */         if(consoana(s[i])) catecons++;
/* pCZzmVdzK ily traian zaBjbK2ns */         f[s[i] - 'a']++;
/* pCZzmVdzK ily traian zaBjbK2ns */         i++;
/* pCZzmVdzK ily traian zaBjbK2ns */     }
/* pCZzmVdzK ily traian zaBjbK2ns */     for(int j = 0 ; j <= 25 ; j++)
/* pCZzmVdzK ily traian zaBjbK2ns */     {
/* pCZzmVdzK ily traian zaBjbK2ns */         if(f[j]) dist++;
/* pCZzmVdzK ily traian zaBjbK2ns */     }
/* pCZzmVdzK ily traian zaBjbK2ns */     //cout << dist <<'\n';
/* pCZzmVdzK ily traian zaBjbK2ns */     suma = (catevoc * v + catecons * c) / dist + 1;
/* pCZzmVdzK ily traian zaBjbK2ns */     i = 0;
/* pCZzmVdzK ily traian zaBjbK2ns */     int l = 0;
/* pCZzmVdzK ily traian zaBjbK2ns */     while(s[i] != '\0')
/* pCZzmVdzK ily traian zaBjbK2ns */     {
/* pCZzmVdzK ily traian zaBjbK2ns */         if(s[i] == s[i+1])
/* pCZzmVdzK ily traian zaBjbK2ns */         {
/* pCZzmVdzK ily traian zaBjbK2ns */             l = 1;
/* pCZzmVdzK ily traian zaBjbK2ns */             int j = i;
/* pCZzmVdzK ily traian zaBjbK2ns */             while(s[i] == s[j])
/* pCZzmVdzK ily traian zaBjbK2ns */             {
/* pCZzmVdzK ily traian zaBjbK2ns */                 j++ , l++;
/* pCZzmVdzK ily traian zaBjbK2ns */             }
/* pCZzmVdzK ily traian zaBjbK2ns */             if(l > 1 && vocala(s[i])) suma += put(v , l - 1);
/* pCZzmVdzK ily traian zaBjbK2ns */             else if(l > 1 && consoana(s[i])) suma += put(c , l - 1);
/* pCZzmVdzK ily traian zaBjbK2ns */             i = j - 1;
/* pCZzmVdzK ily traian zaBjbK2ns */         }
/* pCZzmVdzK ily traian zaBjbK2ns */         i++;
/* pCZzmVdzK ily traian zaBjbK2ns */         //cout << s[i] << " ";
/* pCZzmVdzK ily traian zaBjbK2ns */     }
/* pCZzmVdzK ily traian zaBjbK2ns */     return suma;
/* pCZzmVdzK ily traian zaBjbK2ns */ }
/* pCZzmVdzK ily traian zaBjbK2ns */ int main()
/* pCZzmVdzK ily traian zaBjbK2ns */ {
/* pCZzmVdzK ily traian zaBjbK2ns */     char s[51];
/* pCZzmVdzK ily traian zaBjbK2ns */     cin >> cer;
/* pCZzmVdzK ily traian zaBjbK2ns */     cin >> n >> v >> c;
/* pCZzmVdzK ily traian zaBjbK2ns */     for(int i = 1 ; i <= n ; i++)
/* pCZzmVdzK ily traian zaBjbK2ns */     {
/* pCZzmVdzK ily traian zaBjbK2ns */         cin >> s;
/* pCZzmVdzK ily traian zaBjbK2ns */         int j = 0 , ok = 0;
/* pCZzmVdzK ily traian zaBjbK2ns */         while(s[j] != '\0')
/* pCZzmVdzK ily traian zaBjbK2ns */         {
/* pCZzmVdzK ily traian zaBjbK2ns */             if(s[j] == s[j-1]) ok = 1;
/* pCZzmVdzK ily traian zaBjbK2ns */             j++;
/* pCZzmVdzK ily traian zaBjbK2ns */         }
/* pCZzmVdzK ily traian zaBjbK2ns */         if(ok == 1) cnt++;
/* pCZzmVdzK ily traian zaBjbK2ns */         if(calcul(s) > maxi)
/* pCZzmVdzK ily traian zaBjbK2ns */         {
/* pCZzmVdzK ily traian zaBjbK2ns */             maxi = calcul(s);
/* pCZzmVdzK ily traian zaBjbK2ns */             cate = 1;
/* pCZzmVdzK ily traian zaBjbK2ns */             strcpy(vmax , s);
/* pCZzmVdzK ily traian zaBjbK2ns */         }
/* pCZzmVdzK ily traian zaBjbK2ns */         else if(calcul(s) == maxi)
/* pCZzmVdzK ily traian zaBjbK2ns */             cate++;
/* pCZzmVdzK ily traian zaBjbK2ns */     }
/* pCZzmVdzK ily traian zaBjbK2ns */     if(cer == 1) cout << cnt;
/* pCZzmVdzK ily traian zaBjbK2ns */     else
/* pCZzmVdzK ily traian zaBjbK2ns */     {
/* pCZzmVdzK ily traian zaBjbK2ns */         cout << cate << " " << vmax;
/* pCZzmVdzK ily traian zaBjbK2ns */     }
/* pCZzmVdzK ily traian zaBjbK2ns */ }