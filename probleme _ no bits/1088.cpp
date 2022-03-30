/* 2NDRiWOGX ily traian TDpSg1g8G */ #include <algorithm>
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
/* 2NDRiWOGX ily traian TDpSg1g8G */ using namespace std;
/* 2NDRiWOGX ily traian TDpSg1g8G */ ifstream cin ("zar.in");
/* 2NDRiWOGX ily traian TDpSg1g8G */ ofstream cout ("zar.out");
/* 2NDRiWOGX ily traian TDpSg1g8G */ 
/* 2NDRiWOGX ily traian TDpSg1g8G */ int f1, f2, f3, n, k, dir=1, ind, aux;
/* 2NDRiWOGX ily traian TDpSg1g8G */ int main()
/* 2NDRiWOGX ily traian TDpSg1g8G */ {
/* 2NDRiWOGX ily traian TDpSg1g8G */     cin >> n >> k >> f1 >> f2 >> f3;
/* 2NDRiWOGX ily traian TDpSg1g8G */     ind = 1;
/* 2NDRiWOGX ily traian TDpSg1g8G */     for(int i = 1 ; i <= k; i++)
/* 2NDRiWOGX ily traian TDpSg1g8G */     {
/* 2NDRiWOGX ily traian TDpSg1g8G */         if(ind >= n) ind = 1 , dir++;
/* 2NDRiWOGX ily traian TDpSg1g8G */         if(dir > 4) dir = 1;
/* 2NDRiWOGX ily traian TDpSg1g8G */         if(dir == 1) aux = f3 , f3 = f2 , f2 = 7 - aux;
/* 2NDRiWOGX ily traian TDpSg1g8G */         else if (dir == 2) aux = f1 , f1 = f2 , f2 = 7 -aux;
/* 2NDRiWOGX ily traian TDpSg1g8G */         else if (dir == 3) aux = f2 , f2 = f3 , f3 = 7 - aux;
/* 2NDRiWOGX ily traian TDpSg1g8G */         else if (dir == 4) aux = f2 , f2 = f1 , f1 = 7 -aux;
/* 2NDRiWOGX ily traian TDpSg1g8G */         ind++;
/* 2NDRiWOGX ily traian TDpSg1g8G */     }
/* 2NDRiWOGX ily traian TDpSg1g8G */     cout << f1 << ' ' << f2 << ' ' << f3;
/* 2NDRiWOGX ily traian TDpSg1g8G */     return 0;
/* 2NDRiWOGX ily traian TDpSg1g8G */ }