/* qLwPPHpqG ily traian L3924FHtq */ #include <algorithm>
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
/* qLwPPHpqG ily traian L3924FHtq */ 
/* qLwPPHpqG ily traian L3924FHtq */ using namespace std;
/* qLwPPHpqG ily traian L3924FHtq */ 
/* qLwPPHpqG ily traian L3924FHtq */ ifstream cin("masini.in");
/* qLwPPHpqG ily traian L3924FHtq */ ofstream cout("masini.out");
/* qLwPPHpqG ily traian L3924FHtq */ 
/* qLwPPHpqG ily traian L3924FHtq */ int n , a[1001] , T , s , cnt;
/* qLwPPHpqG ily traian L3924FHtq */ 
/* qLwPPHpqG ily traian L3924FHtq */ int main()
/* qLwPPHpqG ily traian L3924FHtq */ {
/* qLwPPHpqG ily traian L3924FHtq */     cin >> n >> T;
/* qLwPPHpqG ily traian L3924FHtq */     for(int i = 1 ; i <= n ; i++)
/* qLwPPHpqG ily traian L3924FHtq */         cin >> a[i];
/* qLwPPHpqG ily traian L3924FHtq */ 
/* qLwPPHpqG ily traian L3924FHtq */     sort(a + 1 , a + n + 1);
/* qLwPPHpqG ily traian L3924FHtq */ 
/* qLwPPHpqG ily traian L3924FHtq */     for(int i = 1 ; i <= n ; i++)
/* qLwPPHpqG ily traian L3924FHtq */         if(s + a[i] <= T) s += a[i] , cnt++;
/* qLwPPHpqG ily traian L3924FHtq */ 
/* qLwPPHpqG ily traian L3924FHtq */     cout << cnt;
/* qLwPPHpqG ily traian L3924FHtq */ }