/* HjlqNeDBP ily traian dSjxjFPDz */ #include <algorithm>
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
/* HjlqNeDBP ily traian dSjxjFPDz */ using namespace std;
/* HjlqNeDBP ily traian dSjxjFPDz */ 
/* HjlqNeDBP ily traian dSjxjFPDz */ ifstream cin("eratostene0.in");
/* HjlqNeDBP ily traian dSjxjFPDz */ ofstream cout("eratostene0.out");
/* HjlqNeDBP ily traian dSjxjFPDz */ 
/* HjlqNeDBP ily traian dSjxjFPDz */ long long  S[1000001];
/* HjlqNeDBP ily traian dSjxjFPDz */ 
/* HjlqNeDBP ily traian dSjxjFPDz */ int main(){
/* HjlqNeDBP ily traian dSjxjFPDz */     int n;
/* HjlqNeDBP ily traian dSjxjFPDz */     cin >> n;
/* HjlqNeDBP ily traian dSjxjFPDz */     S[1] = 1;
/* HjlqNeDBP ily traian dSjxjFPDz */     for(int i = 2; i <= 1000000; ++i)
/* HjlqNeDBP ily traian dSjxjFPDz */         S[i] = i + 1;
/* HjlqNeDBP ily traian dSjxjFPDz */     for(int i = 2; i * i <= 1000000; ++i){
/* HjlqNeDBP ily traian dSjxjFPDz */         S[i * i] = S[i * i] + i;
/* HjlqNeDBP ily traian dSjxjFPDz */         for(int j = i + 1; j * i <= 1000000; j++)
/* HjlqNeDBP ily traian dSjxjFPDz */             S[i * j] = S[i * j] + i + j;
/* HjlqNeDBP ily traian dSjxjFPDz */     }
/* HjlqNeDBP ily traian dSjxjFPDz */     for(int i = 1; i <= 1000000; ++i)
/* HjlqNeDBP ily traian dSjxjFPDz */         S[i] += S[i-1];
/* HjlqNeDBP ily traian dSjxjFPDz */     int x, y;
/* HjlqNeDBP ily traian dSjxjFPDz */     for(int i = 1; i <= n; ++i){
/* HjlqNeDBP ily traian dSjxjFPDz */         cin >> x >> y;
/* HjlqNeDBP ily traian dSjxjFPDz */         cout << S[y] - S[x-1] << '\n';
/* HjlqNeDBP ily traian dSjxjFPDz */     }
/* HjlqNeDBP ily traian dSjxjFPDz */     return 0;
/* HjlqNeDBP ily traian dSjxjFPDz */ }