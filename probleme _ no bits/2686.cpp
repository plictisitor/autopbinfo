/* YC8g6Klq0 ily traian pE5mwJBQS */ #include <algorithm>
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
/* YC8g6Klq0 ily traian pE5mwJBQS */ 
/* YC8g6Klq0 ily traian pE5mwJBQS */ using namespace std;
/* YC8g6Klq0 ily traian pE5mwJBQS */ 
/* YC8g6Klq0 ily traian pE5mwJBQS */ char m[260][260];
/* YC8g6Klq0 ily traian pE5mwJBQS */ int tygo = 0;
/* YC8g6Klq0 ily traian pE5mwJBQS */ 
/* YC8g6Klq0 ily traian pE5mwJBQS */ bool lit(char ch)
/* YC8g6Klq0 ily traian pE5mwJBQS */ {
/* YC8g6Klq0 ily traian pE5mwJBQS */     return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
/* YC8g6Klq0 ily traian pE5mwJBQS */ }
/* YC8g6Klq0 ily traian pE5mwJBQS */ 
/* YC8g6Klq0 ily traian pE5mwJBQS */ bool ok(char s[])
/* YC8g6Klq0 ily traian pE5mwJBQS */ {
/* YC8g6Klq0 ily traian pE5mwJBQS */     int i = 0;
/* YC8g6Klq0 ily traian pE5mwJBQS */     while(s[i])
/* YC8g6Klq0 ily traian pE5mwJBQS */     {
/* YC8g6Klq0 ily traian pE5mwJBQS */         if(lit(s[i]))
/* YC8g6Klq0 ily traian pE5mwJBQS */             return 1;
/* YC8g6Klq0 ily traian pE5mwJBQS */         i++;
/* YC8g6Klq0 ily traian pE5mwJBQS */     }
/* YC8g6Klq0 ily traian pE5mwJBQS */     return 0;
/* YC8g6Klq0 ily traian pE5mwJBQS */ }
/* YC8g6Klq0 ily traian pE5mwJBQS */ 
/* YC8g6Klq0 ily traian pE5mwJBQS */ int sca(char s[])
/* YC8g6Klq0 ily traian pE5mwJBQS */ {
/* YC8g6Klq0 ily traian pE5mwJBQS */     int i = 0;
/* YC8g6Klq0 ily traian pE5mwJBQS */     int sum = 0;
/* YC8g6Klq0 ily traian pE5mwJBQS */     while(s[i])
/* YC8g6Klq0 ily traian pE5mwJBQS */     {
/* YC8g6Klq0 ily traian pE5mwJBQS */         sum+=(int)s[i];
/* YC8g6Klq0 ily traian pE5mwJBQS */         i++;
/* YC8g6Klq0 ily traian pE5mwJBQS */     }
/* YC8g6Klq0 ily traian pE5mwJBQS */     return sum;
/* YC8g6Klq0 ily traian pE5mwJBQS */ }
/* YC8g6Klq0 ily traian pE5mwJBQS */ 
/* YC8g6Klq0 ily traian pE5mwJBQS */ void sterg(char s[])
/* YC8g6Klq0 ily traian pE5mwJBQS */ {
/* YC8g6Klq0 ily traian pE5mwJBQS */     s[0]='\0';
/* YC8g6Klq0 ily traian pE5mwJBQS */ }
/* YC8g6Klq0 ily traian pE5mwJBQS */ 
/* YC8g6Klq0 ily traian pE5mwJBQS */ int main()
/* YC8g6Klq0 ily traian pE5mwJBQS */ {
/* YC8g6Klq0 ily traian pE5mwJBQS */     char s[256];
/* YC8g6Klq0 ily traian pE5mwJBQS */     cin.getline(s , 300);
/* YC8g6Klq0 ily traian pE5mwJBQS */     int i = 0 , cnt = 1 , j = 0;
/* YC8g6Klq0 ily traian pE5mwJBQS */     while(s[i]!='\0')
/* YC8g6Klq0 ily traian pE5mwJBQS */     {
/* YC8g6Klq0 ily traian pE5mwJBQS */         if(s[i]!=' ')
/* YC8g6Klq0 ily traian pE5mwJBQS */         {
/* YC8g6Klq0 ily traian pE5mwJBQS */             m[cnt][j]=s[i];
/* YC8g6Klq0 ily traian pE5mwJBQS */             j++;
/* YC8g6Klq0 ily traian pE5mwJBQS */         }
/* YC8g6Klq0 ily traian pE5mwJBQS */         if(s[i]==' ' && s[i+1]!=' ')
/* YC8g6Klq0 ily traian pE5mwJBQS */         {
/* YC8g6Klq0 ily traian pE5mwJBQS */             cnt++;
/* YC8g6Klq0 ily traian pE5mwJBQS */             j=0;
/* YC8g6Klq0 ily traian pE5mwJBQS */         }
/* YC8g6Klq0 ily traian pE5mwJBQS */         i++;
/* YC8g6Klq0 ily traian pE5mwJBQS */     }
/* YC8g6Klq0 ily traian pE5mwJBQS */     int v[101];
/* YC8g6Klq0 ily traian pE5mwJBQS */     for( i = 1 ; i <= cnt ; ++i)
/* YC8g6Klq0 ily traian pE5mwJBQS */         if(ok(m[i]))
/* YC8g6Klq0 ily traian pE5mwJBQS */         v[i] = sca(m[i]);
/* YC8g6Klq0 ily traian pE5mwJBQS */     for( i = 1 ; i <= cnt ; ++i)
/* YC8g6Klq0 ily traian pE5mwJBQS */         for(j = i  ; j <= cnt ; ++j)
/* YC8g6Klq0 ily traian pE5mwJBQS */             if(v[i] >= v[j])
/* YC8g6Klq0 ily traian pE5mwJBQS */                 swap(v[i] , v[j]);
/* YC8g6Klq0 ily traian pE5mwJBQS */     for( i = 1 ; i <= cnt ; ++i)
/* YC8g6Klq0 ily traian pE5mwJBQS */     {
/* YC8g6Klq0 ily traian pE5mwJBQS */         bool oky = false;
/* YC8g6Klq0 ily traian pE5mwJBQS */         for(j = 1 ; j <= cnt ; ++j)
/* YC8g6Klq0 ily traian pE5mwJBQS */             {
/* YC8g6Klq0 ily traian pE5mwJBQS */                 if(sca(m[j])==v[i] && ok(m[j]))
/* YC8g6Klq0 ily traian pE5mwJBQS */                     oky=true;
/* YC8g6Klq0 ily traian pE5mwJBQS */             }
/* YC8g6Klq0 ily traian pE5mwJBQS */         if(v[i]!=v[i-1] && v[i]!=0 && oky)
/* YC8g6Klq0 ily traian pE5mwJBQS */         {
/* YC8g6Klq0 ily traian pE5mwJBQS */             cout << v[i] << ' ';
/* YC8g6Klq0 ily traian pE5mwJBQS */             for(j = 1 ; j <= cnt ; ++j)
/* YC8g6Klq0 ily traian pE5mwJBQS */             {
/* YC8g6Klq0 ily traian pE5mwJBQS */                 if(sca(m[j])==v[i] && ok(m[j]))
/* YC8g6Klq0 ily traian pE5mwJBQS */                     cout << m[j] << ' ';
/* YC8g6Klq0 ily traian pE5mwJBQS */             }
/* YC8g6Klq0 ily traian pE5mwJBQS */             tygo++;
/* YC8g6Klq0 ily traian pE5mwJBQS */             if(i != cnt)
/* YC8g6Klq0 ily traian pE5mwJBQS */             cout << endl;
/* YC8g6Klq0 ily traian pE5mwJBQS */         }
/* YC8g6Klq0 ily traian pE5mwJBQS */     }
/* YC8g6Klq0 ily traian pE5mwJBQS */     if(!tygo)
/* YC8g6Klq0 ily traian pE5mwJBQS */         cout << "NU EXISTA";
/* YC8g6Klq0 ily traian pE5mwJBQS */     return 0;
/* YC8g6Klq0 ily traian pE5mwJBQS */ }