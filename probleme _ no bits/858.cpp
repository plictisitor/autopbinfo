/* JEqwkZAJ8 ily traian nT2bvDZwl */ #include <algorithm>
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
/* JEqwkZAJ8 ily traian nT2bvDZwl */ 
/* JEqwkZAJ8 ily traian nT2bvDZwl */ using namespace std;
/* JEqwkZAJ8 ily traian nT2bvDZwl */ 
/* JEqwkZAJ8 ily traian nT2bvDZwl */ char s[256];
/* JEqwkZAJ8 ily traian nT2bvDZwl */ int f[300];
/* JEqwkZAJ8 ily traian nT2bvDZwl */ 
/* JEqwkZAJ8 ily traian nT2bvDZwl */ int numar(char ch)
/* JEqwkZAJ8 ily traian nT2bvDZwl */ {
/* JEqwkZAJ8 ily traian nT2bvDZwl */     return ch >= '0' && ch <= '9';
/* JEqwkZAJ8 ily traian nT2bvDZwl */ }
/* JEqwkZAJ8 ily traian nT2bvDZwl */ 
/* JEqwkZAJ8 ily traian nT2bvDZwl */ int main()
/* JEqwkZAJ8 ily traian nT2bvDZwl */ {
/* JEqwkZAJ8 ily traian nT2bvDZwl */     cin.getline(s , 256);
/* JEqwkZAJ8 ily traian nT2bvDZwl */     int i = 0;
/* JEqwkZAJ8 ily traian nT2bvDZwl */     bool sgn = 1;
/* JEqwkZAJ8 ily traian nT2bvDZwl */     int nr = 0;
/* JEqwkZAJ8 ily traian nT2bvDZwl */     while(s[i]!='\0')
/* JEqwkZAJ8 ily traian nT2bvDZwl */     {
/* JEqwkZAJ8 ily traian nT2bvDZwl */         while(numar(s[i]))
/* JEqwkZAJ8 ily traian nT2bvDZwl */         {
/* JEqwkZAJ8 ily traian nT2bvDZwl */             nr=nr*10+(int)s[i]-'0';
/* JEqwkZAJ8 ily traian nT2bvDZwl */             i++;
/* JEqwkZAJ8 ily traian nT2bvDZwl */         }
/* JEqwkZAJ8 ily traian nT2bvDZwl */         if(s[i]=='-')
/* JEqwkZAJ8 ily traian nT2bvDZwl */             sgn = false;
/* JEqwkZAJ8 ily traian nT2bvDZwl */         if(s[i]=='+')
/* JEqwkZAJ8 ily traian nT2bvDZwl */             sgn = true;
/* JEqwkZAJ8 ily traian nT2bvDZwl */         if(s[i]=='x' || s[i]=='y' || s[i]=='z')
/* JEqwkZAJ8 ily traian nT2bvDZwl */             {
/* JEqwkZAJ8 ily traian nT2bvDZwl */                 if(nr == 0)
/* JEqwkZAJ8 ily traian nT2bvDZwl */                 {
/* JEqwkZAJ8 ily traian nT2bvDZwl */                     if(sgn)
/* JEqwkZAJ8 ily traian nT2bvDZwl */                         f[s[i]]++ , nr = 0;
/* JEqwkZAJ8 ily traian nT2bvDZwl */                     else
/* JEqwkZAJ8 ily traian nT2bvDZwl */                         f[s[i]]-- , nr = 0;
/* JEqwkZAJ8 ily traian nT2bvDZwl */                 }
/* JEqwkZAJ8 ily traian nT2bvDZwl */                 if(sgn)
/* JEqwkZAJ8 ily traian nT2bvDZwl */                     f[s[i]]+=nr , nr = 0;
/* JEqwkZAJ8 ily traian nT2bvDZwl */                 else
/* JEqwkZAJ8 ily traian nT2bvDZwl */                     f[s[i]]-=nr , nr = 0;
/* JEqwkZAJ8 ily traian nT2bvDZwl */             }
/* JEqwkZAJ8 ily traian nT2bvDZwl */         i++;
/* JEqwkZAJ8 ily traian nT2bvDZwl */     }
/* JEqwkZAJ8 ily traian nT2bvDZwl */     char rez;
/* JEqwkZAJ8 ily traian nT2bvDZwl */     int max = -2000000001;
/* JEqwkZAJ8 ily traian nT2bvDZwl */     for(char i = 'x' ; i <= 'z' ; ++i)
/* JEqwkZAJ8 ily traian nT2bvDZwl */     {
/* JEqwkZAJ8 ily traian nT2bvDZwl */         if(f[i]>max && f[i]!=0)
/* JEqwkZAJ8 ily traian nT2bvDZwl */             max=f[i] , rez = i;
/* JEqwkZAJ8 ily traian nT2bvDZwl */     }
/* JEqwkZAJ8 ily traian nT2bvDZwl */     cout << max << rez;
/* JEqwkZAJ8 ily traian nT2bvDZwl */     return 0;
/* JEqwkZAJ8 ily traian nT2bvDZwl */ }