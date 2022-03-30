/* 316Rn6i4q ily traian vKs6c5FW4 */ #include <algorithm>
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
/* 316Rn6i4q ily traian vKs6c5FW4 */ using namespace std;
/* 316Rn6i4q ily traian vKs6c5FW4 */ ifstream fin("mdiv.in");
/* 316Rn6i4q ily traian vKs6c5FW4 */ ofstream fout("mdiv.out");
/* 316Rn6i4q ily traian vKs6c5FW4 */ int a[1000001], f[1000001];
/* 316Rn6i4q ily traian vKs6c5FW4 */ int main()
/* 316Rn6i4q ily traian vKs6c5FW4 */ {
/* 316Rn6i4q ily traian vKs6c5FW4 */     int n , m , x;
/* 316Rn6i4q ily traian vKs6c5FW4 */     for(fin >> n ; n ; n --)
/* 316Rn6i4q ily traian vKs6c5FW4 */     {
/* 316Rn6i4q ily traian vKs6c5FW4 */         fin >> x;
/* 316Rn6i4q ily traian vKs6c5FW4 */         f[x]++;
/* 316Rn6i4q ily traian vKs6c5FW4 */     }
/* 316Rn6i4q ily traian vKs6c5FW4 */     for(int i = 1 ; i <= 1000000; i ++)
/* 316Rn6i4q ily traian vKs6c5FW4 */         for(int j = i ; j <= 1000000 ; j += i)
/* 316Rn6i4q ily traian vKs6c5FW4 */             if(f[j] > 0) a[i] += f[j];
/* 316Rn6i4q ily traian vKs6c5FW4 */     for(fin >> m ; m ; m -- )
/* 316Rn6i4q ily traian vKs6c5FW4 */     {
/* 316Rn6i4q ily traian vKs6c5FW4 */         fin >> x;
/* 316Rn6i4q ily traian vKs6c5FW4 */         fout << a[x] << "\n";
/* 316Rn6i4q ily traian vKs6c5FW4 */     }
/* 316Rn6i4q ily traian vKs6c5FW4 */     return 0;
/* 316Rn6i4q ily traian vKs6c5FW4 */ }