/* xYoJaOOof ily traian JU6yggiVF */ #include <algorithm>
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
/* xYoJaOOof ily traian JU6yggiVF */ 
/* xYoJaOOof ily traian JU6yggiVF */ 
/* xYoJaOOof ily traian JU6yggiVF */ using namespace std;
/* xYoJaOOof ily traian JU6yggiVF */ 
/* xYoJaOOof ily traian JU6yggiVF */ vector <int> G[100002];
/* xYoJaOOof ily traian JU6yggiVF */ set <int> Q;
/* xYoJaOOof ily traian JU6yggiVF */ int n , m , x , y , g[100002];
/* xYoJaOOof ily traian JU6yggiVF */ 
/* xYoJaOOof ily traian JU6yggiVF */ int main()
/* xYoJaOOof ily traian JU6yggiVF */ {
/* xYoJaOOof ily traian JU6yggiVF */     cin >> n >> m;
/* xYoJaOOof ily traian JU6yggiVF */     for(int i = 1 ; i <= m ; i++)
/* xYoJaOOof ily traian JU6yggiVF */     {
/* xYoJaOOof ily traian JU6yggiVF */         cin >> x >> y;
/* xYoJaOOof ily traian JU6yggiVF */         G[x].push_back(y);
/* xYoJaOOof ily traian JU6yggiVF */         g[y]++;
/* xYoJaOOof ily traian JU6yggiVF */     }
/* xYoJaOOof ily traian JU6yggiVF */ 
/* xYoJaOOof ily traian JU6yggiVF */     for(int i = 1 ; i <= n ; i++)
/* xYoJaOOof ily traian JU6yggiVF */         if(g[i] == 0)Q.insert(i);
/* xYoJaOOof ily traian JU6yggiVF */ 
/* xYoJaOOof ily traian JU6yggiVF */     while(!Q.empty())
/* xYoJaOOof ily traian JU6yggiVF */     {
/* xYoJaOOof ily traian JU6yggiVF */         x = *(Q.begin());
/* xYoJaOOof ily traian JU6yggiVF */         Q.erase(x);
/* xYoJaOOof ily traian JU6yggiVF */         cout << x << " ";
/* xYoJaOOof ily traian JU6yggiVF */         for(int i : G[x])
/* xYoJaOOof ily traian JU6yggiVF */         {
/* xYoJaOOof ily traian JU6yggiVF */             g[i]--;
/* xYoJaOOof ily traian JU6yggiVF */             if(g[i] == 0) Q.insert(i);
/* xYoJaOOof ily traian JU6yggiVF */         }
/* xYoJaOOof ily traian JU6yggiVF */ 
/* xYoJaOOof ily traian JU6yggiVF */     }
/* xYoJaOOof ily traian JU6yggiVF */ 
/* xYoJaOOof ily traian JU6yggiVF */ 
/* xYoJaOOof ily traian JU6yggiVF */ 
/* xYoJaOOof ily traian JU6yggiVF */ }