/* PLgDubbRu ily traian hvTATt3AC */ #include <algorithm>
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
/* PLgDubbRu ily traian hvTATt3AC */ using namespace std;
/* PLgDubbRu ily traian hvTATt3AC */ ifstream fin("accesibil.in");
/* PLgDubbRu ily traian hvTATt3AC */ ofstream fout("accesibil.out");
/* PLgDubbRu ily traian hvTATt3AC */ int accesibil(long long n);
/* PLgDubbRu ily traian hvTATt3AC */ int caccesibil(long long n);
/* PLgDubbRu ily traian hvTATt3AC */ int nrcifre(long long n);
/* PLgDubbRu ily traian hvTATt3AC */ int main()
/* PLgDubbRu ily traian hvTATt3AC */ {
/* PLgDubbRu ily traian hvTATt3AC */ 
/* PLgDubbRu ily traian hvTATt3AC */     int p,k,n;
/* PLgDubbRu ily traian hvTATt3AC */     fin >> p >> k >> n;
/* PLgDubbRu ily traian hvTATt3AC */     if(p == 1)
/* PLgDubbRu ily traian hvTATt3AC */     {
/* PLgDubbRu ily traian hvTATt3AC */         long long a = -1 , b=-1 , c = -1 , x;
/* PLgDubbRu ily traian hvTATt3AC */         for(int i = 1 ; i <= n ; ++i)
/* PLgDubbRu ily traian hvTATt3AC */         {
/* PLgDubbRu ily traian hvTATt3AC */             fin >> x;
/* PLgDubbRu ily traian hvTATt3AC */             if(accesibil(x) and x >= c)
/* PLgDubbRu ily traian hvTATt3AC */             {
/* PLgDubbRu ily traian hvTATt3AC */                 c = x;
/* PLgDubbRu ily traian hvTATt3AC */                 if(c >= b) swap(c,b);
/* PLgDubbRu ily traian hvTATt3AC */                 if(b >= a) swap(a,b);
/* PLgDubbRu ily traian hvTATt3AC */             }
/* PLgDubbRu ily traian hvTATt3AC */         }
/* PLgDubbRu ily traian hvTATt3AC */         fout << c << " " << b << " " << a;
/* PLgDubbRu ily traian hvTATt3AC */     }
/* PLgDubbRu ily traian hvTATt3AC */     if(p == 2)
/* PLgDubbRu ily traian hvTATt3AC */     {
/* PLgDubbRu ily traian hvTATt3AC */         int nr = 0;
/* PLgDubbRu ily traian hvTATt3AC */         long long x;
/* PLgDubbRu ily traian hvTATt3AC */         for(int i = 1 ; i <= n ; ++i)
/* PLgDubbRu ily traian hvTATt3AC */         {
/* PLgDubbRu ily traian hvTATt3AC */             fin >> x;
/* PLgDubbRu ily traian hvTATt3AC */             if(!accesibil(x) and caccesibil(x)) nr++;
/* PLgDubbRu ily traian hvTATt3AC */         }
/* PLgDubbRu ily traian hvTATt3AC */         fout << nr;
/* PLgDubbRu ily traian hvTATt3AC */     }
/* PLgDubbRu ily traian hvTATt3AC */     if(p == 3)
/* PLgDubbRu ily traian hvTATt3AC */     {
/* PLgDubbRu ily traian hvTATt3AC */         long long Min = 0 , Max = 0 , q = 1;
/* PLgDubbRu ily traian hvTATt3AC */         if(k == 9)
/* PLgDubbRu ily traian hvTATt3AC */             fout << 123456789;
/* PLgDubbRu ily traian hvTATt3AC */         else
/* PLgDubbRu ily traian hvTATt3AC */         {
/* PLgDubbRu ily traian hvTATt3AC */             for(int i = 1 ; i <= k ; i++)
/* PLgDubbRu ily traian hvTATt3AC */             {
/* PLgDubbRu ily traian hvTATt3AC */                 Min = Min * 10 + i;
/* PLgDubbRu ily traian hvTATt3AC */                 Max += (10-i)*q;
/* PLgDubbRu ily traian hvTATt3AC */                 q *= 10;
/* PLgDubbRu ily traian hvTATt3AC */             }
/* PLgDubbRu ily traian hvTATt3AC */             fout << Min << " " << Max;
/* PLgDubbRu ily traian hvTATt3AC */         }
/* PLgDubbRu ily traian hvTATt3AC */     }
/* PLgDubbRu ily traian hvTATt3AC */     if(p == 4)
/* PLgDubbRu ily traian hvTATt3AC */         fout << (5-(k+1)/2) << " " << (5-k/2);
/* PLgDubbRu ily traian hvTATt3AC */     return 0;
/* PLgDubbRu ily traian hvTATt3AC */ 
/* PLgDubbRu ily traian hvTATt3AC */ }
/* PLgDubbRu ily traian hvTATt3AC */ int accesibil(long long n)
/* PLgDubbRu ily traian hvTATt3AC */ {
/* PLgDubbRu ily traian hvTATt3AC */     if(n<10)
/* PLgDubbRu ily traian hvTATt3AC */         return 0;
/* PLgDubbRu ily traian hvTATt3AC */     int k=n%10,c;
/* PLgDubbRu ily traian hvTATt3AC */     while(n>9)
/* PLgDubbRu ily traian hvTATt3AC */     {
/* PLgDubbRu ily traian hvTATt3AC */         n/=10;
/* PLgDubbRu ily traian hvTATt3AC */         c=n%10;
/* PLgDubbRu ily traian hvTATt3AC */         if(c+1!=k)
/* PLgDubbRu ily traian hvTATt3AC */             return 0;
/* PLgDubbRu ily traian hvTATt3AC */         else
/* PLgDubbRu ily traian hvTATt3AC */             k=c;
/* PLgDubbRu ily traian hvTATt3AC */     }
/* PLgDubbRu ily traian hvTATt3AC */     return 1;
/* PLgDubbRu ily traian hvTATt3AC */ }
/* PLgDubbRu ily traian hvTATt3AC */ int caccesibil(long long n)
/* PLgDubbRu ily traian hvTATt3AC */ {
/* PLgDubbRu ily traian hvTATt3AC */     if(n<100)
/* PLgDubbRu ily traian hvTATt3AC */         return 0;
/* PLgDubbRu ily traian hvTATt3AC */     int nr=nrcifre(n);
/* PLgDubbRu ily traian hvTATt3AC */     for(;nr;nr--)
/* PLgDubbRu ily traian hvTATt3AC */     {
/* PLgDubbRu ily traian hvTATt3AC */         int q=0;
/* PLgDubbRu ily traian hvTATt3AC */         long long x=0,p=n,k=1;
/* PLgDubbRu ily traian hvTATt3AC */         while(p!=0)
/* PLgDubbRu ily traian hvTATt3AC */         {
/* PLgDubbRu ily traian hvTATt3AC */             q++;
/* PLgDubbRu ily traian hvTATt3AC */             if(q!=nr)
/* PLgDubbRu ily traian hvTATt3AC */             {
/* PLgDubbRu ily traian hvTATt3AC */                 x+=k*(p%10);
/* PLgDubbRu ily traian hvTATt3AC */                 k*=10;
/* PLgDubbRu ily traian hvTATt3AC */             }
/* PLgDubbRu ily traian hvTATt3AC */             p/=10;
/* PLgDubbRu ily traian hvTATt3AC */         }
/* PLgDubbRu ily traian hvTATt3AC */         if(accesibil(x))
/* PLgDubbRu ily traian hvTATt3AC */             return 1;
/* PLgDubbRu ily traian hvTATt3AC */     }
/* PLgDubbRu ily traian hvTATt3AC */     return 0;
/* PLgDubbRu ily traian hvTATt3AC */ }
/* PLgDubbRu ily traian hvTATt3AC */ int nrcifre(long long n)
/* PLgDubbRu ily traian hvTATt3AC */ {
/* PLgDubbRu ily traian hvTATt3AC */     if(n<10)
/* PLgDubbRu ily traian hvTATt3AC */         return 1;
/* PLgDubbRu ily traian hvTATt3AC */     int nr=0;
/* PLgDubbRu ily traian hvTATt3AC */     while(n!=0)
/* PLgDubbRu ily traian hvTATt3AC */     {
/* PLgDubbRu ily traian hvTATt3AC */         n/=10;
/* PLgDubbRu ily traian hvTATt3AC */         nr++;
/* PLgDubbRu ily traian hvTATt3AC */     }
/* PLgDubbRu ily traian hvTATt3AC */     return nr;
/* PLgDubbRu ily traian hvTATt3AC */ }