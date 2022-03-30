/* 657bQ69RP ily traian uy2vTGfSV */ #include <algorithm>
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
/* 657bQ69RP ily traian uy2vTGfSV */ using namespace std;
/* 657bQ69RP ily traian uy2vTGfSV */ int n , k , x , nr;
/* 657bQ69RP ily traian uy2vTGfSV */ int main()
/* 657bQ69RP ily traian uy2vTGfSV */ {
/* 657bQ69RP ily traian uy2vTGfSV */     cin >> n >> k;
/* 657bQ69RP ily traian uy2vTGfSV */     for(int i = 1 ; i <= n ; i++)
/* 657bQ69RP ily traian uy2vTGfSV */     {
/* 657bQ69RP ily traian uy2vTGfSV */         cin >> x;
/* 657bQ69RP ily traian uy2vTGfSV */         int c = 1;
/* 657bQ69RP ily traian uy2vTGfSV */         while(x != 0)
/* 657bQ69RP ily traian uy2vTGfSV */         {
/* 657bQ69RP ily traian uy2vTGfSV */             if(x % k > 1)
/* 657bQ69RP ily traian uy2vTGfSV */             {
/* 657bQ69RP ily traian uy2vTGfSV */                 c = 0;
/* 657bQ69RP ily traian uy2vTGfSV */                 break;
/* 657bQ69RP ily traian uy2vTGfSV */             }
/* 657bQ69RP ily traian uy2vTGfSV */             x /= k;
/* 657bQ69RP ily traian uy2vTGfSV */         }
/* 657bQ69RP ily traian uy2vTGfSV */         if(c) nr++;
/* 657bQ69RP ily traian uy2vTGfSV */     }
/* 657bQ69RP ily traian uy2vTGfSV */     cout << nr;
/* 657bQ69RP ily traian uy2vTGfSV */     return 0;
/* 657bQ69RP ily traian uy2vTGfSV */ 
/* 657bQ69RP ily traian uy2vTGfSV */ }