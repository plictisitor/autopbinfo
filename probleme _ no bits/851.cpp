/* kko0aETmN ily traian oodY8XtAI */ #include <algorithm>
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
/* kko0aETmN ily traian oodY8XtAI */ 
/* kko0aETmN ily traian oodY8XtAI */ using namespace std;
/* kko0aETmN ily traian oodY8XtAI */ 
/* kko0aETmN ily traian oodY8XtAI */ ifstream cin("email.in");
/* kko0aETmN ily traian oodY8XtAI */ ofstream cout("email.out");
/* kko0aETmN ily traian oodY8XtAI */ 
/* kko0aETmN ily traian oodY8XtAI */ char m[1001][51];
/* kko0aETmN ily traian oodY8XtAI */ char r[1001][51];
/* kko0aETmN ily traian oodY8XtAI */ int vec[1001];
/* kko0aETmN ily traian oodY8XtAI */ 
/* kko0aETmN ily traian oodY8XtAI */ bool domegal(int i , int j)
/* kko0aETmN ily traian oodY8XtAI */ {
/* kko0aETmN ily traian oodY8XtAI */     int n = 0;
/* kko0aETmN ily traian oodY8XtAI */     while(m[i][n]!='@')
/* kko0aETmN ily traian oodY8XtAI */         n++;
/* kko0aETmN ily traian oodY8XtAI */     n++;
/* kko0aETmN ily traian oodY8XtAI */     int e = 0;
/* kko0aETmN ily traian oodY8XtAI */     while(m[j][e]!='@')
/* kko0aETmN ily traian oodY8XtAI */         e++;
/* kko0aETmN ily traian oodY8XtAI */     e++;
/* kko0aETmN ily traian oodY8XtAI */     for(int q = n , h = e ; m[i][q]!='\0' && m[j][h]!='\0' ; ++q , h++)
/* kko0aETmN ily traian oodY8XtAI */         if(m[i][q]!=m[j][h])
/* kko0aETmN ily traian oodY8XtAI */             return 0;
/* kko0aETmN ily traian oodY8XtAI */     return 1;
/* kko0aETmN ily traian oodY8XtAI */ }
/* kko0aETmN ily traian oodY8XtAI */ 
/* kko0aETmN ily traian oodY8XtAI */ int main()
/* kko0aETmN ily traian oodY8XtAI */ {
/* kko0aETmN ily traian oodY8XtAI */     int i = 0;
/* kko0aETmN ily traian oodY8XtAI */     while(cin >> m[i])
/* kko0aETmN ily traian oodY8XtAI */         i++;
/* kko0aETmN ily traian oodY8XtAI */     int n = i;
/* kko0aETmN ily traian oodY8XtAI */     int c = 0;
/* kko0aETmN ily traian oodY8XtAI */     for(int i = 0 ; i < n ; ++i)
/* kko0aETmN ily traian oodY8XtAI */     {
/* kko0aETmN ily traian oodY8XtAI */         int cnt = 1;
/* kko0aETmN ily traian oodY8XtAI */         if(m[i][0]!='\0')
/* kko0aETmN ily traian oodY8XtAI */         {
/* kko0aETmN ily traian oodY8XtAI */             for(int j = i + 1 ; j < n ; ++j)
/* kko0aETmN ily traian oodY8XtAI */                 if(domegal(i , j))
/* kko0aETmN ily traian oodY8XtAI */                     cnt++ , m[j][0]='\0';
/* kko0aETmN ily traian oodY8XtAI */             int q = 0;
/* kko0aETmN ily traian oodY8XtAI */             while(m[i][q]!='@')
/* kko0aETmN ily traian oodY8XtAI */                 q++;
/* kko0aETmN ily traian oodY8XtAI */             q++;
/* kko0aETmN ily traian oodY8XtAI */             int t=0;
/* kko0aETmN ily traian oodY8XtAI */             while(m[i][q]!='\0')
/* kko0aETmN ily traian oodY8XtAI */                 r[c][t]=m[i][q], q++ , t++;
/* kko0aETmN ily traian oodY8XtAI */             vec[c]=cnt;
/* kko0aETmN ily traian oodY8XtAI */             c++;
/* kko0aETmN ily traian oodY8XtAI */             m[i][0]='\0';
/* kko0aETmN ily traian oodY8XtAI */         }
/* kko0aETmN ily traian oodY8XtAI */     }
/* kko0aETmN ily traian oodY8XtAI */     for(int i = 0 ; i < c ; ++i)
/* kko0aETmN ily traian oodY8XtAI */         for(int j = i + 1 ; j < c ; ++j)
/* kko0aETmN ily traian oodY8XtAI */             if(strcmp(r[i] , r[j]) > 0)
/* kko0aETmN ily traian oodY8XtAI */                 swap(r[i] , r[j]) , swap(vec[i] , vec[j]);
/* kko0aETmN ily traian oodY8XtAI */     cout << c << '\n';
/* kko0aETmN ily traian oodY8XtAI */     int maxi=0;
/* kko0aETmN ily traian oodY8XtAI */     for(int i = 0 ; i < c ; ++i)
/* kko0aETmN ily traian oodY8XtAI */         if(vec[i]>maxi)
/* kko0aETmN ily traian oodY8XtAI */             maxi=vec[i];
/* kko0aETmN ily traian oodY8XtAI */     while(maxi)
/* kko0aETmN ily traian oodY8XtAI */     {
/* kko0aETmN ily traian oodY8XtAI */         for(int i = 0 ; i < c ; ++i)
/* kko0aETmN ily traian oodY8XtAI */         {
/* kko0aETmN ily traian oodY8XtAI */             if(vec[i]==maxi)
/* kko0aETmN ily traian oodY8XtAI */                 cout << r[i] << ' ' << vec[i] << '\n';
/* kko0aETmN ily traian oodY8XtAI */         }
/* kko0aETmN ily traian oodY8XtAI */         maxi--;
/* kko0aETmN ily traian oodY8XtAI */     }
/* kko0aETmN ily traian oodY8XtAI */     return 0;
/* kko0aETmN ily traian oodY8XtAI */ }