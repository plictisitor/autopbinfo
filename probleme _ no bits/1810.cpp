/* 1Az7CpFVb ily traian yZTomgs2i */ #include <algorithm>
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
/* 1Az7CpFVb ily traian yZTomgs2i */ using namespace std;
/* 1Az7CpFVb ily traian yZTomgs2i */ 
/* 1Az7CpFVb ily traian yZTomgs2i */ int n , x[25];
/* 1Az7CpFVb ily traian yZTomgs2i */ 
/* 1Az7CpFVb ily traian yZTomgs2i */ void afisare()
/* 1Az7CpFVb ily traian yZTomgs2i */ {
/* 1Az7CpFVb ily traian yZTomgs2i */     for(int i = 1 ; i <= n ; i++)
/* 1Az7CpFVb ily traian yZTomgs2i */         cout << x[i];
/* 1Az7CpFVb ily traian yZTomgs2i */     cout << '\n';
/* 1Az7CpFVb ily traian yZTomgs2i */ }
/* 1Az7CpFVb ily traian yZTomgs2i */ 
/* 1Az7CpFVb ily traian yZTomgs2i */ void back(int k)
/* 1Az7CpFVb ily traian yZTomgs2i */ {
/* 1Az7CpFVb ily traian yZTomgs2i */     for(int i = x[k - 1] - 1; i <= x[k - 1] + 1; i += 2)
/* 1Az7CpFVb ily traian yZTomgs2i */         if(i >= 0 && i <= n / 2)
/* 1Az7CpFVb ily traian yZTomgs2i */         {
/* 1Az7CpFVb ily traian yZTomgs2i */             x[k] = i;
/* 1Az7CpFVb ily traian yZTomgs2i */             if(k == n)
/* 1Az7CpFVb ily traian yZTomgs2i */             {
/* 1Az7CpFVb ily traian yZTomgs2i */                 if(x[k] == 0) afisare();
/* 1Az7CpFVb ily traian yZTomgs2i */             }
/* 1Az7CpFVb ily traian yZTomgs2i */             else back(k + 1);
/* 1Az7CpFVb ily traian yZTomgs2i */         }
/* 1Az7CpFVb ily traian yZTomgs2i */ }
/* 1Az7CpFVb ily traian yZTomgs2i */ 
/* 1Az7CpFVb ily traian yZTomgs2i */ int main()
/* 1Az7CpFVb ily traian yZTomgs2i */ {
/* 1Az7CpFVb ily traian yZTomgs2i */     cin >> n;
/* 1Az7CpFVb ily traian yZTomgs2i */     x[1] = 0;
/* 1Az7CpFVb ily traian yZTomgs2i */     back(2);
/* 1Az7CpFVb ily traian yZTomgs2i */ }