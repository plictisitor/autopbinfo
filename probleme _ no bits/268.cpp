/* PStKZJPXI ily traian It9uYKrbx */ #include <algorithm>
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
/* PStKZJPXI ily traian It9uYKrbx */ using namespace std;
/* PStKZJPXI ily traian It9uYKrbx */ ifstream fin("divk.in");
/* PStKZJPXI ily traian It9uYKrbx */ ofstream fout("divk.out");
/* PStKZJPXI ily traian It9uYKrbx */ int main()
/* PStKZJPXI ily traian It9uYKrbx */ {
/* PStKZJPXI ily traian It9uYKrbx */     long long n,x,k;
/* PStKZJPXI ily traian It9uYKrbx */     fin>>n>>k;
/* PStKZJPXI ily traian It9uYKrbx */     for(int i=1;i<=n;i++)
/* PStKZJPXI ily traian It9uYKrbx */     {
/* PStKZJPXI ily traian It9uYKrbx */         fin>>x;
/* PStKZJPXI ily traian It9uYKrbx */         int cate=0;
/* PStKZJPXI ily traian It9uYKrbx */         long long aux=x;
/* PStKZJPXI ily traian It9uYKrbx */         for(int j=1;j*j<=x;j++)
/* PStKZJPXI ily traian It9uYKrbx */         {
/* PStKZJPXI ily traian It9uYKrbx */             if(x%j==0) cate+=2;
/* PStKZJPXI ily traian It9uYKrbx */             if(j*j==x) cate--;
/* PStKZJPXI ily traian It9uYKrbx */         }
/* PStKZJPXI ily traian It9uYKrbx */         if(cate>=k) fout<<aux<<" ";
/* PStKZJPXI ily traian It9uYKrbx */     }
/* PStKZJPXI ily traian It9uYKrbx */     return 0;
/* PStKZJPXI ily traian It9uYKrbx */ }