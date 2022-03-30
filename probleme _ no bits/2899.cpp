/* DX4xCPpJt ily traian 5vNpkMlru */ #include <algorithm>
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
/* DX4xCPpJt ily traian 5vNpkMlru */ 
/* DX4xCPpJt ily traian 5vNpkMlru */ 
/* DX4xCPpJt ily traian 5vNpkMlru */ using namespace std;
/* DX4xCPpJt ily traian 5vNpkMlru */ ifstream cin("timbre.in");
/* DX4xCPpJt ily traian 5vNpkMlru */ ofstream cout("timbre.out");
/* DX4xCPpJt ily traian 5vNpkMlru */ int n , cer , ind;
/* DX4xCPpJt ily traian 5vNpkMlru */ char s[200];
/* DX4xCPpJt ily traian 5vNpkMlru */ int nr;
/* DX4xCPpJt ily traian 5vNpkMlru */ struct poz
/* DX4xCPpJt ily traian 5vNpkMlru */ {
/* DX4xCPpJt ily traian 5vNpkMlru */     char ch[200];
/* DX4xCPpJt ily traian 5vNpkMlru */     int val[101], sum;
/* DX4xCPpJt ily traian 5vNpkMlru */ }v[200];
/* DX4xCPpJt ily traian 5vNpkMlru */ int cif(char s)
/* DX4xCPpJt ily traian 5vNpkMlru */ {
/* DX4xCPpJt ily traian 5vNpkMlru */     return s >= '0' && s <= '9';
/* DX4xCPpJt ily traian 5vNpkMlru */ }
/* DX4xCPpJt ily traian 5vNpkMlru */ 
/* DX4xCPpJt ily traian 5vNpkMlru */ int cauta(char s[])
/* DX4xCPpJt ily traian 5vNpkMlru */ {
/* DX4xCPpJt ily traian 5vNpkMlru */     for(int i = 0 ; i < ind ; i++)
/* DX4xCPpJt ily traian 5vNpkMlru */         if(strcmp(s , v[i].ch) == 0) return i;
/* DX4xCPpJt ily traian 5vNpkMlru */     return -1;
/* DX4xCPpJt ily traian 5vNpkMlru */ }
/* DX4xCPpJt ily traian 5vNpkMlru */ 
/* DX4xCPpJt ily traian 5vNpkMlru */ bool comp(poz A, poz B)
/* DX4xCPpJt ily traian 5vNpkMlru */ {
/* DX4xCPpJt ily traian 5vNpkMlru */     if (strcmp(A.ch, B.ch) > 0)return 0;
/* DX4xCPpJt ily traian 5vNpkMlru */     else return 1;
/* DX4xCPpJt ily traian 5vNpkMlru */ }
/* DX4xCPpJt ily traian 5vNpkMlru */ int main()
/* DX4xCPpJt ily traian 5vNpkMlru */ {
/* DX4xCPpJt ily traian 5vNpkMlru */     cin >> cer;
/* DX4xCPpJt ily traian 5vNpkMlru */     cin >> n;
/* DX4xCPpJt ily traian 5vNpkMlru */     cin.getline(s, 200);
/* DX4xCPpJt ily traian 5vNpkMlru */     for(int i = 1 ; i <= n; i++)
/* DX4xCPpJt ily traian 5vNpkMlru */     {
/* DX4xCPpJt ily traian 5vNpkMlru */         cin.getline(s , 200);
/* DX4xCPpJt ily traian 5vNpkMlru */         int j = strlen(s) - 1 , nr = 0, t = 1;
/* DX4xCPpJt ily traian 5vNpkMlru */         while(s[j] != ' ' && cif(s[j]) )
/* DX4xCPpJt ily traian 5vNpkMlru */         {
/* DX4xCPpJt ily traian 5vNpkMlru */             nr = nr + (s[j] - '0')*t;
/* DX4xCPpJt ily traian 5vNpkMlru */             t *= 10;
/* DX4xCPpJt ily traian 5vNpkMlru */             j--;
/* DX4xCPpJt ily traian 5vNpkMlru */         }
/* DX4xCPpJt ily traian 5vNpkMlru */         s[j] = '\0';
/* DX4xCPpJt ily traian 5vNpkMlru */         int pozi = cauta(s);
/* DX4xCPpJt ily traian 5vNpkMlru */         if(pozi != -1)
/* DX4xCPpJt ily traian 5vNpkMlru */         {
/* DX4xCPpJt ily traian 5vNpkMlru */             v[pozi].val[++ v[pozi].val[0]] = nr;
/* DX4xCPpJt ily traian 5vNpkMlru */         }
/* DX4xCPpJt ily traian 5vNpkMlru */         else
/* DX4xCPpJt ily traian 5vNpkMlru */         {
/* DX4xCPpJt ily traian 5vNpkMlru */             strcpy(v[ind].ch , s);
/* DX4xCPpJt ily traian 5vNpkMlru */             v[ind].val[++ v[ind].val[0]] = nr;
/* DX4xCPpJt ily traian 5vNpkMlru */             ind++;
/* DX4xCPpJt ily traian 5vNpkMlru */         }
/* DX4xCPpJt ily traian 5vNpkMlru */     }
/* DX4xCPpJt ily traian 5vNpkMlru */     int cnt = 0;
/* DX4xCPpJt ily traian 5vNpkMlru */     for (int i = 0, l; i < ind; ++ i)
/* DX4xCPpJt ily traian 5vNpkMlru */     {
/* DX4xCPpJt ily traian 5vNpkMlru */         l = v[i].val[0];
/* DX4xCPpJt ily traian 5vNpkMlru */         sort(v[i].val + 1, v[i].val + 1 + l);
/* DX4xCPpJt ily traian 5vNpkMlru */ 
/* DX4xCPpJt ily traian 5vNpkMlru */         if (v[i].val[1] != v[i].val[2])cnt ++;
/* DX4xCPpJt ily traian 5vNpkMlru */         if (l > 1 && v[i].val[l] != v[i].val[l - 1])cnt ++;
/* DX4xCPpJt ily traian 5vNpkMlru */ 
/* DX4xCPpJt ily traian 5vNpkMlru */         for (int j = 2; j < l; ++ j)
/* DX4xCPpJt ily traian 5vNpkMlru */             if (v[i].val[j] != v[i].val[j + 1] && v[i].val[j] != v[i].val[j - 1])
/* DX4xCPpJt ily traian 5vNpkMlru */                 cnt ++;
/* DX4xCPpJt ily traian 5vNpkMlru */ 
/* DX4xCPpJt ily traian 5vNpkMlru */         v[i].sum = 0;
/* DX4xCPpJt ily traian 5vNpkMlru */         for (int j = 1; j < l; ++ j)
/* DX4xCPpJt ily traian 5vNpkMlru */             if (v[i].val[j] != v[i].val[j + 1])
/* DX4xCPpJt ily traian 5vNpkMlru */                 v[i].sum += v[i].val[j];
/* DX4xCPpJt ily traian 5vNpkMlru */ 
/* DX4xCPpJt ily traian 5vNpkMlru */         v[i].sum += v[i].val[l];
/* DX4xCPpJt ily traian 5vNpkMlru */     }
/* DX4xCPpJt ily traian 5vNpkMlru */     if(cer == 1) cout << ind;
/* DX4xCPpJt ily traian 5vNpkMlru */     else if(cer == 2) cout << cnt;
/* DX4xCPpJt ily traian 5vNpkMlru */     else
/* DX4xCPpJt ily traian 5vNpkMlru */     {
/* DX4xCPpJt ily traian 5vNpkMlru */         sort (v, v + ind, comp);
/* DX4xCPpJt ily traian 5vNpkMlru */ 
/* DX4xCPpJt ily traian 5vNpkMlru */         int maxi = 0;
/* DX4xCPpJt ily traian 5vNpkMlru */         for (int i = 0; i < ind; ++ i)
/* DX4xCPpJt ily traian 5vNpkMlru */             maxi = max(maxi, v[i].sum);
/* DX4xCPpJt ily traian 5vNpkMlru */ 
/* DX4xCPpJt ily traian 5vNpkMlru */         for (int i = 0; i < ind; ++ i)
/* DX4xCPpJt ily traian 5vNpkMlru */             if (v[i].sum == maxi)
/* DX4xCPpJt ily traian 5vNpkMlru */                 cout << v[i].ch << '\n';
/* DX4xCPpJt ily traian 5vNpkMlru */     }
/* DX4xCPpJt ily traian 5vNpkMlru */ }