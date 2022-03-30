/* DACsWSluR ily traian zkb6tLwou */ #include <algorithm>
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
/* DACsWSluR ily traian zkb6tLwou */ using namespace std;
/* DACsWSluR ily traian zkb6tLwou */ 
/* DACsWSluR ily traian zkb6tLwou */ ifstream cin("intervale5.in");
/* DACsWSluR ily traian zkb6tLwou */ ofstream cout("intervale5.out");
/* DACsWSluR ily traian zkb6tLwou */ 
/* DACsWSluR ily traian zkb6tLwou */ int f[101];
/* DACsWSluR ily traian zkb6tLwou */ 
/* DACsWSluR ily traian zkb6tLwou */ int main()
/* DACsWSluR ily traian zkb6tLwou */ {
/* DACsWSluR ily traian zkb6tLwou */     int x;
/* DACsWSluR ily traian zkb6tLwou */     int maxi=-1;
/* DACsWSluR ily traian zkb6tLwou */     while(cin >> x)
/* DACsWSluR ily traian zkb6tLwou */     {
/* DACsWSluR ily traian zkb6tLwou */         f[x]=1;
/* DACsWSluR ily traian zkb6tLwou */         if(x > maxi)
/* DACsWSluR ily traian zkb6tLwou */             maxi = x;
/* DACsWSluR ily traian zkb6tLwou */     }
/* DACsWSluR ily traian zkb6tLwou */     int cnt = 0;
/* DACsWSluR ily traian zkb6tLwou */     for(int i = 0 ; i <= maxi - 2 ; ++i)
/* DACsWSluR ily traian zkb6tLwou */     {
/* DACsWSluR ily traian zkb6tLwou */         for(int j = i + 2 ; j <= maxi ; ++j)
/* DACsWSluR ily traian zkb6tLwou */         {
/* DACsWSluR ily traian zkb6tLwou */             bool ok = true;
/* DACsWSluR ily traian zkb6tLwou */             for(int k = i + 1 ; k < j ; ++k)
/* DACsWSluR ily traian zkb6tLwou */                 if(f[k]==1)
/* DACsWSluR ily traian zkb6tLwou */                     ok=false;
/* DACsWSluR ily traian zkb6tLwou */             if(ok && f[i]==1 && f[j]==1)
/* DACsWSluR ily traian zkb6tLwou */                 cout << i << ' ' << j << endl , cnt++;
/* DACsWSluR ily traian zkb6tLwou */         }
/* DACsWSluR ily traian zkb6tLwou */     }
/* DACsWSluR ily traian zkb6tLwou */     if(!cnt)
/* DACsWSluR ily traian zkb6tLwou */         cout << "nu exista";
/* DACsWSluR ily traian zkb6tLwou */     return 0;
/* DACsWSluR ily traian zkb6tLwou */ }