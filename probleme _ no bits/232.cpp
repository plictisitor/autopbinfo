/* LQGl5v5pZ ily traian AntEhUNCd */ #include <algorithm>
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
/* LQGl5v5pZ ily traian AntEhUNCd */ using namespace std;
/* LQGl5v5pZ ily traian AntEhUNCd */ 
/* LQGl5v5pZ ily traian AntEhUNCd */ int main()
/* LQGl5v5pZ ily traian AntEhUNCd */ {
/* LQGl5v5pZ ily traian AntEhUNCd */     char a[101];
/* LQGl5v5pZ ily traian AntEhUNCd */     cin.getline(a , 101);
/* LQGl5v5pZ ily traian AntEhUNCd */     int i = 0;
/* LQGl5v5pZ ily traian AntEhUNCd */     while(a[i]!='\0')
/* LQGl5v5pZ ily traian AntEhUNCd */     {
/* LQGl5v5pZ ily traian AntEhUNCd */         if((a[i]=='0') || (a[i]=='1') || (a[i]=='2') || (a[i]=='3') || (a[i]=='4') || (a[i]=='5') || (a[i]=='6') || (a[i]=='7') || (a[i]=='8') || (a[i]=='9'))
/* LQGl5v5pZ ily traian AntEhUNCd */         {
/* LQGl5v5pZ ily traian AntEhUNCd */             int ci = i;
/* LQGl5v5pZ ily traian AntEhUNCd */             bool ok=0;
/* LQGl5v5pZ ily traian AntEhUNCd */             while(a[i]!=' ' && a[i]!='\0')
/* LQGl5v5pZ ily traian AntEhUNCd */             {
/* LQGl5v5pZ ily traian AntEhUNCd */                 if(a[i]=='.')
/* LQGl5v5pZ ily traian AntEhUNCd */                     ok=1;
/* LQGl5v5pZ ily traian AntEhUNCd */                 i++;    
/* LQGl5v5pZ ily traian AntEhUNCd */             }
/* LQGl5v5pZ ily traian AntEhUNCd */             if(!ok)
/* LQGl5v5pZ ily traian AntEhUNCd */                 i=ci;
/* LQGl5v5pZ ily traian AntEhUNCd */             if(a[i]=='\0')
/* LQGl5v5pZ ily traian AntEhUNCd */                 break;
/* LQGl5v5pZ ily traian AntEhUNCd */         }
/* LQGl5v5pZ ily traian AntEhUNCd */         cout << a[i];
/* LQGl5v5pZ ily traian AntEhUNCd */         i++;    
/* LQGl5v5pZ ily traian AntEhUNCd */     }
/* LQGl5v5pZ ily traian AntEhUNCd */     return 0;    
/* LQGl5v5pZ ily traian AntEhUNCd */ }