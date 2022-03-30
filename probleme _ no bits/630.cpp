/* 4cn1j5mIV ily traian SS8cVtqqu */ #include <algorithm>
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
/* 4cn1j5mIV ily traian SS8cVtqqu */ 
/* 4cn1j5mIV ily traian SS8cVtqqu */ 
/* 4cn1j5mIV ily traian SS8cVtqqu */ using namespace std;
/* 4cn1j5mIV ily traian SS8cVtqqu */ 
/* 4cn1j5mIV ily traian SS8cVtqqu */ ifstream cin("joc.in");
/* 4cn1j5mIV ily traian SS8cVtqqu */ ofstream cout("joc.out");
/* 4cn1j5mIV ily traian SS8cVtqqu */ using VVP = vector <vector <pair<int , int> > >;
/* 4cn1j5mIV ily traian SS8cVtqqu */ using VI = vector <int>;
/* 4cn1j5mIV ily traian SS8cVtqqu */ using PI = pair<int , int>;
/* 4cn1j5mIV ily traian SS8cVtqqu */ VI d;
/* 4cn1j5mIV ily traian SS8cVtqqu */ VVP G;
/* 4cn1j5mIV ily traian SS8cVtqqu */ const int Inf = 0x3f3f3f3f;
/* 4cn1j5mIV ily traian SS8cVtqqu */ int cer , n , s , f , C[50001] , cate , x , T[50001] , cnt , rez[50001];
/* 4cn1j5mIV ily traian SS8cVtqqu */ 
/* 4cn1j5mIV ily traian SS8cVtqqu */ void Dijkstra(int x)
/* 4cn1j5mIV ily traian SS8cVtqqu */ {
/* 4cn1j5mIV ily traian SS8cVtqqu */     d = VI(n + 1, Inf);
/* 4cn1j5mIV ily traian SS8cVtqqu */     priority_queue<PI, vector<PI>, greater<PI>> Q;
/* 4cn1j5mIV ily traian SS8cVtqqu */     int y , cost , dist;
/* 4cn1j5mIV ily traian SS8cVtqqu */     d[x] = 0;
/* 4cn1j5mIV ily traian SS8cVtqqu */     Q.push({0 , x});
/* 4cn1j5mIV ily traian SS8cVtqqu */     while(!Q.empty())
/* 4cn1j5mIV ily traian SS8cVtqqu */     {
/* 4cn1j5mIV ily traian SS8cVtqqu */         x = Q.top().second;
/* 4cn1j5mIV ily traian SS8cVtqqu */         dist = Q.top().first;
/* 4cn1j5mIV ily traian SS8cVtqqu */         Q.pop();
/* 4cn1j5mIV ily traian SS8cVtqqu */         if(dist > d[x]) continue;
/* 4cn1j5mIV ily traian SS8cVtqqu */         for(auto& p : G[x])
/* 4cn1j5mIV ily traian SS8cVtqqu */         {
/* 4cn1j5mIV ily traian SS8cVtqqu */             y = p.first;
/* 4cn1j5mIV ily traian SS8cVtqqu */             cost = p.second;
/* 4cn1j5mIV ily traian SS8cVtqqu */             if(d[y] > d[x] + cost)
/* 4cn1j5mIV ily traian SS8cVtqqu */             {
/* 4cn1j5mIV ily traian SS8cVtqqu */                 d[y] = d[x] + cost;
/* 4cn1j5mIV ily traian SS8cVtqqu */                 Q.push({d[y] , y});
/* 4cn1j5mIV ily traian SS8cVtqqu */                 T[y] = x;
/* 4cn1j5mIV ily traian SS8cVtqqu */             }
/* 4cn1j5mIV ily traian SS8cVtqqu */         }
/* 4cn1j5mIV ily traian SS8cVtqqu */     }
/* 4cn1j5mIV ily traian SS8cVtqqu */ }
/* 4cn1j5mIV ily traian SS8cVtqqu */ 
/* 4cn1j5mIV ily traian SS8cVtqqu */ int main()
/* 4cn1j5mIV ily traian SS8cVtqqu */ {
/* 4cn1j5mIV ily traian SS8cVtqqu */     cin >> cer >> n >> s >> f;
/* 4cn1j5mIV ily traian SS8cVtqqu */     G = VVP(n + 1);
/* 4cn1j5mIV ily traian SS8cVtqqu */     for(int i = 1 ; i <= n ; i++)
/* 4cn1j5mIV ily traian SS8cVtqqu */         cin >> C[i];
/* 4cn1j5mIV ily traian SS8cVtqqu */ 
/* 4cn1j5mIV ily traian SS8cVtqqu */     for(int i = 1 ; i <= n ; i++)
/* 4cn1j5mIV ily traian SS8cVtqqu */     {
/* 4cn1j5mIV ily traian SS8cVtqqu */         cin >> cate;
/* 4cn1j5mIV ily traian SS8cVtqqu */         for(int j = 1 ; j <= cate ; j++)
/* 4cn1j5mIV ily traian SS8cVtqqu */         {
/* 4cn1j5mIV ily traian SS8cVtqqu */             cin >> x;
/* 4cn1j5mIV ily traian SS8cVtqqu */             int cost = max(C[i] , C[x]) / min(C[i] , C[x]);
/* 4cn1j5mIV ily traian SS8cVtqqu */             G[i].push_back({x , cost});
/* 4cn1j5mIV ily traian SS8cVtqqu */         }
/* 4cn1j5mIV ily traian SS8cVtqqu */     }
/* 4cn1j5mIV ily traian SS8cVtqqu */     Dijkstra(s);
/* 4cn1j5mIV ily traian SS8cVtqqu */     if(cer == 1)cout << d[f];
/* 4cn1j5mIV ily traian SS8cVtqqu */     else
/* 4cn1j5mIV ily traian SS8cVtqqu */     {
/* 4cn1j5mIV ily traian SS8cVtqqu */         int poz = T[f];
/* 4cn1j5mIV ily traian SS8cVtqqu */         rez[++cnt] = f;
/* 4cn1j5mIV ily traian SS8cVtqqu */         while(poz != 0)
/* 4cn1j5mIV ily traian SS8cVtqqu */         {
/* 4cn1j5mIV ily traian SS8cVtqqu */             rez[++cnt] = poz;
/* 4cn1j5mIV ily traian SS8cVtqqu */             poz = T[poz];
/* 4cn1j5mIV ily traian SS8cVtqqu */         }
/* 4cn1j5mIV ily traian SS8cVtqqu */         cout << cnt << '\n';
/* 4cn1j5mIV ily traian SS8cVtqqu */         for(int i = cnt ; i >= 1 ; i--)
/* 4cn1j5mIV ily traian SS8cVtqqu */             cout << rez[i] << " ";
/* 4cn1j5mIV ily traian SS8cVtqqu */     }
/* 4cn1j5mIV ily traian SS8cVtqqu */ }