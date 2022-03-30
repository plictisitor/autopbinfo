/* 2bXuBOSwt ily traian DvlKFG5JA */ #include <algorithm>
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
/* 2bXuBOSwt ily traian DvlKFG5JA */ #define Inf 0x3f3f3f3f
/* 2bXuBOSwt ily traian DvlKFG5JA */ using namespace std;
/* 2bXuBOSwt ily traian DvlKFG5JA */ 
/* 2bXuBOSwt ily traian DvlKFG5JA */ ifstream cin("robot.in");
/* 2bXuBOSwt ily traian DvlKFG5JA */ ofstream cout("robot.out");
/* 2bXuBOSwt ily traian DvlKFG5JA */ 
/* 2bXuBOSwt ily traian DvlKFG5JA */ int cer , n , a[10005] , x , y;
/* 2bXuBOSwt ily traian DvlKFG5JA */ 
/* 2bXuBOSwt ily traian DvlKFG5JA */ int main()
/* 2bXuBOSwt ily traian DvlKFG5JA */ {
/* 2bXuBOSwt ily traian DvlKFG5JA */     cin >> cer >> n;
/* 2bXuBOSwt ily traian DvlKFG5JA */     for(int i = 1 ; i <= n ; i++)
/* 2bXuBOSwt ily traian DvlKFG5JA */     {
/* 2bXuBOSwt ily traian DvlKFG5JA */         cin >> x >> y;
/* 2bXuBOSwt ily traian DvlKFG5JA */         a[min(x , y) * 100 + max(x , y)]++;
/* 2bXuBOSwt ily traian DvlKFG5JA */     }
/* 2bXuBOSwt ily traian DvlKFG5JA */ 
/* 2bXuBOSwt ily traian DvlKFG5JA */     if(cer == 1)
/* 2bXuBOSwt ily traian DvlKFG5JA */     {
/* 2bXuBOSwt ily traian DvlKFG5JA */         int cnt = 0;
/* 2bXuBOSwt ily traian DvlKFG5JA */         for(int i = 100 ; i <= 10001 ; i++)
/* 2bXuBOSwt ily traian DvlKFG5JA */             if(a[i] != 0) cnt++;
/* 2bXuBOSwt ily traian DvlKFG5JA */         cout << cnt;
/* 2bXuBOSwt ily traian DvlKFG5JA */     }
/* 2bXuBOSwt ily traian DvlKFG5JA */     else
/* 2bXuBOSwt ily traian DvlKFG5JA */     {
/* 2bXuBOSwt ily traian DvlKFG5JA */         int mini = Inf;
/* 2bXuBOSwt ily traian DvlKFG5JA */         for(int i = 1 ; i <= 10001 ; i++)
/* 2bXuBOSwt ily traian DvlKFG5JA */             if(a[i] != 0 && a[i] < mini) mini = a[i];
/* 2bXuBOSwt ily traian DvlKFG5JA */         cout << mini;
/* 2bXuBOSwt ily traian DvlKFG5JA */     }
/* 2bXuBOSwt ily traian DvlKFG5JA */ }