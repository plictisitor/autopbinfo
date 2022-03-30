/* EPXLIwOz3 ily traian T7fRXmmvP */ #include <algorithm>
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
/* EPXLIwOz3 ily traian T7fRXmmvP */ 
/* EPXLIwOz3 ily traian T7fRXmmvP */ using namespace std;
/* EPXLIwOz3 ily traian T7fRXmmvP */ 
/* EPXLIwOz3 ily traian T7fRXmmvP */ ifstream fin("egale.in");
/* EPXLIwOz3 ily traian T7fRXmmvP */ ofstream fout("egale.out");
/* EPXLIwOz3 ily traian T7fRXmmvP */ 
/* EPXLIwOz3 ily traian T7fRXmmvP */ int main() 
/* EPXLIwOz3 ily traian T7fRXmmvP */ {
/* EPXLIwOz3 ily traian T7fRXmmvP */     int op;
/* EPXLIwOz3 ily traian T7fRXmmvP */     fin >> op;
/* EPXLIwOz3 ily traian T7fRXmmvP */     assert(op == 1 || op == 2);
/* EPXLIwOz3 ily traian T7fRXmmvP */     if (op == 1) {
/* EPXLIwOz3 ily traian T7fRXmmvP */         long long a, b;
/* EPXLIwOz3 ily traian T7fRXmmvP */         fin >> a >> b;
/* EPXLIwOz3 ily traian T7fRXmmvP */         assert(a <= b);
/* EPXLIwOz3 ily traian T7fRXmmvP */         long long curr = 1;
/* EPXLIwOz3 ily traian T7fRXmmvP */         while (curr <= b) {
/* EPXLIwOz3 ily traian T7fRXmmvP */             for (int i = 1; i <= 9; ++i)
/* EPXLIwOz3 ily traian T7fRXmmvP */                 if (a <= i*curr && i*curr <= b)
/* EPXLIwOz3 ily traian T7fRXmmvP */                     fout << i*curr << " ";
/* EPXLIwOz3 ily traian T7fRXmmvP */             curr = curr*10 + 1;
/* EPXLIwOz3 ily traian T7fRXmmvP */         }
/* EPXLIwOz3 ily traian T7fRXmmvP */         fout << "\n";
/* EPXLIwOz3 ily traian T7fRXmmvP */     }
/* EPXLIwOz3 ily traian T7fRXmmvP */     else {
/* EPXLIwOz3 ily traian T7fRXmmvP */         int x;
/* EPXLIwOz3 ily traian T7fRXmmvP */         fin >> x;
/* EPXLIwOz3 ily traian T7fRXmmvP */         assert(x <= 100);
/* EPXLIwOz3 ily traian T7fRXmmvP */ 
/* EPXLIwOz3 ily traian T7fRXmmvP */         for (int nrCif = 1; nrCif <= x; ++nrCif) {
/* EPXLIwOz3 ily traian T7fRXmmvP */             for (int cif = 1; cif <= 9; ++cif) {
/* EPXLIwOz3 ily traian T7fRXmmvP */                 for (int i = 1; i <= nrCif; ++i)
/* EPXLIwOz3 ily traian T7fRXmmvP */                     fout << cif;
/* EPXLIwOz3 ily traian T7fRXmmvP */                 fout << " ";
/* EPXLIwOz3 ily traian T7fRXmmvP */             }
/* EPXLIwOz3 ily traian T7fRXmmvP */         }
/* EPXLIwOz3 ily traian T7fRXmmvP */ 
/* EPXLIwOz3 ily traian T7fRXmmvP */         fout << "\n";
/* EPXLIwOz3 ily traian T7fRXmmvP */     }
/* EPXLIwOz3 ily traian T7fRXmmvP */ 
/* EPXLIwOz3 ily traian T7fRXmmvP */     return 0;
/* EPXLIwOz3 ily traian T7fRXmmvP */ }