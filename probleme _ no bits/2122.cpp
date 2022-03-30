/* qelKMnTGl ily traian 8KVquwHRD */ #include <algorithm>
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
/* qelKMnTGl ily traian 8KVquwHRD */ using namespace std;
/* qelKMnTGl ily traian 8KVquwHRD */ ifstream fin("diferenta.in");
/* qelKMnTGl ily traian 8KVquwHRD */ ofstream fout("diferenta.out");
/* qelKMnTGl ily traian 8KVquwHRD */ int main()
/* qelKMnTGl ily traian 8KVquwHRD */ {
/* qelKMnTGl ily traian 8KVquwHRD */     int n , m , a[102][102] , cnt;
/* qelKMnTGl ily traian 8KVquwHRD */     fin >> n >> m;
/* qelKMnTGl ily traian 8KVquwHRD */     for(int i = 1 ;i <= n ; ++i)
/* qelKMnTGl ily traian 8KVquwHRD */     {
/* qelKMnTGl ily traian 8KVquwHRD */         for(int j = 1 ; j <= m ; ++j) fin >> a[i][j];
/* qelKMnTGl ily traian 8KVquwHRD */     }
/* qelKMnTGl ily traian 8KVquwHRD */     for(int i = 1 ;i <= n ; ++i)
/* qelKMnTGl ily traian 8KVquwHRD */     {
/* qelKMnTGl ily traian 8KVquwHRD */         for(int j = 1 ; j <= m ; ++j)
/* qelKMnTGl ily traian 8KVquwHRD */         {
/* qelKMnTGl ily traian 8KVquwHRD */             cnt = 0;
/* qelKMnTGl ily traian 8KVquwHRD */             for(int d = 1; d * d <= a[i][j] ; ++d)
/* qelKMnTGl ily traian 8KVquwHRD */             {
/* qelKMnTGl ily traian 8KVquwHRD */                 if((a[i][j]%d == 0 && (d+a[i][j]/d)%2==0)) cnt++;
/* qelKMnTGl ily traian 8KVquwHRD */             }
/* qelKMnTGl ily traian 8KVquwHRD */             fout<<cnt << " ";
/* qelKMnTGl ily traian 8KVquwHRD */         }
/* qelKMnTGl ily traian 8KVquwHRD */         fout<<endl;
/* qelKMnTGl ily traian 8KVquwHRD */     }
/* qelKMnTGl ily traian 8KVquwHRD */ 
/* qelKMnTGl ily traian 8KVquwHRD */     fin.close();
/* qelKMnTGl ily traian 8KVquwHRD */     fout.close();
/* qelKMnTGl ily traian 8KVquwHRD */ 
/* qelKMnTGl ily traian 8KVquwHRD */     return 0;
/* qelKMnTGl ily traian 8KVquwHRD */ }