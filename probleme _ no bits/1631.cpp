/* mqfsqCj2D ily traian X6f0QkpAp */ #include <algorithm>
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
/* mqfsqCj2D ily traian X6f0QkpAp */ using namespace std;
/* mqfsqCj2D ily traian X6f0QkpAp */ 
/* mqfsqCj2D ily traian X6f0QkpAp */ int main()
/* mqfsqCj2D ily traian X6f0QkpAp */ {
/* mqfsqCj2D ily traian X6f0QkpAp */     char ch[260];
/* mqfsqCj2D ily traian X6f0QkpAp */     cin.getline(ch , 260);
/* mqfsqCj2D ily traian X6f0QkpAp */     int i = 0;
/* mqfsqCj2D ily traian X6f0QkpAp */     int ok=0;
/* mqfsqCj2D ily traian X6f0QkpAp */     int cnt=0 , contor1=0 , max=0;
/* mqfsqCj2D ily traian X6f0QkpAp */     while(ch[i]!='\0')
/* mqfsqCj2D ily traian X6f0QkpAp */     {
/* mqfsqCj2D ily traian X6f0QkpAp */         if(ch[i]==' ')
/* mqfsqCj2D ily traian X6f0QkpAp */         {
/* mqfsqCj2D ily traian X6f0QkpAp */             if(cnt==3)
/* mqfsqCj2D ily traian X6f0QkpAp */             {
/* mqfsqCj2D ily traian X6f0QkpAp */                 contor1++;
/* mqfsqCj2D ily traian X6f0QkpAp */             }
/* mqfsqCj2D ily traian X6f0QkpAp */             cnt=0;
/* mqfsqCj2D ily traian X6f0QkpAp */         }
/* mqfsqCj2D ily traian X6f0QkpAp */         else
/* mqfsqCj2D ily traian X6f0QkpAp */             cnt++;
/* mqfsqCj2D ily traian X6f0QkpAp */         i++;
/* mqfsqCj2D ily traian X6f0QkpAp */         if(ch[i]=='\0' && !ok)
/* mqfsqCj2D ily traian X6f0QkpAp */         ch[i]=' ' , ch[i+1]='\0' , ok++;
/* mqfsqCj2D ily traian X6f0QkpAp */     }
/* mqfsqCj2D ily traian X6f0QkpAp */     i=0;
/* mqfsqCj2D ily traian X6f0QkpAp */     cout << contor1 << endl;
/* mqfsqCj2D ily traian X6f0QkpAp */     while(ch[i]!='\0')
/* mqfsqCj2D ily traian X6f0QkpAp */     {
/* mqfsqCj2D ily traian X6f0QkpAp */         if(ch[i]==' ')
/* mqfsqCj2D ily traian X6f0QkpAp */         {
/* mqfsqCj2D ily traian X6f0QkpAp */             if(cnt==3)
/* mqfsqCj2D ily traian X6f0QkpAp */             {
/* mqfsqCj2D ily traian X6f0QkpAp */                 contor1++;
/* mqfsqCj2D ily traian X6f0QkpAp */             }
/* mqfsqCj2D ily traian X6f0QkpAp */             if((ch[i-1]=='a' || ch[i-1]=='e' || ch[i-1]=='i' || ch[i-1]=='o' || ch[i-1]=='u' || ch[i-1]=='A' || ch[i-1]=='E' || ch[i-1]=='I' || ch[i-1]=='O' || ch[i-1]=='U') && (ch[i-cnt]=='a' || ch[i-cnt]=='e' || ch[i-cnt]=='i' || ch[i-cnt]=='o' || ch[i-cnt]=='u' || ch[i-cnt]=='A' || ch[i-cnt]=='E'|| ch[i-cnt]=='I' || ch[i-cnt]=='O' || ch[i-cnt]=='U'))
/* mqfsqCj2D ily traian X6f0QkpAp */             {
/* mqfsqCj2D ily traian X6f0QkpAp */                 i-=cnt;
/* mqfsqCj2D ily traian X6f0QkpAp */                 while(ch[i]!=' ')
/* mqfsqCj2D ily traian X6f0QkpAp */                 {
/* mqfsqCj2D ily traian X6f0QkpAp */                     cout << ch[i];
/* mqfsqCj2D ily traian X6f0QkpAp */                     i++;
/* mqfsqCj2D ily traian X6f0QkpAp */                 }
/* mqfsqCj2D ily traian X6f0QkpAp */                 cout << endl;
/* mqfsqCj2D ily traian X6f0QkpAp */             }
/* mqfsqCj2D ily traian X6f0QkpAp */             if(cnt>max)
/* mqfsqCj2D ily traian X6f0QkpAp */                 max=cnt;
/* mqfsqCj2D ily traian X6f0QkpAp */             cnt=0;
/* mqfsqCj2D ily traian X6f0QkpAp */         }
/* mqfsqCj2D ily traian X6f0QkpAp */         else
/* mqfsqCj2D ily traian X6f0QkpAp */             cnt++;
/* mqfsqCj2D ily traian X6f0QkpAp */         i++;
/* mqfsqCj2D ily traian X6f0QkpAp */         if(ch[i]=='\0' && !ok)
/* mqfsqCj2D ily traian X6f0QkpAp */         ch[i]=' ' , ch[i+1]='\0' , ok++;
/* mqfsqCj2D ily traian X6f0QkpAp */     }
/* mqfsqCj2D ily traian X6f0QkpAp */     cout << max ;
/* mqfsqCj2D ily traian X6f0QkpAp */     return 0;
/* mqfsqCj2D ily traian X6f0QkpAp */ }