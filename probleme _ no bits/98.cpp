/* nWpPmvvCS ily traian OqqQbxA72 */ #include <algorithm>
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
/* nWpPmvvCS ily traian OqqQbxA72 */ using namespace std;
/* nWpPmvvCS ily traian OqqQbxA72 */ ifstream fin("maxim4.in");
/* nWpPmvvCS ily traian OqqQbxA72 */ ofstream fout("maxim4.out");
/* nWpPmvvCS ily traian OqqQbxA72 */ int main()
/* nWpPmvvCS ily traian OqqQbxA72 */ {
/* nWpPmvvCS ily traian OqqQbxA72 */     int n,a[101],cnt=0,maxim=-1;
/* nWpPmvvCS ily traian OqqQbxA72 */     fin>>n;
/* nWpPmvvCS ily traian OqqQbxA72 */     for(int i=0;i<n;i++) fin>>a[i];
/* nWpPmvvCS ily traian OqqQbxA72 */     for(int i=0;i<n;i++)
/* nWpPmvvCS ily traian OqqQbxA72 */     {
/* nWpPmvvCS ily traian OqqQbxA72 */         if(a[i]>maxim)
/* nWpPmvvCS ily traian OqqQbxA72 */         {
/* nWpPmvvCS ily traian OqqQbxA72 */             maxim=a[i];
/* nWpPmvvCS ily traian OqqQbxA72 */             cnt=1;
/* nWpPmvvCS ily traian OqqQbxA72 */         }
/* nWpPmvvCS ily traian OqqQbxA72 */         else if(a[i]==maxim) cnt++;
/* nWpPmvvCS ily traian OqqQbxA72 */     }
/* nWpPmvvCS ily traian OqqQbxA72 */     fout<<maxim<< " "<<cnt;
/* nWpPmvvCS ily traian OqqQbxA72 */     return 0;
/* nWpPmvvCS ily traian OqqQbxA72 */ }