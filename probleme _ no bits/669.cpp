/* LEtj78NvL ily traian wHdSV4t2O */ #include <algorithm>
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
/* LEtj78NvL ily traian wHdSV4t2O */ using namespace std;
/* LEtj78NvL ily traian wHdSV4t2O */ ifstream fin("lincol.in");
/* LEtj78NvL ily traian wHdSV4t2O */ ofstream fout("lincol.out");
/* LEtj78NvL ily traian wHdSV4t2O */ int main()
/* LEtj78NvL ily traian wHdSV4t2O */ {
/* LEtj78NvL ily traian wHdSV4t2O */     int v[101][101] , n , m , i , j , p;
/* LEtj78NvL ily traian wHdSV4t2O */     fin >> n >> m;
/* LEtj78NvL ily traian wHdSV4t2O */     for(i = 1 ; i <= n ; i++)
/* LEtj78NvL ily traian wHdSV4t2O */     {
/* LEtj78NvL ily traian wHdSV4t2O */         for(j = 1 ; j <= m ; j++)
/* LEtj78NvL ily traian wHdSV4t2O */             fin >> v[i][j];
/* LEtj78NvL ily traian wHdSV4t2O */     }
/* LEtj78NvL ily traian wHdSV4t2O */     fin >> p;
/* LEtj78NvL ily traian wHdSV4t2O */     char k;
/* LEtj78NvL ily traian wHdSV4t2O */     int a;
/* LEtj78NvL ily traian wHdSV4t2O */     for(int r = 1 ; r <= p ; r++)
/* LEtj78NvL ily traian wHdSV4t2O */     {
/* LEtj78NvL ily traian wHdSV4t2O */         fin >> k >> a;
/* LEtj78NvL ily traian wHdSV4t2O */         int s = 0;
/* LEtj78NvL ily traian wHdSV4t2O */         if(k == 'C')
/* LEtj78NvL ily traian wHdSV4t2O */             for(i = 1 ; i <= n ; i++) s += v[i][a];
/* LEtj78NvL ily traian wHdSV4t2O */         if(k == 'L')
/* LEtj78NvL ily traian wHdSV4t2O */             for(j = 1 ; j <= m ; j++) s += v[a][j];
/* LEtj78NvL ily traian wHdSV4t2O */         fout << s << endl;
/* LEtj78NvL ily traian wHdSV4t2O */     }
/* LEtj78NvL ily traian wHdSV4t2O */     return 0;
/* LEtj78NvL ily traian wHdSV4t2O */ }