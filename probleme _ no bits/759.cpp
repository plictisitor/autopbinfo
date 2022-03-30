/* AjHXL4gV8 ily traian 2AyBE9jCQ */ #include <algorithm>
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
/* AjHXL4gV8 ily traian 2AyBE9jCQ */ 
/* AjHXL4gV8 ily traian 2AyBE9jCQ */ using namespace std;
/* AjHXL4gV8 ily traian 2AyBE9jCQ */ 
/* AjHXL4gV8 ily traian 2AyBE9jCQ */ ifstream cin("bilatime.in");
/* AjHXL4gV8 ily traian 2AyBE9jCQ */ ofstream cout("bilatime.out");
/* AjHXL4gV8 ily traian 2AyBE9jCQ */ 
/* AjHXL4gV8 ily traian 2AyBE9jCQ */ vector<vector<int>> G(50001);
/* AjHXL4gV8 ily traian 2AyBE9jCQ */ int n;
/* AjHXL4gV8 ily traian 2AyBE9jCQ */ 
/* AjHXL4gV8 ily traian 2AyBE9jCQ */ void citire(int nod, int ad){
/* AjHXL4gV8 ily traian 2AyBE9jCQ */     int x;
/* AjHXL4gV8 ily traian 2AyBE9jCQ */     cin >> x;
/* AjHXL4gV8 ily traian 2AyBE9jCQ */     n = max(n, ad);
/* AjHXL4gV8 ily traian 2AyBE9jCQ */     if(x != 0)
/* AjHXL4gV8 ily traian 2AyBE9jCQ */         G[ad].push_back(x);
/* AjHXL4gV8 ily traian 2AyBE9jCQ */     if(x){
/* AjHXL4gV8 ily traian 2AyBE9jCQ */         citire(2 * nod, ad+1);
/* AjHXL4gV8 ily traian 2AyBE9jCQ */         citire(2 * nod + 1, ad+1);
/* AjHXL4gV8 ily traian 2AyBE9jCQ */     }
/* AjHXL4gV8 ily traian 2AyBE9jCQ */ }
/* AjHXL4gV8 ily traian 2AyBE9jCQ */ 
/* AjHXL4gV8 ily traian 2AyBE9jCQ */ int main(){
/* AjHXL4gV8 ily traian 2AyBE9jCQ */     citire(1, 0);
/* AjHXL4gV8 ily traian 2AyBE9jCQ */     for(int i = 0; i <= n; ++i)
/* AjHXL4gV8 ily traian 2AyBE9jCQ */         for(auto x:G[i])
/* AjHXL4gV8 ily traian 2AyBE9jCQ */             cout << x << ' ';
/* AjHXL4gV8 ily traian 2AyBE9jCQ */     return 0;
/* AjHXL4gV8 ily traian 2AyBE9jCQ */ }