/* cnyPMSugy ily traian xG4Xedm1W */ #include <algorithm>
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
/* cnyPMSugy ily traian xG4Xedm1W */ using namespace std;
/* cnyPMSugy ily traian xG4Xedm1W */ 
/* cnyPMSugy ily traian xG4Xedm1W */ ifstream cin("conex.in");
/* cnyPMSugy ily traian xG4Xedm1W */ ofstream cout("conex.out");
/* cnyPMSugy ily traian xG4Xedm1W */ 
/* cnyPMSugy ily traian xG4Xedm1W */ int n , m , x , y , a[101][101] , ok , v[101];
/* cnyPMSugy ily traian xG4Xedm1W */ 
/* cnyPMSugy ily traian xG4Xedm1W */ void dfs(int x)
/* cnyPMSugy ily traian xG4Xedm1W */ {
/* cnyPMSugy ily traian xG4Xedm1W */     v[x] = 1;
/* cnyPMSugy ily traian xG4Xedm1W */     for(int i = 1 ; i <= n ; i++)
/* cnyPMSugy ily traian xG4Xedm1W */         if(!v[i] && a[x][i] == 1) dfs(i) , v[i] = 1;
/* cnyPMSugy ily traian xG4Xedm1W */ }
/* cnyPMSugy ily traian xG4Xedm1W */ 
/* cnyPMSugy ily traian xG4Xedm1W */ int main()
/* cnyPMSugy ily traian xG4Xedm1W */ {
/* cnyPMSugy ily traian xG4Xedm1W */     cin >> n;
/* cnyPMSugy ily traian xG4Xedm1W */     while(cin >> x >> y) a[x][y] = a[y][x] = 1 , m++;
/* cnyPMSugy ily traian xG4Xedm1W */ 
/* cnyPMSugy ily traian xG4Xedm1W */     dfs(1);
/* cnyPMSugy ily traian xG4Xedm1W */ 
/* cnyPMSugy ily traian xG4Xedm1W */     for(int i = 1 ; i <= n && !ok; i++)
/* cnyPMSugy ily traian xG4Xedm1W */         if(v[i] == 0) ok++;
/* cnyPMSugy ily traian xG4Xedm1W */     if(ok != 0) cout << "NU";
/* cnyPMSugy ily traian xG4Xedm1W */     else cout << "DA";
/* cnyPMSugy ily traian xG4Xedm1W */ }