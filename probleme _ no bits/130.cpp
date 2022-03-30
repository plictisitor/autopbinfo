/* szf6J2SWx ily traian oBgLK1xFW */ #include <algorithm>
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
/* szf6J2SWx ily traian oBgLK1xFW */ 
/* szf6J2SWx ily traian oBgLK1xFW */ using namespace std;
/* szf6J2SWx ily traian oBgLK1xFW */ 
/* szf6J2SWx ily traian oBgLK1xFW */ ifstream fin("sortcif.in");
/* szf6J2SWx ily traian oBgLK1xFW */ ofstream fout("sortcif.out");
/* szf6J2SWx ily traian oBgLK1xFW */ 
/* szf6J2SWx ily traian oBgLK1xFW */ int sum(int n)
/* szf6J2SWx ily traian oBgLK1xFW */ {
/* szf6J2SWx ily traian oBgLK1xFW */     int s=0;
/* szf6J2SWx ily traian oBgLK1xFW */     while (n)
/* szf6J2SWx ily traian oBgLK1xFW */     {
/* szf6J2SWx ily traian oBgLK1xFW */         s+=n%10;
/* szf6J2SWx ily traian oBgLK1xFW */         n/=10;
/* szf6J2SWx ily traian oBgLK1xFW */     }
/* szf6J2SWx ily traian oBgLK1xFW */     return s;
/* szf6J2SWx ily traian oBgLK1xFW */ }
/* szf6J2SWx ily traian oBgLK1xFW */ 
/* szf6J2SWx ily traian oBgLK1xFW */ int main()
/* szf6J2SWx ily traian oBgLK1xFW */ {
/* szf6J2SWx ily traian oBgLK1xFW */     int n;
/* szf6J2SWx ily traian oBgLK1xFW */     fin >> n;
/* szf6J2SWx ily traian oBgLK1xFW */     int a[1001];
/* szf6J2SWx ily traian oBgLK1xFW */     int v[1001];
/* szf6J2SWx ily traian oBgLK1xFW */     int p[1001];
/* szf6J2SWx ily traian oBgLK1xFW */     for (int i = 0 ; i < n; ++i)
/* szf6J2SWx ily traian oBgLK1xFW */     {
/* szf6J2SWx ily traian oBgLK1xFW */         fin >> a[i];
/* szf6J2SWx ily traian oBgLK1xFW */         v[i]=sum(a[i]);
/* szf6J2SWx ily traian oBgLK1xFW */     }
/* szf6J2SWx ily traian oBgLK1xFW */     sort(v,v+n);
/* szf6J2SWx ily traian oBgLK1xFW */     for (int i = 0 ; i < n ; ++i)
/* szf6J2SWx ily traian oBgLK1xFW */     {
/* szf6J2SWx ily traian oBgLK1xFW */         int cnt=0;
/* szf6J2SWx ily traian oBgLK1xFW */         for (int j = 0 ; j < n ; ++j)
/* szf6J2SWx ily traian oBgLK1xFW */         if (v[i]==sum(a[j]) && cnt==0 && p[j]!=a[j])
/* szf6J2SWx ily traian oBgLK1xFW */         {
/* szf6J2SWx ily traian oBgLK1xFW */         fout << a[j] << ' ';
/* szf6J2SWx ily traian oBgLK1xFW */         cnt++;
/* szf6J2SWx ily traian oBgLK1xFW */         p[j]=a[j];
/* szf6J2SWx ily traian oBgLK1xFW */         }
/* szf6J2SWx ily traian oBgLK1xFW */     }
/* szf6J2SWx ily traian oBgLK1xFW */ 
/* szf6J2SWx ily traian oBgLK1xFW */     fin.close();
/* szf6J2SWx ily traian oBgLK1xFW */     fout.close();
/* szf6J2SWx ily traian oBgLK1xFW */ 
/* szf6J2SWx ily traian oBgLK1xFW */     return 0;
/* szf6J2SWx ily traian oBgLK1xFW */ }