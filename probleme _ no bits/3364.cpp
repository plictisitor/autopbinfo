/* IYFjFH9BG ily traian OH2Gu1tIX */ #include <algorithm>
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
/* IYFjFH9BG ily traian OH2Gu1tIX */ 
/* IYFjFH9BG ily traian OH2Gu1tIX */ 
/* IYFjFH9BG ily traian OH2Gu1tIX */ using namespace std;
/* IYFjFH9BG ily traian OH2Gu1tIX */ 
/* IYFjFH9BG ily traian OH2Gu1tIX */ ifstream cin("unire.in");
/* IYFjFH9BG ily traian OH2Gu1tIX */ ofstream cout("unire.out");
/* IYFjFH9BG ily traian OH2Gu1tIX */ 
/* IYFjFH9BG ily traian OH2Gu1tIX */ vector <int> G[100001];
/* IYFjFH9BG ily traian OH2Gu1tIX */ int n , C[100001] , nc , cer , m , f[100001];
/* IYFjFH9BG ily traian OH2Gu1tIX */ long long s;
/* IYFjFH9BG ily traian OH2Gu1tIX */ 
/* IYFjFH9BG ily traian OH2Gu1tIX */ void dfs(int v , int c)
/* IYFjFH9BG ily traian OH2Gu1tIX */ {
/* IYFjFH9BG ily traian OH2Gu1tIX */     C[v] = c;
/* IYFjFH9BG ily traian OH2Gu1tIX */     for(int i :G[v])
/* IYFjFH9BG ily traian OH2Gu1tIX */         if(!C[i]) dfs(i , c);
/* IYFjFH9BG ily traian OH2Gu1tIX */ }
/* IYFjFH9BG ily traian OH2Gu1tIX */ 
/* IYFjFH9BG ily traian OH2Gu1tIX */ int main()
/* IYFjFH9BG ily traian OH2Gu1tIX */ {
/* IYFjFH9BG ily traian OH2Gu1tIX */     cin >> n >> m >> cer;
/* IYFjFH9BG ily traian OH2Gu1tIX */     int x , y;
/* IYFjFH9BG ily traian OH2Gu1tIX */     for(int i = 1 ; i <= m ; i++)
/* IYFjFH9BG ily traian OH2Gu1tIX */     {
/* IYFjFH9BG ily traian OH2Gu1tIX */         cin >> x >> y;
/* IYFjFH9BG ily traian OH2Gu1tIX */         G[x].push_back(y);
/* IYFjFH9BG ily traian OH2Gu1tIX */         G[y].push_back(x);
/* IYFjFH9BG ily traian OH2Gu1tIX */     }
/* IYFjFH9BG ily traian OH2Gu1tIX */     for(int i = 1 ; i <= n ; i++)
/* IYFjFH9BG ily traian OH2Gu1tIX */         if(!C[i])
/* IYFjFH9BG ily traian OH2Gu1tIX */         {
/* IYFjFH9BG ily traian OH2Gu1tIX */             nc++;
/* IYFjFH9BG ily traian OH2Gu1tIX */             dfs(i , i);
/* IYFjFH9BG ily traian OH2Gu1tIX */         }
/* IYFjFH9BG ily traian OH2Gu1tIX */     if(cer == 1) cout << nc - 1;
/* IYFjFH9BG ily traian OH2Gu1tIX */     else
/* IYFjFH9BG ily traian OH2Gu1tIX */     {
/* IYFjFH9BG ily traian OH2Gu1tIX */         sort(C + 1 , C + n + 1);
/* IYFjFH9BG ily traian OH2Gu1tIX */         for(int i = 2 ; i <= n ; i++)
/* IYFjFH9BG ily traian OH2Gu1tIX */         {
/* IYFjFH9BG ily traian OH2Gu1tIX */             if(C[1] != C[i] && f[C[i]] == 0) s += (C[1] + C[i]);
/* IYFjFH9BG ily traian OH2Gu1tIX */             f[C[i]]++;
/* IYFjFH9BG ily traian OH2Gu1tIX */         }
/* IYFjFH9BG ily traian OH2Gu1tIX */         cout << s;
/* IYFjFH9BG ily traian OH2Gu1tIX */     }
/* IYFjFH9BG ily traian OH2Gu1tIX */ }