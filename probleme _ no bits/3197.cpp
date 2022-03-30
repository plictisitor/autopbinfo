/* 87W3Wxkck ily traian bzLBH8FvY */ #include <algorithm>
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
/* 87W3Wxkck ily traian bzLBH8FvY */ using namespace std;
/* 87W3Wxkck ily traian bzLBH8FvY */ 
/* 87W3Wxkck ily traian bzLBH8FvY */ int n , x[301];
/* 87W3Wxkck ily traian bzLBH8FvY */ 
/* 87W3Wxkck ily traian bzLBH8FvY */ void afisare(int k)
/* 87W3Wxkck ily traian bzLBH8FvY */ {
/* 87W3Wxkck ily traian bzLBH8FvY */     for(int i = 1 ; i <= k ; i++)
/* 87W3Wxkck ily traian bzLBH8FvY */         cout << x[i] << " ";
/* 87W3Wxkck ily traian bzLBH8FvY */     cout << '\n';
/* 87W3Wxkck ily traian bzLBH8FvY */ }
/* 87W3Wxkck ily traian bzLBH8FvY */ 
/* 87W3Wxkck ily traian bzLBH8FvY */ void back(int k , int sp)
/* 87W3Wxkck ily traian bzLBH8FvY */ {
/* 87W3Wxkck ily traian bzLBH8FvY */     for(int i = x[k - 1] + 1 ; i <= n - sp ; i++)
/* 87W3Wxkck ily traian bzLBH8FvY */     {
/* 87W3Wxkck ily traian bzLBH8FvY */         x[k] = i;
/* 87W3Wxkck ily traian bzLBH8FvY */         if(k == 1 || (x[k] - x[k - 1] <= 2 && x[k] > x[k - 1]))
/* 87W3Wxkck ily traian bzLBH8FvY */         {
/* 87W3Wxkck ily traian bzLBH8FvY */             sp += x[k];
/* 87W3Wxkck ily traian bzLBH8FvY */             if(sp <= n)
/* 87W3Wxkck ily traian bzLBH8FvY */                 if(sp == n) afisare(k);
/* 87W3Wxkck ily traian bzLBH8FvY */                 else back(k + 1 , sp);
/* 87W3Wxkck ily traian bzLBH8FvY */             sp -= x[k];
/* 87W3Wxkck ily traian bzLBH8FvY */         }
/* 87W3Wxkck ily traian bzLBH8FvY */     }
/* 87W3Wxkck ily traian bzLBH8FvY */ }
/* 87W3Wxkck ily traian bzLBH8FvY */ 
/* 87W3Wxkck ily traian bzLBH8FvY */ int main()
/* 87W3Wxkck ily traian bzLBH8FvY */ {
/* 87W3Wxkck ily traian bzLBH8FvY */     cin >> n;
/* 87W3Wxkck ily traian bzLBH8FvY */     back(1 , 0);
/* 87W3Wxkck ily traian bzLBH8FvY */ }