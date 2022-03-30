/* QUkin93Dw ily traian w0cIhFGEx */ #include <algorithm>
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
/* QUkin93Dw ily traian w0cIhFGEx */ using namespace std;
/* QUkin93Dw ily traian w0cIhFGEx */ 
/* QUkin93Dw ily traian w0cIhFGEx */ ifstream cin("componenteconexe1.in");
/* QUkin93Dw ily traian w0cIhFGEx */ ofstream cout("componenteconexe1.out");
/* QUkin93Dw ily traian w0cIhFGEx */ 
/* QUkin93Dw ily traian w0cIhFGEx */ int n , m , x , y , a[101][101] , v[101] , nrc;
/* QUkin93Dw ily traian w0cIhFGEx */ 
/* QUkin93Dw ily traian w0cIhFGEx */ void dfs(int x , int val)
/* QUkin93Dw ily traian w0cIhFGEx */ {
/* QUkin93Dw ily traian w0cIhFGEx */     v[x] = val;
/* QUkin93Dw ily traian w0cIhFGEx */     for(int i = 1 ; i <= n ; i++)
/* QUkin93Dw ily traian w0cIhFGEx */         if(!v[i] && a[x][i] == 1) dfs(i , val) , v[i] = val;
/* QUkin93Dw ily traian w0cIhFGEx */ }
/* QUkin93Dw ily traian w0cIhFGEx */ 
/* QUkin93Dw ily traian w0cIhFGEx */ int main()
/* QUkin93Dw ily traian w0cIhFGEx */ {
/* QUkin93Dw ily traian w0cIhFGEx */     cin >> n;
/* QUkin93Dw ily traian w0cIhFGEx */     while(cin >> x >> y) a[x][y] = a[y][x] = 1 , m++;
/* QUkin93Dw ily traian w0cIhFGEx */ 
/* QUkin93Dw ily traian w0cIhFGEx */     for(int i = 1 ; i <= n ; i++)
/* QUkin93Dw ily traian w0cIhFGEx */         if(v[i] == 0) dfs(i , nrc + 1) , nrc++;
/* QUkin93Dw ily traian w0cIhFGEx */ 
/* QUkin93Dw ily traian w0cIhFGEx */     cout << nrc - 1 << '\n';
/* QUkin93Dw ily traian w0cIhFGEx */ 
/* QUkin93Dw ily traian w0cIhFGEx */     for(int i = 2 ; i <= nrc; i++)
/* QUkin93Dw ily traian w0cIhFGEx */     {
/* QUkin93Dw ily traian w0cIhFGEx */         int rez = 0;
/* QUkin93Dw ily traian w0cIhFGEx */         for(int j = 1 ; j <= n && rez == 0; j++)
/* QUkin93Dw ily traian w0cIhFGEx */             if(i == v[j]) rez = j;
/* QUkin93Dw ily traian w0cIhFGEx */         cout << 1 << " " << rez << " ";
/* QUkin93Dw ily traian w0cIhFGEx */     }
/* QUkin93Dw ily traian w0cIhFGEx */ }