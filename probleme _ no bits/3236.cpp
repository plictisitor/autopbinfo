/* e0B7tTzGl ily traian tQcOQwvNB */ #include <algorithm>
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
/* e0B7tTzGl ily traian tQcOQwvNB */ using namespace std;
/* e0B7tTzGl ily traian tQcOQwvNB */ 
/* e0B7tTzGl ily traian tQcOQwvNB */ ifstream cin("parimpar2.in");
/* e0B7tTzGl ily traian tQcOQwvNB */ ofstream cout("parimpar2.out");
/* e0B7tTzGl ily traian tQcOQwvNB */ 
/* e0B7tTzGl ily traian tQcOQwvNB */ int a, b;
/* e0B7tTzGl ily traian tQcOQwvNB */ 
/* e0B7tTzGl ily traian tQcOQwvNB */ int main(){
/* e0B7tTzGl ily traian tQcOQwvNB */     cin >> a >> b;
/* e0B7tTzGl ily traian tQcOQwvNB */     int x, rez1 = 0, rez2 = -1;
/* e0B7tTzGl ily traian tQcOQwvNB */     while(cin >> x){
/* e0B7tTzGl ily traian tQcOQwvNB */         if(x % 2 == 1){
/* e0B7tTzGl ily traian tQcOQwvNB */             a--;
/* e0B7tTzGl ily traian tQcOQwvNB */             if(a == 0)
/* e0B7tTzGl ily traian tQcOQwvNB */                 rez1 = x;
/* e0B7tTzGl ily traian tQcOQwvNB */         }
/* e0B7tTzGl ily traian tQcOQwvNB */         else{
/* e0B7tTzGl ily traian tQcOQwvNB */             b--;
/* e0B7tTzGl ily traian tQcOQwvNB */             if(b==0)
/* e0B7tTzGl ily traian tQcOQwvNB */                 rez2 = x;
/* e0B7tTzGl ily traian tQcOQwvNB */         }
/* e0B7tTzGl ily traian tQcOQwvNB */     }
/* e0B7tTzGl ily traian tQcOQwvNB */     if(rez1 == 0 || rez2 == -1)
/* e0B7tTzGl ily traian tQcOQwvNB */         cout << "Nu Exista";
/* e0B7tTzGl ily traian tQcOQwvNB */     else
/* e0B7tTzGl ily traian tQcOQwvNB */         cout << rez2 << ' ' << rez1;
/* e0B7tTzGl ily traian tQcOQwvNB */     return 0;
/* e0B7tTzGl ily traian tQcOQwvNB */ }