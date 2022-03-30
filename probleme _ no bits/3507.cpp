/* W1Mdv04Mk ily traian mKp6pXkvq */ #include <algorithm>
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
/* W1Mdv04Mk ily traian mKp6pXkvq */ using namespace std;
/* W1Mdv04Mk ily traian mKp6pXkvq */ 
/* W1Mdv04Mk ily traian mKp6pXkvq */ ifstream cin("fibo_gcd.in");
/* W1Mdv04Mk ily traian mKp6pXkvq */ ofstream cout("fibo_gcd.out");
/* W1Mdv04Mk ily traian mKp6pXkvq */ 
/* W1Mdv04Mk ily traian mKp6pXkvq */ int n , x , y , cnt;
/* W1Mdv04Mk ily traian mKp6pXkvq */ 
/* W1Mdv04Mk ily traian mKp6pXkvq */ int prime_intre_ele(int a , int b)
/* W1Mdv04Mk ily traian mKp6pXkvq */ {
/* W1Mdv04Mk ily traian mKp6pXkvq */     int r;
/* W1Mdv04Mk ily traian mKp6pXkvq */     while(b != 0)
/* W1Mdv04Mk ily traian mKp6pXkvq */     {
/* W1Mdv04Mk ily traian mKp6pXkvq */         r = a % b;
/* W1Mdv04Mk ily traian mKp6pXkvq */         a = b;
/* W1Mdv04Mk ily traian mKp6pXkvq */         b = r;
/* W1Mdv04Mk ily traian mKp6pXkvq */     }
/* W1Mdv04Mk ily traian mKp6pXkvq */     if(a == 1 || a == 2) return 1;
/* W1Mdv04Mk ily traian mKp6pXkvq */     else return 0;
/* W1Mdv04Mk ily traian mKp6pXkvq */ }
/* W1Mdv04Mk ily traian mKp6pXkvq */ 
/* W1Mdv04Mk ily traian mKp6pXkvq */ int main()
/* W1Mdv04Mk ily traian mKp6pXkvq */ {
/* W1Mdv04Mk ily traian mKp6pXkvq */     cin >> n;
/* W1Mdv04Mk ily traian mKp6pXkvq */     for(int i = 1 ; i <= n ; i++)
/* W1Mdv04Mk ily traian mKp6pXkvq */     {
/* W1Mdv04Mk ily traian mKp6pXkvq */         cin >> x >> y;
/* W1Mdv04Mk ily traian mKp6pXkvq */         if(prime_intre_ele(x , y)) cnt++;
/* W1Mdv04Mk ily traian mKp6pXkvq */     }
/* W1Mdv04Mk ily traian mKp6pXkvq */     cout << cnt;
/* W1Mdv04Mk ily traian mKp6pXkvq */     return 0;
/* W1Mdv04Mk ily traian mKp6pXkvq */ }