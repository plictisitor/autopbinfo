/* DU2SUtUbc ily traian NQBsiiOtv */ #include <algorithm>
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
/* DU2SUtUbc ily traian NQBsiiOtv */ 
/* DU2SUtUbc ily traian NQBsiiOtv */ 
/* DU2SUtUbc ily traian NQBsiiOtv */ using namespace std;
/* DU2SUtUbc ily traian NQBsiiOtv */ 
/* DU2SUtUbc ily traian NQBsiiOtv */ ifstream fin("oracol.in");
/* DU2SUtUbc ily traian NQBsiiOtv */ ofstream fout("oracol.out");
/* DU2SUtUbc ily traian NQBsiiOtv */ 
/* DU2SUtUbc ily traian NQBsiiOtv */ struct Edge 
/* DU2SUtUbc ily traian NQBsiiOtv */ {
/* DU2SUtUbc ily traian NQBsiiOtv */     int from, to, cost;
/* DU2SUtUbc ily traian NQBsiiOtv */     bool operator<(const Edge& e) const 
/* DU2SUtUbc ily traian NQBsiiOtv */     {
/* DU2SUtUbc ily traian NQBsiiOtv */         return cost < e.cost;
/* DU2SUtUbc ily traian NQBsiiOtv */     }
/* DU2SUtUbc ily traian NQBsiiOtv */ };
/* DU2SUtUbc ily traian NQBsiiOtv */ 
/* DU2SUtUbc ily traian NQBsiiOtv */ class DSU 
/* DU2SUtUbc ily traian NQBsiiOtv */ {
/* DU2SUtUbc ily traian NQBsiiOtv */ public:
/* DU2SUtUbc ily traian NQBsiiOtv */     DSU(int n):
/* DU2SUtUbc ily traian NQBsiiOtv */     f(n) 
/* DU2SUtUbc ily traian NQBsiiOtv */     {
/* DU2SUtUbc ily traian NQBsiiOtv */         for (int i = 0; i < n; ++i) 
/* DU2SUtUbc ily traian NQBsiiOtv */             f[i] = i;
/* DU2SUtUbc ily traian NQBsiiOtv */     }
/* DU2SUtUbc ily traian NQBsiiOtv */ 
/* DU2SUtUbc ily traian NQBsiiOtv */     int& operator[](int x) 
/* DU2SUtUbc ily traian NQBsiiOtv */     {
/* DU2SUtUbc ily traian NQBsiiOtv */         int y, p;
/* DU2SUtUbc ily traian NQBsiiOtv */         for (y = x; y != f[y]; y = f[y]);
/* DU2SUtUbc ily traian NQBsiiOtv */         for (; x != y; x = p) 
/* DU2SUtUbc ily traian NQBsiiOtv */         {
/* DU2SUtUbc ily traian NQBsiiOtv */             p = f[x];
/* DU2SUtUbc ily traian NQBsiiOtv */             f[x] = y;
/* DU2SUtUbc ily traian NQBsiiOtv */         }
/* DU2SUtUbc ily traian NQBsiiOtv */         return f[y];
/* DU2SUtUbc ily traian NQBsiiOtv */     }
/* DU2SUtUbc ily traian NQBsiiOtv */ private:
/* DU2SUtUbc ily traian NQBsiiOtv */     vector<int> f;
/* DU2SUtUbc ily traian NQBsiiOtv */ };
/* DU2SUtUbc ily traian NQBsiiOtv */ 
/* DU2SUtUbc ily traian NQBsiiOtv */ int main() 
/* DU2SUtUbc ily traian NQBsiiOtv */ {
/* DU2SUtUbc ily traian NQBsiiOtv */     int n;
/* DU2SUtUbc ily traian NQBsiiOtv */     fin >> n;
/* DU2SUtUbc ily traian NQBsiiOtv */ 
/* DU2SUtUbc ily traian NQBsiiOtv */     vector<Edge> edges;
/* DU2SUtUbc ily traian NQBsiiOtv */     for (int i = 0; i < n; ++i) 
/* DU2SUtUbc ily traian NQBsiiOtv */     {
/* DU2SUtUbc ily traian NQBsiiOtv */         for (int j = i + 1; j <= n; ++j)
/* DU2SUtUbc ily traian NQBsiiOtv */         {
/* DU2SUtUbc ily traian NQBsiiOtv */             int cost;
/* DU2SUtUbc ily traian NQBsiiOtv */             fin >> cost;
/* DU2SUtUbc ily traian NQBsiiOtv */             edges.push_back(Edge{i, j, cost});
/* DU2SUtUbc ily traian NQBsiiOtv */         }
/* DU2SUtUbc ily traian NQBsiiOtv */     }
/* DU2SUtUbc ily traian NQBsiiOtv */     sort(edges.begin(), edges.end());
/* DU2SUtUbc ily traian NQBsiiOtv */     DSU f(n + 1);
/* DU2SUtUbc ily traian NQBsiiOtv */     int64_t ans = 0;
/* DU2SUtUbc ily traian NQBsiiOtv */     for (const Edge& e: edges) 
/* DU2SUtUbc ily traian NQBsiiOtv */     {
/* DU2SUtUbc ily traian NQBsiiOtv */         if (f[e.from] != f[e.to]) 
/* DU2SUtUbc ily traian NQBsiiOtv */         {
/* DU2SUtUbc ily traian NQBsiiOtv */             ans += e.cost;
/* DU2SUtUbc ily traian NQBsiiOtv */             f[e.from] = f[e.to];
/* DU2SUtUbc ily traian NQBsiiOtv */         }
/* DU2SUtUbc ily traian NQBsiiOtv */     }
/* DU2SUtUbc ily traian NQBsiiOtv */     fout << ans << '\n';
/* DU2SUtUbc ily traian NQBsiiOtv */ }