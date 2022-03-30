/* 9fGW52tgT ily traian MwGtyOyEw */ #include <algorithm>
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
/* 9fGW52tgT ily traian MwGtyOyEw */ using namespace std;
/* 9fGW52tgT ily traian MwGtyOyEw */ 
/* 9fGW52tgT ily traian MwGtyOyEw */ ifstream cin("joc2.in");
/* 9fGW52tgT ily traian MwGtyOyEw */ ofstream cout("joc2.out");
/* 9fGW52tgT ily traian MwGtyOyEw */ 
/* 9fGW52tgT ily traian MwGtyOyEw */ int n , m , a[105][105] , b[105][105];
/* 9fGW52tgT ily traian MwGtyOyEw */ 
/* 9fGW52tgT ily traian MwGtyOyEw */ int main()
/* 9fGW52tgT ily traian MwGtyOyEw */ {
/* 9fGW52tgT ily traian MwGtyOyEw */     cin >> n >> m;
/* 9fGW52tgT ily traian MwGtyOyEw */ 
/* 9fGW52tgT ily traian MwGtyOyEw */     for(int i = 1 ; i <= n ; i++)
/* 9fGW52tgT ily traian MwGtyOyEw */         for(int j = 1 ; j <= m ; j++)
/* 9fGW52tgT ily traian MwGtyOyEw */         {
/* 9fGW52tgT ily traian MwGtyOyEw */             cin >> a[i][j];
/* 9fGW52tgT ily traian MwGtyOyEw */             b[i][j] = a[i][j];
/* 9fGW52tgT ily traian MwGtyOyEw */         }
/* 9fGW52tgT ily traian MwGtyOyEw */     for(int i = n ; i > 0 ; i--)
/* 9fGW52tgT ily traian MwGtyOyEw */         for(int j = 1 ; j <= m ; j++)
/* 9fGW52tgT ily traian MwGtyOyEw */             a[i][j] += max(a[i][j - 1] , a[i + 1][j]);
/* 9fGW52tgT ily traian MwGtyOyEw */ 
/* 9fGW52tgT ily traian MwGtyOyEw */     for(int i = 1 ; i <= n ; i++)
/* 9fGW52tgT ily traian MwGtyOyEw */         for(int j = 1 ; j <= m ; j++)
/* 9fGW52tgT ily traian MwGtyOyEw */             b[i][j] += max(b[i - 1][j] , b[i][j - 1]);
/* 9fGW52tgT ily traian MwGtyOyEw */ 
/* 9fGW52tgT ily traian MwGtyOyEw */     if(b[n][m] > a[1][m]) cout << "1 " << b[n][m];
/* 9fGW52tgT ily traian MwGtyOyEw */     else if(b[n][m] < a[1][m]) cout << "2 " << a[1][m];
/* 9fGW52tgT ily traian MwGtyOyEw */     else cout << "3 " << a[1][m];
/* 9fGW52tgT ily traian MwGtyOyEw */ }