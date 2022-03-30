/* J2anLyrQO ily traian UJOkpz36E */ #include <algorithm>
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
/* J2anLyrQO ily traian UJOkpz36E */ using namespace std;
/* J2anLyrQO ily traian UJOkpz36E */ 
/* J2anLyrQO ily traian UJOkpz36E */ ifstream cin("culori.in");
/* J2anLyrQO ily traian UJOkpz36E */ ofstream cout("culori.out");
/* J2anLyrQO ily traian UJOkpz36E */ 
/* J2anLyrQO ily traian UJOkpz36E */ int f[2001], maxi = 0;
/* J2anLyrQO ily traian UJOkpz36E */ int a[1000001];
/* J2anLyrQO ily traian UJOkpz36E */ 
/* J2anLyrQO ily traian UJOkpz36E */ int main(){
/* J2anLyrQO ily traian UJOkpz36E */     int n, k;
/* J2anLyrQO ily traian UJOkpz36E */     cin >> n >> k;
/* J2anLyrQO ily traian UJOkpz36E */     for(int i = 1; i <= n; ++i)
/* J2anLyrQO ily traian UJOkpz36E */         cin >> a[i];
/* J2anLyrQO ily traian UJOkpz36E */     for(int i = 1; i <= k; ++i)
/* J2anLyrQO ily traian UJOkpz36E */         f[a[i]] ++, maxi = max(maxi, f[a[i]]);
/* J2anLyrQO ily traian UJOkpz36E */     for(int i = k + 1; i <= n; ++i){
/* J2anLyrQO ily traian UJOkpz36E */         f[a[i - k]] --;
/* J2anLyrQO ily traian UJOkpz36E */         f[a[i]]++;
/* J2anLyrQO ily traian UJOkpz36E */         maxi = max(maxi, f[a[i]]);
/* J2anLyrQO ily traian UJOkpz36E */     }
/* J2anLyrQO ily traian UJOkpz36E */     cout << maxi;
/* J2anLyrQO ily traian UJOkpz36E */     return 0;
/* J2anLyrQO ily traian UJOkpz36E */ }