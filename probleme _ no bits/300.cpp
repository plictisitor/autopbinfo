/* sBYFLImTs ily traian ma7oc2sLa */ #include <algorithm>
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
/* sBYFLImTs ily traian ma7oc2sLa */ using namespace std;
/* sBYFLImTs ily traian ma7oc2sLa */ ifstream fin("sumainsecv.in");
/* sBYFLImTs ily traian ma7oc2sLa */ ofstream fout("sumainsecv.out");
/* sBYFLImTs ily traian ma7oc2sLa */ int main()
/* sBYFLImTs ily traian ma7oc2sLa */ {
/* sBYFLImTs ily traian ma7oc2sLa */     int n , smax , a[105];
/* sBYFLImTs ily traian ma7oc2sLa */     fin >> n >> smax;
/* sBYFLImTs ily traian ma7oc2sLa */     int st = 0, dr = 0;
/* sBYFLImTs ily traian ma7oc2sLa */     for(int i = 1 ; i <= n ; ++i) fin >> a[i];
/* sBYFLImTs ily traian ma7oc2sLa */     for(int i = 1 ; i <= n && st == 0 ; ++i)
/* sBYFLImTs ily traian ma7oc2sLa */         for(int j = i ; j <= n && st == 0 ; ++j)
/* sBYFLImTs ily traian ma7oc2sLa */         {
/* sBYFLImTs ily traian ma7oc2sLa */             int sum = 0;
/* sBYFLImTs ily traian ma7oc2sLa */             for(int k = i ; k <= j ; ++k)
/* sBYFLImTs ily traian ma7oc2sLa */                 sum += a[k];
/* sBYFLImTs ily traian ma7oc2sLa */             if(sum == smax)
/* sBYFLImTs ily traian ma7oc2sLa */                 st = i, dr = j;
/* sBYFLImTs ily traian ma7oc2sLa */         }
/* sBYFLImTs ily traian ma7oc2sLa */     fout << st << " " << dr;
/* sBYFLImTs ily traian ma7oc2sLa */     return 0;
/* sBYFLImTs ily traian ma7oc2sLa */ }