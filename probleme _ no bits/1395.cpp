/* 5QLdLVQbL ily traian xCfLJWyd2 */ #include <algorithm>
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
/* 5QLdLVQbL ily traian xCfLJWyd2 */ using namespace std;
/* 5QLdLVQbL ily traian xCfLJWyd2 */ ifstream fin("msuma.in");
/* 5QLdLVQbL ily traian xCfLJWyd2 */ ofstream fout("msuma.out");
/* 5QLdLVQbL ily traian xCfLJWyd2 */ int a[101][101] , b[101][101] , c[101][101];
/* 5QLdLVQbL ily traian xCfLJWyd2 */ int main()
/* 5QLdLVQbL ily traian xCfLJWyd2 */ {
/* 5QLdLVQbL ily traian xCfLJWyd2 */     int n , m , p , q , max1 = 0 , max2 = 0;
/* 5QLdLVQbL ily traian xCfLJWyd2 */     fin >> n >> m;
/* 5QLdLVQbL ily traian xCfLJWyd2 */     for(int i = 1 ; i <= n ; i++)
/* 5QLdLVQbL ily traian xCfLJWyd2 */         for(int j = 1 ; j <= m ; j++)
/* 5QLdLVQbL ily traian xCfLJWyd2 */             fin >> a[i][j];
/* 5QLdLVQbL ily traian xCfLJWyd2 */     fin >> p >> q;
/* 5QLdLVQbL ily traian xCfLJWyd2 */     for(int i = 1 ; i <= p ; i++)
/* 5QLdLVQbL ily traian xCfLJWyd2 */         for(int j = 1 ; j <= q ; j++)
/* 5QLdLVQbL ily traian xCfLJWyd2 */             fin >> b[i][j];
/* 5QLdLVQbL ily traian xCfLJWyd2 */     if(n > p) max1 = n;
/* 5QLdLVQbL ily traian xCfLJWyd2 */     else max1 = p;
/* 5QLdLVQbL ily traian xCfLJWyd2 */     if(m > q) max2 = m;
/* 5QLdLVQbL ily traian xCfLJWyd2 */     else max2 = q;
/* 5QLdLVQbL ily traian xCfLJWyd2 */     for(int i = 1 ; i <= max1 ; i++)
/* 5QLdLVQbL ily traian xCfLJWyd2 */         for(int j = 1 ; j <= max2 ; j++)
/* 5QLdLVQbL ily traian xCfLJWyd2 */             c[i][j] = a[i][j] + b[i][j];
/* 5QLdLVQbL ily traian xCfLJWyd2 */     fout << max1 << " " << max2 <<endl;
/* 5QLdLVQbL ily traian xCfLJWyd2 */     for(int i = 1 ; i <= max1 ; i++)
/* 5QLdLVQbL ily traian xCfLJWyd2 */     {
/* 5QLdLVQbL ily traian xCfLJWyd2 */         for(int j = 1 ; j <= max2 ; j++)
/* 5QLdLVQbL ily traian xCfLJWyd2 */             fout << c[i][j] << " ";
/* 5QLdLVQbL ily traian xCfLJWyd2 */         fout<<endl;
/* 5QLdLVQbL ily traian xCfLJWyd2 */     }
/* 5QLdLVQbL ily traian xCfLJWyd2 */     return 0;
/* 5QLdLVQbL ily traian xCfLJWyd2 */ }