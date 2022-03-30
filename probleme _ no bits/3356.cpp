/* 28GfuUJwF ily traian 2YnevciIZ */ #include <algorithm>
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
/* 28GfuUJwF ily traian 2YnevciIZ */ 
/* 28GfuUJwF ily traian 2YnevciIZ */ using namespace std;
/* 28GfuUJwF ily traian 2YnevciIZ */ 
/* 28GfuUJwF ily traian 2YnevciIZ */ ifstream cin("alfa.in");
/* 28GfuUJwF ily traian 2YnevciIZ */ ofstream cout("alfa.out");
/* 28GfuUJwF ily traian 2YnevciIZ */ 
/* 28GfuUJwF ily traian 2YnevciIZ */ int a[1001];
/* 28GfuUJwF ily traian 2YnevciIZ */ 
/* 28GfuUJwF ily traian 2YnevciIZ */ int main(){
/* 28GfuUJwF ily traian 2YnevciIZ */     int n, x;
/* 28GfuUJwF ily traian 2YnevciIZ */     cin >> n >> x;
/* 28GfuUJwF ily traian 2YnevciIZ */     for(int i = 1; i <= n; ++i)
/* 28GfuUJwF ily traian 2YnevciIZ */         cin >> a[i];
/* 28GfuUJwF ily traian 2YnevciIZ */     int st = 1, dr = 1;
/* 28GfuUJwF ily traian 2YnevciIZ */     for(int i = 1; i <= n; ++i){
/* 28GfuUJwF ily traian 2YnevciIZ */         if(a[i] == x){
/* 28GfuUJwF ily traian 2YnevciIZ */             sort(a + st, a + dr);
/* 28GfuUJwF ily traian 2YnevciIZ */             st = dr + 1;
/* 28GfuUJwF ily traian 2YnevciIZ */         }
/* 28GfuUJwF ily traian 2YnevciIZ */         dr++;
/* 28GfuUJwF ily traian 2YnevciIZ */     }
/* 28GfuUJwF ily traian 2YnevciIZ */     for(int i = 1; i <= n; ++i)
/* 28GfuUJwF ily traian 2YnevciIZ */         cout << a[i] << ' ';
/* 28GfuUJwF ily traian 2YnevciIZ */ }