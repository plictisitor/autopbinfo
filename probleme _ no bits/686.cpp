/* LdnIXKQZ0 ily traian UwWTICB7X */ #include <algorithm>
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
/* LdnIXKQZ0 ily traian UwWTICB7X */ 
/* LdnIXKQZ0 ily traian UwWTICB7X */ using namespace std;
/* LdnIXKQZ0 ily traian UwWTICB7X */ 
/* LdnIXKQZ0 ily traian UwWTICB7X */ ifstream cin("grad.in");
/* LdnIXKQZ0 ily traian UwWTICB7X */ ofstream cout("grad.out");
/* LdnIXKQZ0 ily traian UwWTICB7X */ 
/* LdnIXKQZ0 ily traian UwWTICB7X */ char s[256];
/* LdnIXKQZ0 ily traian UwWTICB7X */ 
/* LdnIXKQZ0 ily traian UwWTICB7X */ int grad(char s[])
/* LdnIXKQZ0 ily traian UwWTICB7X */ {
/* LdnIXKQZ0 ily traian UwWTICB7X */     int k = strlen(s);
/* LdnIXKQZ0 ily traian UwWTICB7X */     int div[27] = {0} , g = 1;
/* LdnIXKQZ0 ily traian UwWTICB7X */     for(int i = 1 ; i <= k ; i++)
/* LdnIXKQZ0 ily traian UwWTICB7X */     {
/* LdnIXKQZ0 ily traian UwWTICB7X */         int n = s[i - 1] - 'a' + 1;
/* LdnIXKQZ0 ily traian UwWTICB7X */         int d = 2;
/* LdnIXKQZ0 ily traian UwWTICB7X */         while(n > 1)
/* LdnIXKQZ0 ily traian UwWTICB7X */         {
/* LdnIXKQZ0 ily traian UwWTICB7X */             int p = 0;
/* LdnIXKQZ0 ily traian UwWTICB7X */             while(n % d == 0) p++ , n /= d;
/* LdnIXKQZ0 ily traian UwWTICB7X */             if(p)
/* LdnIXKQZ0 ily traian UwWTICB7X */             {
/* LdnIXKQZ0 ily traian UwWTICB7X */                 p *= i;
/* LdnIXKQZ0 ily traian UwWTICB7X */                 div[d] += p;
/* LdnIXKQZ0 ily traian UwWTICB7X */                 //cout << d << " " << p << endl;
/* LdnIXKQZ0 ily traian UwWTICB7X */             }
/* LdnIXKQZ0 ily traian UwWTICB7X */             d++;
/* LdnIXKQZ0 ily traian UwWTICB7X */         }
/* LdnIXKQZ0 ily traian UwWTICB7X */     }
/* LdnIXKQZ0 ily traian UwWTICB7X */     //for(int i = 1 ; i <= 26 ; i++)
/* LdnIXKQZ0 ily traian UwWTICB7X */         //cout << div[i] << endl;
/* LdnIXKQZ0 ily traian UwWTICB7X */     for(int i = 1 ; i <= 26 ; i++)
/* LdnIXKQZ0 ily traian UwWTICB7X */         g = g * (div[i] + 1) % k;
/* LdnIXKQZ0 ily traian UwWTICB7X */         //cout << g << endl;
/* LdnIXKQZ0 ily traian UwWTICB7X */     return g;
/* LdnIXKQZ0 ily traian UwWTICB7X */ }
/* LdnIXKQZ0 ily traian UwWTICB7X */ 
/* LdnIXKQZ0 ily traian UwWTICB7X */ int main()
/* LdnIXKQZ0 ily traian UwWTICB7X */ {
/* LdnIXKQZ0 ily traian UwWTICB7X */     char s[256] , *p;
/* LdnIXKQZ0 ily traian UwWTICB7X */     cin.getline(s , 256);
/* LdnIXKQZ0 ily traian UwWTICB7X */     int g = 0;
/* LdnIXKQZ0 ily traian UwWTICB7X */     p = strtok(s , " ");
/* LdnIXKQZ0 ily traian UwWTICB7X */     while(p != 0)
/* LdnIXKQZ0 ily traian UwWTICB7X */     {
/* LdnIXKQZ0 ily traian UwWTICB7X */         g += grad(p);
/* LdnIXKQZ0 ily traian UwWTICB7X */         p = strtok(NULL , " ");
/* LdnIXKQZ0 ily traian UwWTICB7X */     }
/* LdnIXKQZ0 ily traian UwWTICB7X */     cout << g;
/* LdnIXKQZ0 ily traian UwWTICB7X */     return 0;
/* LdnIXKQZ0 ily traian UwWTICB7X */ }