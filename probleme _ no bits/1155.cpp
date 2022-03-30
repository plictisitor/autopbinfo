/* dQDOmYNBO ily traian IV94CklPC */ #include <algorithm>
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
/* dQDOmYNBO ily traian IV94CklPC */ using namespace std;
/* dQDOmYNBO ily traian IV94CklPC */ 
/* dQDOmYNBO ily traian IV94CklPC */ bool gasesc(int elem, int a[], int st, int dr){
/* dQDOmYNBO ily traian IV94CklPC */     if(st > dr)
/* dQDOmYNBO ily traian IV94CklPC */         return 0;
/* dQDOmYNBO ily traian IV94CklPC */     else{
/* dQDOmYNBO ily traian IV94CklPC */         int mij = (st + dr) / 2;
/* dQDOmYNBO ily traian IV94CklPC */         if(a[mij] == elem)
/* dQDOmYNBO ily traian IV94CklPC */             return 1;
/* dQDOmYNBO ily traian IV94CklPC */         else if(a[mij] < elem)
/* dQDOmYNBO ily traian IV94CklPC */             return gasesc(elem, a, mij + 1, dr);
/* dQDOmYNBO ily traian IV94CklPC */         else
/* dQDOmYNBO ily traian IV94CklPC */             return gasesc(elem, a, st, mij - 1);
/* dQDOmYNBO ily traian IV94CklPC */     }
/* dQDOmYNBO ily traian IV94CklPC */ }
/* dQDOmYNBO ily traian IV94CklPC */ 
/* dQDOmYNBO ily traian IV94CklPC */ /*
/* dQDOmYNBO ily traian IV94CklPC */     while(st <= dr){
/* dQDOmYNBO ily traian IV94CklPC */         int mij = (st + dr) / 2;
/* dQDOmYNBO ily traian IV94CklPC */         if(a[mij] == val)
/* dQDOmYNBO ily traian IV94CklPC */             return 1;
/* dQDOmYNBO ily traian IV94CklPC */         else if(a[mij] < val)
/* dQDOmYNBO ily traian IV94CklPC */             st = mij + 1;
/* dQDOmYNBO ily traian IV94CklPC */         else
/* dQDOmYNBO ily traian IV94CklPC */             dr = mij - 1;
/* dQDOmYNBO ily traian IV94CklPC */     }
/* dQDOmYNBO ily traian IV94CklPC */ */
/* dQDOmYNBO ily traian IV94CklPC */ 
/* dQDOmYNBO ily traian IV94CklPC */ int main()
/* dQDOmYNBO ily traian IV94CklPC */ {
/* dQDOmYNBO ily traian IV94CklPC */     int n, m, a[25001], b[200001];
/* dQDOmYNBO ily traian IV94CklPC */     cin >> n;
/* dQDOmYNBO ily traian IV94CklPC */     for(int i = 1; i <= n; ++i)
/* dQDOmYNBO ily traian IV94CklPC */         cin >> a[i];
/* dQDOmYNBO ily traian IV94CklPC */     cin >> m;
/* dQDOmYNBO ily traian IV94CklPC */     for(int i = 1; i <= m; ++i)
/* dQDOmYNBO ily traian IV94CklPC */         cin >> b[i];
/* dQDOmYNBO ily traian IV94CklPC */     for(int i = 1; i <= m; ++i)
/* dQDOmYNBO ily traian IV94CklPC */         if(gasesc(b[i], a, 1, n))
/* dQDOmYNBO ily traian IV94CklPC */             cout << 1 << ' ';
/* dQDOmYNBO ily traian IV94CklPC */         else
/* dQDOmYNBO ily traian IV94CklPC */             cout << 0 << ' ';
/* dQDOmYNBO ily traian IV94CklPC */     return 0;
/* dQDOmYNBO ily traian IV94CklPC */ }