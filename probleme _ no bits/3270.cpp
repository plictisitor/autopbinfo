/* toqaJwn0D ily traian gJ9h99sQP */ #include <algorithm>
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
/* toqaJwn0D ily traian gJ9h99sQP */ using namespace std;
/* toqaJwn0D ily traian gJ9h99sQP */ 
/* toqaJwn0D ily traian gJ9h99sQP */ int main(){
/* toqaJwn0D ily traian gJ9h99sQP */     int n;
/* toqaJwn0D ily traian gJ9h99sQP */     cin >> n;
/* toqaJwn0D ily traian gJ9h99sQP */     long long int sum = 0;
/* toqaJwn0D ily traian gJ9h99sQP */     for(int d = 1; d * d <= n; ++d){
/* toqaJwn0D ily traian gJ9h99sQP */         if(n % d == 0){
/* toqaJwn0D ily traian gJ9h99sQP */             if(d % 2 == 0)
/* toqaJwn0D ily traian gJ9h99sQP */                 sum += d;
/* toqaJwn0D ily traian gJ9h99sQP */             if(n / d % 2 == 0)
/* toqaJwn0D ily traian gJ9h99sQP */                 sum += n/d;
/* toqaJwn0D ily traian gJ9h99sQP */         }
/* toqaJwn0D ily traian gJ9h99sQP */         if(d * d == n && d % 2 == 0)
/* toqaJwn0D ily traian gJ9h99sQP */             sum -= d;
/* toqaJwn0D ily traian gJ9h99sQP */     }
/* toqaJwn0D ily traian gJ9h99sQP */     cout << sum;
/* toqaJwn0D ily traian gJ9h99sQP */     return 0;
/* toqaJwn0D ily traian gJ9h99sQP */ }