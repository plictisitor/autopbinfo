/* MHMmfnDrL ily traian CHWcSy88m */ #include <algorithm>
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
/* MHMmfnDrL ily traian CHWcSy88m */ using namespace std;
/* MHMmfnDrL ily traian CHWcSy88m */ 
/* MHMmfnDrL ily traian CHWcSy88m */ ifstream cin("eratostene6.in");
/* MHMmfnDrL ily traian CHWcSy88m */ ofstream cout("eratostene6.out");
/* MHMmfnDrL ily traian CHWcSy88m */ 
/* MHMmfnDrL ily traian CHWcSy88m */ int a[100001];
/* MHMmfnDrL ily traian CHWcSy88m */ 
/* MHMmfnDrL ily traian CHWcSy88m */ int main(){
/* MHMmfnDrL ily traian CHWcSy88m */     int n, cnt = 0;
/* MHMmfnDrL ily traian CHWcSy88m */     cin >> n;
/* MHMmfnDrL ily traian CHWcSy88m */     for(int i = 1; i <= n; ++i)
/* MHMmfnDrL ily traian CHWcSy88m */         cin >> a[i];
/* MHMmfnDrL ily traian CHWcSy88m */     for(int i = 1; i <= n / 2; ++i)
/* MHMmfnDrL ily traian CHWcSy88m */         for(int j = 2 * i; j <= n; j+=i)
/* MHMmfnDrL ily traian CHWcSy88m */             if(a[i] != 0 && a[j] % a[i] == 0)
/* MHMmfnDrL ily traian CHWcSy88m */                 cnt++;
/* MHMmfnDrL ily traian CHWcSy88m */             else if(a[i] == 0 && a[j] == 0)
/* MHMmfnDrL ily traian CHWcSy88m */                 cnt++;
/* MHMmfnDrL ily traian CHWcSy88m */     cout << cnt;
/* MHMmfnDrL ily traian CHWcSy88m */     return 0;
/* MHMmfnDrL ily traian CHWcSy88m */ }