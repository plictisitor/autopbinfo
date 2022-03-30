/* w9CQPn2tj ily traian ykvLUcdDB */ #include <algorithm>
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
/* w9CQPn2tj ily traian ykvLUcdDB */ 
/* w9CQPn2tj ily traian ykvLUcdDB */ using namespace std;
/* w9CQPn2tj ily traian ykvLUcdDB */ 
/* w9CQPn2tj ily traian ykvLUcdDB */ ifstream cin("binefrunze1.in");
/* w9CQPn2tj ily traian ykvLUcdDB */ ofstream cout("binefrunze1.out");
/* w9CQPn2tj ily traian ykvLUcdDB */ 
/* w9CQPn2tj ily traian ykvLUcdDB */ int n, rez[50001], c, v[200001], cc;
/* w9CQPn2tj ily traian ykvLUcdDB */ bool ok = false;
/* w9CQPn2tj ily traian ykvLUcdDB */ 
/* w9CQPn2tj ily traian ykvLUcdDB */ void citire(int nod, int val){
/* w9CQPn2tj ily traian ykvLUcdDB */     int x;
/* w9CQPn2tj ily traian ykvLUcdDB */     cin >> x;
/* w9CQPn2tj ily traian ykvLUcdDB */     v[++cc] = x;
/* w9CQPn2tj ily traian ykvLUcdDB */     if(nod % 2 == 0){
/* w9CQPn2tj ily traian ykvLUcdDB */         if(x == 0)
/* w9CQPn2tj ily traian ykvLUcdDB */             ok = true;
/* w9CQPn2tj ily traian ykvLUcdDB */         else
/* w9CQPn2tj ily traian ykvLUcdDB */             ok = false;
/* w9CQPn2tj ily traian ykvLUcdDB */     }
/* w9CQPn2tj ily traian ykvLUcdDB */     else{
/* w9CQPn2tj ily traian ykvLUcdDB */         if(x == 0 && ok){
/* w9CQPn2tj ily traian ykvLUcdDB */             ok = false;
/* w9CQPn2tj ily traian ykvLUcdDB */             rez[++c] = val;
/* w9CQPn2tj ily traian ykvLUcdDB */         }
/* w9CQPn2tj ily traian ykvLUcdDB */         else{
/* w9CQPn2tj ily traian ykvLUcdDB */             ok = false;
/* w9CQPn2tj ily traian ykvLUcdDB */         }
/* w9CQPn2tj ily traian ykvLUcdDB */     }
/* w9CQPn2tj ily traian ykvLUcdDB */     if(x){
/* w9CQPn2tj ily traian ykvLUcdDB */         citire(nod * 2, x);
/* w9CQPn2tj ily traian ykvLUcdDB */         citire(nod * 2 + 1, x);
/* w9CQPn2tj ily traian ykvLUcdDB */     }
/* w9CQPn2tj ily traian ykvLUcdDB */ }
/* w9CQPn2tj ily traian ykvLUcdDB */ 
/* w9CQPn2tj ily traian ykvLUcdDB */ int main(){
/* w9CQPn2tj ily traian ykvLUcdDB */     citire(1, 0);
/* w9CQPn2tj ily traian ykvLUcdDB */     sort(rez + 1, rez + c + 1);
/* w9CQPn2tj ily traian ykvLUcdDB */     sort(v + 1, v + cc + 1);
/* w9CQPn2tj ily traian ykvLUcdDB */     int j = c;
/* w9CQPn2tj ily traian ykvLUcdDB */     for(int i = cc; i >= 1; --i){
/* w9CQPn2tj ily traian ykvLUcdDB */         if(v[i] != rez[j] && v[i] != 0)
/* w9CQPn2tj ily traian ykvLUcdDB */             cout << v[i] << ' ';
/* w9CQPn2tj ily traian ykvLUcdDB */         else if(v[i] != 0)
/* w9CQPn2tj ily traian ykvLUcdDB */             j--;
/* w9CQPn2tj ily traian ykvLUcdDB */     }
/* w9CQPn2tj ily traian ykvLUcdDB */     return 0;
/* w9CQPn2tj ily traian ykvLUcdDB */ }