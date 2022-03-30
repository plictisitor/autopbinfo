/* tKIFMEgGk ily traian bQMUzjpDd */ #include <algorithm>
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
/* tKIFMEgGk ily traian bQMUzjpDd */ using namespace std;
/* tKIFMEgGk ily traian bQMUzjpDd */ 
/* tKIFMEgGk ily traian bQMUzjpDd */ int main()
/* tKIFMEgGk ily traian bQMUzjpDd */ {
/* tKIFMEgGk ily traian bQMUzjpDd */     int a, b;
/* tKIFMEgGk ily traian bQMUzjpDd */     cin >> a >> b;
/* tKIFMEgGk ily traian bQMUzjpDd */     bool aceiasi_factori = true;
/* tKIFMEgGk ily traian bQMUzjpDd */     int d = 2;
/* tKIFMEgGk ily traian bQMUzjpDd */     while(a > 1){
/* tKIFMEgGk ily traian bQMUzjpDd */         int p = 0;
/* tKIFMEgGk ily traian bQMUzjpDd */         if(a % d == 0){
/* tKIFMEgGk ily traian bQMUzjpDd */             if(b % d != 0){
/* tKIFMEgGk ily traian bQMUzjpDd */                 aceiasi_factori = false;
/* tKIFMEgGk ily traian bQMUzjpDd */             }
/* tKIFMEgGk ily traian bQMUzjpDd */             while(a % d == 0)
/* tKIFMEgGk ily traian bQMUzjpDd */                 a /= d;
/* tKIFMEgGk ily traian bQMUzjpDd */             while(b % d == 0)
/* tKIFMEgGk ily traian bQMUzjpDd */                 b /= d;
/* tKIFMEgGk ily traian bQMUzjpDd */         }
/* tKIFMEgGk ily traian bQMUzjpDd */         d++;
/* tKIFMEgGk ily traian bQMUzjpDd */         if(d * d > a)
/* tKIFMEgGk ily traian bQMUzjpDd */             d = a;
/* tKIFMEgGk ily traian bQMUzjpDd */     }
/* tKIFMEgGk ily traian bQMUzjpDd */     if(aceiasi_factori && b == 1)
/* tKIFMEgGk ily traian bQMUzjpDd */         cout << "DA";
/* tKIFMEgGk ily traian bQMUzjpDd */     else
/* tKIFMEgGk ily traian bQMUzjpDd */         cout << "NU";
/* tKIFMEgGk ily traian bQMUzjpDd */     return 0;
/* tKIFMEgGk ily traian bQMUzjpDd */ }