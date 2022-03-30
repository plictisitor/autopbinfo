/* ELcSMqQZx ily traian m175UXdcz */ #include <algorithm>
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
/* ELcSMqQZx ily traian m175UXdcz */ using namespace std;
/* ELcSMqQZx ily traian m175UXdcz */ 
/* ELcSMqQZx ily traian m175UXdcz */ int main()
/* ELcSMqQZx ily traian m175UXdcz */ {
/* ELcSMqQZx ily traian m175UXdcz */     char mat[255][255];
/* ELcSMqQZx ily traian m175UXdcz */     char s[256];
/* ELcSMqQZx ily traian m175UXdcz */     cin.getline(s , 300);
/* ELcSMqQZx ily traian m175UXdcz */     int i = 0 , j = 0 , cnt=-1;
/* ELcSMqQZx ily traian m175UXdcz */     bool ok = false;
/* ELcSMqQZx ily traian m175UXdcz */     while(s[i]!='\0')
/* ELcSMqQZx ily traian m175UXdcz */     {
/* ELcSMqQZx ily traian m175UXdcz */         if(((int)s[i]>=65 && (int)s[i]<=91) || ((int) s[i] <= 122 && (int)s[i]>96))
/* ELcSMqQZx ily traian m175UXdcz */         {
/* ELcSMqQZx ily traian m175UXdcz */             if(!ok)
/* ELcSMqQZx ily traian m175UXdcz */             {
/* ELcSMqQZx ily traian m175UXdcz */                 cnt++;
/* ELcSMqQZx ily traian m175UXdcz */                 ok = true;
/* ELcSMqQZx ily traian m175UXdcz */             }
/* ELcSMqQZx ily traian m175UXdcz */             mat[cnt][j]=s[i] , j++;
/* ELcSMqQZx ily traian m175UXdcz */         }
/* ELcSMqQZx ily traian m175UXdcz */         else
/* ELcSMqQZx ily traian m175UXdcz */             j=0 , ok = false;
/* ELcSMqQZx ily traian m175UXdcz */         i++;
/* ELcSMqQZx ily traian m175UXdcz */     }
/* ELcSMqQZx ily traian m175UXdcz */     if(cnt%2==0)
/* ELcSMqQZx ily traian m175UXdcz */     {
/* ELcSMqQZx ily traian m175UXdcz */         for(int i = 0 ; i < cnt / 2 ; ++i)
/* ELcSMqQZx ily traian m175UXdcz */         {
/* ELcSMqQZx ily traian m175UXdcz */             cout << mat[i] << endl << mat[cnt - i] << endl;
/* ELcSMqQZx ily traian m175UXdcz */         }
/* ELcSMqQZx ily traian m175UXdcz */         cout << mat[cnt/2];
/* ELcSMqQZx ily traian m175UXdcz */     }
/* ELcSMqQZx ily traian m175UXdcz */     else
/* ELcSMqQZx ily traian m175UXdcz */     {
/* ELcSMqQZx ily traian m175UXdcz */         for(int i = 0 ; i <= cnt / 2 ; ++i)
/* ELcSMqQZx ily traian m175UXdcz */         {
/* ELcSMqQZx ily traian m175UXdcz */             cout << mat[i] << endl << mat[cnt - i] << endl;
/* ELcSMqQZx ily traian m175UXdcz */         }
/* ELcSMqQZx ily traian m175UXdcz */     }
/* ELcSMqQZx ily traian m175UXdcz */     return 0;
/* ELcSMqQZx ily traian m175UXdcz */ }