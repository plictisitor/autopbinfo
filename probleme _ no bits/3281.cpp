/* Tr3ePjB1S ily traian 8y1E6oZ7N */ #include <algorithm>
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
/* Tr3ePjB1S ily traian 8y1E6oZ7N */ using namespace std;
/* Tr3ePjB1S ily traian 8y1E6oZ7N */ 
/* Tr3ePjB1S ily traian 8y1E6oZ7N */ ifstream cin("sminus.in");
/* Tr3ePjB1S ily traian 8y1E6oZ7N */ ofstream cout("sminus.out");
/* Tr3ePjB1S ily traian 8y1E6oZ7N */ 
/* Tr3ePjB1S ily traian 8y1E6oZ7N */ int n, a[100001];
/* Tr3ePjB1S ily traian 8y1E6oZ7N */ 
/* Tr3ePjB1S ily traian 8y1E6oZ7N */ int main(){
/* Tr3ePjB1S ily traian 8y1E6oZ7N */     cin >> n;
/* Tr3ePjB1S ily traian 8y1E6oZ7N */     for(int i = 1; i <= n; ++i)
/* Tr3ePjB1S ily traian 8y1E6oZ7N */         cin >> a[i];
/* Tr3ePjB1S ily traian 8y1E6oZ7N */     int smax = 0, s = 0, st = 1, dr = 1, pozi = 1, pozj = 1;
/* Tr3ePjB1S ily traian 8y1E6oZ7N */     for(; dr <= n; ++dr){
/* Tr3ePjB1S ily traian 8y1E6oZ7N */         s+=a[dr];
/* Tr3ePjB1S ily traian 8y1E6oZ7N */         if(s < 0)
/* Tr3ePjB1S ily traian 8y1E6oZ7N */             s = 0, st = dr + 1;
/* Tr3ePjB1S ily traian 8y1E6oZ7N */         if(s >= smax)
/* Tr3ePjB1S ily traian 8y1E6oZ7N */             smax = s, pozi = st, pozj = dr;
/* Tr3ePjB1S ily traian 8y1E6oZ7N */     }
/* Tr3ePjB1S ily traian 8y1E6oZ7N */     for(int i = pozi; i <= pozj; ++i)
/* Tr3ePjB1S ily traian 8y1E6oZ7N */         a[i] *= -1;
/* Tr3ePjB1S ily traian 8y1E6oZ7N */     int sum = 0;
/* Tr3ePjB1S ily traian 8y1E6oZ7N */     for(int i = 1; i <= n; ++i)
/* Tr3ePjB1S ily traian 8y1E6oZ7N */         sum+=a[i];
/* Tr3ePjB1S ily traian 8y1E6oZ7N */     cout << pozi << ' ' << pozj << '\n' << sum;
/* Tr3ePjB1S ily traian 8y1E6oZ7N */     return 0;
/* Tr3ePjB1S ily traian 8y1E6oZ7N */ }