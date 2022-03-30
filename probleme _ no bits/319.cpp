/* Hk7HkPMPE ily traian NXX8oiaqe */ #include <algorithm>
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
/* Hk7HkPMPE ily traian NXX8oiaqe */ using namespace std;
/* Hk7HkPMPE ily traian NXX8oiaqe */ 
/* Hk7HkPMPE ily traian NXX8oiaqe */ ifstream cin("suma35.in");
/* Hk7HkPMPE ily traian NXX8oiaqe */ ofstream cout("suma35.out");
/* Hk7HkPMPE ily traian NXX8oiaqe */ 
/* Hk7HkPMPE ily traian NXX8oiaqe */ int n , x[1002];
/* Hk7HkPMPE ily traian NXX8oiaqe */ 
/* Hk7HkPMPE ily traian NXX8oiaqe */ void afisare(int k)
/* Hk7HkPMPE ily traian NXX8oiaqe */ {
/* Hk7HkPMPE ily traian NXX8oiaqe */     for(int i = 1 ; i <= k ; i++)
/* Hk7HkPMPE ily traian NXX8oiaqe */         cout << x[i] << " ";
/* Hk7HkPMPE ily traian NXX8oiaqe */     cout << '\n';
/* Hk7HkPMPE ily traian NXX8oiaqe */ }
/* Hk7HkPMPE ily traian NXX8oiaqe */ 
/* Hk7HkPMPE ily traian NXX8oiaqe */ void back(int k , int sp)
/* Hk7HkPMPE ily traian NXX8oiaqe */ {
/* Hk7HkPMPE ily traian NXX8oiaqe */     for(int i = x[k - 1]; i <= 5; i += 2)
/* Hk7HkPMPE ily traian NXX8oiaqe */     {
/* Hk7HkPMPE ily traian NXX8oiaqe */         x[k] = i;
/* Hk7HkPMPE ily traian NXX8oiaqe */         sp += x[k];
/* Hk7HkPMPE ily traian NXX8oiaqe */         if(sp <= n)
/* Hk7HkPMPE ily traian NXX8oiaqe */             if(sp == n) afisare(k);
/* Hk7HkPMPE ily traian NXX8oiaqe */         else back(k + 1 , sp);
/* Hk7HkPMPE ily traian NXX8oiaqe */         sp -= x[k];
/* Hk7HkPMPE ily traian NXX8oiaqe */     }
/* Hk7HkPMPE ily traian NXX8oiaqe */ }
/* Hk7HkPMPE ily traian NXX8oiaqe */ 
/* Hk7HkPMPE ily traian NXX8oiaqe */ int main()
/* Hk7HkPMPE ily traian NXX8oiaqe */ {
/* Hk7HkPMPE ily traian NXX8oiaqe */     cin >> n;
/* Hk7HkPMPE ily traian NXX8oiaqe */     x[0] = 3;
/* Hk7HkPMPE ily traian NXX8oiaqe */     back(1 , 0);
/* Hk7HkPMPE ily traian NXX8oiaqe */ }