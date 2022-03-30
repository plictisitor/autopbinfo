/* hVMEGPX2U ily traian vG5TwalBL */ #include <algorithm>
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
/* hVMEGPX2U ily traian vG5TwalBL */ using namespace std;
/* hVMEGPX2U ily traian vG5TwalBL */ 
/* hVMEGPX2U ily traian vG5TwalBL */ ifstream cin("canguri.in");
/* hVMEGPX2U ily traian vG5TwalBL */ ofstream cout("canguri.out");
/* hVMEGPX2U ily traian vG5TwalBL */ 
/* hVMEGPX2U ily traian vG5TwalBL */ int main()
/* hVMEGPX2U ily traian vG5TwalBL */ {
/* hVMEGPX2U ily traian vG5TwalBL */     int nr , s;
/* hVMEGPX2U ily traian vG5TwalBL */     int max=0 , nrmax;
/* hVMEGPX2U ily traian vG5TwalBL */     for(int i = 1 ; i <= 3 ; ++i)
/* hVMEGPX2U ily traian vG5TwalBL */     {
/* hVMEGPX2U ily traian vG5TwalBL */         cin >> nr >> s;
/* hVMEGPX2U ily traian vG5TwalBL */         if(s > max)
/* hVMEGPX2U ily traian vG5TwalBL */             max=s , nrmax=nr;
/* hVMEGPX2U ily traian vG5TwalBL */     }
/* hVMEGPX2U ily traian vG5TwalBL */     cout << nrmax << endl;
/* hVMEGPX2U ily traian vG5TwalBL */     int rez=800/max;
/* hVMEGPX2U ily traian vG5TwalBL */     if(rez*max!=800)
/* hVMEGPX2U ily traian vG5TwalBL */         rez++;
/* hVMEGPX2U ily traian vG5TwalBL */     cout << rez;
/* hVMEGPX2U ily traian vG5TwalBL */     return 0;    
/* hVMEGPX2U ily traian vG5TwalBL */ }