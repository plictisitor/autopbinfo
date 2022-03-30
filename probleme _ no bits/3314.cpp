/* qPxwDmhDI ily traian gp8Voouiq */ #include <algorithm>
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
/* qPxwDmhDI ily traian gp8Voouiq */ using namespace std;
/* qPxwDmhDI ily traian gp8Voouiq */ 
/* qPxwDmhDI ily traian gp8Voouiq */ ifstream cin("eratostene3.in");
/* qPxwDmhDI ily traian gp8Voouiq */ ofstream cout("eratostene3.out");
/* qPxwDmhDI ily traian gp8Voouiq */ 
/* qPxwDmhDI ily traian gp8Voouiq */ int E[1000001], n;
/* qPxwDmhDI ily traian gp8Voouiq */ long long int t;
/* qPxwDmhDI ily traian gp8Voouiq */ 
/* qPxwDmhDI ily traian gp8Voouiq */ int main(){
/* qPxwDmhDI ily traian gp8Voouiq */     cin >> n;
/* qPxwDmhDI ily traian gp8Voouiq */     for(int i = 1; i <= 1000000; ++i)
/* qPxwDmhDI ily traian gp8Voouiq */         E[i] = i - 1;
/* qPxwDmhDI ily traian gp8Voouiq */     E[1] = 1;
/* qPxwDmhDI ily traian gp8Voouiq */     for(int i = 2; i <= 1000000; ++i)
/* qPxwDmhDI ily traian gp8Voouiq */         for(int j = 2 * i; j <= 1000000; j = j + i)
/* qPxwDmhDI ily traian gp8Voouiq */             E[j] = E[j] - E[i];
/* qPxwDmhDI ily traian gp8Voouiq */     for(int i = 1; i <= n; ++i){
/* qPxwDmhDI ily traian gp8Voouiq */         int x;
/* qPxwDmhDI ily traian gp8Voouiq */         cin >> x;
/* qPxwDmhDI ily traian gp8Voouiq */         cout << E[x] << ' ';
/* qPxwDmhDI ily traian gp8Voouiq */     }
/* qPxwDmhDI ily traian gp8Voouiq */     return 0;
/* qPxwDmhDI ily traian gp8Voouiq */ }