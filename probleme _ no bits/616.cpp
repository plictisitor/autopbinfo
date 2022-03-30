/* 36L4p7eDn ily traian qGPLX7kRF */ #include <algorithm>
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
/* 36L4p7eDn ily traian qGPLX7kRF */ 
/* 36L4p7eDn ily traian qGPLX7kRF */ using namespace std;
/* 36L4p7eDn ily traian qGPLX7kRF */ 
/* 36L4p7eDn ily traian qGPLX7kRF */ ifstream cin("zapada.in");
/* 36L4p7eDn ily traian qGPLX7kRF */ ofstream cout("zapada.out");
/* 36L4p7eDn ily traian qGPLX7kRF */ 
/* 36L4p7eDn ily traian qGPLX7kRF */ int n , m , T[101] , t , cnt , x , y , c , k;
/* 36L4p7eDn ily traian qGPLX7kRF */ 
/* 36L4p7eDn ily traian qGPLX7kRF */ struct poz
/* 36L4p7eDn ily traian qGPLX7kRF */ {
/* 36L4p7eDn ily traian qGPLX7kRF */     int i , j , c;
/* 36L4p7eDn ily traian qGPLX7kRF */ }E[1001];
/* 36L4p7eDn ily traian qGPLX7kRF */ 
/* 36L4p7eDn ily traian qGPLX7kRF */ poz A[101];
/* 36L4p7eDn ily traian qGPLX7kRF */ 
/* 36L4p7eDn ily traian qGPLX7kRF */ void leaga(int a , int b)
/* 36L4p7eDn ily traian qGPLX7kRF */ {
/* 36L4p7eDn ily traian qGPLX7kRF */     T[a] = T[b];
/* 36L4p7eDn ily traian qGPLX7kRF */ }
/* 36L4p7eDn ily traian qGPLX7kRF */ 
/* 36L4p7eDn ily traian qGPLX7kRF */ int radacina(int a)
/* 36L4p7eDn ily traian qGPLX7kRF */ {
/* 36L4p7eDn ily traian qGPLX7kRF */     if(a == T[a]) return a;
/* 36L4p7eDn ily traian qGPLX7kRF */     else return T[a] = radacina(T[a]);
/* 36L4p7eDn ily traian qGPLX7kRF */ }
/* 36L4p7eDn ily traian qGPLX7kRF */ 
/* 36L4p7eDn ily traian qGPLX7kRF */ void kruskal()
/* 36L4p7eDn ily traian qGPLX7kRF */ {
/* 36L4p7eDn ily traian qGPLX7kRF */     int r1 , r2;
/* 36L4p7eDn ily traian qGPLX7kRF */     for(int i = 1 ; i <= m ; i++)
/* 36L4p7eDn ily traian qGPLX7kRF */     {
/* 36L4p7eDn ily traian qGPLX7kRF */         r1 = radacina(E[i].i);
/* 36L4p7eDn ily traian qGPLX7kRF */         r2 = radacina(E[i].j);
/* 36L4p7eDn ily traian qGPLX7kRF */         if(r1 != r2)
/* 36L4p7eDn ily traian qGPLX7kRF */         {
/* 36L4p7eDn ily traian qGPLX7kRF */             t += E[i].c;
/* 36L4p7eDn ily traian qGPLX7kRF */             A[++cnt] = E[i];
/* 36L4p7eDn ily traian qGPLX7kRF */             leaga(r1 , r2);
/* 36L4p7eDn ily traian qGPLX7kRF */         }
/* 36L4p7eDn ily traian qGPLX7kRF */     }
/* 36L4p7eDn ily traian qGPLX7kRF */ }
/* 36L4p7eDn ily traian qGPLX7kRF */ 
/* 36L4p7eDn ily traian qGPLX7kRF */ int comp(poz a , poz b)
/* 36L4p7eDn ily traian qGPLX7kRF */ {
/* 36L4p7eDn ily traian qGPLX7kRF */     if(a.c < b.c) return 1;
/* 36L4p7eDn ily traian qGPLX7kRF */     else if(a.c == b.c && a.i < b.i) return 1;
/* 36L4p7eDn ily traian qGPLX7kRF */     else if(a.c == b.c && a.i == b.i && a.j < b.j) return 1;
/* 36L4p7eDn ily traian qGPLX7kRF */     else return 0;
/* 36L4p7eDn ily traian qGPLX7kRF */ }
/* 36L4p7eDn ily traian qGPLX7kRF */ 
/* 36L4p7eDn ily traian qGPLX7kRF */ int main()
/* 36L4p7eDn ily traian qGPLX7kRF */ {
/* 36L4p7eDn ily traian qGPLX7kRF */     cin >> n >> m;
/* 36L4p7eDn ily traian qGPLX7kRF */     for(int i = 1 ; i <= n ; i++)
/* 36L4p7eDn ily traian qGPLX7kRF */         T[i] = i;
/* 36L4p7eDn ily traian qGPLX7kRF */ 
/* 36L4p7eDn ily traian qGPLX7kRF */     for(int i = 1 ; i <= m ; i++)
/* 36L4p7eDn ily traian qGPLX7kRF */     {
/* 36L4p7eDn ily traian qGPLX7kRF */         cin >> x >> y >> c;
/* 36L4p7eDn ily traian qGPLX7kRF */         E[i].i = x;
/* 36L4p7eDn ily traian qGPLX7kRF */         E[i].j = y;
/* 36L4p7eDn ily traian qGPLX7kRF */         E[i].c = c;
/* 36L4p7eDn ily traian qGPLX7kRF */     }
/* 36L4p7eDn ily traian qGPLX7kRF */     cin >> k;
/* 36L4p7eDn ily traian qGPLX7kRF */     for(int i = 1 ; i <= k ; i++)
/* 36L4p7eDn ily traian qGPLX7kRF */     {
/* 36L4p7eDn ily traian qGPLX7kRF */         cin >> x;
/* 36L4p7eDn ily traian qGPLX7kRF */         A[++cnt] = E[x];
/* 36L4p7eDn ily traian qGPLX7kRF */         t += E[x].c;
/* 36L4p7eDn ily traian qGPLX7kRF */         int r1 = radacina(E[x].i);
/* 36L4p7eDn ily traian qGPLX7kRF */         int r2 = radacina(E[x].j);
/* 36L4p7eDn ily traian qGPLX7kRF */         leaga(r1 , r2);
/* 36L4p7eDn ily traian qGPLX7kRF */     }
/* 36L4p7eDn ily traian qGPLX7kRF */     sort(E + 1 , E + m + 1 , comp);
/* 36L4p7eDn ily traian qGPLX7kRF */     kruskal();
/* 36L4p7eDn ily traian qGPLX7kRF */     cout << t << '\n';
/* 36L4p7eDn ily traian qGPLX7kRF */ }