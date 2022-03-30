/* HjkHjH5Hv ily traian ZV8AemQKy */ #include <algorithm>
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
/* HjkHjH5Hv ily traian ZV8AemQKy */ using namespace std;
/* HjkHjH5Hv ily traian ZV8AemQKy */ ifstream fin("prize.in");
/* HjkHjH5Hv ily traian ZV8AemQKy */ ofstream fout("prize.out");
/* HjkHjH5Hv ily traian ZV8AemQKy */ int main()
/* HjkHjH5Hv ily traian ZV8AemQKy */ {
/* HjkHjH5Hv ily traian ZV8AemQKy */     unsigned long long n,x,s=0;
/* HjkHjH5Hv ily traian ZV8AemQKy */     fin>>n;
/* HjkHjH5Hv ily traian ZV8AemQKy */     for(int i=1;i<=n;i++)
/* HjkHjH5Hv ily traian ZV8AemQKy */     {
/* HjkHjH5Hv ily traian ZV8AemQKy */         fin>>x;
/* HjkHjH5Hv ily traian ZV8AemQKy */         s=s+x;
/* HjkHjH5Hv ily traian ZV8AemQKy */     }
/* HjkHjH5Hv ily traian ZV8AemQKy */     fout<<s-(n-1);
/* HjkHjH5Hv ily traian ZV8AemQKy */     return 0;
/* HjkHjH5Hv ily traian ZV8AemQKy */ }