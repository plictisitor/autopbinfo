/* DSX07S3LP ily traian y0sgXlbGx */ #include <algorithm>
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
/* DSX07S3LP ily traian y0sgXlbGx */ 
/* DSX07S3LP ily traian y0sgXlbGx */ using namespace std;
/* DSX07S3LP ily traian y0sgXlbGx */ ifstream fin("unice1.in");
/* DSX07S3LP ily traian y0sgXlbGx */ ofstream fout("unice1.out");
/* DSX07S3LP ily traian y0sgXlbGx */ int main()
/* DSX07S3LP ily traian y0sgXlbGx */ {
/* DSX07S3LP ily traian y0sgXlbGx */     int n,a[1002],cnt=0;
/* DSX07S3LP ily traian y0sgXlbGx */     fin>>n;
/* DSX07S3LP ily traian y0sgXlbGx */     for(int i=0;i<n;i++) fin>>a[i];
/* DSX07S3LP ily traian y0sgXlbGx */     sort(a,a+n);
/* DSX07S3LP ily traian y0sgXlbGx */     for(int i=0;i<n;i++) if(a[i-1]!=a[i] && a[i]!=a[i+1])cnt++;
/* DSX07S3LP ily traian y0sgXlbGx */     fout<<cnt;
/* DSX07S3LP ily traian y0sgXlbGx */     return 0;
/* DSX07S3LP ily traian y0sgXlbGx */ }