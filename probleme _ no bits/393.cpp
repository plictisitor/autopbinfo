/* l5fDfziww ily traian XBtx4YD0v */ #include <algorithm>
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
/* l5fDfziww ily traian XBtx4YD0v */ using namespace std;
/* l5fDfziww ily traian XBtx4YD0v */ 
/* l5fDfziww ily traian XBtx4YD0v */ ifstream cin("cladire1.in");
/* l5fDfziww ily traian XBtx4YD0v */ ofstream cout("cladire1.out");
/* l5fDfziww ily traian XBtx4YD0v */ 
/* l5fDfziww ily traian XBtx4YD0v */ int n , m , k , a[1001][1001] , x , y;
/* l5fDfziww ily traian XBtx4YD0v */ 
/* l5fDfziww ily traian XBtx4YD0v */ int main()
/* l5fDfziww ily traian XBtx4YD0v */ {
/* l5fDfziww ily traian XBtx4YD0v */     cin >> n >> m >> k;
/* l5fDfziww ily traian XBtx4YD0v */ 
/* l5fDfziww ily traian XBtx4YD0v */     for(int i = 1 ; i <= k ; i++)
/* l5fDfziww ily traian XBtx4YD0v */     {
/* l5fDfziww ily traian XBtx4YD0v */         cin >> x >> y;
/* l5fDfziww ily traian XBtx4YD0v */         a[x][y] = -1;
/* l5fDfziww ily traian XBtx4YD0v */     }
/* l5fDfziww ily traian XBtx4YD0v */ 
/* l5fDfziww ily traian XBtx4YD0v */     for(int i = 1 ; i <= n ; i++)
/* l5fDfziww ily traian XBtx4YD0v */         for(int j = 1 ; j <= m ; j++)
/* l5fDfziww ily traian XBtx4YD0v */             if(i == 1 && j == 1) a[i][j] = 1;
/* l5fDfziww ily traian XBtx4YD0v */             else if(a[i][j] != -1)
/* l5fDfziww ily traian XBtx4YD0v */                 a[i][j] = (a[i][j] + max(a[i - 1][j] , 0) + max(a[i][j - 1] , 0)) % 9901;
/* l5fDfziww ily traian XBtx4YD0v */ 
/* l5fDfziww ily traian XBtx4YD0v */     cout << a[n][m];
/* l5fDfziww ily traian XBtx4YD0v */ }