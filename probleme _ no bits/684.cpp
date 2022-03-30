/* HhO49BtmA ily traian rd8bjQbFm */ #include <algorithm>
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
/* HhO49BtmA ily traian rd8bjQbFm */ 
/* HhO49BtmA ily traian rd8bjQbFm */ 
/* HhO49BtmA ily traian rd8bjQbFm */ using namespace std;
/* HhO49BtmA ily traian rd8bjQbFm */ 
/* HhO49BtmA ily traian rd8bjQbFm */ ifstream cin("cifre5.in");
/* HhO49BtmA ily traian rd8bjQbFm */ ofstream cout("cifre5.out");
/* HhO49BtmA ily traian rd8bjQbFm */ 
/* HhO49BtmA ily traian rd8bjQbFm */ int n , v[100001] , ok , d , poz , poz2 , sum , i2 , k , A[10001] , cnt;
/* HhO49BtmA ily traian rd8bjQbFm */ 
/* HhO49BtmA ily traian rd8bjQbFm */ int main()
/* HhO49BtmA ily traian rd8bjQbFm */ {
/* HhO49BtmA ily traian rd8bjQbFm */     cin >> n >> k;
/* HhO49BtmA ily traian rd8bjQbFm */     for(int i = 1 ; i <= n ; i++)
/* HhO49BtmA ily traian rd8bjQbFm */         cin >> v[i];
/* HhO49BtmA ily traian rd8bjQbFm */     sort(v + 1, v + n + 1);
/* HhO49BtmA ily traian rd8bjQbFm */     while(v[poz] == 0) poz++;
/* HhO49BtmA ily traian rd8bjQbFm */     if(poz == 1) poz -= k;
/* HhO49BtmA ily traian rd8bjQbFm */     poz += k - 1;
/* HhO49BtmA ily traian rd8bjQbFm */     poz2 = n; d = -1;
/* HhO49BtmA ily traian rd8bjQbFm */     i2 = 1;
/* HhO49BtmA ily traian rd8bjQbFm */     while (sum > 0 || i2 <= n)
/* HhO49BtmA ily traian rd8bjQbFm */     {
/* HhO49BtmA ily traian rd8bjQbFm */         for(int i = 1 ; i <= k && i2 <= n ; i++)
/* HhO49BtmA ily traian rd8bjQbFm */         {
/* HhO49BtmA ily traian rd8bjQbFm */             if(poz2 == poz && ok == 0 ) d = 1 , poz2 = 1 , ok = 1;
/* HhO49BtmA ily traian rd8bjQbFm */             else if (poz2 == poz - k + 1 && ok == 1) d = -1 , poz2 = poz , ok = 2;
/* HhO49BtmA ily traian rd8bjQbFm */             sum += v[poz2];
/* HhO49BtmA ily traian rd8bjQbFm */             poz2 += d;
/* HhO49BtmA ily traian rd8bjQbFm */             i2++;
/* HhO49BtmA ily traian rd8bjQbFm */         }
/* HhO49BtmA ily traian rd8bjQbFm */         A[++cnt] = sum % 10;
/* HhO49BtmA ily traian rd8bjQbFm */         sum /= 10;
/* HhO49BtmA ily traian rd8bjQbFm */     }
/* HhO49BtmA ily traian rd8bjQbFm */     for(int i = cnt ; i >= 1 ; i--)
/* HhO49BtmA ily traian rd8bjQbFm */         cout << A[i];
/* HhO49BtmA ily traian rd8bjQbFm */     return 0;
/* HhO49BtmA ily traian rd8bjQbFm */ }