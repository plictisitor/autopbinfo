/* T9dnvU5Yq ily traian splou2Cnx */ #include <algorithm>
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
/* T9dnvU5Yq ily traian splou2Cnx */ using namespace std;
/* T9dnvU5Yq ily traian splou2Cnx */ 
/* T9dnvU5Yq ily traian splou2Cnx */ int nrcif(int n){
/* T9dnvU5Yq ily traian splou2Cnx */     int cnt = 0;
/* T9dnvU5Yq ily traian splou2Cnx */     while(n){
/* T9dnvU5Yq ily traian splou2Cnx */         n/=10;
/* T9dnvU5Yq ily traian splou2Cnx */         cnt++;
/* T9dnvU5Yq ily traian splou2Cnx */     }
/* T9dnvU5Yq ily traian splou2Cnx */     return cnt;
/* T9dnvU5Yq ily traian splou2Cnx */ }
/* T9dnvU5Yq ily traian splou2Cnx */ 
/* T9dnvU5Yq ily traian splou2Cnx */ int main(){
/* T9dnvU5Yq ily traian splou2Cnx */     int n, x, min = 100, max = -1;
/* T9dnvU5Yq ily traian splou2Cnx */     cin >> n;
/* T9dnvU5Yq ily traian splou2Cnx */     for(int i = 1; i <= n; ++i){
/* T9dnvU5Yq ily traian splou2Cnx */         cin >> x;
/* T9dnvU5Yq ily traian splou2Cnx */         if(i % 2 == 0){
/* T9dnvU5Yq ily traian splou2Cnx */             if(x > max)
/* T9dnvU5Yq ily traian splou2Cnx */                 max = x;
/* T9dnvU5Yq ily traian splou2Cnx */         }
/* T9dnvU5Yq ily traian splou2Cnx */         else{
/* T9dnvU5Yq ily traian splou2Cnx */             if(nrcif(x) == 2 && x < min)
/* T9dnvU5Yq ily traian splou2Cnx */                 min = x;
/* T9dnvU5Yq ily traian splou2Cnx */         }
/* T9dnvU5Yq ily traian splou2Cnx */     }
/* T9dnvU5Yq ily traian splou2Cnx */     cout << max << ' ';
/* T9dnvU5Yq ily traian splou2Cnx */     if(min != 100)
/* T9dnvU5Yq ily traian splou2Cnx */         cout << min;
/* T9dnvU5Yq ily traian splou2Cnx */     else
/* T9dnvU5Yq ily traian splou2Cnx */         cout << -1;
/* T9dnvU5Yq ily traian splou2Cnx */ }