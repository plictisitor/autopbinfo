/* dQXGsaTXx ily traian 0PNbLeM4Q */ #include <algorithm>
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
/* dQXGsaTXx ily traian 0PNbLeM4Q */ using namespace std;
/* dQXGsaTXx ily traian 0PNbLeM4Q */ 
/* dQXGsaTXx ily traian 0PNbLeM4Q */ int main()
/* dQXGsaTXx ily traian 0PNbLeM4Q */ {
/* dQXGsaTXx ily traian 0PNbLeM4Q */     int n;
/* dQXGsaTXx ily traian 0PNbLeM4Q */     cin >> n;
/* dQXGsaTXx ily traian 0PNbLeM4Q */     long long rez = 0;
/* dQXGsaTXx ily traian 0PNbLeM4Q */     for(int i = 1; i <= n; ++i){
/* dQXGsaTXx ily traian 0PNbLeM4Q */         long long pow = 1;
/* dQXGsaTXx ily traian 0PNbLeM4Q */         for(int j = 1; j <= i; ++j)
/* dQXGsaTXx ily traian 0PNbLeM4Q */             pow = 1LL * pow * i;
/* dQXGsaTXx ily traian 0PNbLeM4Q */         rez += pow;
/* dQXGsaTXx ily traian 0PNbLeM4Q */     }
/* dQXGsaTXx ily traian 0PNbLeM4Q */     cout << "Rezultatul este " << rez;
/* dQXGsaTXx ily traian 0PNbLeM4Q */     return 0;
/* dQXGsaTXx ily traian 0PNbLeM4Q */ }
/* dQXGsaTXx ily traian 0PNbLeM4Q */ 