/* By8j4onfl ily traian XiVHIuu6J */ #include <algorithm>
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
/* By8j4onfl ily traian XiVHIuu6J */ using namespace std;
/* By8j4onfl ily traian XiVHIuu6J */ 
/* By8j4onfl ily traian XiVHIuu6J */ ifstream cin("cifrazecmax.in");
/* By8j4onfl ily traian XiVHIuu6J */ ofstream cout("cifrazecmax.out");
/* By8j4onfl ily traian XiVHIuu6J */ 
/* By8j4onfl ily traian XiVHIuu6J */ int a[10001], c[10001];
/* By8j4onfl ily traian XiVHIuu6J */ 
/* By8j4onfl ily traian XiVHIuu6J */ int main(){
/* By8j4onfl ily traian XiVHIuu6J */     int i = 1;
/* By8j4onfl ily traian XiVHIuu6J */     while(cin >> a[i]){
/* By8j4onfl ily traian XiVHIuu6J */         c[i] = a[i] % 100 / 10;
/* By8j4onfl ily traian XiVHIuu6J */         i++;
/* By8j4onfl ily traian XiVHIuu6J */     }
/* By8j4onfl ily traian XiVHIuu6J */     int maxi = 0, cmaxi, pozf;
/* By8j4onfl ily traian XiVHIuu6J */     for(int k = 0; k <= 9; ++k){
/* By8j4onfl ily traian XiVHIuu6J */         int cnt = 0, poz;
/* By8j4onfl ily traian XiVHIuu6J */         for(int j = 1; j < i; ++j){
/* By8j4onfl ily traian XiVHIuu6J */             if(c[j] == k)
/* By8j4onfl ily traian XiVHIuu6J */                 ++cnt, poz = j;
/* By8j4onfl ily traian XiVHIuu6J */         }
/* By8j4onfl ily traian XiVHIuu6J */         if(cnt > maxi)
/* By8j4onfl ily traian XiVHIuu6J */             maxi = cnt, cmaxi = k, pozf = poz;
/* By8j4onfl ily traian XiVHIuu6J */         if(cnt == maxi && poz < pozf)
/* By8j4onfl ily traian XiVHIuu6J */             pozf = poz;
/* By8j4onfl ily traian XiVHIuu6J */     }
/* By8j4onfl ily traian XiVHIuu6J */     cout << pozf;
/* By8j4onfl ily traian XiVHIuu6J */     return 0;
/* By8j4onfl ily traian XiVHIuu6J */ }