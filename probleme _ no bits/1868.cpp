/* LFafuUa3W ily traian KRqRsRbjp */ #include <algorithm>
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
/* LFafuUa3W ily traian KRqRsRbjp */ 
/* LFafuUa3W ily traian KRqRsRbjp */ 
/* LFafuUa3W ily traian KRqRsRbjp */ using namespace std;
/* LFafuUa3W ily traian KRqRsRbjp */ 
/* LFafuUa3W ily traian KRqRsRbjp */ ifstream cin("prosirx.in");
/* LFafuUa3W ily traian KRqRsRbjp */ ofstream cout("prosirx.out");
/* LFafuUa3W ily traian KRqRsRbjp */ 
/* LFafuUa3W ily traian KRqRsRbjp */ char a[200][200];
/* LFafuUa3W ily traian KRqRsRbjp */ 
/* LFafuUa3W ily traian KRqRsRbjp */ int main()
/* LFafuUa3W ily traian KRqRsRbjp */ {
/* LFafuUa3W ily traian KRqRsRbjp */     char s[300];
/* LFafuUa3W ily traian KRqRsRbjp */     cin.getline(s , 300);
/* LFafuUa3W ily traian KRqRsRbjp */     int i = 0;
/* LFafuUa3W ily traian KRqRsRbjp */     int cnt = 0;
/* LFafuUa3W ily traian KRqRsRbjp */     while(s[i]!='\0')
/* LFafuUa3W ily traian KRqRsRbjp */     {
/* LFafuUa3W ily traian KRqRsRbjp */         if(s[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I' && s[i]!='o' && s[i]!='O' && s[i]!='u' && s[i]!='U' && s[i]!=' ')
/* LFafuUa3W ily traian KRqRsRbjp */             cnt++;
/* LFafuUa3W ily traian KRqRsRbjp */         i++;
/* LFafuUa3W ily traian KRqRsRbjp */     }
/* LFafuUa3W ily traian KRqRsRbjp */     cout << cnt << endl;
/* LFafuUa3W ily traian KRqRsRbjp */     i=0;
/* LFafuUa3W ily traian KRqRsRbjp */     while(s[i]!='\0')
/* LFafuUa3W ily traian KRqRsRbjp */     {
/* LFafuUa3W ily traian KRqRsRbjp */         if(i == 0 && s[i]!=' ')
/* LFafuUa3W ily traian KRqRsRbjp */             cout << 'X';
/* LFafuUa3W ily traian KRqRsRbjp */         else if(s[i-1]==' ' && s[i]!=' ')
/* LFafuUa3W ily traian KRqRsRbjp */             cout << 'X';
/* LFafuUa3W ily traian KRqRsRbjp */         else
/* LFafuUa3W ily traian KRqRsRbjp */             cout << s[i];
/* LFafuUa3W ily traian KRqRsRbjp */         i++;
/* LFafuUa3W ily traian KRqRsRbjp */     }
/* LFafuUa3W ily traian KRqRsRbjp */     s[i]=' ' , s[i+1]='\0';
/* LFafuUa3W ily traian KRqRsRbjp */     i = 0 , cnt = 0;
/* LFafuUa3W ily traian KRqRsRbjp */     int j = 0;
/* LFafuUa3W ily traian KRqRsRbjp */     while(s[i]!='\0')
/* LFafuUa3W ily traian KRqRsRbjp */     {
/* LFafuUa3W ily traian KRqRsRbjp */         if(s[i]!=' ')
/* LFafuUa3W ily traian KRqRsRbjp */         {
/* LFafuUa3W ily traian KRqRsRbjp */             a[cnt][j]=s[i];
/* LFafuUa3W ily traian KRqRsRbjp */             j++;
/* LFafuUa3W ily traian KRqRsRbjp */         }
/* LFafuUa3W ily traian KRqRsRbjp */         else
/* LFafuUa3W ily traian KRqRsRbjp */         {
/* LFafuUa3W ily traian KRqRsRbjp */             j=0;
/* LFafuUa3W ily traian KRqRsRbjp */             if(s[i+1]!=' ')
/* LFafuUa3W ily traian KRqRsRbjp */                 cnt++;
/* LFafuUa3W ily traian KRqRsRbjp */         }
/* LFafuUa3W ily traian KRqRsRbjp */         i++;
/* LFafuUa3W ily traian KRqRsRbjp */     }
/* LFafuUa3W ily traian KRqRsRbjp */     cout << endl;
/* LFafuUa3W ily traian KRqRsRbjp */     for(int i = 0 ; i < cnt ; ++i)
/* LFafuUa3W ily traian KRqRsRbjp */         for(int j = i + 1 ; j < cnt ; ++j)
/* LFafuUa3W ily traian KRqRsRbjp */             if(strcmp(a[i] , a[j]) > 0)
/* LFafuUa3W ily traian KRqRsRbjp */                 swap(a[i] , a[j]);
/* LFafuUa3W ily traian KRqRsRbjp */     for(int i = 0 ; i < cnt ; ++i)
/* LFafuUa3W ily traian KRqRsRbjp */         if(a[i][0]!=' ')
/* LFafuUa3W ily traian KRqRsRbjp */             cout << a[i] << ' ';
/* LFafuUa3W ily traian KRqRsRbjp */     return 0;
/* LFafuUa3W ily traian KRqRsRbjp */ }