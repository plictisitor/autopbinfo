/* luMh5la3g ily traian Q6yPHghbq */ #include <algorithm>
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
/* luMh5la3g ily traian Q6yPHghbq */ 
/* luMh5la3g ily traian Q6yPHghbq */ using namespace std;
/* luMh5la3g ily traian Q6yPHghbq */ 
/* luMh5la3g ily traian Q6yPHghbq */ int main()
/* luMh5la3g ily traian Q6yPHghbq */ {
/* luMh5la3g ily traian Q6yPHghbq */     int n;
/* luMh5la3g ily traian Q6yPHghbq */     cin >> n;
/* luMh5la3g ily traian Q6yPHghbq */     int a[1001], b[1001];
/* luMh5la3g ily traian Q6yPHghbq */     for(int i = 1; i <= n; ++i)
/* luMh5la3g ily traian Q6yPHghbq */         cin >> a[i];
/* luMh5la3g ily traian Q6yPHghbq */     for(int i = 1; i <= n; ++i)
/* luMh5la3g ily traian Q6yPHghbq */         cin >> b[i];
/* luMh5la3g ily traian Q6yPHghbq */ 
/* luMh5la3g ily traian Q6yPHghbq */     bool ok = true;
/* luMh5la3g ily traian Q6yPHghbq */ 
/* luMh5la3g ily traian Q6yPHghbq */     for(int i = 1; i <= n; ++i){
/* luMh5la3g ily traian Q6yPHghbq */         bool gasit = false;
/* luMh5la3g ily traian Q6yPHghbq */         for(int j = 1; j <= n; ++j)
/* luMh5la3g ily traian Q6yPHghbq */             if(a[i] == b[j] && !gasit)
/* luMh5la3g ily traian Q6yPHghbq */                 gasit = true, b[j] = -1;
/* luMh5la3g ily traian Q6yPHghbq */         if(!gasit)
/* luMh5la3g ily traian Q6yPHghbq */             ok = false;
/* luMh5la3g ily traian Q6yPHghbq */     }
/* luMh5la3g ily traian Q6yPHghbq */ 
/* luMh5la3g ily traian Q6yPHghbq */     if(ok)
/* luMh5la3g ily traian Q6yPHghbq */         cout << "DA";
/* luMh5la3g ily traian Q6yPHghbq */     else
/* luMh5la3g ily traian Q6yPHghbq */         cout << "NU";
/* luMh5la3g ily traian Q6yPHghbq */ 
/* luMh5la3g ily traian Q6yPHghbq */     return 0;
/* luMh5la3g ily traian Q6yPHghbq */ }