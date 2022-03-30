/* RebDGUWCD ily traian dYgqOgvbn */ #include <algorithm>
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
/* RebDGUWCD ily traian dYgqOgvbn */ using namespace std;
/* RebDGUWCD ily traian dYgqOgvbn */ 
/* RebDGUWCD ily traian dYgqOgvbn */ ifstream cin("romburi.in");
/* RebDGUWCD ily traian dYgqOgvbn */ ofstream cout("romburi.out");
/* RebDGUWCD ily traian dYgqOgvbn */ 
/* RebDGUWCD ily traian dYgqOgvbn */ int n , m , p , l , A[2005][2005] , a , b , cnt;
/* RebDGUWCD ily traian dYgqOgvbn */ 
/* RebDGUWCD ily traian dYgqOgvbn */ int main()
/* RebDGUWCD ily traian dYgqOgvbn */ {
/* RebDGUWCD ily traian dYgqOgvbn */     cin >> n >> m >> p;
/* RebDGUWCD ily traian dYgqOgvbn */     for(int k = 1 ; k <= p ; k++)
/* RebDGUWCD ily traian dYgqOgvbn */     {
/* RebDGUWCD ily traian dYgqOgvbn */         cin >> a >> b >> l;
/* RebDGUWCD ily traian dYgqOgvbn */         for(int i = 0 ; i < l ; i++)
/* RebDGUWCD ily traian dYgqOgvbn */             for(int j = 0 ; j <= i ; j++)
/* RebDGUWCD ily traian dYgqOgvbn */                 A[a + i][b + j] = 1 , A[a + i][b - j] = 1;
/* RebDGUWCD ily traian dYgqOgvbn */         a += 2*(l - 1);
/* RebDGUWCD ily traian dYgqOgvbn */         for(int i = 0 ; i < l - 1 ; i++)
/* RebDGUWCD ily traian dYgqOgvbn */             for(int j = 0 ; j <= i ; j++)
/* RebDGUWCD ily traian dYgqOgvbn */                 A[a - i][b + j] = 1 , A[a - i][b - j] = 1;
/* RebDGUWCD ily traian dYgqOgvbn */     }
/* RebDGUWCD ily traian dYgqOgvbn */     for(int i = 1 ; i <= n ; i++)
/* RebDGUWCD ily traian dYgqOgvbn */         for(int j = 1 ; j <= m ; j++)
/* RebDGUWCD ily traian dYgqOgvbn */             if(A[i][j] == 0) cnt++;
/* RebDGUWCD ily traian dYgqOgvbn */     cout << cnt;
/* RebDGUWCD ily traian dYgqOgvbn */     return 0;
/* RebDGUWCD ily traian dYgqOgvbn */ }