/* wzXBtdtmm ily traian Icgtxq2Zc */ #include <algorithm>
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
/* wzXBtdtmm ily traian Icgtxq2Zc */ using namespace std;
/* wzXBtdtmm ily traian Icgtxq2Zc */ 
/* wzXBtdtmm ily traian Icgtxq2Zc */ ifstream cin("nrasoc.in");
/* wzXBtdtmm ily traian Icgtxq2Zc */ ofstream cout("nrasoc.out");
/* wzXBtdtmm ily traian Icgtxq2Zc */ 
/* wzXBtdtmm ily traian Icgtxq2Zc */ int main()
/* wzXBtdtmm ily traian Icgtxq2Zc */ {
/* wzXBtdtmm ily traian Icgtxq2Zc */     int n=1;
/* wzXBtdtmm ily traian Icgtxq2Zc */     int a[100];
/* wzXBtdtmm ily traian Icgtxq2Zc */     while(cin >> a[n])
/* wzXBtdtmm ily traian Icgtxq2Zc */         n++;
/* wzXBtdtmm ily traian Icgtxq2Zc */     n--;
/* wzXBtdtmm ily traian Icgtxq2Zc */     int cnt=0;
/* wzXBtdtmm ily traian Icgtxq2Zc */     for(int i = 1 ; i <= n ; ++i)
/* wzXBtdtmm ily traian Icgtxq2Zc */     {
/* wzXBtdtmm ily traian Icgtxq2Zc */         int p = 10*a[i]+a[i+1];
/* wzXBtdtmm ily traian Icgtxq2Zc */         int q = 10*a[i+1]+a[i+2];
/* wzXBtdtmm ily traian Icgtxq2Zc */         if(p<q && cnt==0)
/* wzXBtdtmm ily traian Icgtxq2Zc */         {
/* wzXBtdtmm ily traian Icgtxq2Zc */             i++;
/* wzXBtdtmm ily traian Icgtxq2Zc */             cnt++;
/* wzXBtdtmm ily traian Icgtxq2Zc */         }
/* wzXBtdtmm ily traian Icgtxq2Zc */         else
/* wzXBtdtmm ily traian Icgtxq2Zc */         cout << a[i] << ' ';
/* wzXBtdtmm ily traian Icgtxq2Zc */         if(cnt==0 && i==n-2)
/* wzXBtdtmm ily traian Icgtxq2Zc */         break;
/* wzXBtdtmm ily traian Icgtxq2Zc */     }
/* wzXBtdtmm ily traian Icgtxq2Zc */     return 0;    
/* wzXBtdtmm ily traian Icgtxq2Zc */ }