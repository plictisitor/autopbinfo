/* SqKJVrHlD ily traian a4oPrcVWl */ #include <algorithm>
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
/* SqKJVrHlD ily traian a4oPrcVWl */ using namespace std;
/* SqKJVrHlD ily traian a4oPrcVWl */ 
/* SqKJVrHlD ily traian a4oPrcVWl */ ifstream cin("preordine.in");
/* SqKJVrHlD ily traian a4oPrcVWl */ ofstream cout("preordine.out");
/* SqKJVrHlD ily traian a4oPrcVWl */ 
/* SqKJVrHlD ily traian a4oPrcVWl */ int n , St[1001] , Dr[1001] , val[1001] , T[1001];
/* SqKJVrHlD ily traian a4oPrcVWl */ 
/* SqKJVrHlD ily traian a4oPrcVWl */ void RSD(int p)
/* SqKJVrHlD ily traian a4oPrcVWl */ {
/* SqKJVrHlD ily traian a4oPrcVWl */     if(p>0)
/* SqKJVrHlD ily traian a4oPrcVWl */     {
/* SqKJVrHlD ily traian a4oPrcVWl */         cout << val[p] << ' ';
/* SqKJVrHlD ily traian a4oPrcVWl */         RSD(St[p]);
/* SqKJVrHlD ily traian a4oPrcVWl */         RSD(Dr[p]);
/* SqKJVrHlD ily traian a4oPrcVWl */     }
/* SqKJVrHlD ily traian a4oPrcVWl */ }
/* SqKJVrHlD ily traian a4oPrcVWl */ void SRD(int p)
/* SqKJVrHlD ily traian a4oPrcVWl */ {
/* SqKJVrHlD ily traian a4oPrcVWl */     if(p>0)
/* SqKJVrHlD ily traian a4oPrcVWl */     {
/* SqKJVrHlD ily traian a4oPrcVWl */         SRD(St[p]);
/* SqKJVrHlD ily traian a4oPrcVWl */         cout << val[p] << ' ';
/* SqKJVrHlD ily traian a4oPrcVWl */         SRD(Dr[p]);
/* SqKJVrHlD ily traian a4oPrcVWl */     }
/* SqKJVrHlD ily traian a4oPrcVWl */ }
/* SqKJVrHlD ily traian a4oPrcVWl */ void SDR(int p)
/* SqKJVrHlD ily traian a4oPrcVWl */ {
/* SqKJVrHlD ily traian a4oPrcVWl */     if(p>0)
/* SqKJVrHlD ily traian a4oPrcVWl */     {
/* SqKJVrHlD ily traian a4oPrcVWl */         SDR(St[p]);
/* SqKJVrHlD ily traian a4oPrcVWl */         SDR(Dr[p]);
/* SqKJVrHlD ily traian a4oPrcVWl */         cout << val[p] << ' ';
/* SqKJVrHlD ily traian a4oPrcVWl */     }
/* SqKJVrHlD ily traian a4oPrcVWl */ }
/* SqKJVrHlD ily traian a4oPrcVWl */  int main()
/* SqKJVrHlD ily traian a4oPrcVWl */ {
/* SqKJVrHlD ily traian a4oPrcVWl */     cin >> n;
/* SqKJVrHlD ily traian a4oPrcVWl */     for(int i = 1 ; i <= n ; i++)
/* SqKJVrHlD ily traian a4oPrcVWl */     {
/* SqKJVrHlD ily traian a4oPrcVWl */         cin >> val[i] >> St[i] >> Dr[i];
/* SqKJVrHlD ily traian a4oPrcVWl */         T[St[i]] = i;
/* SqKJVrHlD ily traian a4oPrcVWl */         T[Dr[i]] = i;
/* SqKJVrHlD ily traian a4oPrcVWl */     }
/* SqKJVrHlD ily traian a4oPrcVWl */ 
/* SqKJVrHlD ily traian a4oPrcVWl */     int aux = 1 , rez;
/* SqKJVrHlD ily traian a4oPrcVWl */     while(aux > 0)
/* SqKJVrHlD ily traian a4oPrcVWl */     {
/* SqKJVrHlD ily traian a4oPrcVWl */         if(rez != 0) rez = aux;
/* SqKJVrHlD ily traian a4oPrcVWl */         aux = T[aux];
/* SqKJVrHlD ily traian a4oPrcVWl */     }
/* SqKJVrHlD ily traian a4oPrcVWl */     RSD(rez);
/* SqKJVrHlD ily traian a4oPrcVWl */ }