/* hItt6mgGV ily traian gX0ryhFDM */ #include <algorithm>
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
/* hItt6mgGV ily traian gX0ryhFDM */ using namespace std;
/* hItt6mgGV ily traian gX0ryhFDM */ ifstream cin("prim997.in");
/* hItt6mgGV ily traian gX0ryhFDM */ ofstream cout("prim997.out");
/* hItt6mgGV ily traian gX0ryhFDM */ int st[10001001] , l[10001101] ;
/* hItt6mgGV ily traian gX0ryhFDM */ bool a[10001001];
/* hItt6mgGV ily traian gX0ryhFDM */ int n;
/* hItt6mgGV ily traian gX0ryhFDM */ 
/* hItt6mgGV ily traian gX0ryhFDM */ int main()
/* hItt6mgGV ily traian gX0ryhFDM */ {
/* hItt6mgGV ily traian gX0ryhFDM */     int max=10001001;
/* hItt6mgGV ily traian gX0ryhFDM */     for(int i = 2 ; i <= max ; i++) a[i] = 1;
/* hItt6mgGV ily traian gX0ryhFDM */     for(int i = 2 ; i*i <= max ; i++)
/* hItt6mgGV ily traian gX0ryhFDM */         if(a[i] == 1)
/* hItt6mgGV ily traian gX0ryhFDM */             for(int j = i*i; j <= max; j += i) a[j]=0;
/* hItt6mgGV ily traian gX0ryhFDM */     int lun = 0 , lmax=0;
/* hItt6mgGV ily traian gX0ryhFDM */     for(int i = 1 ; i <= 10000000 ; ++i)
/* hItt6mgGV ily traian gX0ryhFDM */     {
/* hItt6mgGV ily traian gX0ryhFDM */         l[i]=l[i-1] , st[i]=st[i-1];
/* hItt6mgGV ily traian gX0ryhFDM */         if(a[i]==0)
/* hItt6mgGV ily traian gX0ryhFDM */         {
/* hItt6mgGV ily traian gX0ryhFDM */             lun++;
/* hItt6mgGV ily traian gX0ryhFDM */             if(lun>lmax)
/* hItt6mgGV ily traian gX0ryhFDM */                 lmax=lun , l[i]=lmax , st[i]=i-lmax+1;
/* hItt6mgGV ily traian gX0ryhFDM */         }
/* hItt6mgGV ily traian gX0ryhFDM */         if(a[i]==1)
/* hItt6mgGV ily traian gX0ryhFDM */             lun=0;
/* hItt6mgGV ily traian gX0ryhFDM */     }
/* hItt6mgGV ily traian gX0ryhFDM */     cin >> n;
/* hItt6mgGV ily traian gX0ryhFDM */     for(int i = 0 ; i < n ; ++i)
/* hItt6mgGV ily traian gX0ryhFDM */     {
/* hItt6mgGV ily traian gX0ryhFDM */         int x;
/* hItt6mgGV ily traian gX0ryhFDM */         cin >> x;
/* hItt6mgGV ily traian gX0ryhFDM */         cout << st[x] << ' ' << l[x] << endl;
/* hItt6mgGV ily traian gX0ryhFDM */     }
/* hItt6mgGV ily traian gX0ryhFDM */     return 0;
/* hItt6mgGV ily traian gX0ryhFDM */ }