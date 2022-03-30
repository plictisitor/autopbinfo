/* qMfq7CMCW ily traian Bdvvmzlie */ #include <algorithm>
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
/* qMfq7CMCW ily traian Bdvvmzlie */ using namespace std;
/* qMfq7CMCW ily traian Bdvvmzlie */ 
/* qMfq7CMCW ily traian Bdvvmzlie */ int main()
/* qMfq7CMCW ily traian Bdvvmzlie */ {
/* qMfq7CMCW ily traian Bdvvmzlie */     char s[300];
/* qMfq7CMCW ily traian Bdvvmzlie */     cin.getline(s , 300);
/* qMfq7CMCW ily traian Bdvvmzlie */     int i = 0;
/* qMfq7CMCW ily traian Bdvvmzlie */     int st = 0;
/* qMfq7CMCW ily traian Bdvvmzlie */     while(s[i]==' ')
/* qMfq7CMCW ily traian Bdvvmzlie */         i++;
/* qMfq7CMCW ily traian Bdvvmzlie */     st = i;
/* qMfq7CMCW ily traian Bdvvmzlie */     i = 0;
/* qMfq7CMCW ily traian Bdvvmzlie */     char lch;
/* qMfq7CMCW ily traian Bdvvmzlie */     int l = 1;
/* qMfq7CMCW ily traian Bdvvmzlie */     int lmax = 1;
/* qMfq7CMCW ily traian Bdvvmzlie */     int cnt = 0;
/* qMfq7CMCW ily traian Bdvvmzlie */     while(s[i])
/* qMfq7CMCW ily traian Bdvvmzlie */     {
/* qMfq7CMCW ily traian Bdvvmzlie */         if(s[i]!=' ' && s[i+1]==' ')
/* qMfq7CMCW ily traian Bdvvmzlie */             lch = s[i];
/* qMfq7CMCW ily traian Bdvvmzlie */         if(s[i-1]==' ' && s[i]!=' ')
/* qMfq7CMCW ily traian Bdvvmzlie */         {
/* qMfq7CMCW ily traian Bdvvmzlie */             if(s[i] == lch)
/* qMfq7CMCW ily traian Bdvvmzlie */                 l++;
/* qMfq7CMCW ily traian Bdvvmzlie */             else
/* qMfq7CMCW ily traian Bdvvmzlie */             {
/* qMfq7CMCW ily traian Bdvvmzlie */                 if(l > lmax)
/* qMfq7CMCW ily traian Bdvvmzlie */                 {
/* qMfq7CMCW ily traian Bdvvmzlie */                     lmax=l;
/* qMfq7CMCW ily traian Bdvvmzlie */                 }
/* qMfq7CMCW ily traian Bdvvmzlie */                 l = 1;
/* qMfq7CMCW ily traian Bdvvmzlie */             }
/* qMfq7CMCW ily traian Bdvvmzlie */         }
/* qMfq7CMCW ily traian Bdvvmzlie */         i++;
/* qMfq7CMCW ily traian Bdvvmzlie */     }
/* qMfq7CMCW ily traian Bdvvmzlie */     i = 0;
/* qMfq7CMCW ily traian Bdvvmzlie */     if(l > lmax)
/* qMfq7CMCW ily traian Bdvvmzlie */         lmax=l;
/* qMfq7CMCW ily traian Bdvvmzlie */     l = 1;
/* qMfq7CMCW ily traian Bdvvmzlie */     if(lmax != 1)
/* qMfq7CMCW ily traian Bdvvmzlie */     {
/* qMfq7CMCW ily traian Bdvvmzlie */     while(s[i])
/* qMfq7CMCW ily traian Bdvvmzlie */     {
/* qMfq7CMCW ily traian Bdvvmzlie */         if(s[i]!=' ' && s[i+1]==' ')
/* qMfq7CMCW ily traian Bdvvmzlie */             lch = s[i];
/* qMfq7CMCW ily traian Bdvvmzlie */         if(s[i-1]==' ' && s[i]!=' ')
/* qMfq7CMCW ily traian Bdvvmzlie */         {
/* qMfq7CMCW ily traian Bdvvmzlie */             if(s[i] == lch)
/* qMfq7CMCW ily traian Bdvvmzlie */                 l++;
/* qMfq7CMCW ily traian Bdvvmzlie */             else
/* qMfq7CMCW ily traian Bdvvmzlie */             {
/* qMfq7CMCW ily traian Bdvvmzlie */                 if(l == lmax)
/* qMfq7CMCW ily traian Bdvvmzlie */                 {
/* qMfq7CMCW ily traian Bdvvmzlie */                     cnt++;
/* qMfq7CMCW ily traian Bdvvmzlie */                     int j = st;
/* qMfq7CMCW ily traian Bdvvmzlie */                     while(j != i)
/* qMfq7CMCW ily traian Bdvvmzlie */                         cout << s[j] , j++;
/* qMfq7CMCW ily traian Bdvvmzlie */                     cout<< endl;
/* qMfq7CMCW ily traian Bdvvmzlie */                 }
/* qMfq7CMCW ily traian Bdvvmzlie */                 l = 1;
/* qMfq7CMCW ily traian Bdvvmzlie */                 st = i;
/* qMfq7CMCW ily traian Bdvvmzlie */             }
/* qMfq7CMCW ily traian Bdvvmzlie */         }
/* qMfq7CMCW ily traian Bdvvmzlie */         i++;
/* qMfq7CMCW ily traian Bdvvmzlie */     }
/* qMfq7CMCW ily traian Bdvvmzlie */     if(l == lmax)
/* qMfq7CMCW ily traian Bdvvmzlie */                 {
/* qMfq7CMCW ily traian Bdvvmzlie */                     int j = st;
/* qMfq7CMCW ily traian Bdvvmzlie */                     while(j != i)
/* qMfq7CMCW ily traian Bdvvmzlie */                         cout << s[j] , j++;
/* qMfq7CMCW ily traian Bdvvmzlie */                     cout<< endl;
/* qMfq7CMCW ily traian Bdvvmzlie */                 }
/* qMfq7CMCW ily traian Bdvvmzlie */ }
/* qMfq7CMCW ily traian Bdvvmzlie */     else
/* qMfq7CMCW ily traian Bdvvmzlie */         cout << -1;
/* qMfq7CMCW ily traian Bdvvmzlie */     return 0;
/* qMfq7CMCW ily traian Bdvvmzlie */ }