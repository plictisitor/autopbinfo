/* ysNORdRbh ily traian JgX3DyMlU */ #include <algorithm>
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
/* ysNORdRbh ily traian JgX3DyMlU */ 
/* ysNORdRbh ily traian JgX3DyMlU */ using namespace std;
/* ysNORdRbh ily traian JgX3DyMlU */ 
/* ysNORdRbh ily traian JgX3DyMlU */ int c[1000];
/* ysNORdRbh ily traian JgX3DyMlU */ 
/* ysNORdRbh ily traian JgX3DyMlU */ int main()
/* ysNORdRbh ily traian JgX3DyMlU */ {
/* ysNORdRbh ily traian JgX3DyMlU */ 
/* ysNORdRbh ily traian JgX3DyMlU */     int n;
/* ysNORdRbh ily traian JgX3DyMlU */     cin >> n;
/* ysNORdRbh ily traian JgX3DyMlU */     int x;
/* ysNORdRbh ily traian JgX3DyMlU */     for(int i = 1; i <= n; ++i){
/* ysNORdRbh ily traian JgX3DyMlU */         cin >> x;
/* ysNORdRbh ily traian JgX3DyMlU */         if(x < 1000)
/* ysNORdRbh ily traian JgX3DyMlU */             c[x] = 1;
/* ysNORdRbh ily traian JgX3DyMlU */     }
/* ysNORdRbh ily traian JgX3DyMlU */ 
/* ysNORdRbh ily traian JgX3DyMlU */     int cnt = 0, a, b;
/* ysNORdRbh ily traian JgX3DyMlU */ 
/* ysNORdRbh ily traian JgX3DyMlU */     for(int i = 999; cnt < 2 && i >= 100; --i)
/* ysNORdRbh ily traian JgX3DyMlU */         if(!c[i]){
/* ysNORdRbh ily traian JgX3DyMlU */             cnt++;
/* ysNORdRbh ily traian JgX3DyMlU */             if(cnt == 1)
/* ysNORdRbh ily traian JgX3DyMlU */                 b = i;
/* ysNORdRbh ily traian JgX3DyMlU */             else
/* ysNORdRbh ily traian JgX3DyMlU */                 a = i;
/* ysNORdRbh ily traian JgX3DyMlU */         }
/* ysNORdRbh ily traian JgX3DyMlU */ 
/* ysNORdRbh ily traian JgX3DyMlU */     if(cnt == 2)
/* ysNORdRbh ily traian JgX3DyMlU */         cout << a << ' ' << b;
/* ysNORdRbh ily traian JgX3DyMlU */     else
/* ysNORdRbh ily traian JgX3DyMlU */         cout << "NU EXISTA";
/* ysNORdRbh ily traian JgX3DyMlU */ }