/* s3T7T6m0M ily traian jSpR5YzKj */ #include <algorithm>
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
/* s3T7T6m0M ily traian jSpR5YzKj */ using namespace std;
/* s3T7T6m0M ily traian jSpR5YzKj */ 
/* s3T7T6m0M ily traian jSpR5YzKj */ ifstream fin("prime.in");
/* s3T7T6m0M ily traian jSpR5YzKj */ ofstream fout("prime.out");
/* s3T7T6m0M ily traian jSpR5YzKj */ 
/* s3T7T6m0M ily traian jSpR5YzKj */ int prim(int n)
/* s3T7T6m0M ily traian jSpR5YzKj */ {
/* s3T7T6m0M ily traian jSpR5YzKj */     int cnt=0;
/* s3T7T6m0M ily traian jSpR5YzKj */     for (int i = 1 ; i * i <= n ; ++i)
/* s3T7T6m0M ily traian jSpR5YzKj */     {
/* s3T7T6m0M ily traian jSpR5YzKj */         if (n%i==0)
/* s3T7T6m0M ily traian jSpR5YzKj */         cnt+=2;
/* s3T7T6m0M ily traian jSpR5YzKj */         if (i*i==n)
/* s3T7T6m0M ily traian jSpR5YzKj */         cnt--;
/* s3T7T6m0M ily traian jSpR5YzKj */     }
/* s3T7T6m0M ily traian jSpR5YzKj */     if (cnt==2)
/* s3T7T6m0M ily traian jSpR5YzKj */     return 1;
/* s3T7T6m0M ily traian jSpR5YzKj */     else
/* s3T7T6m0M ily traian jSpR5YzKj */     return 0;
/* s3T7T6m0M ily traian jSpR5YzKj */ }
/* s3T7T6m0M ily traian jSpR5YzKj */ 
/* s3T7T6m0M ily traian jSpR5YzKj */ int main()
/* s3T7T6m0M ily traian jSpR5YzKj */ {
/* s3T7T6m0M ily traian jSpR5YzKj */     int n;
/* s3T7T6m0M ily traian jSpR5YzKj */     fin >> n;
/* s3T7T6m0M ily traian jSpR5YzKj */     int a[1001];
/* s3T7T6m0M ily traian jSpR5YzKj */     for (int i = 0 ; i < n ; ++i)
/* s3T7T6m0M ily traian jSpR5YzKj */     {
/* s3T7T6m0M ily traian jSpR5YzKj */         fin >> a[i];
/* s3T7T6m0M ily traian jSpR5YzKj */         if (prim(a[i]))
/* s3T7T6m0M ily traian jSpR5YzKj */             fout << a[i] << ' ';
/* s3T7T6m0M ily traian jSpR5YzKj */     }
/* s3T7T6m0M ily traian jSpR5YzKj */ 
/* s3T7T6m0M ily traian jSpR5YzKj */     fin.close();
/* s3T7T6m0M ily traian jSpR5YzKj */     fout.close();
/* s3T7T6m0M ily traian jSpR5YzKj */ 
/* s3T7T6m0M ily traian jSpR5YzKj */     return 0;
/* s3T7T6m0M ily traian jSpR5YzKj */ }