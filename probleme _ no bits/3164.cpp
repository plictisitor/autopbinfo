/* CPw33fDME ily traian sUL0qzgrR */ #include <algorithm>
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
/* CPw33fDME ily traian sUL0qzgrR */ 
/* CPw33fDME ily traian sUL0qzgrR */ using namespace std;
/* CPw33fDME ily traian sUL0qzgrR */ 
/* CPw33fDME ily traian sUL0qzgrR */ ifstream cin("qclasa.in");
/* CPw33fDME ily traian sUL0qzgrR */ ofstream cout("qclasa.out");
/* CPw33fDME ily traian sUL0qzgrR */ 
/* CPw33fDME ily traian sUL0qzgrR */ int n , cnt , cc;
/* CPw33fDME ily traian sUL0qzgrR */ 
/* CPw33fDME ily traian sUL0qzgrR */ struct elev
/* CPw33fDME ily traian sUL0qzgrR */ {
/* CPw33fDME ily traian sUL0qzgrR */     int medie, cod, abs;
/* CPw33fDME ily traian sUL0qzgrR */ }a[50];
/* CPw33fDME ily traian sUL0qzgrR */ 
/* CPw33fDME ily traian sUL0qzgrR */ bool comp(elev a, elev b)
/* CPw33fDME ily traian sUL0qzgrR */ {
/* CPw33fDME ily traian sUL0qzgrR */     if(a.abs > b.abs) return 1;
/* CPw33fDME ily traian sUL0qzgrR */     else if(a.abs == b.abs && a.cod < b.cod) return 1;
/* CPw33fDME ily traian sUL0qzgrR */     else return 0;
/* CPw33fDME ily traian sUL0qzgrR */ }
/* CPw33fDME ily traian sUL0qzgrR */ int main()
/* CPw33fDME ily traian sUL0qzgrR */ {
/* CPw33fDME ily traian sUL0qzgrR */     cin >> n;
/* CPw33fDME ily traian sUL0qzgrR */     for(int i = 1; i <= n; ++i)
/* CPw33fDME ily traian sUL0qzgrR */     {
/* CPw33fDME ily traian sUL0qzgrR */         cin >> a[i].cod >> a[i].medie >> a[i].abs;
/* CPw33fDME ily traian sUL0qzgrR */         if(a[i].medie == 10) cnt++;
/* CPw33fDME ily traian sUL0qzgrR */         cc += a[i].medie;
/* CPw33fDME ily traian sUL0qzgrR */     }
/* CPw33fDME ily traian sUL0qzgrR */     cout << cnt << '\n' << cc / n << '\n';
/* CPw33fDME ily traian sUL0qzgrR */     sort(a + 1, a + n + 1, comp);
/* CPw33fDME ily traian sUL0qzgrR */     for(int i = 1; i <= 2; ++i)
/* CPw33fDME ily traian sUL0qzgrR */         cout << a[i].cod << ' ' << a[i].medie << ' ' << a[i].abs << "\n";
/* CPw33fDME ily traian sUL0qzgrR */     return 0;
/* CPw33fDME ily traian sUL0qzgrR */ }