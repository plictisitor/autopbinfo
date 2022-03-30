/* eCq57xMdf ily traian ZWuTYXXOz */ #include <algorithm>
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
/* eCq57xMdf ily traian ZWuTYXXOz */ 
/* eCq57xMdf ily traian ZWuTYXXOz */ using namespace std;
/* eCq57xMdf ily traian ZWuTYXXOz */ 
/* eCq57xMdf ily traian ZWuTYXXOz */ ifstream fin("crb.in");
/* eCq57xMdf ily traian ZWuTYXXOz */ ofstream fout("crb.out");
/* eCq57xMdf ily traian ZWuTYXXOz */ 
/* eCq57xMdf ily traian ZWuTYXXOz */ int main()
/* eCq57xMdf ily traian ZWuTYXXOz */ {
/* eCq57xMdf ily traian ZWuTYXXOz */     int n;
/* eCq57xMdf ily traian ZWuTYXXOz */     fin >> n;
/* eCq57xMdf ily traian ZWuTYXXOz */     int a[1000];
/* eCq57xMdf ily traian ZWuTYXXOz */     int b[1000];
/* eCq57xMdf ily traian ZWuTYXXOz */     int cnt=0;
/* eCq57xMdf ily traian ZWuTYXXOz */     for(int i = 0 ; i < n ; ++i)
/* eCq57xMdf ily traian ZWuTYXXOz */     {
/* eCq57xMdf ily traian ZWuTYXXOz */         fin >> a[i];
/* eCq57xMdf ily traian ZWuTYXXOz */         b[i]=a[i];
/* eCq57xMdf ily traian ZWuTYXXOz */     }
/* eCq57xMdf ily traian ZWuTYXXOz */     sort(b , b+n);
/* eCq57xMdf ily traian ZWuTYXXOz */     for(int i = 0 ; i < n ; ++i)
/* eCq57xMdf ily traian ZWuTYXXOz */     {
/* eCq57xMdf ily traian ZWuTYXXOz */         if(a[i]==b[n-i-1])
/* eCq57xMdf ily traian ZWuTYXXOz */         cnt++;
/* eCq57xMdf ily traian ZWuTYXXOz */     }
/* eCq57xMdf ily traian ZWuTYXXOz */     fout << cnt;
/* eCq57xMdf ily traian ZWuTYXXOz */     return 0;
/* eCq57xMdf ily traian ZWuTYXXOz */ }