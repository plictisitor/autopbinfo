/* rDwqAQycz ily traian C6GbtXcb4 */ #include <algorithm>
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
/* rDwqAQycz ily traian C6GbtXcb4 */ using namespace std;
/* rDwqAQycz ily traian C6GbtXcb4 */ 
/* rDwqAQycz ily traian C6GbtXcb4 */ int main()
/* rDwqAQycz ily traian C6GbtXcb4 */ {
/* rDwqAQycz ily traian C6GbtXcb4 */     char ch[260];
/* rDwqAQycz ily traian C6GbtXcb4 */     cin.getline(ch , 260);
/* rDwqAQycz ily traian C6GbtXcb4 */     int l=0 , cnt=0;
/* rDwqAQycz ily traian C6GbtXcb4 */     int i = 0;
/* rDwqAQycz ily traian C6GbtXcb4 */     int ok=0;
/* rDwqAQycz ily traian C6GbtXcb4 */     while(ch[i]!='\0')
/* rDwqAQycz ily traian C6GbtXcb4 */     {
/* rDwqAQycz ily traian C6GbtXcb4 */         if(ch[i]==' ')
/* rDwqAQycz ily traian C6GbtXcb4 */         {
/* rDwqAQycz ily traian C6GbtXcb4 */             if(l==cnt)
/* rDwqAQycz ily traian C6GbtXcb4 */             {
/* rDwqAQycz ily traian C6GbtXcb4 */                 i-=l;
/* rDwqAQycz ily traian C6GbtXcb4 */                 int h=0;
/* rDwqAQycz ily traian C6GbtXcb4 */                 while(ch[i]!=' ')
/* rDwqAQycz ily traian C6GbtXcb4 */                 {
/* rDwqAQycz ily traian C6GbtXcb4 */                     cout << ch[i];    
/* rDwqAQycz ily traian C6GbtXcb4 */                     i++;
/* rDwqAQycz ily traian C6GbtXcb4 */                     h++;
/* rDwqAQycz ily traian C6GbtXcb4 */                 }
/* rDwqAQycz ily traian C6GbtXcb4 */                 if(h)
/* rDwqAQycz ily traian C6GbtXcb4 */                 cout << endl;
/* rDwqAQycz ily traian C6GbtXcb4 */             }
/* rDwqAQycz ily traian C6GbtXcb4 */             l=0 , cnt=0;
/* rDwqAQycz ily traian C6GbtXcb4 */         }
/* rDwqAQycz ily traian C6GbtXcb4 */         else
/* rDwqAQycz ily traian C6GbtXcb4 */         {
/* rDwqAQycz ily traian C6GbtXcb4 */             cnt++;
/* rDwqAQycz ily traian C6GbtXcb4 */             if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')    
/* rDwqAQycz ily traian C6GbtXcb4 */                 l++;
/* rDwqAQycz ily traian C6GbtXcb4 */         }
/* rDwqAQycz ily traian C6GbtXcb4 */         i++;    
/* rDwqAQycz ily traian C6GbtXcb4 */         if(ch[i]=='\0' && ok==0)
/* rDwqAQycz ily traian C6GbtXcb4 */             ch[i]=' ' , ch[i+1]='\0' , ok++;
/* rDwqAQycz ily traian C6GbtXcb4 */     }
/* rDwqAQycz ily traian C6GbtXcb4 */     return 0;    
/* rDwqAQycz ily traian C6GbtXcb4 */ }