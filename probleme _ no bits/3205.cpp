/* hKIHXcNlK ily traian ZExmNFe9w */ #include <algorithm>
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
/* hKIHXcNlK ily traian ZExmNFe9w */ using namespace std;
/* hKIHXcNlK ily traian ZExmNFe9w */ 
/* hKIHXcNlK ily traian ZExmNFe9w */ ifstream cin("calcfunct.in");
/* hKIHXcNlK ily traian ZExmNFe9w */ ofstream cout("calcfunct.out");
/* hKIHXcNlK ily traian ZExmNFe9w */ 
/* hKIHXcNlK ily traian ZExmNFe9w */ int pmax(int a[], int n){
/* hKIHXcNlK ily traian ZExmNFe9w */     int maxi = 0, pmaxi = 1;
/* hKIHXcNlK ily traian ZExmNFe9w */     for(int i = 1; i <= n; ++i)
/* hKIHXcNlK ily traian ZExmNFe9w */         if(a[i] > maxi)
/* hKIHXcNlK ily traian ZExmNFe9w */             maxi = a[i], pmaxi = i;
/* hKIHXcNlK ily traian ZExmNFe9w */     return pmaxi;
/* hKIHXcNlK ily traian ZExmNFe9w */ }
/* hKIHXcNlK ily traian ZExmNFe9w */ 
/* hKIHXcNlK ily traian ZExmNFe9w */ void pmin(int a[], int n, int& pmini){
/* hKIHXcNlK ily traian ZExmNFe9w */     int pozz = 0;
/* hKIHXcNlK ily traian ZExmNFe9w */     for(int i = 1; i <= n; ++i)
/* hKIHXcNlK ily traian ZExmNFe9w */         if(a[i] < pmini)
/* hKIHXcNlK ily traian ZExmNFe9w */             pmini = a[i], pozz = i;
/* hKIHXcNlK ily traian ZExmNFe9w */     pmini = pozz;
/* hKIHXcNlK ily traian ZExmNFe9w */ }
/* hKIHXcNlK ily traian ZExmNFe9w */ 
/* hKIHXcNlK ily traian ZExmNFe9w */ void inter(int& pmini, int& pmaxi){
/* hKIHXcNlK ily traian ZExmNFe9w */     swap(pmini, pmaxi);
/* hKIHXcNlK ily traian ZExmNFe9w */ }
/* hKIHXcNlK ily traian ZExmNFe9w */ 
/* hKIHXcNlK ily traian ZExmNFe9w */ void solve(int a[], int a1, int b1){
/* hKIHXcNlK ily traian ZExmNFe9w */     for(int i = b1; i >= a1; --i)
/* hKIHXcNlK ily traian ZExmNFe9w */         cout << a[i] << " ";
/* hKIHXcNlK ily traian ZExmNFe9w */ }
/* hKIHXcNlK ily traian ZExmNFe9w */ 
/* hKIHXcNlK ily traian ZExmNFe9w */ int main()
/* hKIHXcNlK ily traian ZExmNFe9w */ {
/* hKIHXcNlK ily traian ZExmNFe9w */     int n, a[101], pozmin, pozmax;
/* hKIHXcNlK ily traian ZExmNFe9w */     cin >> n;
/* hKIHXcNlK ily traian ZExmNFe9w */     for(int i = 1; i <= n; ++i)
/* hKIHXcNlK ily traian ZExmNFe9w */         cin >> a[i];
/* hKIHXcNlK ily traian ZExmNFe9w */     pozmax = pmax(a, n);
/* hKIHXcNlK ily traian ZExmNFe9w */     pozmin = 1000000000;
/* hKIHXcNlK ily traian ZExmNFe9w */     pmin(a, n, pozmin);
/* hKIHXcNlK ily traian ZExmNFe9w */     if(pozmin > pozmax)
/* hKIHXcNlK ily traian ZExmNFe9w */         inter(pozmin, pozmax);
/* hKIHXcNlK ily traian ZExmNFe9w */     solve(a, pozmin, pozmax);
/* hKIHXcNlK ily traian ZExmNFe9w */     return 0;
/* hKIHXcNlK ily traian ZExmNFe9w */ }