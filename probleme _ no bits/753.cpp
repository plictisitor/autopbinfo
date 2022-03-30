/* rZ2FiiKTI ily traian MBZRRgmRH */ #include <algorithm>
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
/* rZ2FiiKTI ily traian MBZRRgmRH */ using namespace std;
/* rZ2FiiKTI ily traian MBZRRgmRH */ 
/* rZ2FiiKTI ily traian MBZRRgmRH */ ifstream cin("preordine1.in");
/* rZ2FiiKTI ily traian MBZRRgmRH */ ofstream cout("preordine1.out");
/* rZ2FiiKTI ily traian MBZRRgmRH */ 
/* rZ2FiiKTI ily traian MBZRRgmRH */ struct nod
/* rZ2FiiKTI ily traian MBZRRgmRH */ {
/* rZ2FiiKTI ily traian MBZRRgmRH */     int info;
/* rZ2FiiKTI ily traian MBZRRgmRH */     nod *st, *dr;
/* rZ2FiiKTI ily traian MBZRRgmRH */ };
/* rZ2FiiKTI ily traian MBZRRgmRH */ 
/* rZ2FiiKTI ily traian MBZRRgmRH */ void RSD(nod *p)
/* rZ2FiiKTI ily traian MBZRRgmRH */ {
/* rZ2FiiKTI ily traian MBZRRgmRH */     if(p)
/* rZ2FiiKTI ily traian MBZRRgmRH */     {
/* rZ2FiiKTI ily traian MBZRRgmRH */         cout << p -> info << " ";
/* rZ2FiiKTI ily traian MBZRRgmRH */         RSD(p->st);
/* rZ2FiiKTI ily traian MBZRRgmRH */         RSD(p->dr);
/* rZ2FiiKTI ily traian MBZRRgmRH */     }
/* rZ2FiiKTI ily traian MBZRRgmRH */ }
/* rZ2FiiKTI ily traian MBZRRgmRH */ 
/* rZ2FiiKTI ily traian MBZRRgmRH */ void read(nod * &p)
/* rZ2FiiKTI ily traian MBZRRgmRH */ {
/* rZ2FiiKTI ily traian MBZRRgmRH */     int x;
/* rZ2FiiKTI ily traian MBZRRgmRH */     cin >> x;
/* rZ2FiiKTI ily traian MBZRRgmRH */     if(x == 0) p = NULL;
/* rZ2FiiKTI ily traian MBZRRgmRH */     else
/* rZ2FiiKTI ily traian MBZRRgmRH */     {
/* rZ2FiiKTI ily traian MBZRRgmRH */         p = new nod;
/* rZ2FiiKTI ily traian MBZRRgmRH */         p->info = x;
/* rZ2FiiKTI ily traian MBZRRgmRH */         read(p -> st);
/* rZ2FiiKTI ily traian MBZRRgmRH */         read(p -> dr);
/* rZ2FiiKTI ily traian MBZRRgmRH */     }
/* rZ2FiiKTI ily traian MBZRRgmRH */ }
/* rZ2FiiKTI ily traian MBZRRgmRH */ 
/* rZ2FiiKTI ily traian MBZRRgmRH */ int main()
/* rZ2FiiKTI ily traian MBZRRgmRH */ {
/* rZ2FiiKTI ily traian MBZRRgmRH */     nod *p = NULL;
/* rZ2FiiKTI ily traian MBZRRgmRH */     read(p);
/* rZ2FiiKTI ily traian MBZRRgmRH */     RSD(p -> st);
/* rZ2FiiKTI ily traian MBZRRgmRH */     return 0;
/* rZ2FiiKTI ily traian MBZRRgmRH */ }