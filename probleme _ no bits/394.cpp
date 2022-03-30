/* 9aBW7m9Me ily traian 8sTdvzyEz */ #include <algorithm>
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
/* 9aBW7m9Me ily traian 8sTdvzyEz */ using namespace std;
/* 9aBW7m9Me ily traian 8sTdvzyEz */ 
/* 9aBW7m9Me ily traian 8sTdvzyEz */ ifstream cin("cladire2.in");
/* 9aBW7m9Me ily traian 8sTdvzyEz */ ofstream cout("cladire2.out");
/* 9aBW7m9Me ily traian 8sTdvzyEz */ 
/* 9aBW7m9Me ily traian 8sTdvzyEz */ int n , m , a[201][201] , cnt , s[201][201];
/* 9aBW7m9Me ily traian 8sTdvzyEz */ 
/* 9aBW7m9Me ily traian 8sTdvzyEz */ struct poz
/* 9aBW7m9Me ily traian 8sTdvzyEz */ {
/* 9aBW7m9Me ily traian 8sTdvzyEz */     int i , j;
/* 9aBW7m9Me ily traian 8sTdvzyEz */ }rez[401];
/* 9aBW7m9Me ily traian 8sTdvzyEz */ 
/* 9aBW7m9Me ily traian 8sTdvzyEz */ int main()
/* 9aBW7m9Me ily traian 8sTdvzyEz */ {
/* 9aBW7m9Me ily traian 8sTdvzyEz */     cin >> n >> m;
/* 9aBW7m9Me ily traian 8sTdvzyEz */ 
/* 9aBW7m9Me ily traian 8sTdvzyEz */     for(int i = 1 ; i <= n ; i++)
/* 9aBW7m9Me ily traian 8sTdvzyEz */         for(int j = 1 ; j <= m ; j++)
/* 9aBW7m9Me ily traian 8sTdvzyEz */             cin >> a[i][j];
/* 9aBW7m9Me ily traian 8sTdvzyEz */ 
/* 9aBW7m9Me ily traian 8sTdvzyEz */     for(int i = 1 ; i <= n ; i++)
/* 9aBW7m9Me ily traian 8sTdvzyEz */         for(int j = 1 ; j <= m ; j++)
/* 9aBW7m9Me ily traian 8sTdvzyEz */             s[i][j] = a[i][j] + max(s[i - 1][j] , s[i][j - 1]);
/* 9aBW7m9Me ily traian 8sTdvzyEz */ 
/* 9aBW7m9Me ily traian 8sTdvzyEz */     cout << s[n][m] << '\n';
/* 9aBW7m9Me ily traian 8sTdvzyEz */ 
/* 9aBW7m9Me ily traian 8sTdvzyEz */     int i = n , j = m;
/* 9aBW7m9Me ily traian 8sTdvzyEz */ 
/* 9aBW7m9Me ily traian 8sTdvzyEz */     while(s[i][j] - a[i][j] != 0)
/* 9aBW7m9Me ily traian 8sTdvzyEz */     {
/* 9aBW7m9Me ily traian 8sTdvzyEz */         rez[cnt].i = i , rez[cnt].j = j;
/* 9aBW7m9Me ily traian 8sTdvzyEz */         cnt++;
/* 9aBW7m9Me ily traian 8sTdvzyEz */         if(s[i][j - 1] == s[i][j] - a[i][j]) j--;
/* 9aBW7m9Me ily traian 8sTdvzyEz */         else i--;
/* 9aBW7m9Me ily traian 8sTdvzyEz */     }
/* 9aBW7m9Me ily traian 8sTdvzyEz */ 
/* 9aBW7m9Me ily traian 8sTdvzyEz */     cout << "1 1" << '\n';
/* 9aBW7m9Me ily traian 8sTdvzyEz */     for(int i = cnt - 1 ; i >= 0 ; i--)
/* 9aBW7m9Me ily traian 8sTdvzyEz */         cout << rez[i].i << " " << rez[i].j << '\n';
/* 9aBW7m9Me ily traian 8sTdvzyEz */ 
/* 9aBW7m9Me ily traian 8sTdvzyEz */     return 0;
/* 9aBW7m9Me ily traian 8sTdvzyEz */ }