/* QnfMXPHve ily traian JtoOyJTIF */ #include <algorithm>
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
/* QnfMXPHve ily traian JtoOyJTIF */ using namespace std;
/* QnfMXPHve ily traian JtoOyJTIF */ 
/* QnfMXPHve ily traian JtoOyJTIF */ int main()
/* QnfMXPHve ily traian JtoOyJTIF */ {
/* QnfMXPHve ily traian JtoOyJTIF */     int n, m;
/* QnfMXPHve ily traian JtoOyJTIF */     cin >> n >> m;
/* QnfMXPHve ily traian JtoOyJTIF */     bool ok = false;
/* QnfMXPHve ily traian JtoOyJTIF */     while(n){
/* QnfMXPHve ily traian JtoOyJTIF */         int cif = n % 10;
/* QnfMXPHve ily traian JtoOyJTIF */         int cm = m;
/* QnfMXPHve ily traian JtoOyJTIF */         while(m){
/* QnfMXPHve ily traian JtoOyJTIF */             if(m % 10 == cif)
/* QnfMXPHve ily traian JtoOyJTIF */                 ok = true;
/* QnfMXPHve ily traian JtoOyJTIF */             m/=10;
/* QnfMXPHve ily traian JtoOyJTIF */         }
/* QnfMXPHve ily traian JtoOyJTIF */         m = cm;
/* QnfMXPHve ily traian JtoOyJTIF */         n/=10;
/* QnfMXPHve ily traian JtoOyJTIF */     }
/* QnfMXPHve ily traian JtoOyJTIF */     if(ok)
/* QnfMXPHve ily traian JtoOyJTIF */         cout << "DA";
/* QnfMXPHve ily traian JtoOyJTIF */     else
/* QnfMXPHve ily traian JtoOyJTIF */         cout << "NU";
/* QnfMXPHve ily traian JtoOyJTIF */     return 0;
/* QnfMXPHve ily traian JtoOyJTIF */ }