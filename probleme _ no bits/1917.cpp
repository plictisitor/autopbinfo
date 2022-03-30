/* k9d8m5ZRy ily traian wBDDflxnf */ #include <algorithm>
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
/* k9d8m5ZRy ily traian wBDDflxnf */ 
/* k9d8m5ZRy ily traian wBDDflxnf */ using namespace std;
/* k9d8m5ZRy ily traian wBDDflxnf */ 
/* k9d8m5ZRy ily traian wBDDflxnf */ ifstream cin("prieteni.in");
/* k9d8m5ZRy ily traian wBDDflxnf */ ofstream cout("prieteni.out");
/* k9d8m5ZRy ily traian wBDDflxnf */ 
/* k9d8m5ZRy ily traian wBDDflxnf */ int T[1000001] , n , cer , m , t , C[1000001];
/* k9d8m5ZRy ily traian wBDDflxnf */ 
/* k9d8m5ZRy ily traian wBDDflxnf */ void leaga(int a , int b)
/* k9d8m5ZRy ily traian wBDDflxnf */ {
/* k9d8m5ZRy ily traian wBDDflxnf */     if(T[a] > T[b]) T[a] = T[b] , C[b] += C[a];
/* k9d8m5ZRy ily traian wBDDflxnf */     else T[b] = T[a] , C[a] += C[b];
/* k9d8m5ZRy ily traian wBDDflxnf */ }
/* k9d8m5ZRy ily traian wBDDflxnf */ 
/* k9d8m5ZRy ily traian wBDDflxnf */ int radacina(int a)
/* k9d8m5ZRy ily traian wBDDflxnf */ {
/* k9d8m5ZRy ily traian wBDDflxnf */     if(a == T[a]) return a;
/* k9d8m5ZRy ily traian wBDDflxnf */     else return T[a] = radacina(T[a]);
/* k9d8m5ZRy ily traian wBDDflxnf */ }
/* k9d8m5ZRy ily traian wBDDflxnf */ int main()
/* k9d8m5ZRy ily traian wBDDflxnf */ {
/* k9d8m5ZRy ily traian wBDDflxnf */     cin >> n >> m;
/* k9d8m5ZRy ily traian wBDDflxnf */     int x , y , c;
/* k9d8m5ZRy ily traian wBDDflxnf */     for(int i = 1 ; i <= n ; i++)
/* k9d8m5ZRy ily traian wBDDflxnf */         T[i] = i , C[i] = 1;
/* k9d8m5ZRy ily traian wBDDflxnf */     for(int i = 1 ; i <= m ; i++)
/* k9d8m5ZRy ily traian wBDDflxnf */     {
/* k9d8m5ZRy ily traian wBDDflxnf */         cin >> cer;
/* k9d8m5ZRy ily traian wBDDflxnf */         if(cer == 1)
/* k9d8m5ZRy ily traian wBDDflxnf */         {
/* k9d8m5ZRy ily traian wBDDflxnf */             cin >> x >> y;
/* k9d8m5ZRy ily traian wBDDflxnf */             int r1 , r2;
/* k9d8m5ZRy ily traian wBDDflxnf */             r1 = radacina(x);
/* k9d8m5ZRy ily traian wBDDflxnf */             r2 = radacina(y);
/* k9d8m5ZRy ily traian wBDDflxnf */             if(r1 != r2) leaga(r1 , r2);
/* k9d8m5ZRy ily traian wBDDflxnf */         }
/* k9d8m5ZRy ily traian wBDDflxnf */         else
/* k9d8m5ZRy ily traian wBDDflxnf */         {
/* k9d8m5ZRy ily traian wBDDflxnf */             cin >> x;
/* k9d8m5ZRy ily traian wBDDflxnf */             cout << C[radacina(x)] << '\n';
/* k9d8m5ZRy ily traian wBDDflxnf */         }
/* k9d8m5ZRy ily traian wBDDflxnf */ 
/* k9d8m5ZRy ily traian wBDDflxnf */     }
/* k9d8m5ZRy ily traian wBDDflxnf */ }