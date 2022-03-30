/* EefaQr0Fp ily traian O07yOwWxS */ #include <algorithm>
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
/* EefaQr0Fp ily traian O07yOwWxS */ 
/* EefaQr0Fp ily traian O07yOwWxS */ using namespace std;
/* EefaQr0Fp ily traian O07yOwWxS */ 
/* EefaQr0Fp ily traian O07yOwWxS */ ifstream cin("map.in");
/* EefaQr0Fp ily traian O07yOwWxS */ ofstream cout("map.out");
/* EefaQr0Fp ily traian O07yOwWxS */ map <long long , int> r;
/* EefaQr0Fp ily traian O07yOwWxS */ long long n , s;
/* EefaQr0Fp ily traian O07yOwWxS */ 
/* EefaQr0Fp ily traian O07yOwWxS */ int main()
/* EefaQr0Fp ily traian O07yOwWxS */ {
/* EefaQr0Fp ily traian O07yOwWxS */     cin >> n;
/* EefaQr0Fp ily traian O07yOwWxS */     for(int i = 1 ; i <= n ; i++)
/* EefaQr0Fp ily traian O07yOwWxS */     {
/* EefaQr0Fp ily traian O07yOwWxS */         cin >> s;
/* EefaQr0Fp ily traian O07yOwWxS */         r[s]++;
/* EefaQr0Fp ily traian O07yOwWxS */         cout << r[s] << " ";
/* EefaQr0Fp ily traian O07yOwWxS */     }
/* EefaQr0Fp ily traian O07yOwWxS */ }