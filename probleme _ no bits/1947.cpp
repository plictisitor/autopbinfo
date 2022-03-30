/* zAZDWwY8f ily traian rfenQ0atF */ #include <algorithm>
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
/* zAZDWwY8f ily traian rfenQ0atF */ 
/* zAZDWwY8f ily traian rfenQ0atF */ using namespace std;
/* zAZDWwY8f ily traian rfenQ0atF */ 
/* zAZDWwY8f ily traian rfenQ0atF */ ifstream cin("cuvinte6.in");
/* zAZDWwY8f ily traian rfenQ0atF */ ofstream cout("cuvinte6.out");
/* zAZDWwY8f ily traian rfenQ0atF */ 
/* zAZDWwY8f ily traian rfenQ0atF */ int prefix(char a[] , char b[])
/* zAZDWwY8f ily traian rfenQ0atF */ {
/* zAZDWwY8f ily traian rfenQ0atF */     int na = strlen(a);
/* zAZDWwY8f ily traian rfenQ0atF */     for(int i = 0 ; i < na ; i++)
/* zAZDWwY8f ily traian rfenQ0atF */         if(a[i] != b[i]) return 0;
/* zAZDWwY8f ily traian rfenQ0atF */     return 1;
/* zAZDWwY8f ily traian rfenQ0atF */ }
/* zAZDWwY8f ily traian rfenQ0atF */ 
/* zAZDWwY8f ily traian rfenQ0atF */ int sufix(char a[] , char b[])
/* zAZDWwY8f ily traian rfenQ0atF */ {
/* zAZDWwY8f ily traian rfenQ0atF */     int na = strlen(a) , nb = strlen(b);
/* zAZDWwY8f ily traian rfenQ0atF */     for(int i = na - 1 , j = nb - 1 ; i >= 0 ; i-- , j--)
/* zAZDWwY8f ily traian rfenQ0atF */         if(a[i] != b[j]) return 0;
/* zAZDWwY8f ily traian rfenQ0atF */     return 1;
/* zAZDWwY8f ily traian rfenQ0atF */ }
/* zAZDWwY8f ily traian rfenQ0atF */ 
/* zAZDWwY8f ily traian rfenQ0atF */ int main()
/* zAZDWwY8f ily traian rfenQ0atF */ {
/* zAZDWwY8f ily traian rfenQ0atF */     char s[501] , *p , a[256][20];
/* zAZDWwY8f ily traian rfenQ0atF */     int cer , cnt = 0 , cate = 0;
/* zAZDWwY8f ily traian rfenQ0atF */     cin.getline(s , 501);
/* zAZDWwY8f ily traian rfenQ0atF */     cin >> cer;
/* zAZDWwY8f ily traian rfenQ0atF */     p = strtok(s , " ");
/* zAZDWwY8f ily traian rfenQ0atF */     while(p != 0)
/* zAZDWwY8f ily traian rfenQ0atF */     {
/* zAZDWwY8f ily traian rfenQ0atF */         strcpy(a[++cnt] , p);
/* zAZDWwY8f ily traian rfenQ0atF */         p = strtok(NULL , " ");
/* zAZDWwY8f ily traian rfenQ0atF */     }
/* zAZDWwY8f ily traian rfenQ0atF */     if(cer == 1)
/* zAZDWwY8f ily traian rfenQ0atF */     {
/* zAZDWwY8f ily traian rfenQ0atF */         for(int i = 1 ; i < cnt ; i++)
/* zAZDWwY8f ily traian rfenQ0atF */             if(prefix(a[i], a[i + 1]) || sufix(a[i] , a[i + 1])) cate++;
/* zAZDWwY8f ily traian rfenQ0atF */             cout << cate;
/* zAZDWwY8f ily traian rfenQ0atF */     }
/* zAZDWwY8f ily traian rfenQ0atF */     else
/* zAZDWwY8f ily traian rfenQ0atF */     {
/* zAZDWwY8f ily traian rfenQ0atF */         char cuv1[256] , cuv2[256];
/* zAZDWwY8f ily traian rfenQ0atF */         int maxi = 0;
/* zAZDWwY8f ily traian rfenQ0atF */         for(int i = 1 ; i < cnt ; i++)
/* zAZDWwY8f ily traian rfenQ0atF */         {
/* zAZDWwY8f ily traian rfenQ0atF */             if(strlen(a[i]) + strlen(a[i + 1]) > maxi)
/* zAZDWwY8f ily traian rfenQ0atF */             {
/* zAZDWwY8f ily traian rfenQ0atF */                 maxi = strlen(a[i]) + strlen(a[i + 1]);
/* zAZDWwY8f ily traian rfenQ0atF */                 strcpy(cuv1 , a[i]);
/* zAZDWwY8f ily traian rfenQ0atF */                 strcpy(cuv2 , a[i + 1]);
/* zAZDWwY8f ily traian rfenQ0atF */             }
/* zAZDWwY8f ily traian rfenQ0atF */         }
/* zAZDWwY8f ily traian rfenQ0atF */         cout << cuv1 << " " << cuv2;
/* zAZDWwY8f ily traian rfenQ0atF */     }
/* zAZDWwY8f ily traian rfenQ0atF */     return 0;
/* zAZDWwY8f ily traian rfenQ0atF */ }