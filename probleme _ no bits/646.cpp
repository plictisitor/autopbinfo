/* QqN848Sj3 ily traian qNRSLmpnt */ #include <algorithm>
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
/* QqN848Sj3 ily traian qNRSLmpnt */ using namespace std;
/* QqN848Sj3 ily traian qNRSLmpnt */ 
/* QqN848Sj3 ily traian qNRSLmpnt */ ifstream cin("subarbore1.in");
/* QqN848Sj3 ily traian qNRSLmpnt */ ofstream cout("subarbore1.out");
/* QqN848Sj3 ily traian qNRSLmpnt */ 
/* QqN848Sj3 ily traian qNRSLmpnt */ int n , k , t[101];
/* QqN848Sj3 ily traian qNRSLmpnt */ 
/* QqN848Sj3 ily traian qNRSLmpnt */ int main()
/* QqN848Sj3 ily traian qNRSLmpnt */ {
/* QqN848Sj3 ily traian qNRSLmpnt */     cin >> n >> k;
/* QqN848Sj3 ily traian qNRSLmpnt */     for(int i = 1 ; i <= n ; i++)
/* QqN848Sj3 ily traian qNRSLmpnt */         cin >> t[i];
/* QqN848Sj3 ily traian qNRSLmpnt */ 
/* QqN848Sj3 ily traian qNRSLmpnt */     for(int i = 1 ; i <= n ; i++)
/* QqN848Sj3 ily traian qNRSLmpnt */     {
/* QqN848Sj3 ily traian qNRSLmpnt */         int ok = 0;
/* QqN848Sj3 ily traian qNRSLmpnt */         for(int j = 1 ; j <= n ; j++)
/* QqN848Sj3 ily traian qNRSLmpnt */             if(t[j] == i) ok++;
/* QqN848Sj3 ily traian qNRSLmpnt */         if(ok == 0)
/* QqN848Sj3 ily traian qNRSLmpnt */         {
/* QqN848Sj3 ily traian qNRSLmpnt */             int p = t[i];
/* QqN848Sj3 ily traian qNRSLmpnt */             while(p)
/* QqN848Sj3 ily traian qNRSLmpnt */             {
/* QqN848Sj3 ily traian qNRSLmpnt */                 if(p == k)ok = 1;
/* QqN848Sj3 ily traian qNRSLmpnt */                 p = t[p];
/* QqN848Sj3 ily traian qNRSLmpnt */             }
/* QqN848Sj3 ily traian qNRSLmpnt */             if(ok) cout << i << " ";
/* QqN848Sj3 ily traian qNRSLmpnt */         }
/* QqN848Sj3 ily traian qNRSLmpnt */     }
/* QqN848Sj3 ily traian qNRSLmpnt */     return 0;
/* QqN848Sj3 ily traian qNRSLmpnt */ 
/* QqN848Sj3 ily traian qNRSLmpnt */ }