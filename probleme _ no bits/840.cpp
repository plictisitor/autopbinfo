/* w8l10h8KF ily traian 4t9efokym */ #include <algorithm>
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
/* w8l10h8KF ily traian 4t9efokym */ using namespace std;
/* w8l10h8KF ily traian 4t9efokym */ 
/* w8l10h8KF ily traian 4t9efokym */ ifstream cin("croco.in");
/* w8l10h8KF ily traian 4t9efokym */ ofstream cout("croco.out");
/* w8l10h8KF ily traian 4t9efokym */ 
/* w8l10h8KF ily traian 4t9efokym */ bool a[101][101];
/* w8l10h8KF ily traian 4t9efokym */ 
/* w8l10h8KF ily traian 4t9efokym */ int main()
/* w8l10h8KF ily traian 4t9efokym */ {
/* w8l10h8KF ily traian 4t9efokym */     int n , m;
/* w8l10h8KF ily traian 4t9efokym */     cin >> n >> m;
/* w8l10h8KF ily traian 4t9efokym */     for(int i = 0 ; i < n ; ++i)
/* w8l10h8KF ily traian 4t9efokym */         for(int j = 0 ; j < m ; ++j)
/* w8l10h8KF ily traian 4t9efokym */             cin >> a[i][j];
/* w8l10h8KF ily traian 4t9efokym */     for(int i = 0 ; i < n ; ++i)
/* w8l10h8KF ily traian 4t9efokym */     {
/* w8l10h8KF ily traian 4t9efokym */         for(int j = 0 ; j < m ; ++j)
/* w8l10h8KF ily traian 4t9efokym */         {
/* w8l10h8KF ily traian 4t9efokym */             if(a[i][j]==1 && (i + j) % 2 == 0)
/* w8l10h8KF ily traian 4t9efokym */                 cout << "C ";
/* w8l10h8KF ily traian 4t9efokym */             else if(a[i][j]==1)
/* w8l10h8KF ily traian 4t9efokym */                 cout << "E ";
/* w8l10h8KF ily traian 4t9efokym */             else
/* w8l10h8KF ily traian 4t9efokym */                 cout << "A ";
/* w8l10h8KF ily traian 4t9efokym */         }
/* w8l10h8KF ily traian 4t9efokym */         cout << endl;
/* w8l10h8KF ily traian 4t9efokym */     }
/* w8l10h8KF ily traian 4t9efokym */     return 0;    
/* w8l10h8KF ily traian 4t9efokym */ }