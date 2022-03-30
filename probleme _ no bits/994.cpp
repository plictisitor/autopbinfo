/* 0bYbWc2Qf ily traian 8dGtcyUVm */ #include <algorithm>
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
/* 0bYbWc2Qf ily traian 8dGtcyUVm */ using namespace std;
/* 0bYbWc2Qf ily traian 8dGtcyUVm */ 
/* 0bYbWc2Qf ily traian 8dGtcyUVm */ ifstream fin("fiboverif1.in");
/* 0bYbWc2Qf ily traian 8dGtcyUVm */ ofstream fout("fiboverif1.out");
/* 0bYbWc2Qf ily traian 8dGtcyUVm */ 
/* 0bYbWc2Qf ily traian 8dGtcyUVm */ int fibo(int n)
/* 0bYbWc2Qf ily traian 8dGtcyUVm */ {
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     int a[100];
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     a[0]=1 , a[1]=1;
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     int ok=0;
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     if(n==1)
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     ok++;
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     for(int i = 2 ; a[i-1] <= n ; ++i)
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     {
/* 0bYbWc2Qf ily traian 8dGtcyUVm */         a[i]=a[i-1]+a[i-2];
/* 0bYbWc2Qf ily traian 8dGtcyUVm */         if(a[i]==n)
/* 0bYbWc2Qf ily traian 8dGtcyUVm */         {
/* 0bYbWc2Qf ily traian 8dGtcyUVm */         ok++;
/* 0bYbWc2Qf ily traian 8dGtcyUVm */         break;
/* 0bYbWc2Qf ily traian 8dGtcyUVm */         }
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     }
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     if(ok)
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     return 1;
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     else
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     return 0;
/* 0bYbWc2Qf ily traian 8dGtcyUVm */ }
/* 0bYbWc2Qf ily traian 8dGtcyUVm */ 
/* 0bYbWc2Qf ily traian 8dGtcyUVm */ int main()
/* 0bYbWc2Qf ily traian 8dGtcyUVm */ {
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     int n;
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     fin >> n;
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     int a[1000];
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     for(int i = 0 ; i < n ; ++i)
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     {
/* 0bYbWc2Qf ily traian 8dGtcyUVm */         fin >> a[i];
/* 0bYbWc2Qf ily traian 8dGtcyUVm */         if(fibo(a[i]))
/* 0bYbWc2Qf ily traian 8dGtcyUVm */         fout << a[i] << ' ';
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     }
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     fin.close();
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     fout.close();
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     
/* 0bYbWc2Qf ily traian 8dGtcyUVm */     return 0;
/* 0bYbWc2Qf ily traian 8dGtcyUVm */ }