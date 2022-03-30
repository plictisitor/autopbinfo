/* hks9jJjwN ily traian KLP4CNy5A */ #include <algorithm>
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
/* hks9jJjwN ily traian KLP4CNy5A */ using namespace std;
/* hks9jJjwN ily traian KLP4CNy5A */ 
/* hks9jJjwN ily traian KLP4CNy5A */ int f[1000];
/* hks9jJjwN ily traian KLP4CNy5A */ char s[1000];
/* hks9jJjwN ily traian KLP4CNy5A */ 
/* hks9jJjwN ily traian KLP4CNy5A */ void init()
/* hks9jJjwN ily traian KLP4CNy5A */ {
/* hks9jJjwN ily traian KLP4CNy5A */     for(int i = 1 ; i <= 1000 ; ++i)
/* hks9jJjwN ily traian KLP4CNy5A */         f[i]=0;
/* hks9jJjwN ily traian KLP4CNy5A */ }
/* hks9jJjwN ily traian KLP4CNy5A */ 
/* hks9jJjwN ily traian KLP4CNy5A */ bool verif(int i)
/* hks9jJjwN ily traian KLP4CNy5A */ {
/* hks9jJjwN ily traian KLP4CNy5A */     init();
/* hks9jJjwN ily traian KLP4CNy5A */     for( ; s[i]!=' ' && s[i]!='\0' ; ++i)
/* hks9jJjwN ily traian KLP4CNy5A */         f[(int)s[i]]++;
/* hks9jJjwN ily traian KLP4CNy5A */     for(int i = 50 ; i < 200 ; ++i)
/* hks9jJjwN ily traian KLP4CNy5A */         if(f[i]>1)
/* hks9jJjwN ily traian KLP4CNy5A */             return 0;
/* hks9jJjwN ily traian KLP4CNy5A */     return 1;
/* hks9jJjwN ily traian KLP4CNy5A */ }
/* hks9jJjwN ily traian KLP4CNy5A */ 
/* hks9jJjwN ily traian KLP4CNy5A */ int lung(int i)
/* hks9jJjwN ily traian KLP4CNy5A */ {
/* hks9jJjwN ily traian KLP4CNy5A */     int cnt = 0;
/* hks9jJjwN ily traian KLP4CNy5A */     for( ; s[i]!=' ' && s[i]!='\0' ; ++i)
/* hks9jJjwN ily traian KLP4CNy5A */         cnt++;
/* hks9jJjwN ily traian KLP4CNy5A */     return cnt;
/* hks9jJjwN ily traian KLP4CNy5A */ }
/* hks9jJjwN ily traian KLP4CNy5A */ 
/* hks9jJjwN ily traian KLP4CNy5A */ void afis(int i)
/* hks9jJjwN ily traian KLP4CNy5A */ {
/* hks9jJjwN ily traian KLP4CNy5A */     for( ; s[i] != ' ' && s[i]!='\0' ; ++i)
/* hks9jJjwN ily traian KLP4CNy5A */         cout << s[i];
/* hks9jJjwN ily traian KLP4CNy5A */ }
/* hks9jJjwN ily traian KLP4CNy5A */ 
/* hks9jJjwN ily traian KLP4CNy5A */ int main()
/* hks9jJjwN ily traian KLP4CNy5A */ {
/* hks9jJjwN ily traian KLP4CNy5A */     int ind = -1;
/* hks9jJjwN ily traian KLP4CNy5A */     int max=0;
/* hks9jJjwN ily traian KLP4CNy5A */     cin.getline(s , 300);
/* hks9jJjwN ily traian KLP4CNy5A */     if(verif(0))
/* hks9jJjwN ily traian KLP4CNy5A */         ind = 0 , max = lung(0);
/* hks9jJjwN ily traian KLP4CNy5A */     int i=0;
/* hks9jJjwN ily traian KLP4CNy5A */     while(s[i]!='\0')
/* hks9jJjwN ily traian KLP4CNy5A */     {
/* hks9jJjwN ily traian KLP4CNy5A */         if(s[i]==' ' && s[i+1]!=' ' && s[i+1]!='\0')
/* hks9jJjwN ily traian KLP4CNy5A */             if(verif(i+1) && lung(i+1)>max)
/* hks9jJjwN ily traian KLP4CNy5A */                 ind = i+1 , max = lung(i+1);
/* hks9jJjwN ily traian KLP4CNy5A */         i++;
/* hks9jJjwN ily traian KLP4CNy5A */     }
/* hks9jJjwN ily traian KLP4CNy5A */     if(ind!=-1)
/* hks9jJjwN ily traian KLP4CNy5A */     afis(ind);
/* hks9jJjwN ily traian KLP4CNy5A */     else
/* hks9jJjwN ily traian KLP4CNy5A */         cout << -1;
/* hks9jJjwN ily traian KLP4CNy5A */     return 0;
/* hks9jJjwN ily traian KLP4CNy5A */ }