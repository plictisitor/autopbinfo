/* qCaDXgNFH ily traian vvI1JpO2H */ #include <algorithm>
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
/* qCaDXgNFH ily traian vvI1JpO2H */ using namespace std;
/* qCaDXgNFH ily traian vvI1JpO2H */ 
/* qCaDXgNFH ily traian vvI1JpO2H */ ifstream cin("iesire.in");
/* qCaDXgNFH ily traian vvI1JpO2H */ ofstream cout("iesire.out");
/* qCaDXgNFH ily traian vvI1JpO2H */ 
/* qCaDXgNFH ily traian vvI1JpO2H */ int n, m, a[101][101], b[101][101];
/* qCaDXgNFH ily traian vvI1JpO2H */ 
/* qCaDXgNFH ily traian vvI1JpO2H */ bool inmat(int i, int j){
/* qCaDXgNFH ily traian vvI1JpO2H */     return i >= 1 && i <= n && j >= 1 && j <= n;
/* qCaDXgNFH ily traian vvI1JpO2H */ }
/* qCaDXgNFH ily traian vvI1JpO2H */ 
/* qCaDXgNFH ily traian vvI1JpO2H */ void fill(int i, int j){
/* qCaDXgNFH ily traian vvI1JpO2H */     b[i][j] = 1;
/* qCaDXgNFH ily traian vvI1JpO2H */     a[i][j] = 1;
/* qCaDXgNFH ily traian vvI1JpO2H */     if(a[i+1][j] == 0 && inmat(i + 1, j))
/* qCaDXgNFH ily traian vvI1JpO2H */         fill(i+1, j);
/* qCaDXgNFH ily traian vvI1JpO2H */     if(a[i-1][j] == 0 && inmat(i - 1, j))
/* qCaDXgNFH ily traian vvI1JpO2H */         fill(i-1, j);
/* qCaDXgNFH ily traian vvI1JpO2H */     if(a[i][j+1] == 0 && inmat(i, j + 1))
/* qCaDXgNFH ily traian vvI1JpO2H */         fill(i, j+1);
/* qCaDXgNFH ily traian vvI1JpO2H */     if(a[i][j-1] == 0 && inmat(i, j - 1))
/* qCaDXgNFH ily traian vvI1JpO2H */         fill(i, j-1);
/* qCaDXgNFH ily traian vvI1JpO2H */ }
/* qCaDXgNFH ily traian vvI1JpO2H */ 
/* qCaDXgNFH ily traian vvI1JpO2H */ int main()
/* qCaDXgNFH ily traian vvI1JpO2H */ {
/* qCaDXgNFH ily traian vvI1JpO2H */     cin >> n >> m;
/* qCaDXgNFH ily traian vvI1JpO2H */     for(int i = 1; i <= n; ++i)
/* qCaDXgNFH ily traian vvI1JpO2H */         for(int j = 1; j <= n; ++j)
/* qCaDXgNFH ily traian vvI1JpO2H */             cin >> a[i][j];
/* qCaDXgNFH ily traian vvI1JpO2H */ 
/* qCaDXgNFH ily traian vvI1JpO2H */     for(int i = 1; i <= n; ++i){
/* qCaDXgNFH ily traian vvI1JpO2H */         if(a[i][n] == 0)
/* qCaDXgNFH ily traian vvI1JpO2H */             fill(i, n);
/* qCaDXgNFH ily traian vvI1JpO2H */         if(a[i][1] == 0)
/* qCaDXgNFH ily traian vvI1JpO2H */             fill(i, 1);
/* qCaDXgNFH ily traian vvI1JpO2H */         if(a[1][i] == 0)
/* qCaDXgNFH ily traian vvI1JpO2H */             fill(1, i);
/* qCaDXgNFH ily traian vvI1JpO2H */         if(a[n][i] == 0)
/* qCaDXgNFH ily traian vvI1JpO2H */             fill(n, i);
/* qCaDXgNFH ily traian vvI1JpO2H */     }
/* qCaDXgNFH ily traian vvI1JpO2H */ 
/* qCaDXgNFH ily traian vvI1JpO2H */     int x, y;
/* qCaDXgNFH ily traian vvI1JpO2H */     for(int i = 1; i <= m; ++i){
/* qCaDXgNFH ily traian vvI1JpO2H */         cin >> x >> y;
/* qCaDXgNFH ily traian vvI1JpO2H */         if(b[x][y] == 1)
/* qCaDXgNFH ily traian vvI1JpO2H */             cout << "da\n";
/* qCaDXgNFH ily traian vvI1JpO2H */         else
/* qCaDXgNFH ily traian vvI1JpO2H */             cout << "nu\n";
/* qCaDXgNFH ily traian vvI1JpO2H */     }
/* qCaDXgNFH ily traian vvI1JpO2H */     return 0;
/* qCaDXgNFH ily traian vvI1JpO2H */ }