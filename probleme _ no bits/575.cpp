/* ants5llRT ily traian VDTrVajeB */ #include <algorithm>
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
/* ants5llRT ily traian VDTrVajeB */ 
/* ants5llRT ily traian VDTrVajeB */ using namespace std;
/* ants5llRT ily traian VDTrVajeB */ int a[111][111] , n , m;
/* ants5llRT ily traian VDTrVajeB */ int main()
/* ants5llRT ily traian VDTrVajeB */ {
/* ants5llRT ily traian VDTrVajeB */     int f[1001]={0} , ok = 0 , x , y , maxi = -1;
/* ants5llRT ily traian VDTrVajeB */     cin >> n >> m;
/* ants5llRT ily traian VDTrVajeB */     for(int i = 1 ; i <= m ; ++i)
/* ants5llRT ily traian VDTrVajeB */     {
/* ants5llRT ily traian VDTrVajeB */         cin >> x >> y;
/* ants5llRT ily traian VDTrVajeB */         if(!a[x][y])
/* ants5llRT ily traian VDTrVajeB */         {
/* ants5llRT ily traian VDTrVajeB */             a[x][0]++;
/* ants5llRT ily traian VDTrVajeB */             a[y][0]++;
/* ants5llRT ily traian VDTrVajeB */         }
/* ants5llRT ily traian VDTrVajeB */         f[y]++;
/* ants5llRT ily traian VDTrVajeB */     }
/* ants5llRT ily traian VDTrVajeB */     for(int i = 1 ; i <= n ; ++i)
/* ants5llRT ily traian VDTrVajeB */     {
/* ants5llRT ily traian VDTrVajeB */         if(f[i] > maxi) maxi = f[i];
/* ants5llRT ily traian VDTrVajeB */     }
/* ants5llRT ily traian VDTrVajeB */     for(int i = 1 ; i <= n ; ++i)
/* ants5llRT ily traian VDTrVajeB */     {
/* ants5llRT ily traian VDTrVajeB */         if(f[i] == maxi) cout << i << " ";
/* ants5llRT ily traian VDTrVajeB */     }
/* ants5llRT ily traian VDTrVajeB */ }