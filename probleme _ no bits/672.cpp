/* DcunwMJFK ily traian z3izsjj6V */ #include <algorithm>
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
/* DcunwMJFK ily traian z3izsjj6V */ using namespace std;
/* DcunwMJFK ily traian z3izsjj6V */ 
/* DcunwMJFK ily traian z3izsjj6V */ ifstream cin("postordine.in");
/* DcunwMJFK ily traian z3izsjj6V */ ofstream cout("postordine.out");
/* DcunwMJFK ily traian z3izsjj6V */ 
/* DcunwMJFK ily traian z3izsjj6V */ int n , St[1001] , Dr[1001] , val[1001] , T[1001];
/* DcunwMJFK ily traian z3izsjj6V */ 
/* DcunwMJFK ily traian z3izsjj6V */ void RSD(int p)
/* DcunwMJFK ily traian z3izsjj6V */ {
/* DcunwMJFK ily traian z3izsjj6V */     if(p>0)
/* DcunwMJFK ily traian z3izsjj6V */     {
/* DcunwMJFK ily traian z3izsjj6V */         cout << val[p] << ' ';
/* DcunwMJFK ily traian z3izsjj6V */         RSD(St[p]);
/* DcunwMJFK ily traian z3izsjj6V */         RSD(Dr[p]);
/* DcunwMJFK ily traian z3izsjj6V */     }
/* DcunwMJFK ily traian z3izsjj6V */ }
/* DcunwMJFK ily traian z3izsjj6V */ void SRD(int p)
/* DcunwMJFK ily traian z3izsjj6V */ {
/* DcunwMJFK ily traian z3izsjj6V */     if(p>0)
/* DcunwMJFK ily traian z3izsjj6V */     {
/* DcunwMJFK ily traian z3izsjj6V */         SRD(St[p]);
/* DcunwMJFK ily traian z3izsjj6V */         cout << val[p] << ' ';
/* DcunwMJFK ily traian z3izsjj6V */         SRD(Dr[p]);
/* DcunwMJFK ily traian z3izsjj6V */     }
/* DcunwMJFK ily traian z3izsjj6V */ }
/* DcunwMJFK ily traian z3izsjj6V */ void SDR(int p)
/* DcunwMJFK ily traian z3izsjj6V */ {
/* DcunwMJFK ily traian z3izsjj6V */     if(p>0)
/* DcunwMJFK ily traian z3izsjj6V */     {
/* DcunwMJFK ily traian z3izsjj6V */         SDR(St[p]);
/* DcunwMJFK ily traian z3izsjj6V */         SDR(Dr[p]);
/* DcunwMJFK ily traian z3izsjj6V */         cout << val[p] << ' ';
/* DcunwMJFK ily traian z3izsjj6V */     }
/* DcunwMJFK ily traian z3izsjj6V */ }
/* DcunwMJFK ily traian z3izsjj6V */  int main()
/* DcunwMJFK ily traian z3izsjj6V */ {
/* DcunwMJFK ily traian z3izsjj6V */     cin >> n;
/* DcunwMJFK ily traian z3izsjj6V */     for(int i = 1 ; i <= n ; i++)
/* DcunwMJFK ily traian z3izsjj6V */     {
/* DcunwMJFK ily traian z3izsjj6V */         cin >> val[i] >> St[i] >> Dr[i];
/* DcunwMJFK ily traian z3izsjj6V */         T[St[i]] = i;
/* DcunwMJFK ily traian z3izsjj6V */         T[Dr[i]] = i;
/* DcunwMJFK ily traian z3izsjj6V */     }
/* DcunwMJFK ily traian z3izsjj6V */ 
/* DcunwMJFK ily traian z3izsjj6V */     int aux = 1 , rez;
/* DcunwMJFK ily traian z3izsjj6V */     while(aux > 0)
/* DcunwMJFK ily traian z3izsjj6V */     {
/* DcunwMJFK ily traian z3izsjj6V */         if(rez != 0) rez = aux;
/* DcunwMJFK ily traian z3izsjj6V */         aux = T[aux];
/* DcunwMJFK ily traian z3izsjj6V */     }
/* DcunwMJFK ily traian z3izsjj6V */     SDR(rez);
/* DcunwMJFK ily traian z3izsjj6V */ }