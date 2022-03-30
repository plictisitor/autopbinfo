/* mua2drjpU ily traian OEkFrWEIV */ #include <algorithm>
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
/* mua2drjpU ily traian OEkFrWEIV */ 
/* mua2drjpU ily traian OEkFrWEIV */ using namespace std;
/* mua2drjpU ily traian OEkFrWEIV */ int n , x , a[1001] , cnt;
/* mua2drjpU ily traian OEkFrWEIV */ int main()
/* mua2drjpU ily traian OEkFrWEIV */ {
/* mua2drjpU ily traian OEkFrWEIV */     cin >> n;
/* mua2drjpU ily traian OEkFrWEIV */     for(int i = 1 ; i <= n ; i++)
/* mua2drjpU ily traian OEkFrWEIV */     {
/* mua2drjpU ily traian OEkFrWEIV */         cin >> x;
/* mua2drjpU ily traian OEkFrWEIV */         int ok = 0;
/* mua2drjpU ily traian OEkFrWEIV */         for(int i = 1 ; i <= cnt && ok == 0; i++)
/* mua2drjpU ily traian OEkFrWEIV */             if(x > a[i])
/* mua2drjpU ily traian OEkFrWEIV */             {
/* mua2drjpU ily traian OEkFrWEIV */                 a[i] = x;
/* mua2drjpU ily traian OEkFrWEIV */                 ok = 1;
/* mua2drjpU ily traian OEkFrWEIV */             }
/* mua2drjpU ily traian OEkFrWEIV */         if(ok == 0)a[++cnt] = x;
/* mua2drjpU ily traian OEkFrWEIV */     }
/* mua2drjpU ily traian OEkFrWEIV */     cout << cnt;
/* mua2drjpU ily traian OEkFrWEIV */ }