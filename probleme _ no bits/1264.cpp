/* V5ZLN0P6w ily traian 9y1f1gmxE */ #include <algorithm>
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
/* V5ZLN0P6w ily traian 9y1f1gmxE */ 
/* V5ZLN0P6w ily traian 9y1f1gmxE */ using namespace std;
/* V5ZLN0P6w ily traian 9y1f1gmxE */ 
/* V5ZLN0P6w ily traian 9y1f1gmxE */ unsigned int a[4000001];
/* V5ZLN0P6w ily traian 9y1f1gmxE */ 
/* V5ZLN0P6w ily traian 9y1f1gmxE */ ifstream fin("statisticiordine.in");
/* V5ZLN0P6w ily traian 9y1f1gmxE */ ofstream fout("statisticiordine.out");
/* V5ZLN0P6w ily traian 9y1f1gmxE */ 
/* V5ZLN0P6w ily traian 9y1f1gmxE */ int main ()
/* V5ZLN0P6w ily traian 9y1f1gmxE */ {
/* V5ZLN0P6w ily traian 9y1f1gmxE */     unsigned int n , k;
/* V5ZLN0P6w ily traian 9y1f1gmxE */     fin >> n >> k;
/* V5ZLN0P6w ily traian 9y1f1gmxE */     for (int i = 1 ; i <= n ; ++i) fin >> a[i];
/* V5ZLN0P6w ily traian 9y1f1gmxE */     sort (a+1 , a + n + 1);
/* V5ZLN0P6w ily traian 9y1f1gmxE */     fout << a[k];
/* V5ZLN0P6w ily traian 9y1f1gmxE */     fin.close();
/* V5ZLN0P6w ily traian 9y1f1gmxE */     fout.close();
/* V5ZLN0P6w ily traian 9y1f1gmxE */ 
/* V5ZLN0P6w ily traian 9y1f1gmxE */     return 0;
/* V5ZLN0P6w ily traian 9y1f1gmxE */ }