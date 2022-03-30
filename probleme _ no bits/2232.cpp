/* LGgQmI87G ily traian xEhyOYpbp */ #include <algorithm>
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
/* LGgQmI87G ily traian xEhyOYpbp */ 
/* LGgQmI87G ily traian xEhyOYpbp */ 
/* LGgQmI87G ily traian xEhyOYpbp */ 
/* LGgQmI87G ily traian xEhyOYpbp */ using namespace std;
/* LGgQmI87G ily traian xEhyOYpbp */ 
/* LGgQmI87G ily traian xEhyOYpbp */ ifstream cin("retea1.in");
/* LGgQmI87G ily traian xEhyOYpbp */ ofstream cout("retea1.out");
/* LGgQmI87G ily traian xEhyOYpbp */ 
/* LGgQmI87G ily traian xEhyOYpbp */ stack <int> S;
/* LGgQmI87G ily traian xEhyOYpbp */ int rezi[301] , u , ok;
/* LGgQmI87G ily traian xEhyOYpbp */ int n , m , x , y , v[1001] , L[1001] , cnt , inS[1001] , rez , e , s[1001] , viz[1001] , a[301][301] , f[301];
/* LGgQmI87G ily traian xEhyOYpbp */ vector <int> G[1001];
/* LGgQmI87G ily traian xEhyOYpbp */ vector <int> P[1001];
/* LGgQmI87G ily traian xEhyOYpbp */ vector <int>c;
/* LGgQmI87G ily traian xEhyOYpbp */ vector <vector<int>> cc;
/* LGgQmI87G ily traian xEhyOYpbp */ 
/* LGgQmI87G ily traian xEhyOYpbp */ void tarjan(int nod)
/* LGgQmI87G ily traian xEhyOYpbp */ {
/* LGgQmI87G ily traian xEhyOYpbp */     cnt++;
/* LGgQmI87G ily traian xEhyOYpbp */     v[nod] = L[nod] = cnt;
/* LGgQmI87G ily traian xEhyOYpbp */     S.push(nod);
/* LGgQmI87G ily traian xEhyOYpbp */     inS[nod] = 1;
/* LGgQmI87G ily traian xEhyOYpbp */     for(auto i:G[nod])
/* LGgQmI87G ily traian xEhyOYpbp */     {
/* LGgQmI87G ily traian xEhyOYpbp */         if(!v[i]) tarjan(i) , L[nod] = min(L[nod] , L[i]);
/* LGgQmI87G ily traian xEhyOYpbp */         else if(inS[i] == 1) L[nod] = min(L[nod] , v[i]);
/* LGgQmI87G ily traian xEhyOYpbp */     }
/* LGgQmI87G ily traian xEhyOYpbp */     if(v[nod] == L[nod])
/* LGgQmI87G ily traian xEhyOYpbp */     {
/* LGgQmI87G ily traian xEhyOYpbp */         c.clear();
/* LGgQmI87G ily traian xEhyOYpbp */         while(1)
/* LGgQmI87G ily traian xEhyOYpbp */         {
/* LGgQmI87G ily traian xEhyOYpbp */             int val = S.top();
/* LGgQmI87G ily traian xEhyOYpbp */             S.pop();
/* LGgQmI87G ily traian xEhyOYpbp */             c.push_back(val);
/* LGgQmI87G ily traian xEhyOYpbp */             inS[val] = 0;
/* LGgQmI87G ily traian xEhyOYpbp */             if(nod == val) break;
/* LGgQmI87G ily traian xEhyOYpbp */         }
/* LGgQmI87G ily traian xEhyOYpbp */         rez++;
/* LGgQmI87G ily traian xEhyOYpbp */         for(auto i:c)
/* LGgQmI87G ily traian xEhyOYpbp */             s[i] = rez;
/* LGgQmI87G ily traian xEhyOYpbp */     }
/* LGgQmI87G ily traian xEhyOYpbp */ }
/* LGgQmI87G ily traian xEhyOYpbp */ 
/* LGgQmI87G ily traian xEhyOYpbp */ int main()
/* LGgQmI87G ily traian xEhyOYpbp */ {
/* LGgQmI87G ily traian xEhyOYpbp */     cin >> n;
/* LGgQmI87G ily traian xEhyOYpbp */     for(int i = 1 ; i <= n ; i++)
/* LGgQmI87G ily traian xEhyOYpbp */         for(int j = 1 ; j <= n ; j++)
/* LGgQmI87G ily traian xEhyOYpbp */         {
/* LGgQmI87G ily traian xEhyOYpbp */             cin >> a[i][j];
/* LGgQmI87G ily traian xEhyOYpbp */             if(a[i][j] == 1)
/* LGgQmI87G ily traian xEhyOYpbp */                 G[i].push_back(j);
/* LGgQmI87G ily traian xEhyOYpbp */         }
/* LGgQmI87G ily traian xEhyOYpbp */     for(int i = 1 ; i <= n ; i++)
/* LGgQmI87G ily traian xEhyOYpbp */         if(!v[i]) tarjan(i);
/* LGgQmI87G ily traian xEhyOYpbp */ 
/* LGgQmI87G ily traian xEhyOYpbp */     for(int i = 1 ; i <= n ; i++)
/* LGgQmI87G ily traian xEhyOYpbp */         f[s[i]]++;
/* LGgQmI87G ily traian xEhyOYpbp */ 
/* LGgQmI87G ily traian xEhyOYpbp */     for(int i = 1 ; i <= n ; i++)
/* LGgQmI87G ily traian xEhyOYpbp */     {
/* LGgQmI87G ily traian xEhyOYpbp */         if(f[i] > 1)
/* LGgQmI87G ily traian xEhyOYpbp */         {
/* LGgQmI87G ily traian xEhyOYpbp */             for(int j = 1 ; j <= n ; j++)
/* LGgQmI87G ily traian xEhyOYpbp */                 if(i == s[j]) rezi[++u] = j;
/* LGgQmI87G ily traian xEhyOYpbp */         }
/* LGgQmI87G ily traian xEhyOYpbp */         else if(f[i] == 1)
/* LGgQmI87G ily traian xEhyOYpbp */         {
/* LGgQmI87G ily traian xEhyOYpbp */             for(int j = 1 ; j <= n ; j++)
/* LGgQmI87G ily traian xEhyOYpbp */                 if(i == s[j] && a[j][j] == 1) rezi[++u] = j;
/* LGgQmI87G ily traian xEhyOYpbp */         }
/* LGgQmI87G ily traian xEhyOYpbp */     }
/* LGgQmI87G ily traian xEhyOYpbp */     sort(rezi + 1 , rezi + u + 1);
/* LGgQmI87G ily traian xEhyOYpbp */     cout << "{";
/* LGgQmI87G ily traian xEhyOYpbp */     for(int i = 1 ; i <= u ; i++)
/* LGgQmI87G ily traian xEhyOYpbp */     {
/* LGgQmI87G ily traian xEhyOYpbp */         if(ok == 0) cout << rezi[i] , ok++;
/* LGgQmI87G ily traian xEhyOYpbp */         else cout << "," << rezi[i];
/* LGgQmI87G ily traian xEhyOYpbp */     }
/* LGgQmI87G ily traian xEhyOYpbp */     cout << "}";
/* LGgQmI87G ily traian xEhyOYpbp */ 
/* LGgQmI87G ily traian xEhyOYpbp */ 
/* LGgQmI87G ily traian xEhyOYpbp */ }