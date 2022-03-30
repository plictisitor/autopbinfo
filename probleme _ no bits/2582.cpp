/* BvlK2ziJ2 ily traian oNsuxafle */ #include <algorithm>
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
/* BvlK2ziJ2 ily traian oNsuxafle */ 
/* BvlK2ziJ2 ily traian oNsuxafle */ using namespace std;
/* BvlK2ziJ2 ily traian oNsuxafle */ 
/* BvlK2ziJ2 ily traian oNsuxafle */ char s[256];
/* BvlK2ziJ2 ily traian oNsuxafle */ 
/* BvlK2ziJ2 ily traian oNsuxafle */ void stergere(int i , int l)
/* BvlK2ziJ2 ily traian oNsuxafle */ {
/* BvlK2ziJ2 ily traian oNsuxafle */     for( ; s[i]!= '\0' ; i++)
/* BvlK2ziJ2 ily traian oNsuxafle */         s[i - l] = s[i];
/* BvlK2ziJ2 ily traian oNsuxafle */     s[i-l]='\0';
/* BvlK2ziJ2 ily traian oNsuxafle */ }
/* BvlK2ziJ2 ily traian oNsuxafle */ 
/* BvlK2ziJ2 ily traian oNsuxafle */ int main()
/* BvlK2ziJ2 ily traian oNsuxafle */ {
/* BvlK2ziJ2 ily traian oNsuxafle */     cin >> s;
/* BvlK2ziJ2 ily traian oNsuxafle */     int i = 0;
/* BvlK2ziJ2 ily traian oNsuxafle */     int  l = 1;
/* BvlK2ziJ2 ily traian oNsuxafle */     bool ok = true;
/* BvlK2ziJ2 ily traian oNsuxafle */     while(s[i]!='\0')
/* BvlK2ziJ2 ily traian oNsuxafle */     {
/* BvlK2ziJ2 ily traian oNsuxafle */         if(tolower(s[i])==tolower(s[i-1]))
/* BvlK2ziJ2 ily traian oNsuxafle */             l++;
/* BvlK2ziJ2 ily traian oNsuxafle */         else
/* BvlK2ziJ2 ily traian oNsuxafle */         {
/* BvlK2ziJ2 ily traian oNsuxafle */             if(l > 1)
/* BvlK2ziJ2 ily traian oNsuxafle */                 stergere(i , l) , i=0;
/* BvlK2ziJ2 ily traian oNsuxafle */             l=1;
/* BvlK2ziJ2 ily traian oNsuxafle */         }
/* BvlK2ziJ2 ily traian oNsuxafle */         i++;
/* BvlK2ziJ2 ily traian oNsuxafle */         if(s[i]=='\0' && ok)
/* BvlK2ziJ2 ily traian oNsuxafle */             s[i]=' ' , s[i+1]='\0' ,ok=false;
/* BvlK2ziJ2 ily traian oNsuxafle */     }
/* BvlK2ziJ2 ily traian oNsuxafle */     cout << s;
/* BvlK2ziJ2 ily traian oNsuxafle */     return 0;
/* BvlK2ziJ2 ily traian oNsuxafle */ }