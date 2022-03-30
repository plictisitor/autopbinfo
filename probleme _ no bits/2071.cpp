/* R6SbHY9QM ily traian 7kZJCVPjd */ #include <algorithm>
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
/* R6SbHY9QM ily traian 7kZJCVPjd */ 
/* R6SbHY9QM ily traian 7kZJCVPjd */ 
/* R6SbHY9QM ily traian 7kZJCVPjd */ #define MOD 1000003
/* R6SbHY9QM ily traian 7kZJCVPjd */ 
/* R6SbHY9QM ily traian 7kZJCVPjd */ using namespace std;
/* R6SbHY9QM ily traian 7kZJCVPjd */ 
/* R6SbHY9QM ily traian 7kZJCVPjd */ ifstream fin("triunghiuri2.in");
/* R6SbHY9QM ily traian 7kZJCVPjd */ ofstream fout("triunghiuri2.out");
/* R6SbHY9QM ily traian 7kZJCVPjd */ 
/* R6SbHY9QM ily traian 7kZJCVPjd */ int x[1005],n,v,i,a,b,k;
/* R6SbHY9QM ily traian 7kZJCVPjd */ long long t, aux1, aux2, aux,aux3;
/* R6SbHY9QM ily traian 7kZJCVPjd */ vector <int> Y[1005];
/* R6SbHY9QM ily traian 7kZJCVPjd */ vector <int> :: iterator it;
/* R6SbHY9QM ily traian 7kZJCVPjd */ 
/* R6SbHY9QM ily traian 7kZJCVPjd */ int main()
/* R6SbHY9QM ily traian 7kZJCVPjd */ { 
/* R6SbHY9QM ily traian 7kZJCVPjd */     fin>>v>>n;
/* R6SbHY9QM ily traian 7kZJCVPjd */     for(i=1;i<=n;++i)
/* R6SbHY9QM ily traian 7kZJCVPjd */     { 
/* R6SbHY9QM ily traian 7kZJCVPjd */         fin>>a>>b;
/* R6SbHY9QM ily traian 7kZJCVPjd */         x[a]++;
/* R6SbHY9QM ily traian 7kZJCVPjd */         Y[b].push_back(a);
/* R6SbHY9QM ily traian 7kZJCVPjd */     }
/* R6SbHY9QM ily traian 7kZJCVPjd */     if(v==1) 
/* R6SbHY9QM ily traian 7kZJCVPjd */     {
/* R6SbHY9QM ily traian 7kZJCVPjd */         a=x[0];
/* R6SbHY9QM ily traian 7kZJCVPjd */         for(i=0;i<=999;++i) if(x[i]>a)a=x[i];
/* R6SbHY9QM ily traian 7kZJCVPjd */         fout<<a<<'\n';
/* R6SbHY9QM ily traian 7kZJCVPjd */     }
/* R6SbHY9QM ily traian 7kZJCVPjd */     else
/* R6SbHY9QM ily traian 7kZJCVPjd */     { 
/* R6SbHY9QM ily traian 7kZJCVPjd */         for(i=0;i<=999;++i)
/* R6SbHY9QM ily traian 7kZJCVPjd */         { 
/* R6SbHY9QM ily traian 7kZJCVPjd */             k=Y[i].size();
/* R6SbHY9QM ily traian 7kZJCVPjd */             if(k>=2)
/* R6SbHY9QM ily traian 7kZJCVPjd */             {
/* R6SbHY9QM ily traian 7kZJCVPjd */                 aux1=n-k;
/* R6SbHY9QM ily traian 7kZJCVPjd */                 aux2=k*(k-1)/2;
/* R6SbHY9QM ily traian 7kZJCVPjd */                 aux=aux1*aux2;
/* R6SbHY9QM ily traian 7kZJCVPjd */                 for(it=Y[i].begin();it!=Y[i].end();++it)
/* R6SbHY9QM ily traian 7kZJCVPjd */                 {
/* R6SbHY9QM ily traian 7kZJCVPjd */                       aux3=x[*it]-1;
/* R6SbHY9QM ily traian 7kZJCVPjd */                       aux3=aux3*(k-1);
/* R6SbHY9QM ily traian 7kZJCVPjd */                       aux=aux-aux3;
/* R6SbHY9QM ily traian 7kZJCVPjd */                 }
/* R6SbHY9QM ily traian 7kZJCVPjd */             t=(t+aux)%MOD;
/* R6SbHY9QM ily traian 7kZJCVPjd */           }
/* R6SbHY9QM ily traian 7kZJCVPjd */         }
/* R6SbHY9QM ily traian 7kZJCVPjd */       fout<<t<<'\n';
/* R6SbHY9QM ily traian 7kZJCVPjd */     }
/* R6SbHY9QM ily traian 7kZJCVPjd */     fin.close();
/* R6SbHY9QM ily traian 7kZJCVPjd */     fout.close();
/* R6SbHY9QM ily traian 7kZJCVPjd */     return 0;
/* R6SbHY9QM ily traian 7kZJCVPjd */ }