/* ZdA9BICGd ily traian OTsv4DeBH */ #include <algorithm>
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
/* ZdA9BICGd ily traian OTsv4DeBH */ using namespace std;
/* ZdA9BICGd ily traian OTsv4DeBH */ 
/* ZdA9BICGd ily traian OTsv4DeBH */ ifstream cin("potrivire.in");
/* ZdA9BICGd ily traian OTsv4DeBH */ ofstream cout("potrivire.out");
/* ZdA9BICGd ily traian OTsv4DeBH */ 
/* ZdA9BICGd ily traian OTsv4DeBH */ long long n , m , a[100001] , x , f[100001];
/* ZdA9BICGd ily traian OTsv4DeBH */ long long s;
/* ZdA9BICGd ily traian OTsv4DeBH */ 
/* ZdA9BICGd ily traian OTsv4DeBH */ 
/* ZdA9BICGd ily traian OTsv4DeBH */ int main()
/* ZdA9BICGd ily traian OTsv4DeBH */ {
/* ZdA9BICGd ily traian OTsv4DeBH */     cin >> n;
/* ZdA9BICGd ily traian OTsv4DeBH */     for(int i = 1 ; i <= n ; i++)
/* ZdA9BICGd ily traian OTsv4DeBH */         cin >> a[i];
/* ZdA9BICGd ily traian OTsv4DeBH */ 
/* ZdA9BICGd ily traian OTsv4DeBH */     for(int i = 1 ; i <= n ; i++)
/* ZdA9BICGd ily traian OTsv4DeBH */     {
/* ZdA9BICGd ily traian OTsv4DeBH */         int num = 0;
/* ZdA9BICGd ily traian OTsv4DeBH */         for(int j = i ; j <= i + 4 && j <= n ; j++)
/* ZdA9BICGd ily traian OTsv4DeBH */         {
/* ZdA9BICGd ily traian OTsv4DeBH */             num = num* 10 + a[j];
/* ZdA9BICGd ily traian OTsv4DeBH */             f[num]++;
/* ZdA9BICGd ily traian OTsv4DeBH */         }
/* ZdA9BICGd ily traian OTsv4DeBH */     }
/* ZdA9BICGd ily traian OTsv4DeBH */     cin >> m;
/* ZdA9BICGd ily traian OTsv4DeBH */     for(int i = 1 ; i <= m ; i++)
/* ZdA9BICGd ily traian OTsv4DeBH */     {
/* ZdA9BICGd ily traian OTsv4DeBH */         cin >> x;
/* ZdA9BICGd ily traian OTsv4DeBH */         if(f[x] != 0 && f[x] != -1) s+= x;
/* ZdA9BICGd ily traian OTsv4DeBH */         f[x] = -1;
/* ZdA9BICGd ily traian OTsv4DeBH */     }
/* ZdA9BICGd ily traian OTsv4DeBH */     cout << s;
/* ZdA9BICGd ily traian OTsv4DeBH */ }