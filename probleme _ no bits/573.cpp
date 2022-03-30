/* w0OH79qon ily traian kalajuB5h */ #include <algorithm>
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
/* w0OH79qon ily traian kalajuB5h */ using namespace std;
/* w0OH79qon ily traian kalajuB5h */ 
/* w0OH79qon ily traian kalajuB5h */ int n , m , x , y , ok;
/* w0OH79qon ily traian kalajuB5h */ 
/* w0OH79qon ily traian kalajuB5h */ struct poz
/* w0OH79qon ily traian kalajuB5h */ {
/* w0OH79qon ily traian kalajuB5h */     int i , j;
/* w0OH79qon ily traian kalajuB5h */ }f[101];
/* w0OH79qon ily traian kalajuB5h */ 
/* w0OH79qon ily traian kalajuB5h */ int main()
/* w0OH79qon ily traian kalajuB5h */ {
/* w0OH79qon ily traian kalajuB5h */     cin >> n >> m;
/* w0OH79qon ily traian kalajuB5h */     for(int i = 1 ; i <= m ; i++)
/* w0OH79qon ily traian kalajuB5h */     {
/* w0OH79qon ily traian kalajuB5h */         cin >> x >> y;
/* w0OH79qon ily traian kalajuB5h */         f[x].i++; f[y].j++;
/* w0OH79qon ily traian kalajuB5h */     }
/* w0OH79qon ily traian kalajuB5h */     for(int i = 1 ; i <= n ; i++)
/* w0OH79qon ily traian kalajuB5h */         if(f[i].i == f[i].j)ok++;
/* w0OH79qon ily traian kalajuB5h */     if(ok == 0) cout << "NU EXISTA";
/* w0OH79qon ily traian kalajuB5h */     else
/* w0OH79qon ily traian kalajuB5h */     {
/* w0OH79qon ily traian kalajuB5h */         cout << ok << '\n';
/* w0OH79qon ily traian kalajuB5h */         for(int i = 1 ; i <= n ; i++)
/* w0OH79qon ily traian kalajuB5h */         if(f[i].i == f[i].j) cout << i << " ";
/* w0OH79qon ily traian kalajuB5h */     }
/* w0OH79qon ily traian kalajuB5h */ }