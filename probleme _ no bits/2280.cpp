/* tCIZ0t5n6 ily traian 0zITtMV2Z */ #include <algorithm>
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
/* tCIZ0t5n6 ily traian 0zITtMV2Z */ using namespace std;
/* tCIZ0t5n6 ily traian 0zITtMV2Z */ ifstream fin("memory008.in");
/* tCIZ0t5n6 ily traian 0zITtMV2Z */ ofstream fout("memory008.out");
/* tCIZ0t5n6 ily traian 0zITtMV2Z */ int main()
/* tCIZ0t5n6 ily traian 0zITtMV2Z */ {
/* tCIZ0t5n6 ily traian 0zITtMV2Z */     int n;
/* tCIZ0t5n6 ily traian 0zITtMV2Z */     unsigned long long x=0,a;
/* tCIZ0t5n6 ily traian 0zITtMV2Z */     fin>>n;
/* tCIZ0t5n6 ily traian 0zITtMV2Z */     for(int i=1;i<=n;i++)
/* tCIZ0t5n6 ily traian 0zITtMV2Z */     {
/* tCIZ0t5n6 ily traian 0zITtMV2Z */         fin>>a;
/* tCIZ0t5n6 ily traian 0zITtMV2Z */         x=x^a;
/* tCIZ0t5n6 ily traian 0zITtMV2Z */     }
/* tCIZ0t5n6 ily traian 0zITtMV2Z */     fout<<x;
/* tCIZ0t5n6 ily traian 0zITtMV2Z */     return 0;
/* tCIZ0t5n6 ily traian 0zITtMV2Z */ }