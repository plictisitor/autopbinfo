/* 4crVMHjOK ily traian t0hp6fE1z */ #include <algorithm>
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
/* 4crVMHjOK ily traian t0hp6fE1z */ 
/* 4crVMHjOK ily traian t0hp6fE1z */ using namespace std;
/* 4crVMHjOK ily traian t0hp6fE1z */ 
/* 4crVMHjOK ily traian t0hp6fE1z */ int x[30] , s , n , p[30];
/* 4crVMHjOK ily traian t0hp6fE1z */ char cuv[30];
/* 4crVMHjOK ily traian t0hp6fE1z */ 
/* 4crVMHjOK ily traian t0hp6fE1z */ int afisare()
/* 4crVMHjOK ily traian t0hp6fE1z */ {
/* 4crVMHjOK ily traian t0hp6fE1z */     for(int i = 1 ; i <= n - s ; i++)
/* 4crVMHjOK ily traian t0hp6fE1z */         cout << cuv[x[i]-1];
/* 4crVMHjOK ily traian t0hp6fE1z */     cout << '\n';
/* 4crVMHjOK ily traian t0hp6fE1z */ }
/* 4crVMHjOK ily traian t0hp6fE1z */ 
/* 4crVMHjOK ily traian t0hp6fE1z */ 
/* 4crVMHjOK ily traian t0hp6fE1z */ void back(int k)
/* 4crVMHjOK ily traian t0hp6fE1z */ {
/* 4crVMHjOK ily traian t0hp6fE1z */     for(int i = x[k - 1] + 1 ; i <= n ; i++)
/* 4crVMHjOK ily traian t0hp6fE1z */         {
/* 4crVMHjOK ily traian t0hp6fE1z */             x[k] = i;
/* 4crVMHjOK ily traian t0hp6fE1z */             if(k == n - s) afisare();
/* 4crVMHjOK ily traian t0hp6fE1z */             else back(k + 1);
/* 4crVMHjOK ily traian t0hp6fE1z */         }
/* 4crVMHjOK ily traian t0hp6fE1z */ }
/* 4crVMHjOK ily traian t0hp6fE1z */ 
/* 4crVMHjOK ily traian t0hp6fE1z */ int main()
/* 4crVMHjOK ily traian t0hp6fE1z */ {
/* 4crVMHjOK ily traian t0hp6fE1z */     cin >> cuv >> s;
/* 4crVMHjOK ily traian t0hp6fE1z */     n = strlen(cuv);
/* 4crVMHjOK ily traian t0hp6fE1z */ 
/* 4crVMHjOK ily traian t0hp6fE1z */     back(1);
/* 4crVMHjOK ily traian t0hp6fE1z */ }