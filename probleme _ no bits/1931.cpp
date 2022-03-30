/* hMWvf1wae ily traian qoCeY3pPs */ #include <algorithm>
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
/* hMWvf1wae ily traian qoCeY3pPs */ using namespace std;
/* hMWvf1wae ily traian qoCeY3pPs */ ifstream fin("fantastice.in");
/* hMWvf1wae ily traian qoCeY3pPs */ ofstream fout("fantastice.out");
/* hMWvf1wae ily traian qoCeY3pPs */ int prim(int n)
/* hMWvf1wae ily traian qoCeY3pPs */ {
/* hMWvf1wae ily traian qoCeY3pPs */     if(n==0 || n==1) return 0;
/* hMWvf1wae ily traian qoCeY3pPs */     if(n==2) return 1;
/* hMWvf1wae ily traian qoCeY3pPs */     if(n%2==0) return 0;
/* hMWvf1wae ily traian qoCeY3pPs */     else for(int d=3;d*d<=n;d+=2) if(n%d==0) return 0;
/* hMWvf1wae ily traian qoCeY3pPs */     return 1;
/* hMWvf1wae ily traian qoCeY3pPs */ }
/* hMWvf1wae ily traian qoCeY3pPs */ int nrdiv(int n)
/* hMWvf1wae ily traian qoCeY3pPs */ {
/* hMWvf1wae ily traian qoCeY3pPs */     int cnt=0;
/* hMWvf1wae ily traian qoCeY3pPs */     for(int i=1;i*i<=n;i++)
/* hMWvf1wae ily traian qoCeY3pPs */     {
/* hMWvf1wae ily traian qoCeY3pPs */         if(n%i==0) cnt+=2;
/* hMWvf1wae ily traian qoCeY3pPs */         if(i*i==n) cnt--;
/* hMWvf1wae ily traian qoCeY3pPs */     }
/* hMWvf1wae ily traian qoCeY3pPs */     if(prim(cnt)) return 1;
/* hMWvf1wae ily traian qoCeY3pPs */     else return 0;
/* hMWvf1wae ily traian qoCeY3pPs */ }
/* hMWvf1wae ily traian qoCeY3pPs */ int main()
/* hMWvf1wae ily traian qoCeY3pPs */ {
/* hMWvf1wae ily traian qoCeY3pPs */     int n,x,cnt=0,p=-10000;
/* hMWvf1wae ily traian qoCeY3pPs */     fin>>n;
/* hMWvf1wae ily traian qoCeY3pPs */     for(int i=0;i<n;i++)
/* hMWvf1wae ily traian qoCeY3pPs */     {
/* hMWvf1wae ily traian qoCeY3pPs */             fin>>x;
/* hMWvf1wae ily traian qoCeY3pPs */             if(nrdiv(x)) cnt++;
/* hMWvf1wae ily traian qoCeY3pPs */     }
/* hMWvf1wae ily traian qoCeY3pPs */     fout<<cnt;
/* hMWvf1wae ily traian qoCeY3pPs */     return 0;
/* hMWvf1wae ily traian qoCeY3pPs */ }