/* QcGRnP2Ay ily traian 4pGFNn6ih */ #include <algorithm>
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
/* QcGRnP2Ay ily traian 4pGFNn6ih */ using namespace std;
/* QcGRnP2Ay ily traian 4pGFNn6ih */ ifstream cin("postordine1.in");
/* QcGRnP2Ay ily traian 4pGFNn6ih */ ofstream cout("postordine1.out");
/* QcGRnP2Ay ily traian 4pGFNn6ih */ 
/* QcGRnP2Ay ily traian 4pGFNn6ih */ struct nod
/* QcGRnP2Ay ily traian 4pGFNn6ih */ {
/* QcGRnP2Ay ily traian 4pGFNn6ih */     int info;
/* QcGRnP2Ay ily traian 4pGFNn6ih */     nod *st, *dr;
/* QcGRnP2Ay ily traian 4pGFNn6ih */ };
/* QcGRnP2Ay ily traian 4pGFNn6ih */ 
/* QcGRnP2Ay ily traian 4pGFNn6ih */ void SDR(nod *p)
/* QcGRnP2Ay ily traian 4pGFNn6ih */ {
/* QcGRnP2Ay ily traian 4pGFNn6ih */     if(p)
/* QcGRnP2Ay ily traian 4pGFNn6ih */     {
/* QcGRnP2Ay ily traian 4pGFNn6ih */         SDR(p->st);
/* QcGRnP2Ay ily traian 4pGFNn6ih */         SDR(p->dr);
/* QcGRnP2Ay ily traian 4pGFNn6ih */         cout << p -> info << " ";
/* QcGRnP2Ay ily traian 4pGFNn6ih */     }
/* QcGRnP2Ay ily traian 4pGFNn6ih */ }
/* QcGRnP2Ay ily traian 4pGFNn6ih */ 
/* QcGRnP2Ay ily traian 4pGFNn6ih */ void read(nod * &p)
/* QcGRnP2Ay ily traian 4pGFNn6ih */ {
/* QcGRnP2Ay ily traian 4pGFNn6ih */     int x;
/* QcGRnP2Ay ily traian 4pGFNn6ih */     cin >> x;
/* QcGRnP2Ay ily traian 4pGFNn6ih */     if(x == 0) p = NULL;
/* QcGRnP2Ay ily traian 4pGFNn6ih */     else
/* QcGRnP2Ay ily traian 4pGFNn6ih */     {
/* QcGRnP2Ay ily traian 4pGFNn6ih */         p = new nod;
/* QcGRnP2Ay ily traian 4pGFNn6ih */         p->info = x;
/* QcGRnP2Ay ily traian 4pGFNn6ih */         read(p -> st);
/* QcGRnP2Ay ily traian 4pGFNn6ih */         read(p -> dr);
/* QcGRnP2Ay ily traian 4pGFNn6ih */     }
/* QcGRnP2Ay ily traian 4pGFNn6ih */ }
/* QcGRnP2Ay ily traian 4pGFNn6ih */ 
/* QcGRnP2Ay ily traian 4pGFNn6ih */ int main()
/* QcGRnP2Ay ily traian 4pGFNn6ih */ {
/* QcGRnP2Ay ily traian 4pGFNn6ih */     nod *p = NULL;
/* QcGRnP2Ay ily traian 4pGFNn6ih */     read(p);
/* QcGRnP2Ay ily traian 4pGFNn6ih */     SDR(p);
/* QcGRnP2Ay ily traian 4pGFNn6ih */     return 0;
/* QcGRnP2Ay ily traian 4pGFNn6ih */ }