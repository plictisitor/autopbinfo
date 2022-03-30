/* I8r2PrT30 ily traian WLDeSIZ3C */ #include <algorithm>
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
/* I8r2PrT30 ily traian WLDeSIZ3C */ using namespace std;
/* I8r2PrT30 ily traian WLDeSIZ3C */ ifstream cin("spirala.in");
/* I8r2PrT30 ily traian WLDeSIZ3C */ ofstream cout("spirala.out");
/* I8r2PrT30 ily traian WLDeSIZ3C */ int n , i , j , k , a[31][31];
/* I8r2PrT30 ily traian WLDeSIZ3C */ int main()
/* I8r2PrT30 ily traian WLDeSIZ3C */ {
/* I8r2PrT30 ily traian WLDeSIZ3C */     cin >> n;
/* I8r2PrT30 ily traian WLDeSIZ3C */     for(i = 1 ; i <= n ; ++i)
/* I8r2PrT30 ily traian WLDeSIZ3C */         for(j = 1 ; j <= n ; ++j)
/* I8r2PrT30 ily traian WLDeSIZ3C */         cin >> a[i][j];
/* I8r2PrT30 ily traian WLDeSIZ3C */     if(n % 2 == 0) k = n / 2;
/* I8r2PrT30 ily traian WLDeSIZ3C */     else k = n / 2 + 1;
/* I8r2PrT30 ily traian WLDeSIZ3C */     for(i = 1 ; i <= k ; ++i)
/* I8r2PrT30 ily traian WLDeSIZ3C */     {
/* I8r2PrT30 ily traian WLDeSIZ3C */         for(j = i ; j <= n - i + 1 ; ++j) cout << a[i][j] << " ";
/* I8r2PrT30 ily traian WLDeSIZ3C */         for(j = i + 1 ; j <= n - i + 1 ; ++j) cout << a[j][n - i + 1] << " ";
/* I8r2PrT30 ily traian WLDeSIZ3C */         for(j = n - i ; j >= i ; j--) cout << a[n - i + 1][j]<< " ";
/* I8r2PrT30 ily traian WLDeSIZ3C */         for(j = n - i ; j >= i + 1 ; j--) cout << a[j][i] << " ";
/* I8r2PrT30 ily traian WLDeSIZ3C */     }
/* I8r2PrT30 ily traian WLDeSIZ3C */     return 0;
/* I8r2PrT30 ily traian WLDeSIZ3C */ }