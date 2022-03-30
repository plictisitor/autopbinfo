/* PMlEuQYbH ily traian Ss7F4oaiU */ #include <algorithm>
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
/* PMlEuQYbH ily traian Ss7F4oaiU */ using namespace std;
/* PMlEuQYbH ily traian Ss7F4oaiU */ 
/* PMlEuQYbH ily traian Ss7F4oaiU */ ifstream cin("heap.in");
/* PMlEuQYbH ily traian Ss7F4oaiU */ ofstream cout("heap.out");
/* PMlEuQYbH ily traian Ss7F4oaiU */ 
/* PMlEuQYbH ily traian Ss7F4oaiU */ int n, H[100001];
/* PMlEuQYbH ily traian Ss7F4oaiU */ 
/* PMlEuQYbH ily traian Ss7F4oaiU */ void push_up(int k){
/* PMlEuQYbH ily traian Ss7F4oaiU */     while(k > 1){
/* PMlEuQYbH ily traian Ss7F4oaiU */         if(H[k] <= H[k / 2])
/* PMlEuQYbH ily traian Ss7F4oaiU */             return ;
/* PMlEuQYbH ily traian Ss7F4oaiU */         else
/* PMlEuQYbH ily traian Ss7F4oaiU */             swap(H[k], H[k / 2]), k /= 2;
/* PMlEuQYbH ily traian Ss7F4oaiU */     }
/* PMlEuQYbH ily traian Ss7F4oaiU */ }
/* PMlEuQYbH ily traian Ss7F4oaiU */ 
/* PMlEuQYbH ily traian Ss7F4oaiU */ void push_down(int k, int n){
/* PMlEuQYbH ily traian Ss7F4oaiU */     while(2 * k <= n){
/* PMlEuQYbH ily traian Ss7F4oaiU */         int p = 2 * k;
/* PMlEuQYbH ily traian Ss7F4oaiU */         if(p + 1 <= n && H[p + 1] > H[p])
/* PMlEuQYbH ily traian Ss7F4oaiU */             p++;
/* PMlEuQYbH ily traian Ss7F4oaiU */         if(H[k] >= H[p])
/* PMlEuQYbH ily traian Ss7F4oaiU */             return ;
/* PMlEuQYbH ily traian Ss7F4oaiU */         else
/* PMlEuQYbH ily traian Ss7F4oaiU */             swap(H[p], H[k]), k = p;
/* PMlEuQYbH ily traian Ss7F4oaiU */     }
/* PMlEuQYbH ily traian Ss7F4oaiU */ }
/* PMlEuQYbH ily traian Ss7F4oaiU */ 
/* PMlEuQYbH ily traian Ss7F4oaiU */ int cnt = 0;
/* PMlEuQYbH ily traian Ss7F4oaiU */ 
/* PMlEuQYbH ily traian Ss7F4oaiU */ int main(){
/* PMlEuQYbH ily traian Ss7F4oaiU */     int n;
/* PMlEuQYbH ily traian Ss7F4oaiU */     cin >> n;
/* PMlEuQYbH ily traian Ss7F4oaiU */     for(int i = 1; i <= n; ++i){
/* PMlEuQYbH ily traian Ss7F4oaiU */         int c, x;
/* PMlEuQYbH ily traian Ss7F4oaiU */         cin >> c;
/* PMlEuQYbH ily traian Ss7F4oaiU */         if(c == 1)
/* PMlEuQYbH ily traian Ss7F4oaiU */             cin >> x, H[++cnt] = x, push_up(cnt);
/* PMlEuQYbH ily traian Ss7F4oaiU */         else
/* PMlEuQYbH ily traian Ss7F4oaiU */             cout << H[1] << '\n', H[1] = H[cnt], cnt--, push_down(1, cnt);
/* PMlEuQYbH ily traian Ss7F4oaiU */     }
/* PMlEuQYbH ily traian Ss7F4oaiU */     return 0;
/* PMlEuQYbH ily traian Ss7F4oaiU */ }