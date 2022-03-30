/* MU6COOMwr ily traian qoAfHQiQg */ #include <algorithm>
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
/* MU6COOMwr ily traian qoAfHQiQg */ using namespace std;
/* MU6COOMwr ily traian qoAfHQiQg */ 
/* MU6COOMwr ily traian qoAfHQiQg */ ifstream cin("fmi_orase1.in");
/* MU6COOMwr ily traian qoAfHQiQg */ ofstream cout("fmi_orase1.out");
/* MU6COOMwr ily traian qoAfHQiQg */ 
/* MU6COOMwr ily traian qoAfHQiQg */ int n , maxi , a[101];
/* MU6COOMwr ily traian qoAfHQiQg */ 
/* MU6COOMwr ily traian qoAfHQiQg */ int main()
/* MU6COOMwr ily traian qoAfHQiQg */ {
/* MU6COOMwr ily traian qoAfHQiQg */     cin >> n;
/* MU6COOMwr ily traian qoAfHQiQg */     for(int i = 1 ; i <= n ; i++)
/* MU6COOMwr ily traian qoAfHQiQg */         cin >> a[i];
/* MU6COOMwr ily traian qoAfHQiQg */ 
/* MU6COOMwr ily traian qoAfHQiQg */     for(int i = 1 ; i <= n ; i++)
/* MU6COOMwr ily traian qoAfHQiQg */         for(int j = i + 1 ; j <= n ; j++)
/* MU6COOMwr ily traian qoAfHQiQg */             if(min(a[i] , a[j]) * (j - i) > maxi)
/* MU6COOMwr ily traian qoAfHQiQg */                 maxi = min(a[i] , a[j]) * (j - i);
/* MU6COOMwr ily traian qoAfHQiQg */     cout << maxi;
/* MU6COOMwr ily traian qoAfHQiQg */ }