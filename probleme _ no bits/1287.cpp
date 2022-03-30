/* y9hl6KzBd ily traian l14KRUsZa */ #include <algorithm>
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
/* y9hl6KzBd ily traian l14KRUsZa */ using namespace std;
/* y9hl6KzBd ily traian l14KRUsZa */ 
/* y9hl6KzBd ily traian l14KRUsZa */ int n , a , b , x[10] , ok;
/* y9hl6KzBd ily traian l14KRUsZa */ 
/* y9hl6KzBd ily traian l14KRUsZa */ void afisare()
/* y9hl6KzBd ily traian l14KRUsZa */ {
/* y9hl6KzBd ily traian l14KRUsZa */     for(int i = 1 ; i <= n ; i++)
/* y9hl6KzBd ily traian l14KRUsZa */         cout << x[i];
/* y9hl6KzBd ily traian l14KRUsZa */     cout << '\n';
/* y9hl6KzBd ily traian l14KRUsZa */     ok++;
/* y9hl6KzBd ily traian l14KRUsZa */ }
/* y9hl6KzBd ily traian l14KRUsZa */ 
/* y9hl6KzBd ily traian l14KRUsZa */ void back(int k)
/* y9hl6KzBd ily traian l14KRUsZa */ {
/* y9hl6KzBd ily traian l14KRUsZa */     for(int i = a ; i <= b ; i++)
/* y9hl6KzBd ily traian l14KRUsZa */     {
/* y9hl6KzBd ily traian l14KRUsZa */         x[k] = i;
/* y9hl6KzBd ily traian l14KRUsZa */         if(k == n) afisare();
/* y9hl6KzBd ily traian l14KRUsZa */         else back(k + 1);
/* y9hl6KzBd ily traian l14KRUsZa */     }
/* y9hl6KzBd ily traian l14KRUsZa */ }
/* y9hl6KzBd ily traian l14KRUsZa */ 
/* y9hl6KzBd ily traian l14KRUsZa */ int main()
/* y9hl6KzBd ily traian l14KRUsZa */ {
/* y9hl6KzBd ily traian l14KRUsZa */     cin >> a >> b >> n;
/* y9hl6KzBd ily traian l14KRUsZa */     back(1);
/* y9hl6KzBd ily traian l14KRUsZa */ }