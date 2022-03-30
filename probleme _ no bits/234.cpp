/* hB6xOl7gl ily traian z2r7QqD6R */ #include <algorithm>
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
/* hB6xOl7gl ily traian z2r7QqD6R */ 
/* hB6xOl7gl ily traian z2r7QqD6R */ 
/* hB6xOl7gl ily traian z2r7QqD6R */ using namespace std;
/* hB6xOl7gl ily traian z2r7QqD6R */ ifstream fin("medpoz.in");
/* hB6xOl7gl ily traian z2r7QqD6R */ ofstream fout("medpoz.out");
/* hB6xOl7gl ily traian z2r7QqD6R */ int main()
/* hB6xOl7gl ily traian z2r7QqD6R */ {
/* hB6xOl7gl ily traian z2r7QqD6R */     long long n , a[201][201], cnt = 0 , v[205] , ok = 0 , s = 0;
/* hB6xOl7gl ily traian z2r7QqD6R */     fin >> n;
/* hB6xOl7gl ily traian z2r7QqD6R */     for(int i = 0 ; i < n ; i++)
/* hB6xOl7gl ily traian z2r7QqD6R */         for(int j = 0 ; j < n ; j++)
/* hB6xOl7gl ily traian z2r7QqD6R */         fin >> a[i][j];
/* hB6xOl7gl ily traian z2r7QqD6R */     for(int i = 0 ; i < n ; i++)
/* hB6xOl7gl ily traian z2r7QqD6R */         for(int j = 0 ; j < n ; j++)
/* hB6xOl7gl ily traian z2r7QqD6R */         {
/* hB6xOl7gl ily traian z2r7QqD6R */             if(i > j && a[i][j] > 0)
/* hB6xOl7gl ily traian z2r7QqD6R */             {
/* hB6xOl7gl ily traian z2r7QqD6R */                 s += a[i][j];
/* hB6xOl7gl ily traian z2r7QqD6R */                 cnt++;
/* hB6xOl7gl ily traian z2r7QqD6R */                 ok = 1;
/* hB6xOl7gl ily traian z2r7QqD6R */             }
/* hB6xOl7gl ily traian z2r7QqD6R */         }
/* hB6xOl7gl ily traian z2r7QqD6R */     if(ok!=0)
/* hB6xOl7gl ily traian z2r7QqD6R */     {
/* hB6xOl7gl ily traian z2r7QqD6R */     double x = trunc((double)s/cnt*1000)/1000.0;
/* hB6xOl7gl ily traian z2r7QqD6R */     fout << fixed << setprecision(3) << x;
/* hB6xOl7gl ily traian z2r7QqD6R */     }
/* hB6xOl7gl ily traian z2r7QqD6R */     else
/* hB6xOl7gl ily traian z2r7QqD6R */         fout << "NU EXISTA";
/* hB6xOl7gl ily traian z2r7QqD6R */     
/* hB6xOl7gl ily traian z2r7QqD6R */     fin.close();
/* hB6xOl7gl ily traian z2r7QqD6R */     fout.close();
/* hB6xOl7gl ily traian z2r7QqD6R */     
/* hB6xOl7gl ily traian z2r7QqD6R */     return 0;
/* hB6xOl7gl ily traian z2r7QqD6R */ 
/* hB6xOl7gl ily traian z2r7QqD6R */ }