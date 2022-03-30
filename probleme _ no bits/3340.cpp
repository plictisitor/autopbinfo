/* 9oiL2pKT2 ily traian MUl4MUvCe */ #include <algorithm>
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
/* 9oiL2pKT2 ily traian MUl4MUvCe */ 
/* 9oiL2pKT2 ily traian MUl4MUvCe */ using namespace std;
/* 9oiL2pKT2 ily traian MUl4MUvCe */ 
/* 9oiL2pKT2 ily traian MUl4MUvCe */ ifstream cin("perfect1.in");
/* 9oiL2pKT2 ily traian MUl4MUvCe */ ofstream cout("perfect1.out");
/* 9oiL2pKT2 ily traian MUl4MUvCe */ 
/* 9oiL2pKT2 ily traian MUl4MUvCe */ int n , A[101] , m , maxi , X[101] , x , ok;
/* 9oiL2pKT2 ily traian MUl4MUvCe */ 
/* 9oiL2pKT2 ily traian MUl4MUvCe */ void back(int k, long long p)
/* 9oiL2pKT2 ily traian MUl4MUvCe */ {
/* 9oiL2pKT2 ily traian MUl4MUvCe */     for(int i = X[k - 1] + 1 ; i <= m ; i++)
/* 9oiL2pKT2 ily traian MUl4MUvCe */     {
/* 9oiL2pKT2 ily traian MUl4MUvCe */         X[k] = i;
/* 9oiL2pKT2 ily traian MUl4MUvCe */         p *= A[X[k]];
/* 9oiL2pKT2 ily traian MUl4MUvCe */         if(p <= 8128)
/* 9oiL2pKT2 ily traian MUl4MUvCe */             if(p == 6 || p == 28 || p == 496 || p == 8128)
/* 9oiL2pKT2 ily traian MUl4MUvCe */             {
/* 9oiL2pKT2 ily traian MUl4MUvCe */                 ok = 1;
/* 9oiL2pKT2 ily traian MUl4MUvCe */                 if(p > maxi) maxi = p;
/* 9oiL2pKT2 ily traian MUl4MUvCe */             }
/* 9oiL2pKT2 ily traian MUl4MUvCe */             else back(k + 1 , p);
/* 9oiL2pKT2 ily traian MUl4MUvCe */         p /= A[X[k]];
/* 9oiL2pKT2 ily traian MUl4MUvCe */     }
/* 9oiL2pKT2 ily traian MUl4MUvCe */ }
/* 9oiL2pKT2 ily traian MUl4MUvCe */ 
/* 9oiL2pKT2 ily traian MUl4MUvCe */ int main()
/* 9oiL2pKT2 ily traian MUl4MUvCe */ {
/* 9oiL2pKT2 ily traian MUl4MUvCe */     cin >> n;
/* 9oiL2pKT2 ily traian MUl4MUvCe */     for(int i = 1 ; i <= n ; i++)
/* 9oiL2pKT2 ily traian MUl4MUvCe */     {
/* 9oiL2pKT2 ily traian MUl4MUvCe */         cin >> x;
/* 9oiL2pKT2 ily traian MUl4MUvCe */         if(8128 % x == 0 || 496 % x == 0 || 28 % x == 0 || 6 % x == 0) A[++m] = x;
/* 9oiL2pKT2 ily traian MUl4MUvCe */     }
/* 9oiL2pKT2 ily traian MUl4MUvCe */     sort(A + 1 , A + m + 1);
/* 9oiL2pKT2 ily traian MUl4MUvCe */     reverse(A + 1 , A + m + 1);
/* 9oiL2pKT2 ily traian MUl4MUvCe */     back(1 , 1);
/* 9oiL2pKT2 ily traian MUl4MUvCe */     if(ok == 0) cout << "NU";
/* 9oiL2pKT2 ily traian MUl4MUvCe */     else  cout << maxi;
/* 9oiL2pKT2 ily traian MUl4MUvCe */     return 0;
/* 9oiL2pKT2 ily traian MUl4MUvCe */ }