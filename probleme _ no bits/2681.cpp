/* qWnE88vTm ily traian EGSa7eS7d */ #include <algorithm>
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
/* qWnE88vTm ily traian EGSa7eS7d */ 
/* qWnE88vTm ily traian EGSa7eS7d */ using namespace std;
/* qWnE88vTm ily traian EGSa7eS7d */ 
/* qWnE88vTm ily traian EGSa7eS7d */ char s[256];
/* qWnE88vTm ily traian EGSa7eS7d */ 
/* qWnE88vTm ily traian EGSa7eS7d */ bool lit(char ch)
/* qWnE88vTm ily traian EGSa7eS7d */ {
/* qWnE88vTm ily traian EGSa7eS7d */     return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
/* qWnE88vTm ily traian EGSa7eS7d */ }
/* qWnE88vTm ily traian EGSa7eS7d */ 
/* qWnE88vTm ily traian EGSa7eS7d */ int lmax()
/* qWnE88vTm ily traian EGSa7eS7d */ {
/* qWnE88vTm ily traian EGSa7eS7d */     int i = 0;
/* qWnE88vTm ily traian EGSa7eS7d */     int cnt = 0 , cntmax=0;
/* qWnE88vTm ily traian EGSa7eS7d */     bool ok = false , okk=true;
/* qWnE88vTm ily traian EGSa7eS7d */     while(s[i]!='\0')
/* qWnE88vTm ily traian EGSa7eS7d */     {
/* qWnE88vTm ily traian EGSa7eS7d */         if(s[i]==' ')
/* qWnE88vTm ily traian EGSa7eS7d */         {
/* qWnE88vTm ily traian EGSa7eS7d */             if(cnt > cntmax && ok)
/* qWnE88vTm ily traian EGSa7eS7d */                 cntmax=cnt;
/* qWnE88vTm ily traian EGSa7eS7d */             cnt = 0 , ok = 0;
/* qWnE88vTm ily traian EGSa7eS7d */         }
/* qWnE88vTm ily traian EGSa7eS7d */         else
/* qWnE88vTm ily traian EGSa7eS7d */         {
/* qWnE88vTm ily traian EGSa7eS7d */             cnt++;
/* qWnE88vTm ily traian EGSa7eS7d */             if(lit(s[i]))
/* qWnE88vTm ily traian EGSa7eS7d */                 ok=true;
/* qWnE88vTm ily traian EGSa7eS7d */         }
/* qWnE88vTm ily traian EGSa7eS7d */         i++;
/* qWnE88vTm ily traian EGSa7eS7d */         if(s[i]=='\0' && okk)
/* qWnE88vTm ily traian EGSa7eS7d */             s[i]=' ' , s[i+1]='\0' , okk=false;
/* qWnE88vTm ily traian EGSa7eS7d */     }
/* qWnE88vTm ily traian EGSa7eS7d */     return cntmax;
/* qWnE88vTm ily traian EGSa7eS7d */ }
/* qWnE88vTm ily traian EGSa7eS7d */ 
/* qWnE88vTm ily traian EGSa7eS7d */ void afisare()
/* qWnE88vTm ily traian EGSa7eS7d */ {
/* qWnE88vTm ily traian EGSa7eS7d */     int i = 0;
/* qWnE88vTm ily traian EGSa7eS7d */     int cnt = 0 , cntmax = lmax();
/* qWnE88vTm ily traian EGSa7eS7d */     bool ok = false , okk = true;
/* qWnE88vTm ily traian EGSa7eS7d */     while(s[i]!='\0')
/* qWnE88vTm ily traian EGSa7eS7d */     {
/* qWnE88vTm ily traian EGSa7eS7d */         if(s[i]==' ')
/* qWnE88vTm ily traian EGSa7eS7d */         {
/* qWnE88vTm ily traian EGSa7eS7d */             if(cnt == cntmax && ok)
/* qWnE88vTm ily traian EGSa7eS7d */             {
/* qWnE88vTm ily traian EGSa7eS7d */                 for(int j = i - 1 ; j >= i - cnt ; --j)
/* qWnE88vTm ily traian EGSa7eS7d */                     cout << s[j];
/* qWnE88vTm ily traian EGSa7eS7d */                 cout << ' ';
/* qWnE88vTm ily traian EGSa7eS7d */             }
/* qWnE88vTm ily traian EGSa7eS7d */             else
/* qWnE88vTm ily traian EGSa7eS7d */             {
/* qWnE88vTm ily traian EGSa7eS7d */                 for(int j = i - cnt ; j <= i ; ++j)
/* qWnE88vTm ily traian EGSa7eS7d */                     cout << s[j];
/* qWnE88vTm ily traian EGSa7eS7d */                 //cout << ' ';
/* qWnE88vTm ily traian EGSa7eS7d */             }
/* qWnE88vTm ily traian EGSa7eS7d */             cnt = 0 , ok = 0;
/* qWnE88vTm ily traian EGSa7eS7d */         }
/* qWnE88vTm ily traian EGSa7eS7d */         else
/* qWnE88vTm ily traian EGSa7eS7d */         {
/* qWnE88vTm ily traian EGSa7eS7d */             cnt++;
/* qWnE88vTm ily traian EGSa7eS7d */             if(lit(s[i]))
/* qWnE88vTm ily traian EGSa7eS7d */                 ok=true;
/* qWnE88vTm ily traian EGSa7eS7d */         }
/* qWnE88vTm ily traian EGSa7eS7d */         i++;
/* qWnE88vTm ily traian EGSa7eS7d */         if(s[i]=='\0' && okk)
/* qWnE88vTm ily traian EGSa7eS7d */             s[i]=' ' , s[i+1]='\0' , okk=false;
/* qWnE88vTm ily traian EGSa7eS7d */     }
/* qWnE88vTm ily traian EGSa7eS7d */ }
/* qWnE88vTm ily traian EGSa7eS7d */ 
/* qWnE88vTm ily traian EGSa7eS7d */ int main()
/* qWnE88vTm ily traian EGSa7eS7d */ {
/* qWnE88vTm ily traian EGSa7eS7d */     cin.getline(s , 256);
/* qWnE88vTm ily traian EGSa7eS7d */     afisare();
/* qWnE88vTm ily traian EGSa7eS7d */     return 0;
/* qWnE88vTm ily traian EGSa7eS7d */ }