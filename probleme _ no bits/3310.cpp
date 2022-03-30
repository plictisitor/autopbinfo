/* hRXSjFRxJ ily traian ZogfCbt5n */ #include <algorithm>
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
/* hRXSjFRxJ ily traian ZogfCbt5n */ using namespace std;
/* hRXSjFRxJ ily traian ZogfCbt5n */ 
/* hRXSjFRxJ ily traian ZogfCbt5n */ ifstream cin("afin.in");
/* hRXSjFRxJ ily traian ZogfCbt5n */ ofstream cout("afin.out");
/* hRXSjFRxJ ily traian ZogfCbt5n */ 
/* hRXSjFRxJ ily traian ZogfCbt5n */ char s[10001];
/* hRXSjFRxJ ily traian ZogfCbt5n */ 
/* hRXSjFRxJ ily traian ZogfCbt5n */ int main(){
/* hRXSjFRxJ ily traian ZogfCbt5n */     int a, b;
/* hRXSjFRxJ ily traian ZogfCbt5n */     cin >> a >> b;
/* hRXSjFRxJ ily traian ZogfCbt5n */     cin >> s;
/* hRXSjFRxJ ily traian ZogfCbt5n */     int i = 0;
/* hRXSjFRxJ ily traian ZogfCbt5n */     while(s[i]){
/* hRXSjFRxJ ily traian ZogfCbt5n */         int x = s[i] - 'a';
/* hRXSjFRxJ ily traian ZogfCbt5n */         int d = (a * x + b) % 26;
/* hRXSjFRxJ ily traian ZogfCbt5n */         d += 'a';
/* hRXSjFRxJ ily traian ZogfCbt5n */         s[i] = (char) d;
/* hRXSjFRxJ ily traian ZogfCbt5n */         i++;
/* hRXSjFRxJ ily traian ZogfCbt5n */     }
/* hRXSjFRxJ ily traian ZogfCbt5n */     cout << s;
/* hRXSjFRxJ ily traian ZogfCbt5n */     return 0;
/* hRXSjFRxJ ily traian ZogfCbt5n */ }