/* mwdY1ib3o ily traian eyILmXB9b */ #include <algorithm>
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
/* mwdY1ib3o ily traian eyILmXB9b */ using namespace std;
/* mwdY1ib3o ily traian eyILmXB9b */ 
/* mwdY1ib3o ily traian eyILmXB9b */ ifstream cin("plopi1.in");
/* mwdY1ib3o ily traian eyILmXB9b */ ofstream cout("plopi1.out");
/* mwdY1ib3o ily traian eyILmXB9b */ 
/* mwdY1ib3o ily traian eyILmXB9b */ int n , a[1002] , L[1002] , P[1002] , l , lmax;
/* mwdY1ib3o ily traian eyILmXB9b */ 
/* mwdY1ib3o ily traian eyILmXB9b */ int main()
/* mwdY1ib3o ily traian eyILmXB9b */ {
/* mwdY1ib3o ily traian eyILmXB9b */     cin >> n;
/* mwdY1ib3o ily traian eyILmXB9b */     for(int i = 1 ; i <= n ; i++)
/* mwdY1ib3o ily traian eyILmXB9b */         cin >> a[i];
/* mwdY1ib3o ily traian eyILmXB9b */ 
/* mwdY1ib3o ily traian eyILmXB9b */     for(int i = n ; i >= 1 ; i--)
/* mwdY1ib3o ily traian eyILmXB9b */     {
/* mwdY1ib3o ily traian eyILmXB9b */         l = 0;
/* mwdY1ib3o ily traian eyILmXB9b */         for(int j = i + 1 ; j <= n ; j++)
/* mwdY1ib3o ily traian eyILmXB9b */             if(a[i] > a[j] && L[j] > l) l = L[j];
/* mwdY1ib3o ily traian eyILmXB9b */         L[i] = l + 1;
/* mwdY1ib3o ily traian eyILmXB9b */         if(L[i] > lmax) lmax = L[i];
/* mwdY1ib3o ily traian eyILmXB9b */     }
/* mwdY1ib3o ily traian eyILmXB9b */     cout << n - lmax;
/* mwdY1ib3o ily traian eyILmXB9b */     return 0;
/* mwdY1ib3o ily traian eyILmXB9b */ }