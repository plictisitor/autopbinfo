/* 4UOPFrZXy ily traian e1oNpWySr */ #include <algorithm>
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
/* 4UOPFrZXy ily traian e1oNpWySr */ using namespace std;
/* 4UOPFrZXy ily traian e1oNpWySr */ 
/* 4UOPFrZXy ily traian e1oNpWySr */ ifstream cin("plusminus.in");
/* 4UOPFrZXy ily traian e1oNpWySr */ ofstream cout("plusminus.out");
/* 4UOPFrZXy ily traian e1oNpWySr */ 
/* 4UOPFrZXy ily traian e1oNpWySr */ int n , x[25] , ok;
/* 4UOPFrZXy ily traian e1oNpWySr */ 
/* 4UOPFrZXy ily traian e1oNpWySr */ void afisare()
/* 4UOPFrZXy ily traian e1oNpWySr */ {
/* 4UOPFrZXy ily traian e1oNpWySr */     for(int i = 1 ; i <= n ; i++)
/* 4UOPFrZXy ily traian e1oNpWySr */         if(x[i] == -1) cout << "- ";
/* 4UOPFrZXy ily traian e1oNpWySr */         else cout << "+ ";
/* 4UOPFrZXy ily traian e1oNpWySr */     cout << '\n';
/* 4UOPFrZXy ily traian e1oNpWySr */     ok++;
/* 4UOPFrZXy ily traian e1oNpWySr */ }
/* 4UOPFrZXy ily traian e1oNpWySr */ 
/* 4UOPFrZXy ily traian e1oNpWySr */ void back(int k , int sp)
/* 4UOPFrZXy ily traian e1oNpWySr */ {
/* 4UOPFrZXy ily traian e1oNpWySr */     for(int i = -1; i <= 1; i += 2)
/* 4UOPFrZXy ily traian e1oNpWySr */     {
/* 4UOPFrZXy ily traian e1oNpWySr */         x[k] = i;
/* 4UOPFrZXy ily traian e1oNpWySr */         sp = sp + i * k * k;
/* 4UOPFrZXy ily traian e1oNpWySr */         if(k == n)
/* 4UOPFrZXy ily traian e1oNpWySr */         {
/* 4UOPFrZXy ily traian e1oNpWySr */             if(sp == n) afisare();
/* 4UOPFrZXy ily traian e1oNpWySr */         }
/* 4UOPFrZXy ily traian e1oNpWySr */         else back(k + 1 , sp);
/* 4UOPFrZXy ily traian e1oNpWySr */         sp = sp - i * k * k;
/* 4UOPFrZXy ily traian e1oNpWySr */     }
/* 4UOPFrZXy ily traian e1oNpWySr */ }
/* 4UOPFrZXy ily traian e1oNpWySr */ 
/* 4UOPFrZXy ily traian e1oNpWySr */ int main()
/* 4UOPFrZXy ily traian e1oNpWySr */ {
/* 4UOPFrZXy ily traian e1oNpWySr */     cin >> n;
/* 4UOPFrZXy ily traian e1oNpWySr */     back(1 , 0);
/* 4UOPFrZXy ily traian e1oNpWySr */     if(!ok) cout << "IMPOSIBIL";
/* 4UOPFrZXy ily traian e1oNpWySr */ }