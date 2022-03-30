/* 4g9grMUrO ily traian nBFAJU5GT */ #include <algorithm>
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
/* 4g9grMUrO ily traian nBFAJU5GT */ 
/* 4g9grMUrO ily traian nBFAJU5GT */ using namespace std;
/* 4g9grMUrO ily traian nBFAJU5GT */ 
/* 4g9grMUrO ily traian nBFAJU5GT */ ifstream cin("reteta.in");
/* 4g9grMUrO ily traian nBFAJU5GT */ ofstream cout("reteta.out");
/* 4g9grMUrO ily traian nBFAJU5GT */ 
/* 4g9grMUrO ily traian nBFAJU5GT */ map<string , int> M;
/* 4g9grMUrO ily traian nBFAJU5GT */ 
/* 4g9grMUrO ily traian nBFAJU5GT */ bool cif(char ch)
/* 4g9grMUrO ily traian nBFAJU5GT */ {
/* 4g9grMUrO ily traian nBFAJU5GT */     return ch >= '0' && ch <= '9';
/* 4g9grMUrO ily traian nBFAJU5GT */ }
/* 4g9grMUrO ily traian nBFAJU5GT */ 
/* 4g9grMUrO ily traian nBFAJU5GT */ bool lit(char ch)
/* 4g9grMUrO ily traian nBFAJU5GT */ {
/* 4g9grMUrO ily traian nBFAJU5GT */     return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
/* 4g9grMUrO ily traian nBFAJU5GT */ }
/* 4g9grMUrO ily traian nBFAJU5GT */ 
/* 4g9grMUrO ily traian nBFAJU5GT */ int main()
/* 4g9grMUrO ily traian nBFAJU5GT */ {
/* 4g9grMUrO ily traian nBFAJU5GT */     char s[1001];
/* 4g9grMUrO ily traian nBFAJU5GT */     cin.getline(s , 1001);
/* 4g9grMUrO ily traian nBFAJU5GT */     int i = 0;
/* 4g9grMUrO ily traian nBFAJU5GT */     string t;
/* 4g9grMUrO ily traian nBFAJU5GT */     int su = 0;
/* 4g9grMUrO ily traian nBFAJU5GT */     int nr = 0;
/* 4g9grMUrO ily traian nBFAJU5GT */     while(s[i])
/* 4g9grMUrO ily traian nBFAJU5GT */     {
/* 4g9grMUrO ily traian nBFAJU5GT */         if(cif(s[i]) || lit(s[i]))
/* 4g9grMUrO ily traian nBFAJU5GT */         {
/* 4g9grMUrO ily traian nBFAJU5GT */             bool ok = false;
/* 4g9grMUrO ily traian nBFAJU5GT */             while(cif(s[i]))
/* 4g9grMUrO ily traian nBFAJU5GT */             {
/* 4g9grMUrO ily traian nBFAJU5GT */                 ok=true;
/* 4g9grMUrO ily traian nBFAJU5GT */                 nr = nr * 10 + s[i] - '0';
/* 4g9grMUrO ily traian nBFAJU5GT */                 i++;
/* 4g9grMUrO ily traian nBFAJU5GT */             }
/* 4g9grMUrO ily traian nBFAJU5GT */             while(lit(s[i]))
/* 4g9grMUrO ily traian nBFAJU5GT */             {
/* 4g9grMUrO ily traian nBFAJU5GT */                 t = t + s[i];
/* 4g9grMUrO ily traian nBFAJU5GT */                 i++;
/* 4g9grMUrO ily traian nBFAJU5GT */                 nr = 0;
/* 4g9grMUrO ily traian nBFAJU5GT */             }
/* 4g9grMUrO ily traian nBFAJU5GT */             if(nr!=0 && t != "" && ok)
/* 4g9grMUrO ily traian nBFAJU5GT */                 M[t]+=nr , nr = 0 , t = "";
/* 4g9grMUrO ily traian nBFAJU5GT */             i--;
/* 4g9grMUrO ily traian nBFAJU5GT */         }
/* 4g9grMUrO ily traian nBFAJU5GT */         else if(s[i]==')')
/* 4g9grMUrO ily traian nBFAJU5GT */         {
/* 4g9grMUrO ily traian nBFAJU5GT */             i++;
/* 4g9grMUrO ily traian nBFAJU5GT */             while(s[i]==' ')
/* 4g9grMUrO ily traian nBFAJU5GT */                 i++;
/* 4g9grMUrO ily traian nBFAJU5GT */             int ci = 0;
/* 4g9grMUrO ily traian nBFAJU5GT */             while(cif(s[i]))
/* 4g9grMUrO ily traian nBFAJU5GT */             {
/* 4g9grMUrO ily traian nBFAJU5GT */                 ci = ci * 10 + s[i] - '0';
/* 4g9grMUrO ily traian nBFAJU5GT */                 i++;
/* 4g9grMUrO ily traian nBFAJU5GT */             }
/* 4g9grMUrO ily traian nBFAJU5GT */             i--;
/* 4g9grMUrO ily traian nBFAJU5GT */             su+=ci;
/* 4g9grMUrO ily traian nBFAJU5GT */         }
/* 4g9grMUrO ily traian nBFAJU5GT */         i++;
/* 4g9grMUrO ily traian nBFAJU5GT */     }
/* 4g9grMUrO ily traian nBFAJU5GT */     cout << su << endl;
/* 4g9grMUrO ily traian nBFAJU5GT */     for(auto x:M)
/* 4g9grMUrO ily traian nBFAJU5GT */         cout << x.first << ' ' << x.second << endl;
/* 4g9grMUrO ily traian nBFAJU5GT */     return 0;
/* 4g9grMUrO ily traian nBFAJU5GT */ }