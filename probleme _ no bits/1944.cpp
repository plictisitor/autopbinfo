/* l996HAW3X ily traian RXIjE571R */ #include <algorithm>
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
/* l996HAW3X ily traian RXIjE571R */ using namespace std;
/* l996HAW3X ily traian RXIjE571R */ ifstream fin("suma6.in");
/* l996HAW3X ily traian RXIjE571R */ ofstream fout("suma6.out");
/* l996HAW3X ily traian RXIjE571R */ int imp(int n)
/* l996HAW3X ily traian RXIjE571R */ {
/* l996HAW3X ily traian RXIjE571R */     int aux = n , cnt = 0 , p = 0;
/* l996HAW3X ily traian RXIjE571R */     while(n != 0)
/* l996HAW3X ily traian RXIjE571R */     {
/* l996HAW3X ily traian RXIjE571R */         cnt++;
/* l996HAW3X ily traian RXIjE571R */         p = n % 10;
/* l996HAW3X ily traian RXIjE571R */         n /= 10;
/* l996HAW3X ily traian RXIjE571R */     }
/* l996HAW3X ily traian RXIjE571R */     if(cnt % 2 == 1 && p == aux % 10) return 1;
/* l996HAW3X ily traian RXIjE571R */     else return 0;
/* l996HAW3X ily traian RXIjE571R */ }
/* l996HAW3X ily traian RXIjE571R */ int nrcif(int n)
/* l996HAW3X ily traian RXIjE571R */ {
/* l996HAW3X ily traian RXIjE571R */     int cnt = 0;
/* l996HAW3X ily traian RXIjE571R */     while(n != 0)
/* l996HAW3X ily traian RXIjE571R */     {
/* l996HAW3X ily traian RXIjE571R */         cnt++;
/* l996HAW3X ily traian RXIjE571R */         n /= 10;
/* l996HAW3X ily traian RXIjE571R */     }
/* l996HAW3X ily traian RXIjE571R */     return cnt;
/* l996HAW3X ily traian RXIjE571R */ }
/* l996HAW3X ily traian RXIjE571R */ int mij(int n)
/* l996HAW3X ily traian RXIjE571R */ {
/* l996HAW3X ily traian RXIjE571R */     int cnt = nrcif(n) , p = 1;
/* l996HAW3X ily traian RXIjE571R */     for(int i = 1 ; i <= cnt/2 ; ++i) p *=10;
/* l996HAW3X ily traian RXIjE571R */     int cmij = (n / p) % 10;
/* l996HAW3X ily traian RXIjE571R */     return cmij;
/* l996HAW3X ily traian RXIjE571R */ }
/* l996HAW3X ily traian RXIjE571R */ int main()
/* l996HAW3X ily traian RXIjE571R */ {
/* l996HAW3X ily traian RXIjE571R */     int n , x , s = 0;
/* l996HAW3X ily traian RXIjE571R */     fin >> n;
/* l996HAW3X ily traian RXIjE571R */     for(int i = 0 ; i < n; ++i)
/* l996HAW3X ily traian RXIjE571R */     {
/* l996HAW3X ily traian RXIjE571R */         fin >>x;
/* l996HAW3X ily traian RXIjE571R */         if(imp(x))s+=mij(x);
/* l996HAW3X ily traian RXIjE571R */     }
/* l996HAW3X ily traian RXIjE571R */     fout << s;
/* l996HAW3X ily traian RXIjE571R */     return 0;
/* l996HAW3X ily traian RXIjE571R */ }