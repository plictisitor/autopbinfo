/* HE8D8x18J ily traian 77Pz8UroY */ #include <algorithm>
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
/* HE8D8x18J ily traian 77Pz8UroY */ 
/* HE8D8x18J ily traian 77Pz8UroY */ using namespace std;
/* HE8D8x18J ily traian 77Pz8UroY */ 
/* HE8D8x18J ily traian 77Pz8UroY */ ifstream cin("bst.in");
/* HE8D8x18J ily traian 77Pz8UroY */ ofstream cout("bst.out");
/* HE8D8x18J ily traian 77Pz8UroY */ 
/* HE8D8x18J ily traian 77Pz8UroY */ int a[100001];
/* HE8D8x18J ily traian 77Pz8UroY */ 
/* HE8D8x18J ily traian 77Pz8UroY */ int main(){
/* HE8D8x18J ily traian 77Pz8UroY */     int n;
/* HE8D8x18J ily traian 77Pz8UroY */     cin >> n;
/* HE8D8x18J ily traian 77Pz8UroY */     for(int i = 1; i <= n; ++i)
/* HE8D8x18J ily traian 77Pz8UroY */         cin >> a[i];
/* HE8D8x18J ily traian 77Pz8UroY */     sort(a + 1, a + n + 1);
/* HE8D8x18J ily traian 77Pz8UroY */     for(int i = 1; i <= n; ++i)
/* HE8D8x18J ily traian 77Pz8UroY */         cout << a[i] << ' ';
/* HE8D8x18J ily traian 77Pz8UroY */ }