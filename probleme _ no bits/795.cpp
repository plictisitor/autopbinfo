/* 2B0kxnKcw ily traian O4fCi22FF */ #include <algorithm>
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
/* 2B0kxnKcw ily traian O4fCi22FF */ using namespace std;
/* 2B0kxnKcw ily traian O4fCi22FF */ int main()
/* 2B0kxnKcw ily traian O4fCi22FF */ {
/* 2B0kxnKcw ily traian O4fCi22FF */     char c;
/* 2B0kxnKcw ily traian O4fCi22FF */     int n , a[1001] , b[1001] , f[1001] , b1 = 0, f1 = 0 , min = 1000 , max = 0 , cf = 0 , cb = 0;
/* 2B0kxnKcw ily traian O4fCi22FF */     cin >> n;
/* 2B0kxnKcw ily traian O4fCi22FF */     for(int i = 1; i <= n; i++)
/* 2B0kxnKcw ily traian O4fCi22FF */     {
/* 2B0kxnKcw ily traian O4fCi22FF */       cin >> c >> a[i];
/* 2B0kxnKcw ily traian O4fCi22FF */       if(c=='F')
/* 2B0kxnKcw ily traian O4fCi22FF */         f[++f1] = a[i];
/* 2B0kxnKcw ily traian O4fCi22FF */       else
/* 2B0kxnKcw ily traian O4fCi22FF */         b[++b1] = a[i];
/* 2B0kxnKcw ily traian O4fCi22FF */     }
/* 2B0kxnKcw ily traian O4fCi22FF */     for(int i = 1; i <= f1 ; i++)
/* 2B0kxnKcw ily traian O4fCi22FF */         if(f[i] > max)
/* 2B0kxnKcw ily traian O4fCi22FF */            max = f[i];
/* 2B0kxnKcw ily traian O4fCi22FF */     for(int i = 1; i < b1 ; i++)
/* 2B0kxnKcw ily traian O4fCi22FF */         if(b[i] < min)
/* 2B0kxnKcw ily traian O4fCi22FF */            min = b[i];
/* 2B0kxnKcw ily traian O4fCi22FF */     for(int i = 1; i <= f1; i++)
/* 2B0kxnKcw ily traian O4fCi22FF */         if(f[i] < min) cf++;
/* 2B0kxnKcw ily traian O4fCi22FF */     for(int i = 1; i <= b1; i++)
/* 2B0kxnKcw ily traian O4fCi22FF */         if(b[i] > max) cb++;
/* 2B0kxnKcw ily traian O4fCi22FF */     cout<<cf<<" "<<cb;
/* 2B0kxnKcw ily traian O4fCi22FF */ 
/* 2B0kxnKcw ily traian O4fCi22FF */     return 0;
/* 2B0kxnKcw ily traian O4fCi22FF */ }