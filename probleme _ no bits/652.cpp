/* bMQWcSbAA ily traian IJ4LUhErJ */ #include <algorithm>
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
/* bMQWcSbAA ily traian IJ4LUhErJ */ 
/* bMQWcSbAA ily traian IJ4LUhErJ */ using namespace std;
/* bMQWcSbAA ily traian IJ4LUhErJ */ 
/* bMQWcSbAA ily traian IJ4LUhErJ */ ifstream cin("afisarefii.in");
/* bMQWcSbAA ily traian IJ4LUhErJ */ ofstream cout("afisarefii.out");
/* bMQWcSbAA ily traian IJ4LUhErJ */ 
/* bMQWcSbAA ily traian IJ4LUhErJ */ vector <int> G[101];
/* bMQWcSbAA ily traian IJ4LUhErJ */ 
/* bMQWcSbAA ily traian IJ4LUhErJ */ int n , x , k , T[101];
/* bMQWcSbAA ily traian IJ4LUhErJ */ 
/* bMQWcSbAA ily traian IJ4LUhErJ */ int main()
/* bMQWcSbAA ily traian IJ4LUhErJ */ {
/* bMQWcSbAA ily traian IJ4LUhErJ */     cin >> n;
/* bMQWcSbAA ily traian IJ4LUhErJ */     for(int i = 1 ; i <= n ; i++)
/* bMQWcSbAA ily traian IJ4LUhErJ */     {
/* bMQWcSbAA ily traian IJ4LUhErJ */         cin >> T[i];
/* bMQWcSbAA ily traian IJ4LUhErJ */         if(T[i] != 0)
/* bMQWcSbAA ily traian IJ4LUhErJ */             G[T[i]].push_back(i);
/* bMQWcSbAA ily traian IJ4LUhErJ */ 
/* bMQWcSbAA ily traian IJ4LUhErJ */     }
/* bMQWcSbAA ily traian IJ4LUhErJ */     cin >> k;
/* bMQWcSbAA ily traian IJ4LUhErJ */     for(int i = 1 ; i <= k ; i++)
/* bMQWcSbAA ily traian IJ4LUhErJ */     {
/* bMQWcSbAA ily traian IJ4LUhErJ */         int rez[101] = {0} , cnt = 0;
/* bMQWcSbAA ily traian IJ4LUhErJ */         cin >> x;
/* bMQWcSbAA ily traian IJ4LUhErJ */         for(auto i:G[x])
/* bMQWcSbAA ily traian IJ4LUhErJ */             cnt++ , rez[cnt] = i;
/* bMQWcSbAA ily traian IJ4LUhErJ */         cout << cnt << " ";
/* bMQWcSbAA ily traian IJ4LUhErJ */         for(int i = 1 ; i <= cnt ; i++)
/* bMQWcSbAA ily traian IJ4LUhErJ */             cout << rez[i] << " ";
/* bMQWcSbAA ily traian IJ4LUhErJ */         cout << '\n';
/* bMQWcSbAA ily traian IJ4LUhErJ */     }
/* bMQWcSbAA ily traian IJ4LUhErJ */ }