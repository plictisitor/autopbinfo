/* P87XXAY2d ily traian FUqBow6Bm */ #include <algorithm>
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
/* P87XXAY2d ily traian FUqBow6Bm */ using namespace std;
/* P87XXAY2d ily traian FUqBow6Bm */ ifstream fin("ograda.in");
/* P87XXAY2d ily traian FUqBow6Bm */ ofstream fout("ograda.out");
/* P87XXAY2d ily traian FUqBow6Bm */ int par(int n)
/* P87XXAY2d ily traian FUqBow6Bm */ {
/* P87XXAY2d ily traian FUqBow6Bm */    int cnt = 0;
/* P87XXAY2d ily traian FUqBow6Bm */     for( unsigned long long  i = 1 ; i <= n ; ++i)
/* P87XXAY2d ily traian FUqBow6Bm */         {
/* P87XXAY2d ily traian FUqBow6Bm */             if(n % i == 0 && i % 2 ==0) cnt++;
/* P87XXAY2d ily traian FUqBow6Bm */         }
/* P87XXAY2d ily traian FUqBow6Bm */         return cnt;
/* P87XXAY2d ily traian FUqBow6Bm */ }
/* P87XXAY2d ily traian FUqBow6Bm */ int impar(int n)
/* P87XXAY2d ily traian FUqBow6Bm */ {
/* P87XXAY2d ily traian FUqBow6Bm */     int cnt = 0;
/* P87XXAY2d ily traian FUqBow6Bm */     for( unsigned long long  i = 1 ; i <=n ; ++i)
/* P87XXAY2d ily traian FUqBow6Bm */         {
/* P87XXAY2d ily traian FUqBow6Bm */             if(n % i == 0 && i % 2 ==1) cnt++;
/* P87XXAY2d ily traian FUqBow6Bm */         }
/* P87XXAY2d ily traian FUqBow6Bm */         return cnt;
/* P87XXAY2d ily traian FUqBow6Bm */ }
/* P87XXAY2d ily traian FUqBow6Bm */ int main()
/* P87XXAY2d ily traian FUqBow6Bm */ {
/* P87XXAY2d ily traian FUqBow6Bm */     unsigned long long c , p , g , v , cntc = 0 , cntp = 0 , x;
/* P87XXAY2d ily traian FUqBow6Bm */     fin >> x >> c >> p;
/* P87XXAY2d ily traian FUqBow6Bm */     g = (c * 4 - p) / 2;
/* P87XXAY2d ily traian FUqBow6Bm */     v =(p - c * 2) / 2;
/* P87XXAY2d ily traian FUqBow6Bm */     if(x == 1) fout << g << " " <<v;
/* P87XXAY2d ily traian FUqBow6Bm */     else if(x == 2)
/* P87XXAY2d ily traian FUqBow6Bm */     {
/* P87XXAY2d ily traian FUqBow6Bm */        fout << impar(c) << " " << par(p);
/* P87XXAY2d ily traian FUqBow6Bm */     }
/* P87XXAY2d ily traian FUqBow6Bm */ 
/* P87XXAY2d ily traian FUqBow6Bm */     fin.close();
/* P87XXAY2d ily traian FUqBow6Bm */     fout.close();
/* P87XXAY2d ily traian FUqBow6Bm */ 
/* P87XXAY2d ily traian FUqBow6Bm */     return 0;
/* P87XXAY2d ily traian FUqBow6Bm */ }