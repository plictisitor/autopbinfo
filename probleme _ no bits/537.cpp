/* Lkz8tqPW9 ily traian iL2DPnxYw */ #include <algorithm>
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
/* Lkz8tqPW9 ily traian iL2DPnxYw */ using namespace std;
/* Lkz8tqPW9 ily traian iL2DPnxYw */ 
/* Lkz8tqPW9 ily traian iL2DPnxYw */ ifstream cin("componenteconexe1.in");
/* Lkz8tqPW9 ily traian iL2DPnxYw */ ofstream cout("componenteconexe1.out");
/* Lkz8tqPW9 ily traian iL2DPnxYw */ 
/* Lkz8tqPW9 ily traian iL2DPnxYw */ int n , m , x , y , a[101][101] , v[101] , nrc;
/* Lkz8tqPW9 ily traian iL2DPnxYw */ 
/* Lkz8tqPW9 ily traian iL2DPnxYw */ void dfs(int x , int val)
/* Lkz8tqPW9 ily traian iL2DPnxYw */ {
/* Lkz8tqPW9 ily traian iL2DPnxYw */     v[x] = val;
/* Lkz8tqPW9 ily traian iL2DPnxYw */     for(int i = 1 ; i <= n ; i++)
/* Lkz8tqPW9 ily traian iL2DPnxYw */         if(!v[i] && a[x][i] == 1) dfs(i , val) , v[i] = val;
/* Lkz8tqPW9 ily traian iL2DPnxYw */ }
/* Lkz8tqPW9 ily traian iL2DPnxYw */ 
/* Lkz8tqPW9 ily traian iL2DPnxYw */ int main()
/* Lkz8tqPW9 ily traian iL2DPnxYw */ {
/* Lkz8tqPW9 ily traian iL2DPnxYw */     cin >> n;
/* Lkz8tqPW9 ily traian iL2DPnxYw */     while(cin >> x >> y) a[x][y] = a[y][x] = 1 , m++;
/* Lkz8tqPW9 ily traian iL2DPnxYw */ 
/* Lkz8tqPW9 ily traian iL2DPnxYw */     for(int i = 1 ; i <= n ; i++)
/* Lkz8tqPW9 ily traian iL2DPnxYw */         if(v[i] == 0) dfs(i , nrc + 1) , nrc++;
/* Lkz8tqPW9 ily traian iL2DPnxYw */ 
/* Lkz8tqPW9 ily traian iL2DPnxYw */     cout << nrc - 1 << '\n';
/* Lkz8tqPW9 ily traian iL2DPnxYw */ 
/* Lkz8tqPW9 ily traian iL2DPnxYw */     for(int i = 2 ; i <= nrc; i++)
/* Lkz8tqPW9 ily traian iL2DPnxYw */     {
/* Lkz8tqPW9 ily traian iL2DPnxYw */         int rez = 0;
/* Lkz8tqPW9 ily traian iL2DPnxYw */         for(int j = 1 ; j <= n && rez == 0; j++)
/* Lkz8tqPW9 ily traian iL2DPnxYw */             if(i == v[j]) rez = j;
/* Lkz8tqPW9 ily traian iL2DPnxYw */         cout << 1 << " " << rez << " ";
/* Lkz8tqPW9 ily traian iL2DPnxYw */     }
/* Lkz8tqPW9 ily traian iL2DPnxYw */ }