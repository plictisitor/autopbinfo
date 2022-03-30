/* lxSVqPcSm ily traian 9oRkP2p2B */ #include <algorithm>
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
/* lxSVqPcSm ily traian 9oRkP2p2B */ using namespace std;
/* lxSVqPcSm ily traian 9oRkP2p2B */ int main()
/* lxSVqPcSm ily traian 9oRkP2p2B */ {
/* lxSVqPcSm ily traian 9oRkP2p2B */     int n , m , ok = 0 , f[1000000]={0};
/* lxSVqPcSm ily traian 9oRkP2p2B */     cin >> n >> m;
/* lxSVqPcSm ily traian 9oRkP2p2B */     int a[101][101];
/* lxSVqPcSm ily traian 9oRkP2p2B */     for(int i= 1 ; i <= n ; ++i)
/* lxSVqPcSm ily traian 9oRkP2p2B */     {
/* lxSVqPcSm ily traian 9oRkP2p2B */         for(int j = 1 ; j <= m ; ++j)
/* lxSVqPcSm ily traian 9oRkP2p2B */         {
/* lxSVqPcSm ily traian 9oRkP2p2B */             cin >> a[i][j];
/* lxSVqPcSm ily traian 9oRkP2p2B */             f[a[i][j]]++;
/* lxSVqPcSm ily traian 9oRkP2p2B */         }
/* lxSVqPcSm ily traian 9oRkP2p2B */     }
/* lxSVqPcSm ily traian 9oRkP2p2B */     for(int i = 999999 ; i >= 1 && ok ==0 ; i--)
/* lxSVqPcSm ily traian 9oRkP2p2B */     {
/* lxSVqPcSm ily traian 9oRkP2p2B */         if(f[i]>=2) cout << i , ok =1;
/* lxSVqPcSm ily traian 9oRkP2p2B */     }
/* lxSVqPcSm ily traian 9oRkP2p2B */     if(ok==0) cout << "IMPOSIBIL";
/* lxSVqPcSm ily traian 9oRkP2p2B */ }