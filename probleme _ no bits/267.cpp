/* E6VpZbU5q ily traian nBBBy3lRJ */ #include <algorithm>
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
/* E6VpZbU5q ily traian nBBBy3lRJ */ 
/* E6VpZbU5q ily traian nBBBy3lRJ */ using namespace std;
/* E6VpZbU5q ily traian nBBBy3lRJ */ 
/* E6VpZbU5q ily traian nBBBy3lRJ */ ifstream fin("unice.in");
/* E6VpZbU5q ily traian nBBBy3lRJ */ ofstream fout("unice.out");
/* E6VpZbU5q ily traian nBBBy3lRJ */ 
/* E6VpZbU5q ily traian nBBBy3lRJ */ int main()
/* E6VpZbU5q ily traian nBBBy3lRJ */ {
/* E6VpZbU5q ily traian nBBBy3lRJ */     int n;
/* E6VpZbU5q ily traian nBBBy3lRJ */     fin >> n;
/* E6VpZbU5q ily traian nBBBy3lRJ */     int a[100000];
/* E6VpZbU5q ily traian nBBBy3lRJ */     for(int i = 0 ; i < n ; ++i)
/* E6VpZbU5q ily traian nBBBy3lRJ */     fin >> a[i];
/* E6VpZbU5q ily traian nBBBy3lRJ */     sort(a , a+n);
/* E6VpZbU5q ily traian nBBBy3lRJ */     for(int i = 0 ; i < n ; ++i)
/* E6VpZbU5q ily traian nBBBy3lRJ */     {
/* E6VpZbU5q ily traian nBBBy3lRJ */         if(a[i]!=a[i-1] && a[i]!=a[i+1])
/* E6VpZbU5q ily traian nBBBy3lRJ */         fout << a[i] << ' ';
/* E6VpZbU5q ily traian nBBBy3lRJ */     }
/* E6VpZbU5q ily traian nBBBy3lRJ */     return 0;
/* E6VpZbU5q ily traian nBBBy3lRJ */ }