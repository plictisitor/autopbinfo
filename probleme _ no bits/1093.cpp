/* nv6FiRs65 ily traian YTQhlpOsY */ #include <algorithm>
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
/* nv6FiRs65 ily traian YTQhlpOsY */ 
/* nv6FiRs65 ily traian YTQhlpOsY */ using namespace std;
/* nv6FiRs65 ily traian YTQhlpOsY */ 
/* nv6FiRs65 ily traian YTQhlpOsY */ ifstream cin("text.in");
/* nv6FiRs65 ily traian YTQhlpOsY */ ofstream cout("text.out");
/* nv6FiRs65 ily traian YTQhlpOsY */ 
/* nv6FiRs65 ily traian YTQhlpOsY */ int n , start , lstart;
/* nv6FiRs65 ily traian YTQhlpOsY */ string S[20001] , s;
/* nv6FiRs65 ily traian YTQhlpOsY */ int l[20001];///lungimile cuvinteor
/* nv6FiRs65 ily traian YTQhlpOsY */ int lmax[128] , pmax[128];///pt fiecare lit sirul de lung max
/* nv6FiRs65 ily traian YTQhlpOsY */ int L[20001] , T[20001];///L de la SCLM , tata
/* nv6FiRs65 ily traian YTQhlpOsY */ void afis(int i)
/* nv6FiRs65 ily traian YTQhlpOsY */ {
/* nv6FiRs65 ily traian YTQhlpOsY */     if(T[i]) afis(T[i]);
/* nv6FiRs65 ily traian YTQhlpOsY */     cout << S[i] << '\n';
/* nv6FiRs65 ily traian YTQhlpOsY */ }
/* nv6FiRs65 ily traian YTQhlpOsY */ int main()
/* nv6FiRs65 ily traian YTQhlpOsY */ {
/* nv6FiRs65 ily traian YTQhlpOsY */     while(cin >> s)
/* nv6FiRs65 ily traian YTQhlpOsY */     {
/* nv6FiRs65 ily traian YTQhlpOsY */         S[++n] = s;
/* nv6FiRs65 ily traian YTQhlpOsY */         l[n]= s.length();
/* nv6FiRs65 ily traian YTQhlpOsY */     }
/* nv6FiRs65 ily traian YTQhlpOsY */     for(int i = 1; i <= n ;i++)
/* nv6FiRs65 ily traian YTQhlpOsY */     {
/* nv6FiRs65 ily traian YTQhlpOsY */         char c = S[i][0];///prima litera
/* nv6FiRs65 ily traian YTQhlpOsY */         L[i] = lmax[c] + 1;///creste cu 1
/* nv6FiRs65 ily traian YTQhlpOsY */         T[i] = pmax[c];///anteriorul
/* nv6FiRs65 ily traian YTQhlpOsY */         c = S[i][l[i] - 1];///ultima
/* nv6FiRs65 ily traian YTQhlpOsY */         if(L[i]> lmax[c])
/* nv6FiRs65 ily traian YTQhlpOsY */         {
/* nv6FiRs65 ily traian YTQhlpOsY */             lmax[c] = L[i];
/* nv6FiRs65 ily traian YTQhlpOsY */             pmax[c] = i;
/* nv6FiRs65 ily traian YTQhlpOsY */         }
/* nv6FiRs65 ily traian YTQhlpOsY */         if(lmax[c] > lstart)///pt casastiu de unde pornesc
/* nv6FiRs65 ily traian YTQhlpOsY */         {
/* nv6FiRs65 ily traian YTQhlpOsY */             lstart = lmax[c];
/* nv6FiRs65 ily traian YTQhlpOsY */             start = pmax[c];
/* nv6FiRs65 ily traian YTQhlpOsY */         }
/* nv6FiRs65 ily traian YTQhlpOsY */ 
/* nv6FiRs65 ily traian YTQhlpOsY */     }
/* nv6FiRs65 ily traian YTQhlpOsY */     cout << n << '\n' << n-lstart << '\n';
/* nv6FiRs65 ily traian YTQhlpOsY */     afis(start);
/* nv6FiRs65 ily traian YTQhlpOsY */ 
/* nv6FiRs65 ily traian YTQhlpOsY */ }