/* RpT19eLnX ily traian jQ2T34jrr */ #include <algorithm>
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
/* RpT19eLnX ily traian jQ2T34jrr */ using namespace std;
/* RpT19eLnX ily traian jQ2T34jrr */ ifstream cin("inordine1.in");
/* RpT19eLnX ily traian jQ2T34jrr */ ofstream cout("inordine1.out");
/* RpT19eLnX ily traian jQ2T34jrr */ 
/* RpT19eLnX ily traian jQ2T34jrr */ struct nod
/* RpT19eLnX ily traian jQ2T34jrr */ {
/* RpT19eLnX ily traian jQ2T34jrr */     int info;
/* RpT19eLnX ily traian jQ2T34jrr */     nod *st, *dr;
/* RpT19eLnX ily traian jQ2T34jrr */ };
/* RpT19eLnX ily traian jQ2T34jrr */ 
/* RpT19eLnX ily traian jQ2T34jrr */ void RSD(nod *p)
/* RpT19eLnX ily traian jQ2T34jrr */ {
/* RpT19eLnX ily traian jQ2T34jrr */     if(p)
/* RpT19eLnX ily traian jQ2T34jrr */     {
/* RpT19eLnX ily traian jQ2T34jrr */         //cout << p -> info << " ";
/* RpT19eLnX ily traian jQ2T34jrr */         RSD(p->st);
/* RpT19eLnX ily traian jQ2T34jrr */         cout << p -> info << " ";
/* RpT19eLnX ily traian jQ2T34jrr */         RSD(p->dr);
/* RpT19eLnX ily traian jQ2T34jrr */         //cout << p -> info << " ";
/* RpT19eLnX ily traian jQ2T34jrr */     }
/* RpT19eLnX ily traian jQ2T34jrr */ }
/* RpT19eLnX ily traian jQ2T34jrr */ 
/* RpT19eLnX ily traian jQ2T34jrr */ void read(nod * &p)
/* RpT19eLnX ily traian jQ2T34jrr */ {
/* RpT19eLnX ily traian jQ2T34jrr */     int x;
/* RpT19eLnX ily traian jQ2T34jrr */     cin >> x;
/* RpT19eLnX ily traian jQ2T34jrr */     if(x == 0) p = NULL;
/* RpT19eLnX ily traian jQ2T34jrr */     else
/* RpT19eLnX ily traian jQ2T34jrr */     {
/* RpT19eLnX ily traian jQ2T34jrr */         p = new nod;
/* RpT19eLnX ily traian jQ2T34jrr */         p->info = x;
/* RpT19eLnX ily traian jQ2T34jrr */         read(p -> st);
/* RpT19eLnX ily traian jQ2T34jrr */         read(p -> dr);
/* RpT19eLnX ily traian jQ2T34jrr */     }
/* RpT19eLnX ily traian jQ2T34jrr */ }
/* RpT19eLnX ily traian jQ2T34jrr */ 
/* RpT19eLnX ily traian jQ2T34jrr */ int main()
/* RpT19eLnX ily traian jQ2T34jrr */ {
/* RpT19eLnX ily traian jQ2T34jrr */     nod *p = NULL;
/* RpT19eLnX ily traian jQ2T34jrr */     read(p);
/* RpT19eLnX ily traian jQ2T34jrr */     RSD(p);
/* RpT19eLnX ily traian jQ2T34jrr */     return 0;
/* RpT19eLnX ily traian jQ2T34jrr */ }