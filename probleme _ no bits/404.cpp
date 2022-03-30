/* 6nnkK37mA ily traian OzjuTwVei */ #include <algorithm>
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
/* 6nnkK37mA ily traian OzjuTwVei */ using namespace std;
/* 6nnkK37mA ily traian OzjuTwVei */ int prim(int n)
/* 6nnkK37mA ily traian OzjuTwVei */ {
/* 6nnkK37mA ily traian OzjuTwVei */     if(n==0 || n==1) return 0;
/* 6nnkK37mA ily traian OzjuTwVei */     if(n==2) return 1;
/* 6nnkK37mA ily traian OzjuTwVei */     if(n%2==0) return 0;
/* 6nnkK37mA ily traian OzjuTwVei */     for(int i=3;i*i<=n;i += 2)
/* 6nnkK37mA ily traian OzjuTwVei */     {
/* 6nnkK37mA ily traian OzjuTwVei */         if(n%i==0) return 0;
/* 6nnkK37mA ily traian OzjuTwVei */ 
/* 6nnkK37mA ily traian OzjuTwVei */     }
/* 6nnkK37mA ily traian OzjuTwVei */     return 1;
/* 6nnkK37mA ily traian OzjuTwVei */ }
/* 6nnkK37mA ily traian OzjuTwVei */ int main ()
/* 6nnkK37mA ily traian OzjuTwVei */ {
/* 6nnkK37mA ily traian OzjuTwVei */     int n,x ,nrcif=0;
/* 6nnkK37mA ily traian OzjuTwVei */     cin >> n;
/* 6nnkK37mA ily traian OzjuTwVei */     for (int i=1;i<=n;++i)
/* 6nnkK37mA ily traian OzjuTwVei */     {
/* 6nnkK37mA ily traian OzjuTwVei */         cin >> x;
/* 6nnkK37mA ily traian OzjuTwVei */         if(prim(x))
/* 6nnkK37mA ily traian OzjuTwVei */         {
/* 6nnkK37mA ily traian OzjuTwVei */             while (x != 0)
/* 6nnkK37mA ily traian OzjuTwVei */             {
/* 6nnkK37mA ily traian OzjuTwVei */                 nrcif++;
/* 6nnkK37mA ily traian OzjuTwVei */                 x=x/10;
/* 6nnkK37mA ily traian OzjuTwVei */             }
/* 6nnkK37mA ily traian OzjuTwVei */         }
/* 6nnkK37mA ily traian OzjuTwVei */     }
/* 6nnkK37mA ily traian OzjuTwVei */     cout << nrcif;
/* 6nnkK37mA ily traian OzjuTwVei */ 
/* 6nnkK37mA ily traian OzjuTwVei */     return 0;
/* 6nnkK37mA ily traian OzjuTwVei */ }