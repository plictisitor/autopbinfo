/* dM6SdKwGu ily traian 0iOxTJ8li */ #include <algorithm>
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
/* dM6SdKwGu ily traian 0iOxTJ8li */ using namespace std;
/* dM6SdKwGu ily traian 0iOxTJ8li */ 
/* dM6SdKwGu ily traian 0iOxTJ8li */ int main()
/* dM6SdKwGu ily traian 0iOxTJ8li */ {
/* dM6SdKwGu ily traian 0iOxTJ8li */     char ch[300];
/* dM6SdKwGu ily traian 0iOxTJ8li */     cin.getline(ch , 300);
/* dM6SdKwGu ily traian 0iOxTJ8li */     int i = 0;
/* dM6SdKwGu ily traian 0iOxTJ8li */     int cnt=0;
/* dM6SdKwGu ily traian 0iOxTJ8li */     int c=0;
/* dM6SdKwGu ily traian 0iOxTJ8li */     int ok=0;
/* dM6SdKwGu ily traian 0iOxTJ8li */     while(ch[i]!='\0')
/* dM6SdKwGu ily traian 0iOxTJ8li */     {
/* dM6SdKwGu ily traian 0iOxTJ8li */         if(ch[i]==' ')
/* dM6SdKwGu ily traian 0iOxTJ8li */         {
/* dM6SdKwGu ily traian 0iOxTJ8li */             if(cnt%2==0)
/* dM6SdKwGu ily traian 0iOxTJ8li */                 c++;
/* dM6SdKwGu ily traian 0iOxTJ8li */             cnt=0;
/* dM6SdKwGu ily traian 0iOxTJ8li */         }
/* dM6SdKwGu ily traian 0iOxTJ8li */         else
/* dM6SdKwGu ily traian 0iOxTJ8li */             cnt++;
/* dM6SdKwGu ily traian 0iOxTJ8li */         i++;
/* dM6SdKwGu ily traian 0iOxTJ8li */         if(ch[i]=='\0' && ok==0)
/* dM6SdKwGu ily traian 0iOxTJ8li */         {
/* dM6SdKwGu ily traian 0iOxTJ8li */             ch[i]=' ' , ch[i+1]='\0' , ok++;
/* dM6SdKwGu ily traian 0iOxTJ8li */         }
/* dM6SdKwGu ily traian 0iOxTJ8li */     }
/* dM6SdKwGu ily traian 0iOxTJ8li */     if(c!=0)
/* dM6SdKwGu ily traian 0iOxTJ8li */     {
/* dM6SdKwGu ily traian 0iOxTJ8li */         i=0;
/* dM6SdKwGu ily traian 0iOxTJ8li */         while(ch[i]!='\0')
/* dM6SdKwGu ily traian 0iOxTJ8li */         {
/* dM6SdKwGu ily traian 0iOxTJ8li */             if(ch[i]==' ')
/* dM6SdKwGu ily traian 0iOxTJ8li */             {
/* dM6SdKwGu ily traian 0iOxTJ8li */                 if(cnt%2==0)
/* dM6SdKwGu ily traian 0iOxTJ8li */                     cout << '#';
/* dM6SdKwGu ily traian 0iOxTJ8li */                 else
/* dM6SdKwGu ily traian 0iOxTJ8li */                 {
/* dM6SdKwGu ily traian 0iOxTJ8li */                     i-=cnt;
/* dM6SdKwGu ily traian 0iOxTJ8li */                     while(ch[i]!=' ')
/* dM6SdKwGu ily traian 0iOxTJ8li */                     {
/* dM6SdKwGu ily traian 0iOxTJ8li */                      cout << ch[i];
/* dM6SdKwGu ily traian 0iOxTJ8li */                      i++;
/* dM6SdKwGu ily traian 0iOxTJ8li */                     }
/* dM6SdKwGu ily traian 0iOxTJ8li */                 }
/* dM6SdKwGu ily traian 0iOxTJ8li */                 cout << ' ';
/* dM6SdKwGu ily traian 0iOxTJ8li */                 cnt=0;
/* dM6SdKwGu ily traian 0iOxTJ8li */             }
/* dM6SdKwGu ily traian 0iOxTJ8li */             else
/* dM6SdKwGu ily traian 0iOxTJ8li */                 cnt++;
/* dM6SdKwGu ily traian 0iOxTJ8li */             i++;
/* dM6SdKwGu ily traian 0iOxTJ8li */         }
/* dM6SdKwGu ily traian 0iOxTJ8li */     }
/* dM6SdKwGu ily traian 0iOxTJ8li */     else
/* dM6SdKwGu ily traian 0iOxTJ8li */         cout << "nu exista";
/* dM6SdKwGu ily traian 0iOxTJ8li */     return 0;
/* dM6SdKwGu ily traian 0iOxTJ8li */ }