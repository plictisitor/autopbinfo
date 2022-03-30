/* dCwMgE8bR ily traian 0vPBKl1pq */ #include <algorithm>
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
/* dCwMgE8bR ily traian 0vPBKl1pq */ using namespace std;
/* dCwMgE8bR ily traian 0vPBKl1pq */ 
/* dCwMgE8bR ily traian 0vPBKl1pq */ int main(){
/* dCwMgE8bR ily traian 0vPBKl1pq */     int n;
/* dCwMgE8bR ily traian 0vPBKl1pq */     cin >> n;
/* dCwMgE8bR ily traian 0vPBKl1pq */     int maxi = 10, minp = 0;
/* dCwMgE8bR ily traian 0vPBKl1pq */     while(n){
/* dCwMgE8bR ily traian 0vPBKl1pq */         if(n % 2 == 1 && n % 10 < maxi)
/* dCwMgE8bR ily traian 0vPBKl1pq */             maxi = n%10;
/* dCwMgE8bR ily traian 0vPBKl1pq */         if(n % 2 == 0 && n % 10 > minp)
/* dCwMgE8bR ily traian 0vPBKl1pq */             minp = n % 10;
/* dCwMgE8bR ily traian 0vPBKl1pq */         n/=10;
/* dCwMgE8bR ily traian 0vPBKl1pq */     }
/* dCwMgE8bR ily traian 0vPBKl1pq */     cout << maxi * minp;
/* dCwMgE8bR ily traian 0vPBKl1pq */     return 0;
/* dCwMgE8bR ily traian 0vPBKl1pq */ }