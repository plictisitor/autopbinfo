/* Vrbf6SS1v ily traian aTGgdzbgb */ #include <algorithm>
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
/* Vrbf6SS1v ily traian aTGgdzbgb */ 
/* Vrbf6SS1v ily traian aTGgdzbgb */ using namespace std;
/* Vrbf6SS1v ily traian aTGgdzbgb */ 
/* Vrbf6SS1v ily traian aTGgdzbgb */ int main()
/* Vrbf6SS1v ily traian aTGgdzbgb */ {
/* Vrbf6SS1v ily traian aTGgdzbgb */     int n;
/* Vrbf6SS1v ily traian aTGgdzbgb */     cin >> n;
/* Vrbf6SS1v ily traian aTGgdzbgb */     int a[501];
/* Vrbf6SS1v ily traian aTGgdzbgb */     for(int i = 1; i <= n; ++i)
/* Vrbf6SS1v ily traian aTGgdzbgb */         cin >> a[i];
/* Vrbf6SS1v ily traian aTGgdzbgb */ 
/* Vrbf6SS1v ily traian aTGgdzbgb */     bool toate_egale = true;
/* Vrbf6SS1v ily traian aTGgdzbgb */ 
/* Vrbf6SS1v ily traian aTGgdzbgb */     for(int i = 2; i <= n; ++i)
/* Vrbf6SS1v ily traian aTGgdzbgb */         if(a[i] != a[i-1])
/* Vrbf6SS1v ily traian aTGgdzbgb */             toate_egale = false;
/* Vrbf6SS1v ily traian aTGgdzbgb */ 
/* Vrbf6SS1v ily traian aTGgdzbgb */     if(toate_egale)
/* Vrbf6SS1v ily traian aTGgdzbgb */         cout << "DA";
/* Vrbf6SS1v ily traian aTGgdzbgb */     else
/* Vrbf6SS1v ily traian aTGgdzbgb */         cout << "NU";
/* Vrbf6SS1v ily traian aTGgdzbgb */ 
/* Vrbf6SS1v ily traian aTGgdzbgb */     return 0;
/* Vrbf6SS1v ily traian aTGgdzbgb */ }