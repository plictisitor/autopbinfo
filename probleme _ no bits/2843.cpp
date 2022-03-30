/* xNEcdPUiw ily traian DoLGsWi0K */ #include <algorithm>
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
/* xNEcdPUiw ily traian DoLGsWi0K */ 
/* xNEcdPUiw ily traian DoLGsWi0K */ using namespace std;
/* xNEcdPUiw ily traian DoLGsWi0K */ 
/* xNEcdPUiw ily traian DoLGsWi0K */ ifstream cin("puteri6.in");
/* xNEcdPUiw ily traian DoLGsWi0K */ ofstream cout("puteri6.out");
/* xNEcdPUiw ily traian DoLGsWi0K */ 
/* xNEcdPUiw ily traian DoLGsWi0K */ int f[10];
/* xNEcdPUiw ily traian DoLGsWi0K */ 
/* xNEcdPUiw ily traian DoLGsWi0K */ int main()
/* xNEcdPUiw ily traian DoLGsWi0K */ {
/* xNEcdPUiw ily traian DoLGsWi0K */     int n , x;
/* xNEcdPUiw ily traian DoLGsWi0K */     cin >> n;
/* xNEcdPUiw ily traian DoLGsWi0K */     while(cin >> x)
/* xNEcdPUiw ily traian DoLGsWi0K */     {
/* xNEcdPUiw ily traian DoLGsWi0K */         int p = 0;
/* xNEcdPUiw ily traian DoLGsWi0K */         while(x)
/* xNEcdPUiw ily traian DoLGsWi0K */             p++ , x/=10;
/* xNEcdPUiw ily traian DoLGsWi0K */         f[p-1]++;
/* xNEcdPUiw ily traian DoLGsWi0K */     }
/* xNEcdPUiw ily traian DoLGsWi0K */     for(int i = 0 ; i <= 9 && n != 0; ++i)
/* xNEcdPUiw ily traian DoLGsWi0K */     {
/* xNEcdPUiw ily traian DoLGsWi0K */         for(int j = 1 ; j <= f[i] && n != 0; ++j)
/* xNEcdPUiw ily traian DoLGsWi0K */         {
/* xNEcdPUiw ily traian DoLGsWi0K */             n--;
/* xNEcdPUiw ily traian DoLGsWi0K */             if(n==0)
/* xNEcdPUiw ily traian DoLGsWi0K */                 cout << pow(10 , i);
/* xNEcdPUiw ily traian DoLGsWi0K */         }
/* xNEcdPUiw ily traian DoLGsWi0K */     }
/* xNEcdPUiw ily traian DoLGsWi0K */     if(n > 0)
/* xNEcdPUiw ily traian DoLGsWi0K */         cout << "Nu exista";
/* xNEcdPUiw ily traian DoLGsWi0K */     return 0;
/* xNEcdPUiw ily traian DoLGsWi0K */ }