/* AvVwDjC44 ily traian aShTboQ4w */ #include <algorithm>
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
/* AvVwDjC44 ily traian aShTboQ4w */ using namespace std;
/* AvVwDjC44 ily traian aShTboQ4w */ ifstream fin("consecutive.in");
/* AvVwDjC44 ily traian aShTboQ4w */ ofstream fout("consecutive.out");
/* AvVwDjC44 ily traian aShTboQ4w */ 
/* AvVwDjC44 ily traian aShTboQ4w */ int D[1000001];
/* AvVwDjC44 ily traian aShTboQ4w */ 
/* AvVwDjC44 ily traian aShTboQ4w */ int nrdesc(int n)//doar pt verificare
/* AvVwDjC44 ily traian aShTboQ4w */ {
/* AvVwDjC44 ily traian aShTboQ4w */     int c=0;
/* AvVwDjC44 ily traian aShTboQ4w */     for(int k=2;k*(k+1)/2<=n;k++)
/* AvVwDjC44 ily traian aShTboQ4w */     {
/* AvVwDjC44 ily traian aShTboQ4w */         int s=k*(k+1)/2;
/* AvVwDjC44 ily traian aShTboQ4w */         int r=n-s;
/* AvVwDjC44 ily traian aShTboQ4w */         if(r>=0 && r%k==0)
/* AvVwDjC44 ily traian aShTboQ4w */             c++;
/* AvVwDjC44 ily traian aShTboQ4w */     }
/* AvVwDjC44 ily traian aShTboQ4w */     return c;
/* AvVwDjC44 ily traian aShTboQ4w */ }
/* AvVwDjC44 ily traian aShTboQ4w */ 
/* AvVwDjC44 ily traian aShTboQ4w */ void desc(int n)
/* AvVwDjC44 ily traian aShTboQ4w */ {
/* AvVwDjC44 ily traian aShTboQ4w */     for(int k=2;k*(k+1)/2<=n;k++)
/* AvVwDjC44 ily traian aShTboQ4w */     {
/* AvVwDjC44 ily traian aShTboQ4w */         int s=k*(k+1)/2;
/* AvVwDjC44 ily traian aShTboQ4w */         int r=n-s;
/* AvVwDjC44 ily traian aShTboQ4w */         if(r>=0 && r%k==0)
/* AvVwDjC44 ily traian aShTboQ4w */             fout<<k<<"\n";
/* AvVwDjC44 ily traian aShTboQ4w */     }
/* AvVwDjC44 ily traian aShTboQ4w */ }
/* AvVwDjC44 ily traian aShTboQ4w */ 
/* AvVwDjC44 ily traian aShTboQ4w */ int main()
/* AvVwDjC44 ily traian aShTboQ4w */ {
/* AvVwDjC44 ily traian aShTboQ4w */     int n,k=2;
/* AvVwDjC44 ily traian aShTboQ4w */     fin>>n;
/* AvVwDjC44 ily traian aShTboQ4w */     for(int i=2;i<=1000;i++) //similar cu ciurul lui Eratostene
/* AvVwDjC44 ily traian aShTboQ4w */             for(int j=i*(i+1)/2;j<=1000000;j=j+i)
/* AvVwDjC44 ily traian aShTboQ4w */                 D[j]++;
/* AvVwDjC44 ily traian aShTboQ4w */     while(D[k]!=n)
/* AvVwDjC44 ily traian aShTboQ4w */        k++;
/* AvVwDjC44 ily traian aShTboQ4w */     fout<<k<<endl;
/* AvVwDjC44 ily traian aShTboQ4w */     desc(k);
/* AvVwDjC44 ily traian aShTboQ4w */     return 0;
/* AvVwDjC44 ily traian aShTboQ4w */ }