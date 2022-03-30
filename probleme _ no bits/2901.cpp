/* LNbuvXPf6 ily traian mBXl1k0CY */ #include <algorithm>
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
/* LNbuvXPf6 ily traian mBXl1k0CY */ 
/* LNbuvXPf6 ily traian mBXl1k0CY */ using namespace std;
/* LNbuvXPf6 ily traian mBXl1k0CY */ 
/* LNbuvXPf6 ily traian mBXl1k0CY */ ifstream cin("datapal.in");
/* LNbuvXPf6 ily traian mBXl1k0CY */ ofstream cout("datapal.out");
/* LNbuvXPf6 ily traian mBXl1k0CY */ 
/* LNbuvXPf6 ily traian mBXl1k0CY */ string s;
/* LNbuvXPf6 ily traian mBXl1k0CY */ 
/* LNbuvXPf6 ily traian mBXl1k0CY */ map<string , int> M;
/* LNbuvXPf6 ily traian mBXl1k0CY */ 
/* LNbuvXPf6 ily traian mBXl1k0CY */ int main()
/* LNbuvXPf6 ily traian mBXl1k0CY */ {
/* LNbuvXPf6 ily traian mBXl1k0CY */     int n;
/* LNbuvXPf6 ily traian mBXl1k0CY */     cin >> n;
/* LNbuvXPf6 ily traian mBXl1k0CY */     int cnt = 0;
/* LNbuvXPf6 ily traian mBXl1k0CY */     for(int i = 1 ; i <= n ; ++i)
/* LNbuvXPf6 ily traian mBXl1k0CY */     {
/* LNbuvXPf6 ily traian mBXl1k0CY */         cin >> s;
/* LNbuvXPf6 ily traian mBXl1k0CY */         bool ok = true;
/* LNbuvXPf6 ily traian mBXl1k0CY */         int x = s.length()-1;
/* LNbuvXPf6 ily traian mBXl1k0CY */         for(int j = 0 ; j <= x ; ++j)
/* LNbuvXPf6 ily traian mBXl1k0CY */             if(s[j]!=s[x-j])
/* LNbuvXPf6 ily traian mBXl1k0CY */                 ok=false;
/* LNbuvXPf6 ily traian mBXl1k0CY */         if(ok)
/* LNbuvXPf6 ily traian mBXl1k0CY */             cnt++ , M[s.substr(4 , 2)]++;
/* LNbuvXPf6 ily traian mBXl1k0CY */     }
/* LNbuvXPf6 ily traian mBXl1k0CY */     cout << cnt << endl;
/* LNbuvXPf6 ily traian mBXl1k0CY */     int fmax = 0;
/* LNbuvXPf6 ily traian mBXl1k0CY */     for(auto x:M)
/* LNbuvXPf6 ily traian mBXl1k0CY */         if(x.second > fmax)
/* LNbuvXPf6 ily traian mBXl1k0CY */             fmax = x.second;
/* LNbuvXPf6 ily traian mBXl1k0CY */     for(auto x:M)
/* LNbuvXPf6 ily traian mBXl1k0CY */     {
/* LNbuvXPf6 ily traian mBXl1k0CY */         int nr = 0;
/* LNbuvXPf6 ily traian mBXl1k0CY */         string t = x.first;
/* LNbuvXPf6 ily traian mBXl1k0CY */         int i = 0;
/* LNbuvXPf6 ily traian mBXl1k0CY */         while(t[i])
/* LNbuvXPf6 ily traian mBXl1k0CY */         {
/* LNbuvXPf6 ily traian mBXl1k0CY */             nr = nr * 10 + t[i]-'0';
/* LNbuvXPf6 ily traian mBXl1k0CY */             i++;
/* LNbuvXPf6 ily traian mBXl1k0CY */         }
/* LNbuvXPf6 ily traian mBXl1k0CY */         if(x.second == fmax)
/* LNbuvXPf6 ily traian mBXl1k0CY */         cout << nr + 1 << ' ';
/* LNbuvXPf6 ily traian mBXl1k0CY */     }
/* LNbuvXPf6 ily traian mBXl1k0CY */     return 0;
/* LNbuvXPf6 ily traian mBXl1k0CY */ }