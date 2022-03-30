/* VWbfZMr5m ily traian j9YSCntSR */ #include <algorithm>
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
/* VWbfZMr5m ily traian j9YSCntSR */ using namespace std;
/* VWbfZMr5m ily traian j9YSCntSR */ 
/* VWbfZMr5m ily traian j9YSCntSR */ int main()
/* VWbfZMr5m ily traian j9YSCntSR */ {
/* VWbfZMr5m ily traian j9YSCntSR */     char ch[300];
/* VWbfZMr5m ily traian j9YSCntSR */     cin.getline(ch , 300);
/* VWbfZMr5m ily traian j9YSCntSR */     int i = 0;
/* VWbfZMr5m ily traian j9YSCntSR */     int ok=0;
/* VWbfZMr5m ily traian j9YSCntSR */     int c=0;
/* VWbfZMr5m ily traian j9YSCntSR */     int cnt=0;
/* VWbfZMr5m ily traian j9YSCntSR */     while(ch[i]!='\0')
/* VWbfZMr5m ily traian j9YSCntSR */     {
/* VWbfZMr5m ily traian j9YSCntSR */         if(ch[i]==' ')
/* VWbfZMr5m ily traian j9YSCntSR */         {
/* VWbfZMr5m ily traian j9YSCntSR */             if(cnt%2==1 && cnt > 2)
/* VWbfZMr5m ily traian j9YSCntSR */             {
/* VWbfZMr5m ily traian j9YSCntSR */                 c++;
/* VWbfZMr5m ily traian j9YSCntSR */             }
/* VWbfZMr5m ily traian j9YSCntSR */             cnt=0;
/* VWbfZMr5m ily traian j9YSCntSR */         }
/* VWbfZMr5m ily traian j9YSCntSR */         else
/* VWbfZMr5m ily traian j9YSCntSR */             cnt++;
/* VWbfZMr5m ily traian j9YSCntSR */         i++;
/* VWbfZMr5m ily traian j9YSCntSR */         if(ch[i]=='\0' && ok==0)
/* VWbfZMr5m ily traian j9YSCntSR */         {
/* VWbfZMr5m ily traian j9YSCntSR */             ch[i]=' ' , ch[i+1]='\0' , ok++;
/* VWbfZMr5m ily traian j9YSCntSR */         }
/* VWbfZMr5m ily traian j9YSCntSR */     }
/* VWbfZMr5m ily traian j9YSCntSR */     if(c)
/* VWbfZMr5m ily traian j9YSCntSR */     {
/* VWbfZMr5m ily traian j9YSCntSR */         i=0;
/* VWbfZMr5m ily traian j9YSCntSR */         while(ch[i]!='\0')
/* VWbfZMr5m ily traian j9YSCntSR */         {
/* VWbfZMr5m ily traian j9YSCntSR */             if(ch[i]==' ')
/* VWbfZMr5m ily traian j9YSCntSR */             {
/* VWbfZMr5m ily traian j9YSCntSR */                 if(cnt%2==1 && cnt > 2)
/* VWbfZMr5m ily traian j9YSCntSR */                 {
/* VWbfZMr5m ily traian j9YSCntSR */                     i-=cnt;
/* VWbfZMr5m ily traian j9YSCntSR */                     int mij = i + cnt/2;
/* VWbfZMr5m ily traian j9YSCntSR */                     while(ch[i]!=' ')
/* VWbfZMr5m ily traian j9YSCntSR */                     {
/* VWbfZMr5m ily traian j9YSCntSR */                         if(i!=mij)
/* VWbfZMr5m ily traian j9YSCntSR */                             cout << ch[i];
/* VWbfZMr5m ily traian j9YSCntSR */                         i++;
/* VWbfZMr5m ily traian j9YSCntSR */                     }
/* VWbfZMr5m ily traian j9YSCntSR */                     cout << ' ';
/* VWbfZMr5m ily traian j9YSCntSR */                 }
/* VWbfZMr5m ily traian j9YSCntSR */                 else
/* VWbfZMr5m ily traian j9YSCntSR */                 {
/* VWbfZMr5m ily traian j9YSCntSR */                     i-=cnt;
/* VWbfZMr5m ily traian j9YSCntSR */                     while(ch[i]!=' ')
/* VWbfZMr5m ily traian j9YSCntSR */                     {
/* VWbfZMr5m ily traian j9YSCntSR */                         cout << ch[i];
/* VWbfZMr5m ily traian j9YSCntSR */                         i++;
/* VWbfZMr5m ily traian j9YSCntSR */                     }
/* VWbfZMr5m ily traian j9YSCntSR */                     cout << ' ';
/* VWbfZMr5m ily traian j9YSCntSR */                 }
/* VWbfZMr5m ily traian j9YSCntSR */                 cnt=0;
/* VWbfZMr5m ily traian j9YSCntSR */             }
/* VWbfZMr5m ily traian j9YSCntSR */             else
/* VWbfZMr5m ily traian j9YSCntSR */                 cnt++;
/* VWbfZMr5m ily traian j9YSCntSR */             i++;
/* VWbfZMr5m ily traian j9YSCntSR */         }
/* VWbfZMr5m ily traian j9YSCntSR */     }
/* VWbfZMr5m ily traian j9YSCntSR */     else
/* VWbfZMr5m ily traian j9YSCntSR */         cout << "nu exista";
/* VWbfZMr5m ily traian j9YSCntSR */     return 0;
/* VWbfZMr5m ily traian j9YSCntSR */ }