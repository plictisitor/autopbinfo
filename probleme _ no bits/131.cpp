/* Sds8GMrXd ily traian Wsn3bWuRo */ #include <algorithm>
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
/* Sds8GMrXd ily traian Wsn3bWuRo */ 
/* Sds8GMrXd ily traian Wsn3bWuRo */ using namespace std;
/* Sds8GMrXd ily traian Wsn3bWuRo */ 
/* Sds8GMrXd ily traian Wsn3bWuRo */ ifstream fin("sortcif2.in");
/* Sds8GMrXd ily traian Wsn3bWuRo */ ofstream fout("sortcif2.out");
/* Sds8GMrXd ily traian Wsn3bWuRo */ 
/* Sds8GMrXd ily traian Wsn3bWuRo */ int sum(int n)
/* Sds8GMrXd ily traian Wsn3bWuRo */ {
/* Sds8GMrXd ily traian Wsn3bWuRo */     int c=0;
/* Sds8GMrXd ily traian Wsn3bWuRo */     while (n)
/* Sds8GMrXd ily traian Wsn3bWuRo */     {
/* Sds8GMrXd ily traian Wsn3bWuRo */         c=n%10;
/* Sds8GMrXd ily traian Wsn3bWuRo */         n/=10;
/* Sds8GMrXd ily traian Wsn3bWuRo */     }
/* Sds8GMrXd ily traian Wsn3bWuRo */     return c;
/* Sds8GMrXd ily traian Wsn3bWuRo */ }
/* Sds8GMrXd ily traian Wsn3bWuRo */ 
/* Sds8GMrXd ily traian Wsn3bWuRo */ int main()
/* Sds8GMrXd ily traian Wsn3bWuRo */ {
/* Sds8GMrXd ily traian Wsn3bWuRo */     int n;
/* Sds8GMrXd ily traian Wsn3bWuRo */     fin >> n;
/* Sds8GMrXd ily traian Wsn3bWuRo */     int a[1001];
/* Sds8GMrXd ily traian Wsn3bWuRo */     int v[1001];
/* Sds8GMrXd ily traian Wsn3bWuRo */     int p[1001];
/* Sds8GMrXd ily traian Wsn3bWuRo */     for (int i = 0 ; i < n; ++i)
/* Sds8GMrXd ily traian Wsn3bWuRo */     {
/* Sds8GMrXd ily traian Wsn3bWuRo */         fin >> a[i];
/* Sds8GMrXd ily traian Wsn3bWuRo */         v[i]=sum(a[i]);
/* Sds8GMrXd ily traian Wsn3bWuRo */     }
/* Sds8GMrXd ily traian Wsn3bWuRo */     sort(v,v+n);
/* Sds8GMrXd ily traian Wsn3bWuRo */     for (int i = 0 ; i < n ; ++i)
/* Sds8GMrXd ily traian Wsn3bWuRo */     {
/* Sds8GMrXd ily traian Wsn3bWuRo */         int cnt=0;
/* Sds8GMrXd ily traian Wsn3bWuRo */         for (int j = 0 ; j < n ; ++j)
/* Sds8GMrXd ily traian Wsn3bWuRo */         if (v[i]==sum(a[j]) && cnt==0 && p[j]!=a[j])
/* Sds8GMrXd ily traian Wsn3bWuRo */         {
/* Sds8GMrXd ily traian Wsn3bWuRo */         fout << a[j] << ' ';
/* Sds8GMrXd ily traian Wsn3bWuRo */         cnt++;
/* Sds8GMrXd ily traian Wsn3bWuRo */         p[j]=a[j];
/* Sds8GMrXd ily traian Wsn3bWuRo */         }
/* Sds8GMrXd ily traian Wsn3bWuRo */     }
/* Sds8GMrXd ily traian Wsn3bWuRo */     
/* Sds8GMrXd ily traian Wsn3bWuRo */     fin.close();
/* Sds8GMrXd ily traian Wsn3bWuRo */     fout.close();
/* Sds8GMrXd ily traian Wsn3bWuRo */     
/* Sds8GMrXd ily traian Wsn3bWuRo */     return 0;
/* Sds8GMrXd ily traian Wsn3bWuRo */ }