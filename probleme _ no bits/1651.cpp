/* sKb8BrcOj ily traian RBOsI4R0A */ #include <algorithm>
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
/* sKb8BrcOj ily traian RBOsI4R0A */ using namespace std;
/* sKb8BrcOj ily traian RBOsI4R0A */ 
/* sKb8BrcOj ily traian RBOsI4R0A */ struct poz
/* sKb8BrcOj ily traian RBOsI4R0A */ {
/* sKb8BrcOj ily traian RBOsI4R0A */     int cnt , val;
/* sKb8BrcOj ily traian RBOsI4R0A */     double pon;
/* sKb8BrcOj ily traian RBOsI4R0A */ }G[1001];
/* sKb8BrcOj ily traian RBOsI4R0A */ int n , m , rez , mini =99999999;
/* sKb8BrcOj ily traian RBOsI4R0A */ 
/* sKb8BrcOj ily traian RBOsI4R0A */ int main()
/* sKb8BrcOj ily traian RBOsI4R0A */ {
/* sKb8BrcOj ily traian RBOsI4R0A */     cin >> n >> m;
/* sKb8BrcOj ily traian RBOsI4R0A */     int x , y , w;
/* sKb8BrcOj ily traian RBOsI4R0A */     for(int i = 1 ; i <= m ; i++)
/* sKb8BrcOj ily traian RBOsI4R0A */     {
/* sKb8BrcOj ily traian RBOsI4R0A */         cin >> x >> y >> w;
/* sKb8BrcOj ily traian RBOsI4R0A */         G[x].cnt++;
/* sKb8BrcOj ily traian RBOsI4R0A */         G[y].cnt++;
/* sKb8BrcOj ily traian RBOsI4R0A */         G[x].val += w;
/* sKb8BrcOj ily traian RBOsI4R0A */         G[y].val += w;
/* sKb8BrcOj ily traian RBOsI4R0A */     }
/* sKb8BrcOj ily traian RBOsI4R0A */     for(int i = 1 ; i <= n ; i++)
/* sKb8BrcOj ily traian RBOsI4R0A */         G[i].pon = G[i].val / G[i].cnt;
/* sKb8BrcOj ily traian RBOsI4R0A */ 
/* sKb8BrcOj ily traian RBOsI4R0A */     for(int i = 1 ; i <= n ; i++)
/* sKb8BrcOj ily traian RBOsI4R0A */         if(G[i].pon < mini)
/* sKb8BrcOj ily traian RBOsI4R0A */         {
/* sKb8BrcOj ily traian RBOsI4R0A */             mini = G[i].pon;
/* sKb8BrcOj ily traian RBOsI4R0A */             rez = i;
/* sKb8BrcOj ily traian RBOsI4R0A */         }
/* sKb8BrcOj ily traian RBOsI4R0A */     cout << rez;
/* sKb8BrcOj ily traian RBOsI4R0A */ }