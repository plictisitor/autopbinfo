/* inPnLdwaw ily traian JFdbJm53M */ #include <algorithm>
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
/* inPnLdwaw ily traian JFdbJm53M */ 
/* inPnLdwaw ily traian JFdbJm53M */ using namespace std;
/* inPnLdwaw ily traian JFdbJm53M */ 
/* inPnLdwaw ily traian JFdbJm53M */ int main()
/* inPnLdwaw ily traian JFdbJm53M */ {
/* inPnLdwaw ily traian JFdbJm53M */     int n;
/* inPnLdwaw ily traian JFdbJm53M */     int INF = 10000 + 1;
/* inPnLdwaw ily traian JFdbJm53M */     cin >> n;
/* inPnLdwaw ily traian JFdbJm53M */     int a[1001];
/* inPnLdwaw ily traian JFdbJm53M */     for(int i = 1; i <= n; ++i)
/* inPnLdwaw ily traian JFdbJm53M */         cin >> a[i];
/* inPnLdwaw ily traian JFdbJm53M */ 
/* inPnLdwaw ily traian JFdbJm53M */     for(int i = 1; i <= n; ++i){
/* inPnLdwaw ily traian JFdbJm53M */         int min = INF, poz = 0;
/* inPnLdwaw ily traian JFdbJm53M */         for(int j = 1; j <= n; ++j)
/* inPnLdwaw ily traian JFdbJm53M */             if(a[j] < min)
/* inPnLdwaw ily traian JFdbJm53M */                 min = a[j], poz = j;
/* inPnLdwaw ily traian JFdbJm53M */         a[poz] = INF;
/* inPnLdwaw ily traian JFdbJm53M */         cout << poz << ' ';
/* inPnLdwaw ily traian JFdbJm53M */     }
/* inPnLdwaw ily traian JFdbJm53M */ 
/* inPnLdwaw ily traian JFdbJm53M */     return 0;
/* inPnLdwaw ily traian JFdbJm53M */ }