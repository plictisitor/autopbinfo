/* l3zUK44Yj ily traian IM7SEz43T */ #include <algorithm>
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
/* l3zUK44Yj ily traian IM7SEz43T */ 
/* l3zUK44Yj ily traian IM7SEz43T */ 
/* l3zUK44Yj ily traian IM7SEz43T */ using namespace std;
/* l3zUK44Yj ily traian IM7SEz43T */ 
/* l3zUK44Yj ily traian IM7SEz43T */ ifstream cin ("criptare.in");
/* l3zUK44Yj ily traian IM7SEz43T */ ofstream cout ("criptare.out");
/* l3zUK44Yj ily traian IM7SEz43T */ 
/* l3zUK44Yj ily traian IM7SEz43T */ #define MAX 1010
/* l3zUK44Yj ily traian IM7SEz43T */ 
/* l3zUK44Yj ily traian IM7SEz43T */ int n, lin[MAX], col[MAX];
/* l3zUK44Yj ily traian IM7SEz43T */ bool a[MAX][MAX];
/* l3zUK44Yj ily traian IM7SEz43T */ 
/* l3zUK44Yj ily traian IM7SEz43T */ vector<int> L, C;
/* l3zUK44Yj ily traian IM7SEz43T */ int main()
/* l3zUK44Yj ily traian IM7SEz43T */ {
/* l3zUK44Yj ily traian IM7SEz43T */     cin >> n;
/* l3zUK44Yj ily traian IM7SEz43T */     for (int i = 1; i <= n; i ++)
/* l3zUK44Yj ily traian IM7SEz43T */         for (int j = 1; j <= n; j ++)
/* l3zUK44Yj ily traian IM7SEz43T */         {
/* l3zUK44Yj ily traian IM7SEz43T */             cin >> a[i][j];
/* l3zUK44Yj ily traian IM7SEz43T */             lin[i] = lin[i] || a[i][j];
/* l3zUK44Yj ily traian IM7SEz43T */             col[j] = col[j] || a[i][j];
/* l3zUK44Yj ily traian IM7SEz43T */         }
/* l3zUK44Yj ily traian IM7SEz43T */ 
/* l3zUK44Yj ily traian IM7SEz43T */     for (int i = 1; i <= n; i ++)
/* l3zUK44Yj ily traian IM7SEz43T */     {
/* l3zUK44Yj ily traian IM7SEz43T */         if (lin[i] == 0)L.push_back(i);
/* l3zUK44Yj ily traian IM7SEz43T */         if (col[i] == 0)C.push_back(i);
/* l3zUK44Yj ily traian IM7SEz43T */     }
/* l3zUK44Yj ily traian IM7SEz43T */ 
/* l3zUK44Yj ily traian IM7SEz43T */     cout << max(L.size(), C.size()) << '\n';
/* l3zUK44Yj ily traian IM7SEz43T */ 
/* l3zUK44Yj ily traian IM7SEz43T */     int mn = min(L.size(), C.size());
/* l3zUK44Yj ily traian IM7SEz43T */     for (int i = 0; i < mn; i ++)
/* l3zUK44Yj ily traian IM7SEz43T */         cout << L[i] << ' ' << C[i] << '\n';
/* l3zUK44Yj ily traian IM7SEz43T */ 
/* l3zUK44Yj ily traian IM7SEz43T */     if (L.size() > C.size())
/* l3zUK44Yj ily traian IM7SEz43T */         for (int i = mn; i < L.size(); i ++)
/* l3zUK44Yj ily traian IM7SEz43T */             cout << L[i] << ' ' << 1 << '\n';
/* l3zUK44Yj ily traian IM7SEz43T */     else
/* l3zUK44Yj ily traian IM7SEz43T */         for (int i = mn; i < C.size(); i ++)
/* l3zUK44Yj ily traian IM7SEz43T */             cout << 1 << ' ' << C[i] << '\n';
/* l3zUK44Yj ily traian IM7SEz43T */     return 0;
/* l3zUK44Yj ily traian IM7SEz43T */ }