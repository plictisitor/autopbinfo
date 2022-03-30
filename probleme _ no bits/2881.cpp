/* AmRizIeuW ily traian szjf9QjhN */ #include <algorithm>
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
/* AmRizIeuW ily traian szjf9QjhN */ using namespace std;
/* AmRizIeuW ily traian szjf9QjhN */ 
/* AmRizIeuW ily traian szjf9QjhN */ ifstream cin("cartonase1.in");
/* AmRizIeuW ily traian szjf9QjhN */ ofstream cout("cartonase1.out");
/* AmRizIeuW ily traian szjf9QjhN */ 
/* AmRizIeuW ily traian szjf9QjhN */ int cmmdc(int a , int b)
/* AmRizIeuW ily traian szjf9QjhN */ {
/* AmRizIeuW ily traian szjf9QjhN */     while(b)
/* AmRizIeuW ily traian szjf9QjhN */     {
/* AmRizIeuW ily traian szjf9QjhN */         int r = a % b;
/* AmRizIeuW ily traian szjf9QjhN */         a = b;
/* AmRizIeuW ily traian szjf9QjhN */         b = r;
/* AmRizIeuW ily traian szjf9QjhN */     }
/* AmRizIeuW ily traian szjf9QjhN */     return a;
/* AmRizIeuW ily traian szjf9QjhN */ }
/* AmRizIeuW ily traian szjf9QjhN */ 
/* AmRizIeuW ily traian szjf9QjhN */ int main()
/* AmRizIeuW ily traian szjf9QjhN */ {
/* AmRizIeuW ily traian szjf9QjhN */     int n;
/* AmRizIeuW ily traian szjf9QjhN */     cin >> n;
/* AmRizIeuW ily traian szjf9QjhN */     int x , y;
/* AmRizIeuW ily traian szjf9QjhN */     cin >> x;
/* AmRizIeuW ily traian szjf9QjhN */     bool ok = true;
/* AmRizIeuW ily traian szjf9QjhN */     for(int i = 2 ; i <= n && ok; ++i)
/* AmRizIeuW ily traian szjf9QjhN */     {
/* AmRizIeuW ily traian szjf9QjhN */         cin >> y;
/* AmRizIeuW ily traian szjf9QjhN */         x = cmmdc(x , y);
/* AmRizIeuW ily traian szjf9QjhN */         if(x == 1)
/* AmRizIeuW ily traian szjf9QjhN */             cout << i , ok = false;
/* AmRizIeuW ily traian szjf9QjhN */     }
/* AmRizIeuW ily traian szjf9QjhN */     if(ok)
/* AmRizIeuW ily traian szjf9QjhN */         cout << -1;
/* AmRizIeuW ily traian szjf9QjhN */     return 0;
/* AmRizIeuW ily traian szjf9QjhN */ }