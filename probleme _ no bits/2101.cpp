/* Z7RbVNibu ily traian 8bLkFpAhA */ #include <algorithm>
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
/* Z7RbVNibu ily traian 8bLkFpAhA */ using namespace std;
/* Z7RbVNibu ily traian 8bLkFpAhA */ ifstream cin("traseu2.in");
/* Z7RbVNibu ily traian 8bLkFpAhA */ ofstream cout("traseu2.out");
/* Z7RbVNibu ily traian 8bLkFpAhA */ int main()
/* Z7RbVNibu ily traian 8bLkFpAhA */ {
/* Z7RbVNibu ily traian 8bLkFpAhA */     int n , v[101][101] , i1 , j1 , i = 0 , x , y , ok=0 , a , b;
/* Z7RbVNibu ily traian 8bLkFpAhA */     char c[300];
/* Z7RbVNibu ily traian 8bLkFpAhA */     cin >> n >> x >> y;
/* Z7RbVNibu ily traian 8bLkFpAhA */     for(int i = 1 ; i <= n ; ++i)
/* Z7RbVNibu ily traian 8bLkFpAhA */         for(int j = 1 ; j <= n ; ++j)
/* Z7RbVNibu ily traian 8bLkFpAhA */             cin >> v[i][j];
/* Z7RbVNibu ily traian 8bLkFpAhA */     cin >> c;
/* Z7RbVNibu ily traian 8bLkFpAhA */     while(c[i]!='\0' && ok==0)
/* Z7RbVNibu ily traian 8bLkFpAhA */     {
/* Z7RbVNibu ily traian 8bLkFpAhA */         if(c[i]=='N')
/* Z7RbVNibu ily traian 8bLkFpAhA */         {
/* Z7RbVNibu ily traian 8bLkFpAhA */             if(v[x-1][y]==0) x--;
/* Z7RbVNibu ily traian 8bLkFpAhA */             if(x<1) ok=1 , x++;
/* Z7RbVNibu ily traian 8bLkFpAhA */         }
/* Z7RbVNibu ily traian 8bLkFpAhA */         if(c[i]=='S')
/* Z7RbVNibu ily traian 8bLkFpAhA */         {
/* Z7RbVNibu ily traian 8bLkFpAhA */             if(v[x+1][y]==0) x++;
/* Z7RbVNibu ily traian 8bLkFpAhA */             if(x>n) ok=1 , x--;
/* Z7RbVNibu ily traian 8bLkFpAhA */         }
/* Z7RbVNibu ily traian 8bLkFpAhA */         if(c[i]=='E')
/* Z7RbVNibu ily traian 8bLkFpAhA */         {
/* Z7RbVNibu ily traian 8bLkFpAhA */             if(v[x][y+1]==0) y++;
/* Z7RbVNibu ily traian 8bLkFpAhA */             if(y>n) ok=1 , y--;
/* Z7RbVNibu ily traian 8bLkFpAhA */         }
/* Z7RbVNibu ily traian 8bLkFpAhA */         if(c[i]=='V')
/* Z7RbVNibu ily traian 8bLkFpAhA */         {
/* Z7RbVNibu ily traian 8bLkFpAhA */             if(v[x][y-1]==0) y--;
/* Z7RbVNibu ily traian 8bLkFpAhA */             if(y<1) ok=1 , y++;
/* Z7RbVNibu ily traian 8bLkFpAhA */         }
/* Z7RbVNibu ily traian 8bLkFpAhA */         i++;
/* Z7RbVNibu ily traian 8bLkFpAhA */     }
/* Z7RbVNibu ily traian 8bLkFpAhA */     cout <<x <<" "<<y;
/* Z7RbVNibu ily traian 8bLkFpAhA */ }