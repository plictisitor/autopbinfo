/* 7h6JA2Y0P ily traian N3x7O6FWP */ #include <algorithm>
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
/* 7h6JA2Y0P ily traian N3x7O6FWP */ using namespace std;
/* 7h6JA2Y0P ily traian N3x7O6FWP */ 
/* 7h6JA2Y0P ily traian N3x7O6FWP */ ifstream cin("siruri.in");
/* 7h6JA2Y0P ily traian N3x7O6FWP */ ofstream cout("siruri.out");
/* 7h6JA2Y0P ily traian N3x7O6FWP */ 
/* 7h6JA2Y0P ily traian N3x7O6FWP */ int n , m , x[20];
/* 7h6JA2Y0P ily traian N3x7O6FWP */ 
/* 7h6JA2Y0P ily traian N3x7O6FWP */ void afisare()
/* 7h6JA2Y0P ily traian N3x7O6FWP */ {
/* 7h6JA2Y0P ily traian N3x7O6FWP */     int ok = 0;
/* 7h6JA2Y0P ily traian N3x7O6FWP */     for(int i = 2 ; i <= m ; i++)
/* 7h6JA2Y0P ily traian N3x7O6FWP */         if(x[i] - x[i-1] > 2) ok = 1;
/* 7h6JA2Y0P ily traian N3x7O6FWP */     if(ok == 0)
/* 7h6JA2Y0P ily traian N3x7O6FWP */     {
/* 7h6JA2Y0P ily traian N3x7O6FWP */         for(int i = 1 ; i <= m ; i++)
/* 7h6JA2Y0P ily traian N3x7O6FWP */             cout << x[i] << " ";
/* 7h6JA2Y0P ily traian N3x7O6FWP */         cout << '\n';
/* 7h6JA2Y0P ily traian N3x7O6FWP */     }
/* 7h6JA2Y0P ily traian N3x7O6FWP */ }
/* 7h6JA2Y0P ily traian N3x7O6FWP */ 
/* 7h6JA2Y0P ily traian N3x7O6FWP */ 
/* 7h6JA2Y0P ily traian N3x7O6FWP */ void back(int k)
/* 7h6JA2Y0P ily traian N3x7O6FWP */ {
/* 7h6JA2Y0P ily traian N3x7O6FWP */     for(int i = x[k - 1] + 1 ; i <= n ; i++)
/* 7h6JA2Y0P ily traian N3x7O6FWP */     {
/* 7h6JA2Y0P ily traian N3x7O6FWP */         x[k] = i;
/* 7h6JA2Y0P ily traian N3x7O6FWP */         if(k == m) afisare();
/* 7h6JA2Y0P ily traian N3x7O6FWP */         else back(k + 1);
/* 7h6JA2Y0P ily traian N3x7O6FWP */     }
/* 7h6JA2Y0P ily traian N3x7O6FWP */ }
/* 7h6JA2Y0P ily traian N3x7O6FWP */ 
/* 7h6JA2Y0P ily traian N3x7O6FWP */ int main()
/* 7h6JA2Y0P ily traian N3x7O6FWP */ {
/* 7h6JA2Y0P ily traian N3x7O6FWP */     cin >> n >> m;
/* 7h6JA2Y0P ily traian N3x7O6FWP */     back(1);
/* 7h6JA2Y0P ily traian N3x7O6FWP */     return 0;
/* 7h6JA2Y0P ily traian N3x7O6FWP */ }