/* vaYlQgKL5 ily traian ysFZEre6o */ #include <algorithm>
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
/* vaYlQgKL5 ily traian ysFZEre6o */ using namespace std;
/* vaYlQgKL5 ily traian ysFZEre6o */ ifstream cin("submultimi1.in");
/* vaYlQgKL5 ily traian ysFZEre6o */ ofstream cout("submultimi1.out");
/* vaYlQgKL5 ily traian ysFZEre6o */ int n , x[11];
/* vaYlQgKL5 ily traian ysFZEre6o */ int mic(int l)
/* vaYlQgKL5 ily traian ysFZEre6o */ {
/* vaYlQgKL5 ily traian ysFZEre6o */     for(int i = 2 ; i <= l ; ++i)
/* vaYlQgKL5 ily traian ysFZEre6o */         if(x[i] - x[i - 1] < 2) return 0;
/* vaYlQgKL5 ily traian ysFZEre6o */     return 1;
/* vaYlQgKL5 ily traian ysFZEre6o */ }
/* vaYlQgKL5 ily traian ysFZEre6o */ void afis(int l)
/* vaYlQgKL5 ily traian ysFZEre6o */ {
/* vaYlQgKL5 ily traian ysFZEre6o */     for(int i = 1 ; i <= l ; ++i)
/* vaYlQgKL5 ily traian ysFZEre6o */         cout << x[i] << ' ';
/* vaYlQgKL5 ily traian ysFZEre6o */     cout << endl;
/* vaYlQgKL5 ily traian ysFZEre6o */ }
/* vaYlQgKL5 ily traian ysFZEre6o */ void backt(int k)
/* vaYlQgKL5 ily traian ysFZEre6o */ {
/* vaYlQgKL5 ily traian ysFZEre6o */     for(int i = x[k-1] + 1 ; i <= n ; ++i)
/* vaYlQgKL5 ily traian ysFZEre6o */     {
/* vaYlQgKL5 ily traian ysFZEre6o */         x[k] = i;
/* vaYlQgKL5 ily traian ysFZEre6o */         if(mic(k)) afis(k);
/* vaYlQgKL5 ily traian ysFZEre6o */         backt(k+1);
/* vaYlQgKL5 ily traian ysFZEre6o */     }
/* vaYlQgKL5 ily traian ysFZEre6o */ }
/* vaYlQgKL5 ily traian ysFZEre6o */ 
/* vaYlQgKL5 ily traian ysFZEre6o */ int main()
/* vaYlQgKL5 ily traian ysFZEre6o */ {
/* vaYlQgKL5 ily traian ysFZEre6o */     cin >> n;
/* vaYlQgKL5 ily traian ysFZEre6o */     backt(1);
/* vaYlQgKL5 ily traian ysFZEre6o */     return 0;
/* vaYlQgKL5 ily traian ysFZEre6o */ }