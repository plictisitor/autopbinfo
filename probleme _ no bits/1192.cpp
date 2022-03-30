/* ZypBA9drZ ily traian dOZtbrmUy */ #include <algorithm>
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
/* ZypBA9drZ ily traian dOZtbrmUy */ 
/* ZypBA9drZ ily traian dOZtbrmUy */ using namespace std;
/* ZypBA9drZ ily traian dOZtbrmUy */ 
/* ZypBA9drZ ily traian dOZtbrmUy */ ifstream fin("arhitectura2.in");
/* ZypBA9drZ ily traian dOZtbrmUy */ ofstream fout("arhitectura2.out");
/* ZypBA9drZ ily traian dOZtbrmUy */ 
/* ZypBA9drZ ily traian dOZtbrmUy */ int a[2000003];
/* ZypBA9drZ ily traian dOZtbrmUy */ 
/* ZypBA9drZ ily traian dOZtbrmUy */ int main()
/* ZypBA9drZ ily traian dOZtbrmUy */ {
/* ZypBA9drZ ily traian dOZtbrmUy */     int n;
/* ZypBA9drZ ily traian dOZtbrmUy */     fin >> n;
/* ZypBA9drZ ily traian dOZtbrmUy */     a[0]=0 , a[n+1]=0;
/* ZypBA9drZ ily traian dOZtbrmUy */     for(int i = 1 ; i <= n ; ++i)
/* ZypBA9drZ ily traian dOZtbrmUy */     fin >> a[i];
/* ZypBA9drZ ily traian dOZtbrmUy */     sort(a+1,a+n+1);
/* ZypBA9drZ ily traian dOZtbrmUy */     for(int i = n ; i >= 1 ; --i)
/* ZypBA9drZ ily traian dOZtbrmUy */     fout << a[i] << ' ';
/* ZypBA9drZ ily traian dOZtbrmUy */     fout << endl;
/* ZypBA9drZ ily traian dOZtbrmUy */     for(int i = n ; i >= 1 ; --i)
/* ZypBA9drZ ily traian dOZtbrmUy */     {
/* ZypBA9drZ ily traian dOZtbrmUy */         if(a[i]*2==a[i+1]+a[i-1]) 
/* ZypBA9drZ ily traian dOZtbrmUy */         fout << 1 << ' ';
/* ZypBA9drZ ily traian dOZtbrmUy */         else
/* ZypBA9drZ ily traian dOZtbrmUy */         fout << 0 << ' ';
/* ZypBA9drZ ily traian dOZtbrmUy */     }
/* ZypBA9drZ ily traian dOZtbrmUy */     return 0;
/* ZypBA9drZ ily traian dOZtbrmUy */ }