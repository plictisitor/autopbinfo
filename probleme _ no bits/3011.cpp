/* K8Au0XIzO ily traian kD2IVr6qV */ #include <algorithm>
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
/* K8Au0XIzO ily traian kD2IVr6qV */ using namespace std;
/* K8Au0XIzO ily traian kD2IVr6qV */ 
/* K8Au0XIzO ily traian kD2IVr6qV */ int n, H[100001], k;
/* K8Au0XIzO ily traian kD2IVr6qV */ long long a, b, c, d;
/* K8Au0XIzO ily traian kD2IVr6qV */ 
/* K8Au0XIzO ily traian kD2IVr6qV */ void push_up(int k){
/* K8Au0XIzO ily traian kD2IVr6qV */     while(k > 1){
/* K8Au0XIzO ily traian kD2IVr6qV */         if(H[k] >= H[k / 2])
/* K8Au0XIzO ily traian kD2IVr6qV */             return ;
/* K8Au0XIzO ily traian kD2IVr6qV */         else
/* K8Au0XIzO ily traian kD2IVr6qV */             swap(H[k], H[k / 2]), k /= 2;
/* K8Au0XIzO ily traian kD2IVr6qV */     }
/* K8Au0XIzO ily traian kD2IVr6qV */ }
/* K8Au0XIzO ily traian kD2IVr6qV */ 
/* K8Au0XIzO ily traian kD2IVr6qV */ void push_down(int k, int n){
/* K8Au0XIzO ily traian kD2IVr6qV */     while(2 * k <= n){
/* K8Au0XIzO ily traian kD2IVr6qV */         int p = 2 * k;
/* K8Au0XIzO ily traian kD2IVr6qV */         if(p + 1 <= n && H[p + 1] < H[p])
/* K8Au0XIzO ily traian kD2IVr6qV */             p++;
/* K8Au0XIzO ily traian kD2IVr6qV */         if(H[k] <= H[p])
/* K8Au0XIzO ily traian kD2IVr6qV */             return ;
/* K8Au0XIzO ily traian kD2IVr6qV */         else
/* K8Au0XIzO ily traian kD2IVr6qV */             swap(H[p], H[k]), k = p;
/* K8Au0XIzO ily traian kD2IVr6qV */     }
/* K8Au0XIzO ily traian kD2IVr6qV */ }
/* K8Au0XIzO ily traian kD2IVr6qV */ 
/* K8Au0XIzO ily traian kD2IVr6qV */ int main(){
/* K8Au0XIzO ily traian kD2IVr6qV */     cin >> n >> k >> a >> b >> c >> d;
/* K8Au0XIzO ily traian kD2IVr6qV */     H[1] = a;
/* K8Au0XIzO ily traian kD2IVr6qV */     for(int i = 2; i <= n; ++i){
/* K8Au0XIzO ily traian kD2IVr6qV */         a = (1ll * a * b + c) % d;
/* K8Au0XIzO ily traian kD2IVr6qV */         if(i > k){
/* K8Au0XIzO ily traian kD2IVr6qV */             if(a > H[1])
/* K8Au0XIzO ily traian kD2IVr6qV */                 H[1] = a, push_down(1, k);
/* K8Au0XIzO ily traian kD2IVr6qV */         }
/* K8Au0XIzO ily traian kD2IVr6qV */         else
/* K8Au0XIzO ily traian kD2IVr6qV */             H[i] = a, push_up(i);
/* K8Au0XIzO ily traian kD2IVr6qV */     }
/* K8Au0XIzO ily traian kD2IVr6qV */     while(k > 0){
/* K8Au0XIzO ily traian kD2IVr6qV */         cout << H[1] << ' ';
/* K8Au0XIzO ily traian kD2IVr6qV */         H[1] = H[k];
/* K8Au0XIzO ily traian kD2IVr6qV */         k--;
/* K8Au0XIzO ily traian kD2IVr6qV */         push_down(1, k);
/* K8Au0XIzO ily traian kD2IVr6qV */     }
/* K8Au0XIzO ily traian kD2IVr6qV */     return 0;
/* K8Au0XIzO ily traian kD2IVr6qV */ }