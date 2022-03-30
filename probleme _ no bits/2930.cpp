/* dKznVPquc ily traian htWQCuH0n */ #include <algorithm>
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
/* dKznVPquc ily traian htWQCuH0n */ using namespace std;
/* dKznVPquc ily traian htWQCuH0n */ 
/* dKznVPquc ily traian htWQCuH0n */ ifstream cin("nrecou.in");
/* dKznVPquc ily traian htWQCuH0n */ ofstream cout("nrecou.out");
/* dKznVPquc ily traian htWQCuH0n */ 
/* dKznVPquc ily traian htWQCuH0n */ int n , D[10000000] ; 
/* dKznVPquc ily traian htWQCuH0n */ long long nr , rez;
/* dKznVPquc ily traian htWQCuH0n */ 
/* dKznVPquc ily traian htWQCuH0n */ int main()
/* dKznVPquc ily traian htWQCuH0n */ {
/* dKznVPquc ily traian htWQCuH0n */     cin >> n;
/* dKznVPquc ily traian htWQCuH0n */     for(int d = 2 ; d <= n && n / d >= 2 ; d++)
/* dKznVPquc ily traian htWQCuH0n */         if(n % d == 0)
/* dKznVPquc ily traian htWQCuH0n */         {
/* dKznVPquc ily traian htWQCuH0n */             nr = 9;
/* dKznVPquc ily traian htWQCuH0n */             int x = d;
/* dKznVPquc ily traian htWQCuH0n */             for(int j = 1 ; j < x ; j++)
/* dKznVPquc ily traian htWQCuH0n */                 nr = (nr * 10) % 1000000017;
/* dKznVPquc ily traian htWQCuH0n */             for(int p = 2 ; p <= x / 2 ; p++)
/* dKznVPquc ily traian htWQCuH0n */             {
/* dKznVPquc ily traian htWQCuH0n */                 if(x % p == 0) nr -= D[p];
/* dKznVPquc ily traian htWQCuH0n */                 if(nr < 0) nr += 1000000017;
/* dKznVPquc ily traian htWQCuH0n */             }
/* dKznVPquc ily traian htWQCuH0n */             nr -= 9;
/* dKznVPquc ily traian htWQCuH0n */             if(nr < 0) nr += 1000000017;
/* dKznVPquc ily traian htWQCuH0n */             D[d] = nr % 1000000017;
/* dKznVPquc ily traian htWQCuH0n */             rez = (nr + rez) % 1000000017;
/* dKznVPquc ily traian htWQCuH0n */         }
/* dKznVPquc ily traian htWQCuH0n */     cout<<(rez+9)%1000000017;
/* dKznVPquc ily traian htWQCuH0n */     return 0;
/* dKznVPquc ily traian htWQCuH0n */ }