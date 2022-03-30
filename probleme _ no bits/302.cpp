/* DQPQcrLtX ily traian gnVvE7bbR */ #include <algorithm>
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
/* DQPQcrLtX ily traian gnVvE7bbR */ using namespace std;
/* DQPQcrLtX ily traian gnVvE7bbR */ 
/* DQPQcrLtX ily traian gnVvE7bbR */ ifstream fin("cautaprim.in");
/* DQPQcrLtX ily traian gnVvE7bbR */ ofstream fout("cautaprim.out");
/* DQPQcrLtX ily traian gnVvE7bbR */ 
/* DQPQcrLtX ily traian gnVvE7bbR */ int prim(int n)
/* DQPQcrLtX ily traian gnVvE7bbR */ {
/* DQPQcrLtX ily traian gnVvE7bbR */     int cnt=1;
/* DQPQcrLtX ily traian gnVvE7bbR */     int d=2;
/* DQPQcrLtX ily traian gnVvE7bbR */     while(n>1)
/* DQPQcrLtX ily traian gnVvE7bbR */     {
/* DQPQcrLtX ily traian gnVvE7bbR */         int p=0;
/* DQPQcrLtX ily traian gnVvE7bbR */         while(n%d==0)
/* DQPQcrLtX ily traian gnVvE7bbR */         {
/* DQPQcrLtX ily traian gnVvE7bbR */             n/=d;
/* DQPQcrLtX ily traian gnVvE7bbR */             p++;
/* DQPQcrLtX ily traian gnVvE7bbR */         }
/* DQPQcrLtX ily traian gnVvE7bbR */         if(p>0)
/* DQPQcrLtX ily traian gnVvE7bbR */         {
/* DQPQcrLtX ily traian gnVvE7bbR */             cnt*=(p+1);    
/* DQPQcrLtX ily traian gnVvE7bbR */         }
/* DQPQcrLtX ily traian gnVvE7bbR */         d++;
/* DQPQcrLtX ily traian gnVvE7bbR */         if(d*d>n)
/* DQPQcrLtX ily traian gnVvE7bbR */         d=n;
/* DQPQcrLtX ily traian gnVvE7bbR */     }
/* DQPQcrLtX ily traian gnVvE7bbR */     if(cnt==2)
/* DQPQcrLtX ily traian gnVvE7bbR */     return 1;
/* DQPQcrLtX ily traian gnVvE7bbR */     else
/* DQPQcrLtX ily traian gnVvE7bbR */     return 0;
/* DQPQcrLtX ily traian gnVvE7bbR */ }
/* DQPQcrLtX ily traian gnVvE7bbR */ 
/* DQPQcrLtX ily traian gnVvE7bbR */ int main()
/* DQPQcrLtX ily traian gnVvE7bbR */ {
/* DQPQcrLtX ily traian gnVvE7bbR */     int n;
/* DQPQcrLtX ily traian gnVvE7bbR */     fin >> n;
/* DQPQcrLtX ily traian gnVvE7bbR */     int f[100]={0};
/* DQPQcrLtX ily traian gnVvE7bbR */     int cnt=0;
/* DQPQcrLtX ily traian gnVvE7bbR */     int tmp;
/* DQPQcrLtX ily traian gnVvE7bbR */     for(int i = 0 ; i < n ; ++i)
/* DQPQcrLtX ily traian gnVvE7bbR */     {
/* DQPQcrLtX ily traian gnVvE7bbR */         fin >> tmp;
/* DQPQcrLtX ily traian gnVvE7bbR */         f[tmp]++;
/* DQPQcrLtX ily traian gnVvE7bbR */     }
/* DQPQcrLtX ily traian gnVvE7bbR */     for(int i = 99 ; i > 0 ; --i)
/* DQPQcrLtX ily traian gnVvE7bbR */     {
/* DQPQcrLtX ily traian gnVvE7bbR */         if(f[i]==0 && prim(i))
/* DQPQcrLtX ily traian gnVvE7bbR */         {
/* DQPQcrLtX ily traian gnVvE7bbR */         fout << i << ' ';
/* DQPQcrLtX ily traian gnVvE7bbR */         cnt++;
/* DQPQcrLtX ily traian gnVvE7bbR */         break;
/* DQPQcrLtX ily traian gnVvE7bbR */         }
/* DQPQcrLtX ily traian gnVvE7bbR */     }
/* DQPQcrLtX ily traian gnVvE7bbR */     if(cnt==0)
/* DQPQcrLtX ily traian gnVvE7bbR */     {
/* DQPQcrLtX ily traian gnVvE7bbR */         fout << "NU EXISTA";    
/* DQPQcrLtX ily traian gnVvE7bbR */     }
/* DQPQcrLtX ily traian gnVvE7bbR */ }