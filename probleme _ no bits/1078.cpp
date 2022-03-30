/* 2VtHHwJ8q ily traian OtjWNIAOu */ #include <algorithm>
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
/* 2VtHHwJ8q ily traian OtjWNIAOu */ using namespace std;
/* 2VtHHwJ8q ily traian OtjWNIAOu */ 
/* 2VtHHwJ8q ily traian OtjWNIAOu */ ifstream cin("adunscad.in");
/* 2VtHHwJ8q ily traian OtjWNIAOu */ ofstream cout("adunscad.out");
/* 2VtHHwJ8q ily traian OtjWNIAOu */ 
/* 2VtHHwJ8q ily traian OtjWNIAOu */ int n , x[25] , a[20] , nr , ok;
/* 2VtHHwJ8q ily traian OtjWNIAOu */ 
/* 2VtHHwJ8q ily traian OtjWNIAOu */ void afisare()
/* 2VtHHwJ8q ily traian OtjWNIAOu */ {
/* 2VtHHwJ8q ily traian OtjWNIAOu */     if(ok == 0)
/* 2VtHHwJ8q ily traian OtjWNIAOu */     {
/* 2VtHHwJ8q ily traian OtjWNIAOu */         for(int i = 1 ; i <= n ; i++)
/* 2VtHHwJ8q ily traian OtjWNIAOu */         {
/* 2VtHHwJ8q ily traian OtjWNIAOu */             if(i == 1 && x[i] == 1) cout << a[i];
/* 2VtHHwJ8q ily traian OtjWNIAOu */             else if(x[i] == -1) cout << "-" << a[i];
/* 2VtHHwJ8q ily traian OtjWNIAOu */             else cout << "+" << a[i];
/* 2VtHHwJ8q ily traian OtjWNIAOu */         }
/* 2VtHHwJ8q ily traian OtjWNIAOu */         cout << '\n';
/* 2VtHHwJ8q ily traian OtjWNIAOu */         ok++;
/* 2VtHHwJ8q ily traian OtjWNIAOu */     }
/* 2VtHHwJ8q ily traian OtjWNIAOu */ }
/* 2VtHHwJ8q ily traian OtjWNIAOu */ 
/* 2VtHHwJ8q ily traian OtjWNIAOu */ void back(int k , int sp)
/* 2VtHHwJ8q ily traian OtjWNIAOu */ {
/* 2VtHHwJ8q ily traian OtjWNIAOu */     for(int i = -1; i <= 1; i += 2)
/* 2VtHHwJ8q ily traian OtjWNIAOu */     {
/* 2VtHHwJ8q ily traian OtjWNIAOu */         x[k] = i;
/* 2VtHHwJ8q ily traian OtjWNIAOu */         sp = sp + i * a[k];
/* 2VtHHwJ8q ily traian OtjWNIAOu */         if(k == n)
/* 2VtHHwJ8q ily traian OtjWNIAOu */         {
/* 2VtHHwJ8q ily traian OtjWNIAOu */             if(sp == nr) afisare();
/* 2VtHHwJ8q ily traian OtjWNIAOu */         }
/* 2VtHHwJ8q ily traian OtjWNIAOu */         else back(k + 1 , sp);
/* 2VtHHwJ8q ily traian OtjWNIAOu */         sp = sp - i * a[k];
/* 2VtHHwJ8q ily traian OtjWNIAOu */     }
/* 2VtHHwJ8q ily traian OtjWNIAOu */ }
/* 2VtHHwJ8q ily traian OtjWNIAOu */ 
/* 2VtHHwJ8q ily traian OtjWNIAOu */ int main()
/* 2VtHHwJ8q ily traian OtjWNIAOu */ {
/* 2VtHHwJ8q ily traian OtjWNIAOu */     cin >> nr >> n;
/* 2VtHHwJ8q ily traian OtjWNIAOu */     for(int i = 1 ; i <= n ; i++)
/* 2VtHHwJ8q ily traian OtjWNIAOu */         cin >> a[i];
/* 2VtHHwJ8q ily traian OtjWNIAOu */     back(1 , 0);
/* 2VtHHwJ8q ily traian OtjWNIAOu */     if(ok == 0) cout << 0;
/* 2VtHHwJ8q ily traian OtjWNIAOu */ }