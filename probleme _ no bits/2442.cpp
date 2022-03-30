/* erYBlcVY9 ily traian OzIanhjHJ */ #include <algorithm>
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
/* erYBlcVY9 ily traian OzIanhjHJ */ using namespace std;
/* erYBlcVY9 ily traian OzIanhjHJ */ ifstream cin("cifre006.in");
/* erYBlcVY9 ily traian OzIanhjHJ */ ofstream cout("cifre006.out");
/* erYBlcVY9 ily traian OzIanhjHJ */ int main()
/* erYBlcVY9 ily traian OzIanhjHJ */ {
/* erYBlcVY9 ily traian OzIanhjHJ */     int n , a[10] , p = 1 , k , cnt = 0 , nr = 0;
/* erYBlcVY9 ily traian OzIanhjHJ */     cin >> n >> k;
/* erYBlcVY9 ily traian OzIanhjHJ */     int aux = n;
/* erYBlcVY9 ily traian OzIanhjHJ */     while(aux != 0)
/* erYBlcVY9 ily traian OzIanhjHJ */     {
/* erYBlcVY9 ily traian OzIanhjHJ */         if(aux % 10 == k) cnt++;
/* erYBlcVY9 ily traian OzIanhjHJ */         aux /= 10;
/* erYBlcVY9 ily traian OzIanhjHJ */     }
/* erYBlcVY9 ily traian OzIanhjHJ */     cout << cnt << endl;
/* erYBlcVY9 ily traian OzIanhjHJ */     for(int i = 0 ; i < cnt ; ++i) cout << k;
/* erYBlcVY9 ily traian OzIanhjHJ */     while(n != 0)
/* erYBlcVY9 ily traian OzIanhjHJ */     {
/* erYBlcVY9 ily traian OzIanhjHJ */         if(n % 10 != k) a[p] = n % 10 , p++;
/* erYBlcVY9 ily traian OzIanhjHJ */         n /= 10;
/* erYBlcVY9 ily traian OzIanhjHJ */     }
/* erYBlcVY9 ily traian OzIanhjHJ */     for(int i = p - 1 ; i >= 1 ; --i) cout << a[i];
/* erYBlcVY9 ily traian OzIanhjHJ */     return 0;
/* erYBlcVY9 ily traian OzIanhjHJ */ }