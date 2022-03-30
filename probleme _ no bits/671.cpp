/* jQutRrnTs ily traian Q0NYgeP7n */ #include <algorithm>
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
/* jQutRrnTs ily traian Q0NYgeP7n */ using namespace std;
/* jQutRrnTs ily traian Q0NYgeP7n */ 
/* jQutRrnTs ily traian Q0NYgeP7n */ ifstream cin("inordine.in");
/* jQutRrnTs ily traian Q0NYgeP7n */ ofstream cout("inordine.out");
/* jQutRrnTs ily traian Q0NYgeP7n */ 
/* jQutRrnTs ily traian Q0NYgeP7n */ int n , St[1001] , Dr[1001] , val[1001] , T[1001];
/* jQutRrnTs ily traian Q0NYgeP7n */ 
/* jQutRrnTs ily traian Q0NYgeP7n */ void RSD(int p)
/* jQutRrnTs ily traian Q0NYgeP7n */ {
/* jQutRrnTs ily traian Q0NYgeP7n */     if(p>0)
/* jQutRrnTs ily traian Q0NYgeP7n */     {
/* jQutRrnTs ily traian Q0NYgeP7n */         cout << val[p] << ' ';
/* jQutRrnTs ily traian Q0NYgeP7n */         RSD(St[p]);
/* jQutRrnTs ily traian Q0NYgeP7n */         RSD(Dr[p]);
/* jQutRrnTs ily traian Q0NYgeP7n */     }
/* jQutRrnTs ily traian Q0NYgeP7n */ }
/* jQutRrnTs ily traian Q0NYgeP7n */ void SRD(int p)
/* jQutRrnTs ily traian Q0NYgeP7n */ {
/* jQutRrnTs ily traian Q0NYgeP7n */     if(p>0)
/* jQutRrnTs ily traian Q0NYgeP7n */     {
/* jQutRrnTs ily traian Q0NYgeP7n */         SRD(St[p]);
/* jQutRrnTs ily traian Q0NYgeP7n */         cout << val[p] << ' ';
/* jQutRrnTs ily traian Q0NYgeP7n */         SRD(Dr[p]);
/* jQutRrnTs ily traian Q0NYgeP7n */     }
/* jQutRrnTs ily traian Q0NYgeP7n */ }
/* jQutRrnTs ily traian Q0NYgeP7n */ void SDR(int p)
/* jQutRrnTs ily traian Q0NYgeP7n */ {
/* jQutRrnTs ily traian Q0NYgeP7n */     if(p>0)
/* jQutRrnTs ily traian Q0NYgeP7n */     {
/* jQutRrnTs ily traian Q0NYgeP7n */         SDR(St[p]);
/* jQutRrnTs ily traian Q0NYgeP7n */         SDR(Dr[p]);
/* jQutRrnTs ily traian Q0NYgeP7n */         cout << val[p] << ' ';
/* jQutRrnTs ily traian Q0NYgeP7n */     }
/* jQutRrnTs ily traian Q0NYgeP7n */ }
/* jQutRrnTs ily traian Q0NYgeP7n */  int main()
/* jQutRrnTs ily traian Q0NYgeP7n */ {
/* jQutRrnTs ily traian Q0NYgeP7n */     cin >> n;
/* jQutRrnTs ily traian Q0NYgeP7n */     for(int i = 1 ; i <= n ; i++)
/* jQutRrnTs ily traian Q0NYgeP7n */     {
/* jQutRrnTs ily traian Q0NYgeP7n */         cin >> val[i] >> St[i] >> Dr[i];
/* jQutRrnTs ily traian Q0NYgeP7n */         T[St[i]] = i;
/* jQutRrnTs ily traian Q0NYgeP7n */         T[Dr[i]] = i;
/* jQutRrnTs ily traian Q0NYgeP7n */     }
/* jQutRrnTs ily traian Q0NYgeP7n */ 
/* jQutRrnTs ily traian Q0NYgeP7n */     int aux = 1 , rez;
/* jQutRrnTs ily traian Q0NYgeP7n */     while(aux > 0)
/* jQutRrnTs ily traian Q0NYgeP7n */     {
/* jQutRrnTs ily traian Q0NYgeP7n */         if(rez != 0) rez = aux;
/* jQutRrnTs ily traian Q0NYgeP7n */         aux = T[aux];
/* jQutRrnTs ily traian Q0NYgeP7n */     }
/* jQutRrnTs ily traian Q0NYgeP7n */     SRD(rez);
/* jQutRrnTs ily traian Q0NYgeP7n */ }