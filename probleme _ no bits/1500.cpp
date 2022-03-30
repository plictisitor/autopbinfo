/* B2yAdzno1 ily traian afVL6rrdT */ #include <algorithm>
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
/* B2yAdzno1 ily traian afVL6rrdT */ 
/* B2yAdzno1 ily traian afVL6rrdT */ 
/* B2yAdzno1 ily traian afVL6rrdT */ using namespace std;
/* B2yAdzno1 ily traian afVL6rrdT */ 
/* B2yAdzno1 ily traian afVL6rrdT */ ifstream cin("nuclee.in");
/* B2yAdzno1 ily traian afVL6rrdT */ ofstream cout("nuclee.out");
/* B2yAdzno1 ily traian afVL6rrdT */ 
/* B2yAdzno1 ily traian afVL6rrdT */ stack <int> S;
/* B2yAdzno1 ily traian afVL6rrdT */ vector <int> G[1001];
/* B2yAdzno1 ily traian afVL6rrdT */ vector <int> c;
/* B2yAdzno1 ily traian afVL6rrdT */ int n , x , y , v[1001] , L[1001] , cnt , inS[1001] , rez;
/* B2yAdzno1 ily traian afVL6rrdT */ 
/* B2yAdzno1 ily traian afVL6rrdT */ void tarjan(int nod)
/* B2yAdzno1 ily traian afVL6rrdT */ {
/* B2yAdzno1 ily traian afVL6rrdT */     v[nod] = L[nod] = ++cnt;
/* B2yAdzno1 ily traian afVL6rrdT */     S.push(nod);
/* B2yAdzno1 ily traian afVL6rrdT */     inS[nod] = 1;
/* B2yAdzno1 ily traian afVL6rrdT */     for(auto i : G[nod])
/* B2yAdzno1 ily traian afVL6rrdT */     {
/* B2yAdzno1 ily traian afVL6rrdT */         if(!v[i]) tarjan(i) , L[nod] = min(L[nod], L[i]);
/* B2yAdzno1 ily traian afVL6rrdT */         else if(inS[i]) L[nod] = min(L[nod], v[i]);
/* B2yAdzno1 ily traian afVL6rrdT */     }
/* B2yAdzno1 ily traian afVL6rrdT */ 
/* B2yAdzno1 ily traian afVL6rrdT */     if(v[nod] == L[nod])
/* B2yAdzno1 ily traian afVL6rrdT */     {
/* B2yAdzno1 ily traian afVL6rrdT */         c.clear();
/* B2yAdzno1 ily traian afVL6rrdT */         while(true)
/* B2yAdzno1 ily traian afVL6rrdT */         {
/* B2yAdzno1 ily traian afVL6rrdT */             int val = S.top();
/* B2yAdzno1 ily traian afVL6rrdT */             S.pop();
/* B2yAdzno1 ily traian afVL6rrdT */             c.push_back(val);
/* B2yAdzno1 ily traian afVL6rrdT */             inS[val] = 0;
/* B2yAdzno1 ily traian afVL6rrdT */             if(nod == val) break;
/* B2yAdzno1 ily traian afVL6rrdT */         }
/* B2yAdzno1 ily traian afVL6rrdT */         rez++;
/* B2yAdzno1 ily traian afVL6rrdT */     }
/* B2yAdzno1 ily traian afVL6rrdT */ }
/* B2yAdzno1 ily traian afVL6rrdT */ 
/* B2yAdzno1 ily traian afVL6rrdT */ int main()
/* B2yAdzno1 ily traian afVL6rrdT */ {
/* B2yAdzno1 ily traian afVL6rrdT */     cin >> n;
/* B2yAdzno1 ily traian afVL6rrdT */     for(int i = 1 ; i <= n ; i++)
/* B2yAdzno1 ily traian afVL6rrdT */     {
/* B2yAdzno1 ily traian afVL6rrdT */         cin >> x;
/* B2yAdzno1 ily traian afVL6rrdT */         for(int j = 1 ; j <= x ; j++)
/* B2yAdzno1 ily traian afVL6rrdT */         {
/* B2yAdzno1 ily traian afVL6rrdT */             cin >> y;
/* B2yAdzno1 ily traian afVL6rrdT */             G[i].push_back(y);
/* B2yAdzno1 ily traian afVL6rrdT */         }
/* B2yAdzno1 ily traian afVL6rrdT */     }
/* B2yAdzno1 ily traian afVL6rrdT */ 
/* B2yAdzno1 ily traian afVL6rrdT */     for(int i = 1 ; i <= n ; i++)
/* B2yAdzno1 ily traian afVL6rrdT */         if(!v[i]) cnt = 0 , tarjan(i);
/* B2yAdzno1 ily traian afVL6rrdT */ 
/* B2yAdzno1 ily traian afVL6rrdT */     cout << rez;
/* B2yAdzno1 ily traian afVL6rrdT */     return 0;
/* B2yAdzno1 ily traian afVL6rrdT */ }