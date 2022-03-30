/* dMUoZ3pAO ily traian aHcwngp2i */ #include <algorithm>
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
/* dMUoZ3pAO ily traian aHcwngp2i */ 
/* dMUoZ3pAO ily traian aHcwngp2i */ using namespace std;
/* dMUoZ3pAO ily traian aHcwngp2i */ 
/* dMUoZ3pAO ily traian aHcwngp2i */ ifstream cin("permpf.in");
/* dMUoZ3pAO ily traian aHcwngp2i */ ofstream cout("permpf.out");
/* dMUoZ3pAO ily traian aHcwngp2i */ 
/* dMUoZ3pAO ily traian aHcwngp2i */ int n , x[10] , p[10] , a[10];
/* dMUoZ3pAO ily traian aHcwngp2i */ 
/* dMUoZ3pAO ily traian aHcwngp2i */ void afisare()
/* dMUoZ3pAO ily traian aHcwngp2i */ {
/* dMUoZ3pAO ily traian aHcwngp2i */     for(int i = 1 ; i <= n ; i++)
/* dMUoZ3pAO ily traian aHcwngp2i */         cout << x[i] << " ";
/* dMUoZ3pAO ily traian aHcwngp2i */     cout << '\n';
/* dMUoZ3pAO ily traian aHcwngp2i */ }
/* dMUoZ3pAO ily traian aHcwngp2i */ 
/* dMUoZ3pAO ily traian aHcwngp2i */ void back(int k)
/* dMUoZ3pAO ily traian aHcwngp2i */ {
/* dMUoZ3pAO ily traian aHcwngp2i */     for(int i = 1 ; i <= n ; i++)
/* dMUoZ3pAO ily traian aHcwngp2i */         if(!p[i] && k != i)
/* dMUoZ3pAO ily traian aHcwngp2i */         {
/* dMUoZ3pAO ily traian aHcwngp2i */             x[k] = i;
/* dMUoZ3pAO ily traian aHcwngp2i */             p[i] = 1;
/* dMUoZ3pAO ily traian aHcwngp2i */             if(k == n) afisare();
/* dMUoZ3pAO ily traian aHcwngp2i */             else back(k + 1);
/* dMUoZ3pAO ily traian aHcwngp2i */             p[i] = 0;
/* dMUoZ3pAO ily traian aHcwngp2i */         }
/* dMUoZ3pAO ily traian aHcwngp2i */ }
/* dMUoZ3pAO ily traian aHcwngp2i */ 
/* dMUoZ3pAO ily traian aHcwngp2i */ int main()
/* dMUoZ3pAO ily traian aHcwngp2i */ {
/* dMUoZ3pAO ily traian aHcwngp2i */     cin >> n;
/* dMUoZ3pAO ily traian aHcwngp2i */     back(1);
/* dMUoZ3pAO ily traian aHcwngp2i */     return 0;
/* dMUoZ3pAO ily traian aHcwngp2i */ }