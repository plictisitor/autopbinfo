/* RJ9JynKE5 ily traian RUwGdZqip */ #include <algorithm>
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
/* RJ9JynKE5 ily traian RUwGdZqip */ using namespace std;
/* RJ9JynKE5 ily traian RUwGdZqip */ int prim(long long n)
/* RJ9JynKE5 ily traian RUwGdZqip */ {
/* RJ9JynKE5 ily traian RUwGdZqip */     long long d=2;
/* RJ9JynKE5 ily traian RUwGdZqip */     long long p;
/* RJ9JynKE5 ily traian RUwGdZqip */     while (n>1)
/* RJ9JynKE5 ily traian RUwGdZqip */     {
/* RJ9JynKE5 ily traian RUwGdZqip */         p=0;
/* RJ9JynKE5 ily traian RUwGdZqip */         while(n%d==0) {p++;n/=d;}
/* RJ9JynKE5 ily traian RUwGdZqip */         if(p>0) return d;
/* RJ9JynKE5 ily traian RUwGdZqip */         d++;
/* RJ9JynKE5 ily traian RUwGdZqip */         if(d*d>n) d=n;
/* RJ9JynKE5 ily traian RUwGdZqip */     }
/* RJ9JynKE5 ily traian RUwGdZqip */ }
/* RJ9JynKE5 ily traian RUwGdZqip */ int main()
/* RJ9JynKE5 ily traian RUwGdZqip */ {
/* RJ9JynKE5 ily traian RUwGdZqip */    long long n,x,s=0;
/* RJ9JynKE5 ily traian RUwGdZqip */     cin>>n;
/* RJ9JynKE5 ily traian RUwGdZqip */     for(int i=1;i<=n;i++)
/* RJ9JynKE5 ily traian RUwGdZqip */         {
/* RJ9JynKE5 ily traian RUwGdZqip */             cin>>x;
/* RJ9JynKE5 ily traian RUwGdZqip */             s=s+prim(x);
/* RJ9JynKE5 ily traian RUwGdZqip */         }
/* RJ9JynKE5 ily traian RUwGdZqip */         cout<<s;
/* RJ9JynKE5 ily traian RUwGdZqip */     return 0;
/* RJ9JynKE5 ily traian RUwGdZqip */ }