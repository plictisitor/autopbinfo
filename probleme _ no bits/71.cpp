/* WsV2Cd4tM ily traian hIkeVMGLr */ #include <algorithm>
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
/* WsV2Cd4tM ily traian hIkeVMGLr */ using namespace std;
/* WsV2Cd4tM ily traian hIkeVMGLr */ 
/* WsV2Cd4tM ily traian hIkeVMGLr */ int main()
/* WsV2Cd4tM ily traian hIkeVMGLr */ {
/* WsV2Cd4tM ily traian hIkeVMGLr */     int t;
/* WsV2Cd4tM ily traian hIkeVMGLr */     cin >> t;
/* WsV2Cd4tM ily traian hIkeVMGLr */     for(int i = 0 ; i < t ; ++i)
/* WsV2Cd4tM ily traian hIkeVMGLr */     {
/* WsV2Cd4tM ily traian hIkeVMGLr */         int n , m;
/* WsV2Cd4tM ily traian hIkeVMGLr */         int a[1001] , b[1001];
/* WsV2Cd4tM ily traian hIkeVMGLr */         cin >> n;
/* WsV2Cd4tM ily traian hIkeVMGLr */         for(int j = 0 ; j < n ; ++j)
/* WsV2Cd4tM ily traian hIkeVMGLr */         cin >> a[j];
/* WsV2Cd4tM ily traian hIkeVMGLr */         cin >> m;
/* WsV2Cd4tM ily traian hIkeVMGLr */         for(int j = 0 ; j < m ; ++j)
/* WsV2Cd4tM ily traian hIkeVMGLr */         cin >> b[j];
/* WsV2Cd4tM ily traian hIkeVMGLr */         int cnt=0;
/* WsV2Cd4tM ily traian hIkeVMGLr */         int ok=0;
/* WsV2Cd4tM ily traian hIkeVMGLr */         for(int j = 0 ; j < m ; ++j)
/* WsV2Cd4tM ily traian hIkeVMGLr */         {
/* WsV2Cd4tM ily traian hIkeVMGLr */             int s=0;
/* WsV2Cd4tM ily traian hIkeVMGLr */             for(int k = ok ; k < n ; ++k)
/* WsV2Cd4tM ily traian hIkeVMGLr */             {
/* WsV2Cd4tM ily traian hIkeVMGLr */                 s+=a[k];
/* WsV2Cd4tM ily traian hIkeVMGLr */                 ok++;
/* WsV2Cd4tM ily traian hIkeVMGLr */                 if(s >= b[j])
/* WsV2Cd4tM ily traian hIkeVMGLr */                 break;
/* WsV2Cd4tM ily traian hIkeVMGLr */             }
/* WsV2Cd4tM ily traian hIkeVMGLr */             if(b[j]==s)
/* WsV2Cd4tM ily traian hIkeVMGLr */             cnt++;
/* WsV2Cd4tM ily traian hIkeVMGLr */         }
/* WsV2Cd4tM ily traian hIkeVMGLr */         if(cnt==m && ok==n)
/* WsV2Cd4tM ily traian hIkeVMGLr */         cout << 1 << endl;
/* WsV2Cd4tM ily traian hIkeVMGLr */         else
/* WsV2Cd4tM ily traian hIkeVMGLr */         cout << 0 << endl;
/* WsV2Cd4tM ily traian hIkeVMGLr */     }
/* WsV2Cd4tM ily traian hIkeVMGLr */ }