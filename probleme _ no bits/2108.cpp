/* VAOKFZmFV ily traian DtLK6ZOkv */ #include <algorithm>
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
/* VAOKFZmFV ily traian DtLK6ZOkv */ 
/* VAOKFZmFV ily traian DtLK6ZOkv */ 
/* VAOKFZmFV ily traian DtLK6ZOkv */ using namespace std;
/* VAOKFZmFV ily traian DtLK6ZOkv */ 
/* VAOKFZmFV ily traian DtLK6ZOkv */ ifstream cin("fraze.in");
/* VAOKFZmFV ily traian DtLK6ZOkv */ ofstream cout("fraze.out");
/* VAOKFZmFV ily traian DtLK6ZOkv */ 
/* VAOKFZmFV ily traian DtLK6ZOkv */ char A[101][256];
/* VAOKFZmFV ily traian DtLK6ZOkv */ int f[30];
/* VAOKFZmFV ily traian DtLK6ZOkv */ void ordonare(char a[][256] , int n)
/* VAOKFZmFV ily traian DtLK6ZOkv */ {
/* VAOKFZmFV ily traian DtLK6ZOkv */     for(int i = 1 ; i <= n ; i++)
/* VAOKFZmFV ily traian DtLK6ZOkv */         for(int j = i + 1 ; j <=n ; j++)
/* VAOKFZmFV ily traian DtLK6ZOkv */             if(strcmp(a[i] , a[j]) > 0)
/* VAOKFZmFV ily traian DtLK6ZOkv */             {
/* VAOKFZmFV ily traian DtLK6ZOkv */                 char aux[256];
/* VAOKFZmFV ily traian DtLK6ZOkv */                 strcpy(aux , a[i]);
/* VAOKFZmFV ily traian DtLK6ZOkv */                 strcpy(a[i] , a[j]);
/* VAOKFZmFV ily traian DtLK6ZOkv */                 strcpy(a[j] , aux);
/* VAOKFZmFV ily traian DtLK6ZOkv */             }
/* VAOKFZmFV ily traian DtLK6ZOkv */ }
/* VAOKFZmFV ily traian DtLK6ZOkv */ int main()
/* VAOKFZmFV ily traian DtLK6ZOkv */ {
/* VAOKFZmFV ily traian DtLK6ZOkv */     int nrperf = 0, ind = 0;
/* VAOKFZmFV ily traian DtLK6ZOkv */ 
/* VAOKFZmFV ily traian DtLK6ZOkv */     char s[256];
/* VAOKFZmFV ily traian DtLK6ZOkv */     while(cin.getline(s , 256))
/* VAOKFZmFV ily traian DtLK6ZOkv */     {
/* VAOKFZmFV ily traian DtLK6ZOkv */         int n = strlen(s);
/* VAOKFZmFV ily traian DtLK6ZOkv */         for(int i = 0 ; i < n ; i++)
/* VAOKFZmFV ily traian DtLK6ZOkv */         {
/* VAOKFZmFV ily traian DtLK6ZOkv */             if(s[i] != ' ' && s[i] != ',')
/* VAOKFZmFV ily traian DtLK6ZOkv */                 f[(int)(tolower(s[i])) - 'a']++;
/* VAOKFZmFV ily traian DtLK6ZOkv */         }
/* VAOKFZmFV ily traian DtLK6ZOkv */         int ok = 1, perf = 1;
/* VAOKFZmFV ily traian DtLK6ZOkv */         for(int i = 0; i < 26; i ++)
/* VAOKFZmFV ily traian DtLK6ZOkv */             if (f[i] == 0)ok = 0, perf = 0;
/* VAOKFZmFV ily traian DtLK6ZOkv */             else if (f[i] != 1)perf = 0, f[i] = 0;
/* VAOKFZmFV ily traian DtLK6ZOkv */             else f[i] = 0;
/* VAOKFZmFV ily traian DtLK6ZOkv */ 
/* VAOKFZmFV ily traian DtLK6ZOkv */         if (perf == 1)nrperf ++;
/* VAOKFZmFV ily traian DtLK6ZOkv */         if (ok == 1) strcpy(A[++ ind], s);
/* VAOKFZmFV ily traian DtLK6ZOkv */     }
/* VAOKFZmFV ily traian DtLK6ZOkv */     cout << ind << ' ' << nrperf << '\n';
/* VAOKFZmFV ily traian DtLK6ZOkv */     ordonare(A , ind);
/* VAOKFZmFV ily traian DtLK6ZOkv */     for (int i = 1; i <= ind; i ++)
/* VAOKFZmFV ily traian DtLK6ZOkv */         cout << A[i] << '\n';
/* VAOKFZmFV ily traian DtLK6ZOkv */ }