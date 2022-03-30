/* kT9C09TFy ily traian nyXxqprrU */ #include <algorithm>
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
/* kT9C09TFy ily traian nyXxqprrU */ 
/* kT9C09TFy ily traian nyXxqprrU */ using namespace std;
/* kT9C09TFy ily traian nyXxqprrU */ 
/* kT9C09TFy ily traian nyXxqprrU */ int main ()
/* kT9C09TFy ily traian nyXxqprrU */ {
/* kT9C09TFy ily traian nyXxqprrU */     long long int n;
/* kT9C09TFy ily traian nyXxqprrU */     cin >> n;
/* kT9C09TFy ily traian nyXxqprrU */     int par=0;
/* kT9C09TFy ily traian nyXxqprrU */     int cnt=0;
/* kT9C09TFy ily traian nyXxqprrU */     if (n == 0)
/* kT9C09TFy ily traian nyXxqprrU */         cnt++;    
/* kT9C09TFy ily traian nyXxqprrU */     while (n>0)
/* kT9C09TFy ily traian nyXxqprrU */     {
/* kT9C09TFy ily traian nyXxqprrU */         if (n%2==0)
/* kT9C09TFy ily traian nyXxqprrU */         {
/* kT9C09TFy ily traian nyXxqprrU */         par = n%10;
/* kT9C09TFy ily traian nyXxqprrU */         cnt++;
/* kT9C09TFy ily traian nyXxqprrU */         break;
/* kT9C09TFy ily traian nyXxqprrU */         }
/* kT9C09TFy ily traian nyXxqprrU */         else
/* kT9C09TFy ily traian nyXxqprrU */         n/=10;
/* kT9C09TFy ily traian nyXxqprrU */     }
/* kT9C09TFy ily traian nyXxqprrU */     if (cnt == 0)
/* kT9C09TFy ily traian nyXxqprrU */     cout << -1;
/* kT9C09TFy ily traian nyXxqprrU */     else
/* kT9C09TFy ily traian nyXxqprrU */     cout << par;
/* kT9C09TFy ily traian nyXxqprrU */     return 0;
/* kT9C09TFy ily traian nyXxqprrU */ }