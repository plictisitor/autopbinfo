/* n12mDM13F ily traian bYKlDO82p */ #include <algorithm>
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
/* n12mDM13F ily traian bYKlDO82p */ 
/* n12mDM13F ily traian bYKlDO82p */ using namespace std;
/* n12mDM13F ily traian bYKlDO82p */ 
/* n12mDM13F ily traian bYKlDO82p */ ifstream cin("clase.in");
/* n12mDM13F ily traian bYKlDO82p */ ofstream cout("clase.out");
/* n12mDM13F ily traian bYKlDO82p */ 
/* n12mDM13F ily traian bYKlDO82p */ int main()
/* n12mDM13F ily traian bYKlDO82p */ {
/* n12mDM13F ily traian bYKlDO82p */     int n, m;
/* n12mDM13F ily traian bYKlDO82p */     long long a[10001];
/* n12mDM13F ily traian bYKlDO82p */     cin >> n;
/* n12mDM13F ily traian bYKlDO82p */     for(int i = 1; i <= n; ++i)
/* n12mDM13F ily traian bYKlDO82p */         cin >> a[i];
/* n12mDM13F ily traian bYKlDO82p */ 
/* n12mDM13F ily traian bYKlDO82p */     cin >> m;
/* n12mDM13F ily traian bYKlDO82p */     long long x;
/* n12mDM13F ily traian bYKlDO82p */     int cnt = 0;
/* n12mDM13F ily traian bYKlDO82p */     for(int i = 1; i <= m; ++i){
/* n12mDM13F ily traian bYKlDO82p */         cin >> x;
/* n12mDM13F ily traian bYKlDO82p */         int st = 1, dr = n;
/* n12mDM13F ily traian bYKlDO82p */         bool ok = false;
/* n12mDM13F ily traian bYKlDO82p */         while(st <= dr){
/* n12mDM13F ily traian bYKlDO82p */             int mij = (st + dr) / 2;
/* n12mDM13F ily traian bYKlDO82p */             if(a[mij] == x){
/* n12mDM13F ily traian bYKlDO82p */                 ok = true;
/* n12mDM13F ily traian bYKlDO82p */                 break;
/* n12mDM13F ily traian bYKlDO82p */             }
/* n12mDM13F ily traian bYKlDO82p */             else
/* n12mDM13F ily traian bYKlDO82p */                 if(a[mij] < x)
/* n12mDM13F ily traian bYKlDO82p */                     st = mij + 1;
/* n12mDM13F ily traian bYKlDO82p */                 else
/* n12mDM13F ily traian bYKlDO82p */                     dr = mij - 1;
/* n12mDM13F ily traian bYKlDO82p */         }
/* n12mDM13F ily traian bYKlDO82p */         if(ok)
/* n12mDM13F ily traian bYKlDO82p */             cnt++;
/* n12mDM13F ily traian bYKlDO82p */     }
/* n12mDM13F ily traian bYKlDO82p */ 
/* n12mDM13F ily traian bYKlDO82p */     cout << cnt;
/* n12mDM13F ily traian bYKlDO82p */ 
/* n12mDM13F ily traian bYKlDO82p */     return 0;
/* n12mDM13F ily traian bYKlDO82p */ }