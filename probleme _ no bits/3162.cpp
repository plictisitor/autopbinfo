/* 7twIUnubb ily traian DhmD2UEUW */ #include <algorithm>
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
/* 7twIUnubb ily traian DhmD2UEUW */ 
/* 7twIUnubb ily traian DhmD2UEUW */ using namespace std;
/* 7twIUnubb ily traian DhmD2UEUW */ 
/* 7twIUnubb ily traian DhmD2UEUW */ int n , m , x[30] , p[30] , cnt , a[30] , c1 , c0;
/* 7twIUnubb ily traian DhmD2UEUW */ 
/* 7twIUnubb ily traian DhmD2UEUW */ int afisare()
/* 7twIUnubb ily traian DhmD2UEUW */ {
/* 7twIUnubb ily traian DhmD2UEUW */     for(int i = 1 ; i <= cnt ; i++)
/* 7twIUnubb ily traian DhmD2UEUW */         cout << x[i];
/* 7twIUnubb ily traian DhmD2UEUW */     cout << '\n';
/* 7twIUnubb ily traian DhmD2UEUW */ }
/* 7twIUnubb ily traian DhmD2UEUW */ 
/* 7twIUnubb ily traian DhmD2UEUW */ int valid(int k)
/* 7twIUnubb ily traian DhmD2UEUW */ {
/* 7twIUnubb ily traian DhmD2UEUW */     int c00 = 0 , c11 = 0;
/* 7twIUnubb ily traian DhmD2UEUW */     for(int i = 1 ; i <= k ; i++)
/* 7twIUnubb ily traian DhmD2UEUW */         if(x[i] == 0) c00++;
/* 7twIUnubb ily traian DhmD2UEUW */         else c11++;
/* 7twIUnubb ily traian DhmD2UEUW */     if(c00 <= c0 && c11 <= c1) return 1;
/* 7twIUnubb ily traian DhmD2UEUW */     else return 0;
/* 7twIUnubb ily traian DhmD2UEUW */ }
/* 7twIUnubb ily traian DhmD2UEUW */ 
/* 7twIUnubb ily traian DhmD2UEUW */ void back(int k)
/* 7twIUnubb ily traian DhmD2UEUW */ {
/* 7twIUnubb ily traian DhmD2UEUW */     for(int i = 0 ; i <= 1 ; i++)
/* 7twIUnubb ily traian DhmD2UEUW */     {
/* 7twIUnubb ily traian DhmD2UEUW */         x[k] = i;
/* 7twIUnubb ily traian DhmD2UEUW */         if(valid(k))
/* 7twIUnubb ily traian DhmD2UEUW */         {
/* 7twIUnubb ily traian DhmD2UEUW */             if(k == cnt) afisare();
/* 7twIUnubb ily traian DhmD2UEUW */             else back(k + 1);
/* 7twIUnubb ily traian DhmD2UEUW */         }
/* 7twIUnubb ily traian DhmD2UEUW */     }
/* 7twIUnubb ily traian DhmD2UEUW */ }
/* 7twIUnubb ily traian DhmD2UEUW */ 
/* 7twIUnubb ily traian DhmD2UEUW */ int main()
/* 7twIUnubb ily traian DhmD2UEUW */ {
/* 7twIUnubb ily traian DhmD2UEUW */     cin >> n;
/* 7twIUnubb ily traian DhmD2UEUW */     while(n != 0)
/* 7twIUnubb ily traian DhmD2UEUW */     {
/* 7twIUnubb ily traian DhmD2UEUW */         a[++cnt] = n % 2;
/* 7twIUnubb ily traian DhmD2UEUW */         n /= 2;
/* 7twIUnubb ily traian DhmD2UEUW */     }
/* 7twIUnubb ily traian DhmD2UEUW */     for(int i = 1 ; i <= cnt ; i++)
/* 7twIUnubb ily traian DhmD2UEUW */     {
/* 7twIUnubb ily traian DhmD2UEUW */         if(a[i] == 0) c0++;
/* 7twIUnubb ily traian DhmD2UEUW */         else c1++;
/* 7twIUnubb ily traian DhmD2UEUW */     }
/* 7twIUnubb ily traian DhmD2UEUW */     back(1);
/* 7twIUnubb ily traian DhmD2UEUW */ }