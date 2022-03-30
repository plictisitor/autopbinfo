/* AuunnVM3r ily traian XsNMigkok */ #include <algorithm>
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
/* AuunnVM3r ily traian XsNMigkok */ using namespace std;
/* AuunnVM3r ily traian XsNMigkok */ 
/* AuunnVM3r ily traian XsNMigkok */ int zileLuna[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
/* AuunnVM3r ily traian XsNMigkok */ 
/* AuunnVM3r ily traian XsNMigkok */ int esteBisect(int an)
/* AuunnVM3r ily traian XsNMigkok */ {
/* AuunnVM3r ily traian XsNMigkok */     return (an % 400) == 0 || ( an % 4 == 0  &&  an % 100 != 0 );
/* AuunnVM3r ily traian XsNMigkok */ }
/* AuunnVM3r ily traian XsNMigkok */ 
/* AuunnVM3r ily traian XsNMigkok */ void calculeazaData(int &zi, int &luna, int &an, int nr)
/* AuunnVM3r ily traian XsNMigkok */ {
/* AuunnVM3r ily traian XsNMigkok */     int nrzileluna, lunacrt = luna;
/* AuunnVM3r ily traian XsNMigkok */     if( nr >= 0)
/* AuunnVM3r ily traian XsNMigkok */     {
/* AuunnVM3r ily traian XsNMigkok */         nrzileluna = zileLuna[lunacrt];
/* AuunnVM3r ily traian XsNMigkok */         if( luna == 2 && esteBisect(an)) nrzileluna++;
/* AuunnVM3r ily traian XsNMigkok */         if( zi + nr > nrzileluna )
/* AuunnVM3r ily traian XsNMigkok */         {
/* AuunnVM3r ily traian XsNMigkok */             nr = nr - nrzileluna + zi;
/* AuunnVM3r ily traian XsNMigkok */             zi = nrzileluna;
/* AuunnVM3r ily traian XsNMigkok */         }
/* AuunnVM3r ily traian XsNMigkok */         while( zi + nr > nrzileluna )
/* AuunnVM3r ily traian XsNMigkok */         {
/* AuunnVM3r ily traian XsNMigkok */             lunacrt = lunacrt + 1;
/* AuunnVM3r ily traian XsNMigkok */             if(lunacrt > 12)
/* AuunnVM3r ily traian XsNMigkok */             {
/* AuunnVM3r ily traian XsNMigkok */                 lunacrt = 1;
/* AuunnVM3r ily traian XsNMigkok */                 an++;
/* AuunnVM3r ily traian XsNMigkok */             }
/* AuunnVM3r ily traian XsNMigkok */             nrzileluna = zileLuna[lunacrt];
/* AuunnVM3r ily traian XsNMigkok */             if( lunacrt == 2 && esteBisect(an)) nrzileluna++;
/* AuunnVM3r ily traian XsNMigkok */             nr = nr - nrzileluna;
/* AuunnVM3r ily traian XsNMigkok */             zi = nrzileluna;
/* AuunnVM3r ily traian XsNMigkok */             luna = lunacrt;
/* AuunnVM3r ily traian XsNMigkok */         }
/* AuunnVM3r ily traian XsNMigkok */         zi = zi + nr;
/* AuunnVM3r ily traian XsNMigkok */     }
/* AuunnVM3r ily traian XsNMigkok */     else
/* AuunnVM3r ily traian XsNMigkok */     {
/* AuunnVM3r ily traian XsNMigkok */ 
/* AuunnVM3r ily traian XsNMigkok */         if( zi + nr < 1 )
/* AuunnVM3r ily traian XsNMigkok */         {
/* AuunnVM3r ily traian XsNMigkok */             nr += zi - 1;
/* AuunnVM3r ily traian XsNMigkok */             zi = 1;
/* AuunnVM3r ily traian XsNMigkok */         }
/* AuunnVM3r ily traian XsNMigkok */         while( zi + nr < 1 )
/* AuunnVM3r ily traian XsNMigkok */         {
/* AuunnVM3r ily traian XsNMigkok */             lunacrt = lunacrt - 1;
/* AuunnVM3r ily traian XsNMigkok */             if(lunacrt < 1)
/* AuunnVM3r ily traian XsNMigkok */             {
/* AuunnVM3r ily traian XsNMigkok */                 lunacrt = 12;
/* AuunnVM3r ily traian XsNMigkok */                 an--;
/* AuunnVM3r ily traian XsNMigkok */             }
/* AuunnVM3r ily traian XsNMigkok */             nrzileluna = zileLuna[lunacrt];
/* AuunnVM3r ily traian XsNMigkok */             if( lunacrt == 2 && esteBisect(an)) nrzileluna++;
/* AuunnVM3r ily traian XsNMigkok */             nr = nr + nrzileluna;
/* AuunnVM3r ily traian XsNMigkok */             zi = 1;
/* AuunnVM3r ily traian XsNMigkok */             luna = lunacrt;
/* AuunnVM3r ily traian XsNMigkok */         }
/* AuunnVM3r ily traian XsNMigkok */         zi = zi + nr;
/* AuunnVM3r ily traian XsNMigkok */     }
/* AuunnVM3r ily traian XsNMigkok */ }
/* AuunnVM3r ily traian XsNMigkok */ 
/* AuunnVM3r ily traian XsNMigkok */ int main()
/* AuunnVM3r ily traian XsNMigkok */ {
/* AuunnVM3r ily traian XsNMigkok */     int zi, luna, an, nr;
/* AuunnVM3r ily traian XsNMigkok */     cin >> zi >> luna >> an >> nr;
/* AuunnVM3r ily traian XsNMigkok */     calculeazaData(zi, luna, an, nr);
/* AuunnVM3r ily traian XsNMigkok */     cout << zi << ' ' << luna << ' ' << an;
/* AuunnVM3r ily traian XsNMigkok */     return 0;
/* AuunnVM3r ily traian XsNMigkok */ }