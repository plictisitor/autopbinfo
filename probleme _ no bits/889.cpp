/* jGOEWMrGz ily traian yqK1KNJkh */ #include <algorithm>
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
/* jGOEWMrGz ily traian yqK1KNJkh */ 
/* jGOEWMrGz ily traian yqK1KNJkh */ using namespace std;
/* jGOEWMrGz ily traian yqK1KNJkh */ 
/* jGOEWMrGz ily traian yqK1KNJkh */ char a[200][200] , b[200][200] , r[200][200] , p;
/* jGOEWMrGz ily traian yqK1KNJkh */ 
/* jGOEWMrGz ily traian yqK1KNJkh */ bool egale(int i , int j)
/* jGOEWMrGz ily traian yqK1KNJkh */ {
/* jGOEWMrGz ily traian yqK1KNJkh */     bool ok = true;
/* jGOEWMrGz ily traian yqK1KNJkh */     for(int k = 0 ; k < max(strlen(a[i]) , strlen(b[j])) ; ++k)
/* jGOEWMrGz ily traian yqK1KNJkh */         if(tolower(a[i][k])!=tolower(b[j][k]))
/* jGOEWMrGz ily traian yqK1KNJkh */             ok=false;
/* jGOEWMrGz ily traian yqK1KNJkh */     return ok;
/* jGOEWMrGz ily traian yqK1KNJkh */ }
/* jGOEWMrGz ily traian yqK1KNJkh */ 
/* jGOEWMrGz ily traian yqK1KNJkh */ int main()
/* jGOEWMrGz ily traian yqK1KNJkh */ {
/* jGOEWMrGz ily traian yqK1KNJkh */     char s[300];
/* jGOEWMrGz ily traian yqK1KNJkh */     cin.getline(s , 300);
/* jGOEWMrGz ily traian yqK1KNJkh */     int i = 0 , j = 0 , cnt = 0;
/* jGOEWMrGz ily traian yqK1KNJkh */     while(s[i]!='\0')
/* jGOEWMrGz ily traian yqK1KNJkh */         i++;
/* jGOEWMrGz ily traian yqK1KNJkh */     s[i]=' ';
/* jGOEWMrGz ily traian yqK1KNJkh */     s[i+1]='\0';
/* jGOEWMrGz ily traian yqK1KNJkh */     i=0;
/* jGOEWMrGz ily traian yqK1KNJkh */     while(s[i]!='\0')
/* jGOEWMrGz ily traian yqK1KNJkh */     {
/* jGOEWMrGz ily traian yqK1KNJkh */         if(s[i]!=' ')
/* jGOEWMrGz ily traian yqK1KNJkh */         {
/* jGOEWMrGz ily traian yqK1KNJkh */             a[cnt][j]=s[i];
/* jGOEWMrGz ily traian yqK1KNJkh */             j++;
/* jGOEWMrGz ily traian yqK1KNJkh */         }
/* jGOEWMrGz ily traian yqK1KNJkh */         else
/* jGOEWMrGz ily traian yqK1KNJkh */         {
/* jGOEWMrGz ily traian yqK1KNJkh */             j=0;
/* jGOEWMrGz ily traian yqK1KNJkh */             if(s[i+1]!=' ')
/* jGOEWMrGz ily traian yqK1KNJkh */                 cnt++;
/* jGOEWMrGz ily traian yqK1KNJkh */         }
/* jGOEWMrGz ily traian yqK1KNJkh */         i++;
/* jGOEWMrGz ily traian yqK1KNJkh */     }
/* jGOEWMrGz ily traian yqK1KNJkh */     int n = cnt;
/* jGOEWMrGz ily traian yqK1KNJkh */     cin.getline(s , 300);
/* jGOEWMrGz ily traian yqK1KNJkh */     i = 0 , j = 0 ; cnt = 0;
/* jGOEWMrGz ily traian yqK1KNJkh */     while(s[i]!='\0')
/* jGOEWMrGz ily traian yqK1KNJkh */         i++;
/* jGOEWMrGz ily traian yqK1KNJkh */     s[i]=' ';
/* jGOEWMrGz ily traian yqK1KNJkh */     s[i+1]='\0';
/* jGOEWMrGz ily traian yqK1KNJkh */     i=0;
/* jGOEWMrGz ily traian yqK1KNJkh */     while(s[i]!='\0')
/* jGOEWMrGz ily traian yqK1KNJkh */     {
/* jGOEWMrGz ily traian yqK1KNJkh */         if(s[i]!=' ')
/* jGOEWMrGz ily traian yqK1KNJkh */         {
/* jGOEWMrGz ily traian yqK1KNJkh */             b[cnt][j]=s[i];
/* jGOEWMrGz ily traian yqK1KNJkh */             j++;
/* jGOEWMrGz ily traian yqK1KNJkh */         }
/* jGOEWMrGz ily traian yqK1KNJkh */         else
/* jGOEWMrGz ily traian yqK1KNJkh */             cnt++ , j=0;
/* jGOEWMrGz ily traian yqK1KNJkh */         i++;
/* jGOEWMrGz ily traian yqK1KNJkh */     }
/* jGOEWMrGz ily traian yqK1KNJkh */     int m = cnt;
/* jGOEWMrGz ily traian yqK1KNJkh */     cnt=0;
/* jGOEWMrGz ily traian yqK1KNJkh */     for(int i = 0 ; i < n ; ++i)
/* jGOEWMrGz ily traian yqK1KNJkh */     {
/* jGOEWMrGz ily traian yqK1KNJkh */         for(int j = 0 ; j < m ; ++j)
/* jGOEWMrGz ily traian yqK1KNJkh */         {
/* jGOEWMrGz ily traian yqK1KNJkh */             if(egale(i , j))
/* jGOEWMrGz ily traian yqK1KNJkh */             {
/* jGOEWMrGz ily traian yqK1KNJkh */                 int q = 0;
/* jGOEWMrGz ily traian yqK1KNJkh */                 while(a[i][q]!='\0')
/* jGOEWMrGz ily traian yqK1KNJkh */                 {
/* jGOEWMrGz ily traian yqK1KNJkh */                     r[p][q]=tolower(a[i][q]);
/* jGOEWMrGz ily traian yqK1KNJkh */                     q++;
/* jGOEWMrGz ily traian yqK1KNJkh */                 }
/* jGOEWMrGz ily traian yqK1KNJkh */                 p++;
/* jGOEWMrGz ily traian yqK1KNJkh */             }
/* jGOEWMrGz ily traian yqK1KNJkh */         }
/* jGOEWMrGz ily traian yqK1KNJkh */     }
/* jGOEWMrGz ily traian yqK1KNJkh */     for(int i = 0 ; i < p ; ++i)
/* jGOEWMrGz ily traian yqK1KNJkh */     {
/* jGOEWMrGz ily traian yqK1KNJkh */         for(int j = i + 1 ; j < p ; ++j)
/* jGOEWMrGz ily traian yqK1KNJkh */         {
/* jGOEWMrGz ily traian yqK1KNJkh */             if(strcmp(r[i] , r[j]) > 0)
/* jGOEWMrGz ily traian yqK1KNJkh */                 swap(r[i] , r[j]);
/* jGOEWMrGz ily traian yqK1KNJkh */         }
/* jGOEWMrGz ily traian yqK1KNJkh */     }
/* jGOEWMrGz ily traian yqK1KNJkh */     for(int i = 0 ; i < p ; ++i)
/* jGOEWMrGz ily traian yqK1KNJkh */     {
/* jGOEWMrGz ily traian yqK1KNJkh */         for(int j = i + 1 ; j < p ; ++j)
/* jGOEWMrGz ily traian yqK1KNJkh */         {
/* jGOEWMrGz ily traian yqK1KNJkh */             if(strcmp(r[i] , r[j]) == 0)
/* jGOEWMrGz ily traian yqK1KNJkh */                 r[j][0]='\0';
/* jGOEWMrGz ily traian yqK1KNJkh */         }
/* jGOEWMrGz ily traian yqK1KNJkh */     }
/* jGOEWMrGz ily traian yqK1KNJkh */     for(int i = 0 ; i < p ; ++i)
/* jGOEWMrGz ily traian yqK1KNJkh */     {
/* jGOEWMrGz ily traian yqK1KNJkh */         if(r[i][0]!='\0')
/* jGOEWMrGz ily traian yqK1KNJkh */             cout << r[i] << endl;
/* jGOEWMrGz ily traian yqK1KNJkh */     }
/* jGOEWMrGz ily traian yqK1KNJkh */     return 0;
/* jGOEWMrGz ily traian yqK1KNJkh */ }