/* rxRH74YLB ily traian U4wMKjZOC */ #include <algorithm>
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
/* rxRH74YLB ily traian U4wMKjZOC */ using namespace std;
/* rxRH74YLB ily traian U4wMKjZOC */ 
/* rxRH74YLB ily traian U4wMKjZOC */ ifstream cin("alice_xi.in");
/* rxRH74YLB ily traian U4wMKjZOC */ ofstream cout("alice_xi.out");
/* rxRH74YLB ily traian U4wMKjZOC */ 
/* rxRH74YLB ily traian U4wMKjZOC */ long long n , a[101][101] , sum;
/* rxRH74YLB ily traian U4wMKjZOC */ 
/* rxRH74YLB ily traian U4wMKjZOC */ int main()
/* rxRH74YLB ily traian U4wMKjZOC */ {
/* rxRH74YLB ily traian U4wMKjZOC */     cin >> n;
/* rxRH74YLB ily traian U4wMKjZOC */ 
/* rxRH74YLB ily traian U4wMKjZOC */     a[1][1] = 1;
/* rxRH74YLB ily traian U4wMKjZOC */     for(int i = 2 ; i <= n ; i++)
/* rxRH74YLB ily traian U4wMKjZOC */         for(int j = 1 ; j <= n ; j++)
/* rxRH74YLB ily traian U4wMKjZOC */             a[i][j] = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1];
/* rxRH74YLB ily traian U4wMKjZOC */ 
/* rxRH74YLB ily traian U4wMKjZOC */     for(int i = 1 ; i <= n ; i++)
/* rxRH74YLB ily traian U4wMKjZOC */         sum += a[n][i];
/* rxRH74YLB ily traian U4wMKjZOC */ 
/* rxRH74YLB ily traian U4wMKjZOC */     cout << sum;
/* rxRH74YLB ily traian U4wMKjZOC */ 
/* rxRH74YLB ily traian U4wMKjZOC */ }