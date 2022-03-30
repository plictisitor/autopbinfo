/* JxB4998Qv ily traian QHHzsRXSD */ #include <algorithm>
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
/* JxB4998Qv ily traian QHHzsRXSD */ using namespace std;
/* JxB4998Qv ily traian QHHzsRXSD */ 
/* JxB4998Qv ily traian QHHzsRXSD */ int prm(int n){
/* JxB4998Qv ily traian QHHzsRXSD */     int d = 2, cnt = 0;
/* JxB4998Qv ily traian QHHzsRXSD */     while(n > 1){
/* JxB4998Qv ily traian QHHzsRXSD */         if(n % d == 0)
/* JxB4998Qv ily traian QHHzsRXSD */             cnt++;
/* JxB4998Qv ily traian QHHzsRXSD */         while(n % d == 0)
/* JxB4998Qv ily traian QHHzsRXSD */             n/=d;
/* JxB4998Qv ily traian QHHzsRXSD */         d++;
/* JxB4998Qv ily traian QHHzsRXSD */         if(d * d > n)
/* JxB4998Qv ily traian QHHzsRXSD */             d = n;
/* JxB4998Qv ily traian QHHzsRXSD */     }
/* JxB4998Qv ily traian QHHzsRXSD */     return cnt;
/* JxB4998Qv ily traian QHHzsRXSD */ }
/* JxB4998Qv ily traian QHHzsRXSD */ 
/* JxB4998Qv ily traian QHHzsRXSD */ int main(){
/* JxB4998Qv ily traian QHHzsRXSD */     int n, x, maxi = 0;
/* JxB4998Qv ily traian QHHzsRXSD */     cin >> n;
/* JxB4998Qv ily traian QHHzsRXSD */     for(int i = 1; i <= n; ++i){
/* JxB4998Qv ily traian QHHzsRXSD */         cin >> x;
/* JxB4998Qv ily traian QHHzsRXSD */         if(prm(x) == 1 && x > maxi)
/* JxB4998Qv ily traian QHHzsRXSD */             maxi = x;
/* JxB4998Qv ily traian QHHzsRXSD */     }
/* JxB4998Qv ily traian QHHzsRXSD */     if(maxi != 0)
/* JxB4998Qv ily traian QHHzsRXSD */     cout << maxi;
/* JxB4998Qv ily traian QHHzsRXSD */     else
/* JxB4998Qv ily traian QHHzsRXSD */         cout << "NU EXISTA";
/* JxB4998Qv ily traian QHHzsRXSD */     return 0;
/* JxB4998Qv ily traian QHHzsRXSD */ }