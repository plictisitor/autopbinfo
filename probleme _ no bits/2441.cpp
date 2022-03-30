/* LLCZluLUl ily traian 5jwLJ8J4m */ #include <algorithm>
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
/* LLCZluLUl ily traian 5jwLJ8J4m */ using namespace std;
/* LLCZluLUl ily traian 5jwLJ8J4m */ 
/* LLCZluLUl ily traian 5jwLJ8J4m */ int nrcif(const char s[])
/* LLCZluLUl ily traian 5jwLJ8J4m */ {
/* LLCZluLUl ily traian 5jwLJ8J4m */     int i = 0;
/* LLCZluLUl ily traian 5jwLJ8J4m */     int cnt=0;
/* LLCZluLUl ily traian 5jwLJ8J4m */     while(s[i]!='\0')
/* LLCZluLUl ily traian 5jwLJ8J4m */         cnt++ , i++;
/* LLCZluLUl ily traian 5jwLJ8J4m */     return cnt;
/* LLCZluLUl ily traian 5jwLJ8J4m */ }
/* LLCZluLUl ily traian 5jwLJ8J4m */ 
/* LLCZluLUl ily traian 5jwLJ8J4m */ bool nr(int i ,const char s[])
/* LLCZluLUl ily traian 5jwLJ8J4m */ {
/* LLCZluLUl ily traian 5jwLJ8J4m */     return ((int)s[i] >= 65 && (int)s[i] <= 90) || ((int)s[i] >= 97 && (int)s[i] <= 122);
/* LLCZluLUl ily traian 5jwLJ8J4m */ }
/* LLCZluLUl ily traian 5jwLJ8J4m */ 
/* LLCZluLUl ily traian 5jwLJ8J4m */ void SplitText(const char s[], char cuv[100][30], int &n)
/* LLCZluLUl ily traian 5jwLJ8J4m */ {
/* LLCZluLUl ily traian 5jwLJ8J4m */     n = 0;
/* LLCZluLUl ily traian 5jwLJ8J4m */     int i = 0 , j=0;
/* LLCZluLUl ily traian 5jwLJ8J4m */     bool ok=false;
/* LLCZluLUl ily traian 5jwLJ8J4m */     bool fct= false;
/* LLCZluLUl ily traian 5jwLJ8J4m */     while(s[i]!='\0')
/* LLCZluLUl ily traian 5jwLJ8J4m */     {
/* LLCZluLUl ily traian 5jwLJ8J4m */         if(nr(i , s))
/* LLCZluLUl ily traian 5jwLJ8J4m */         {
/* LLCZluLUl ily traian 5jwLJ8J4m */             if(ok)
/* LLCZluLUl ily traian 5jwLJ8J4m */             {
/* LLCZluLUl ily traian 5jwLJ8J4m */                 if(fct==false)
/* LLCZluLUl ily traian 5jwLJ8J4m */                 n++ , ok = false;
/* LLCZluLUl ily traian 5jwLJ8J4m */                 else
/* LLCZluLUl ily traian 5jwLJ8J4m */                     ok=false , fct = false;
/* LLCZluLUl ily traian 5jwLJ8J4m */             }
/* LLCZluLUl ily traian 5jwLJ8J4m */             cuv[n][j]=s[i];
/* LLCZluLUl ily traian 5jwLJ8J4m */             j++;
/* LLCZluLUl ily traian 5jwLJ8J4m */             if(!nr(i+1 , s))
/* LLCZluLUl ily traian 5jwLJ8J4m */                 cuv[n][j]='\0';
/* LLCZluLUl ily traian 5jwLJ8J4m */         }
/* LLCZluLUl ily traian 5jwLJ8J4m */         else
/* LLCZluLUl ily traian 5jwLJ8J4m */         {
/* LLCZluLUl ily traian 5jwLJ8J4m */             if(i == 0)
/* LLCZluLUl ily traian 5jwLJ8J4m */                 fct=true;
/* LLCZluLUl ily traian 5jwLJ8J4m */             j=0;
/* LLCZluLUl ily traian 5jwLJ8J4m */             ok = true;
/* LLCZluLUl ily traian 5jwLJ8J4m */         }
/* LLCZluLUl ily traian 5jwLJ8J4m */         i++;
/* LLCZluLUl ily traian 5jwLJ8J4m */     }
/* LLCZluLUl ily traian 5jwLJ8J4m */     n++;
/* LLCZluLUl ily traian 5jwLJ8J4m */ }
/* LLCZluLUl ily traian 5jwLJ8J4m */ 
/* LLCZluLUl ily traian 5jwLJ8J4m */ int main()
/* LLCZluLUl ily traian 5jwLJ8J4m */ {
/* LLCZluLUl ily traian 5jwLJ8J4m */     char s[100] , m[100][30];
/* LLCZluLUl ily traian 5jwLJ8J4m */     int n=0;
/* LLCZluLUl ily traian 5jwLJ8J4m */     cin.getline(s , 100);
/* LLCZluLUl ily traian 5jwLJ8J4m */     SplitText(s , m, n);
/* LLCZluLUl ily traian 5jwLJ8J4m */     bool pereche=false;
/* LLCZluLUl ily traian 5jwLJ8J4m */     for(int i = 0 ; i < n ; ++i)
/* LLCZluLUl ily traian 5jwLJ8J4m */     {
/* LLCZluLUl ily traian 5jwLJ8J4m */         for(int j = 0 ; j < n ; ++j)
/* LLCZluLUl ily traian 5jwLJ8J4m */         {
/* LLCZluLUl ily traian 5jwLJ8J4m */             if(nrcif(m[j])%2==1 && nrcif(m[i])%2==0)
/* LLCZluLUl ily traian 5jwLJ8J4m */             {
/* LLCZluLUl ily traian 5jwLJ8J4m */                 int poz = nrcif(m[j]) / 2;
/* LLCZluLUl ily traian 5jwLJ8J4m */                 bool pd=true;
/* LLCZluLUl ily traian 5jwLJ8J4m */                 int q = 0 , k = 0;
/* LLCZluLUl ily traian 5jwLJ8J4m */                 while(m[i][q]!='\0')
/* LLCZluLUl ily traian 5jwLJ8J4m */                 {
/* LLCZluLUl ily traian 5jwLJ8J4m */                     if(q==poz)
/* LLCZluLUl ily traian 5jwLJ8J4m */                         q++;
/* LLCZluLUl ily traian 5jwLJ8J4m */                     if(m[i][q]!=m[j][k])
/* LLCZluLUl ily traian 5jwLJ8J4m */                         pd=false;
/* LLCZluLUl ily traian 5jwLJ8J4m */                     q++ , k++;
/* LLCZluLUl ily traian 5jwLJ8J4m */                 }
/* LLCZluLUl ily traian 5jwLJ8J4m */                 if(pd)
/* LLCZluLUl ily traian 5jwLJ8J4m */                     pereche = true;
/* LLCZluLUl ily traian 5jwLJ8J4m */             }
/* LLCZluLUl ily traian 5jwLJ8J4m */         }
/* LLCZluLUl ily traian 5jwLJ8J4m */     }
/* LLCZluLUl ily traian 5jwLJ8J4m */     if(pereche)
/* LLCZluLUl ily traian 5jwLJ8J4m */         cout << "DA";
/* LLCZluLUl ily traian 5jwLJ8J4m */     else
/* LLCZluLUl ily traian 5jwLJ8J4m */         cout << "NU";
/* LLCZluLUl ily traian 5jwLJ8J4m */     return 0;
/* LLCZluLUl ily traian 5jwLJ8J4m */ }