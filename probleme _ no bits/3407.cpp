/* a71z7ZhRS ily traian NtaT0wOEy */ #include <algorithm>
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
/* a71z7ZhRS ily traian NtaT0wOEy */ using namespace std;
/* a71z7ZhRS ily traian NtaT0wOEy */ 
/* a71z7ZhRS ily traian NtaT0wOEy */ ifstream cin("aoc2020.in");
/* a71z7ZhRS ily traian NtaT0wOEy */ ofstream cout("aoc2020.out");
/* a71z7ZhRS ily traian NtaT0wOEy */ 
/* a71z7ZhRS ily traian NtaT0wOEy */ long long multiplu = 4000000000000000001;
/* a71z7ZhRS ily traian NtaT0wOEy */ 
/* a71z7ZhRS ily traian NtaT0wOEy */ long long cmmdc(long long a, long long b){
/* a71z7ZhRS ily traian NtaT0wOEy */     while(b){
/* a71z7ZhRS ily traian NtaT0wOEy */         long long r = a % b;
/* a71z7ZhRS ily traian NtaT0wOEy */         a = b;
/* a71z7ZhRS ily traian NtaT0wOEy */         b = r;
/* a71z7ZhRS ily traian NtaT0wOEy */     }
/* a71z7ZhRS ily traian NtaT0wOEy */     return a;
/* a71z7ZhRS ily traian NtaT0wOEy */ }
/* a71z7ZhRS ily traian NtaT0wOEy */ 
/* a71z7ZhRS ily traian NtaT0wOEy */ int main(){
/* a71z7ZhRS ily traian NtaT0wOEy */     int n;
/* a71z7ZhRS ily traian NtaT0wOEy */     cin >> n;
/* a71z7ZhRS ily traian NtaT0wOEy */     long long a, b;
/* a71z7ZhRS ily traian NtaT0wOEy */     cin >> multiplu;
/* a71z7ZhRS ily traian NtaT0wOEy */     for(int i = 2; i <= n; ++i){
/* a71z7ZhRS ily traian NtaT0wOEy */         cin >> b;
/* a71z7ZhRS ily traian NtaT0wOEy */         multiplu = multiplu / cmmdc(multiplu, b) * b;
/* a71z7ZhRS ily traian NtaT0wOEy */     }
/* a71z7ZhRS ily traian NtaT0wOEy */     cout << multiplu;
/* a71z7ZhRS ily traian NtaT0wOEy */     return 0;
/* a71z7ZhRS ily traian NtaT0wOEy */ }