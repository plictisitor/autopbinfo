/* p1vjlofbI ily traian 5WOMRpWdX */ #include <algorithm>
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
/* p1vjlofbI ily traian 5WOMRpWdX */ 
/* p1vjlofbI ily traian 5WOMRpWdX */ using namespace std;
/* p1vjlofbI ily traian 5WOMRpWdX */ 
/* p1vjlofbI ily traian 5WOMRpWdX */ char m[260][260];
/* p1vjlofbI ily traian 5WOMRpWdX */ 
/* p1vjlofbI ily traian 5WOMRpWdX */ bool voc(char ch)
/* p1vjlofbI ily traian 5WOMRpWdX */ {
/* p1vjlofbI ily traian 5WOMRpWdX */     return ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'I' || ch == 'i' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U';
/* p1vjlofbI ily traian 5WOMRpWdX */ }
/* p1vjlofbI ily traian 5WOMRpWdX */ 
/* p1vjlofbI ily traian 5WOMRpWdX */ int nrvoc(char s[])
/* p1vjlofbI ily traian 5WOMRpWdX */ {
/* p1vjlofbI ily traian 5WOMRpWdX */     int i = 0;
/* p1vjlofbI ily traian 5WOMRpWdX */     int cnt = 0;
/* p1vjlofbI ily traian 5WOMRpWdX */     while(s[i])
/* p1vjlofbI ily traian 5WOMRpWdX */     {
/* p1vjlofbI ily traian 5WOMRpWdX */         if(voc(s[i]))
/* p1vjlofbI ily traian 5WOMRpWdX */             cnt++;
/* p1vjlofbI ily traian 5WOMRpWdX */         i++;
/* p1vjlofbI ily traian 5WOMRpWdX */     }
/* p1vjlofbI ily traian 5WOMRpWdX */     return cnt;
/* p1vjlofbI ily traian 5WOMRpWdX */ }
/* p1vjlofbI ily traian 5WOMRpWdX */ 
/* p1vjlofbI ily traian 5WOMRpWdX */ int main()
/* p1vjlofbI ily traian 5WOMRpWdX */ {
/* p1vjlofbI ily traian 5WOMRpWdX */     char s[256];
/* p1vjlofbI ily traian 5WOMRpWdX */     cin.getline(s , 300);
/* p1vjlofbI ily traian 5WOMRpWdX */     int i = 0 , cnt = 1 , j = 0;
/* p1vjlofbI ily traian 5WOMRpWdX */     while(s[i]!='\0')
/* p1vjlofbI ily traian 5WOMRpWdX */     {
/* p1vjlofbI ily traian 5WOMRpWdX */         if(s[i]!=' ')
/* p1vjlofbI ily traian 5WOMRpWdX */         {
/* p1vjlofbI ily traian 5WOMRpWdX */             m[cnt][j]=s[i];
/* p1vjlofbI ily traian 5WOMRpWdX */             j++;
/* p1vjlofbI ily traian 5WOMRpWdX */         }
/* p1vjlofbI ily traian 5WOMRpWdX */         if(s[i]==' ' && s[i+1]!=' ')
/* p1vjlofbI ily traian 5WOMRpWdX */             cnt++ , j=0;
/* p1vjlofbI ily traian 5WOMRpWdX */         i++;
/* p1vjlofbI ily traian 5WOMRpWdX */     }
/* p1vjlofbI ily traian 5WOMRpWdX */     int v[101];
/* p1vjlofbI ily traian 5WOMRpWdX */     for(int i = 1 ; i <= cnt ; ++i)
/* p1vjlofbI ily traian 5WOMRpWdX */         v[i]=nrvoc(m[i]);
/* p1vjlofbI ily traian 5WOMRpWdX */     for(int i = 1 ; i <= cnt ; ++i)
/* p1vjlofbI ily traian 5WOMRpWdX */         for(int j = i + 1 ; j <= cnt ; ++j)
/* p1vjlofbI ily traian 5WOMRpWdX */             if(v[j] > v[i])
/* p1vjlofbI ily traian 5WOMRpWdX */                 swap(m[j] , m[i]) , swap(v[j] , v[i]);
/* p1vjlofbI ily traian 5WOMRpWdX */     for(int i = 1 ; i <= cnt ; ++i)
/* p1vjlofbI ily traian 5WOMRpWdX */         for(int j = i + 1 ; j <= cnt ; ++j)
/* p1vjlofbI ily traian 5WOMRpWdX */             if(strlen(m[j]) > strlen(m[i]) && v[j]==v[i])
/* p1vjlofbI ily traian 5WOMRpWdX */                 swap(m[j] , m[i]);
/* p1vjlofbI ily traian 5WOMRpWdX */     for(int i = 1 ; i <= cnt ; ++i)
/* p1vjlofbI ily traian 5WOMRpWdX */         for(int j = i + 1 ; j <= cnt ; ++j)
/* p1vjlofbI ily traian 5WOMRpWdX */             if(v[i] == v[j] && strlen(m[i]) == strlen(m[j]) && strcmp(m[i] , m[j])==1)
/* p1vjlofbI ily traian 5WOMRpWdX */                 swap(m[j] , m[i]);
/* p1vjlofbI ily traian 5WOMRpWdX */     for(int i = 1 ; i <= cnt ; ++i)
/* p1vjlofbI ily traian 5WOMRpWdX */         cout << m[i] << endl;
/* p1vjlofbI ily traian 5WOMRpWdX */     return 0;
/* p1vjlofbI ily traian 5WOMRpWdX */ }