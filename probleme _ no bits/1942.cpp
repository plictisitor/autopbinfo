/* eq8Qu4MuU ily traian L8MGddcGH */ #include <algorithm>
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
/* eq8Qu4MuU ily traian L8MGddcGH */ using namespace std;
/* eq8Qu4MuU ily traian L8MGddcGH */ 
/* eq8Qu4MuU ily traian L8MGddcGH */ int n , x[1001];
/* eq8Qu4MuU ily traian L8MGddcGH */ 
/* eq8Qu4MuU ily traian L8MGddcGH */ void inmultire(int k)
/* eq8Qu4MuU ily traian L8MGddcGH */ {
/* eq8Qu4MuU ily traian L8MGddcGH */     int t = 0;
/* eq8Qu4MuU ily traian L8MGddcGH */     for(int i = 1 ; i <= x[0] ; i++)
/* eq8Qu4MuU ily traian L8MGddcGH */     {
/* eq8Qu4MuU ily traian L8MGddcGH */         int c = x[i] * k + t;
/* eq8Qu4MuU ily traian L8MGddcGH */         x[i] = c % 10;
/* eq8Qu4MuU ily traian L8MGddcGH */         t = c / 10;
/* eq8Qu4MuU ily traian L8MGddcGH */     }
/* eq8Qu4MuU ily traian L8MGddcGH */     while(t)
/* eq8Qu4MuU ily traian L8MGddcGH */     {
/* eq8Qu4MuU ily traian L8MGddcGH */         x[0]++;
/* eq8Qu4MuU ily traian L8MGddcGH */         x[x[0]] = t % 10;
/* eq8Qu4MuU ily traian L8MGddcGH */         t = t / 10;
/* eq8Qu4MuU ily traian L8MGddcGH */     }
/* eq8Qu4MuU ily traian L8MGddcGH */ }
/* eq8Qu4MuU ily traian L8MGddcGH */ 
/* eq8Qu4MuU ily traian L8MGddcGH */ int main()
/* eq8Qu4MuU ily traian L8MGddcGH */ {
/* eq8Qu4MuU ily traian L8MGddcGH */     cin >> n;
/* eq8Qu4MuU ily traian L8MGddcGH */     x[0] = 1 , x[1] = 1;
/* eq8Qu4MuU ily traian L8MGddcGH */     for(int i = 3 ; i <= n - 1 ; i ++)
/* eq8Qu4MuU ily traian L8MGddcGH */     {
/* eq8Qu4MuU ily traian L8MGddcGH */         inmultire(i);
/* eq8Qu4MuU ily traian L8MGddcGH */     }
/* eq8Qu4MuU ily traian L8MGddcGH */ 
/* eq8Qu4MuU ily traian L8MGddcGH */     for(int i = x[0] ; i >= 1 ; i--)
/* eq8Qu4MuU ily traian L8MGddcGH */         cout << x[i];
/* eq8Qu4MuU ily traian L8MGddcGH */ }