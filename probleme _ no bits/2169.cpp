/* HJ92UReQO ily traian FGcQtecDa */ #include <algorithm>
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
/* HJ92UReQO ily traian FGcQtecDa */ 
/* HJ92UReQO ily traian FGcQtecDa */ using namespace std;
/* HJ92UReQO ily traian FGcQtecDa */ 
/* HJ92UReQO ily traian FGcQtecDa */ ifstream cin("cezar1.in");
/* HJ92UReQO ily traian FGcQtecDa */ ofstream cout("cezar1.out");
/* HJ92UReQO ily traian FGcQtecDa */ 
/* HJ92UReQO ily traian FGcQtecDa */ int n , m , x , y , D[10001] , C[10001] , k , mini , c;
/* HJ92UReQO ily traian FGcQtecDa */ vector <int> G[10001];
/* HJ92UReQO ily traian FGcQtecDa */ 
/* HJ92UReQO ily traian FGcQtecDa */ int main()
/* HJ92UReQO ily traian FGcQtecDa */ {
/* HJ92UReQO ily traian FGcQtecDa */     cin >> n >> k;
/* HJ92UReQO ily traian FGcQtecDa */     m = n - 1;
/* HJ92UReQO ily traian FGcQtecDa */     for(int i = 1 ; i <= m ; i++)
/* HJ92UReQO ily traian FGcQtecDa */     {
/* HJ92UReQO ily traian FGcQtecDa */         cin >> x >> y;
/* HJ92UReQO ily traian FGcQtecDa */         G[x].push_back(y);
/* HJ92UReQO ily traian FGcQtecDa */         G[y].push_back(x);
/* HJ92UReQO ily traian FGcQtecDa */         D[x]++;
/* HJ92UReQO ily traian FGcQtecDa */         D[y]++;
/* HJ92UReQO ily traian FGcQtecDa */         C[i] = 1;
/* HJ92UReQO ily traian FGcQtecDa */     }
/* HJ92UReQO ily traian FGcQtecDa */     C[n] = 1;
/* HJ92UReQO ily traian FGcQtecDa */ 
/* HJ92UReQO ily traian FGcQtecDa */     while(m > k)
/* HJ92UReQO ily traian FGcQtecDa */     {
/* HJ92UReQO ily traian FGcQtecDa */         mini = 10001;
/* HJ92UReQO ily traian FGcQtecDa */         for(int i = 1 ; i <= n ; i++)
/* HJ92UReQO ily traian FGcQtecDa */             if(D[i] == 1 && C[i] < mini) mini = C[i];
/* HJ92UReQO ily traian FGcQtecDa */ 
/* HJ92UReQO ily traian FGcQtecDa */         for(int i = 1 ; i <= n && m > k; i++)
/* HJ92UReQO ily traian FGcQtecDa */             if(D[i] == 1 && C[i] == mini)
/* HJ92UReQO ily traian FGcQtecDa */             {
/* HJ92UReQO ily traian FGcQtecDa */                 D[i]--;
/* HJ92UReQO ily traian FGcQtecDa */                 c += C[i];
/* HJ92UReQO ily traian FGcQtecDa */                 for(auto p : G[i])
/* HJ92UReQO ily traian FGcQtecDa */                     C[p] += C[i] , D[p]--;
/* HJ92UReQO ily traian FGcQtecDa */                 m--;
/* HJ92UReQO ily traian FGcQtecDa */                 //cout << i << endl;
/* HJ92UReQO ily traian FGcQtecDa */             }
/* HJ92UReQO ily traian FGcQtecDa */     }
/* HJ92UReQO ily traian FGcQtecDa */     cout << c;
/* HJ92UReQO ily traian FGcQtecDa */ 
/* HJ92UReQO ily traian FGcQtecDa */ 
/* HJ92UReQO ily traian FGcQtecDa */ }