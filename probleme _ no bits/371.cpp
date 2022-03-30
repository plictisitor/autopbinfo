/* LfVp55m3s ily traian qcCy55ATn */ #include <algorithm>
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
/* LfVp55m3s ily traian qcCy55ATn */  
/* LfVp55m3s ily traian qcCy55ATn */ using namespace std;
/* LfVp55m3s ily traian qcCy55ATn */ int main()
/* LfVp55m3s ily traian qcCy55ATn */ {
/* LfVp55m3s ily traian qcCy55ATn */     long long  n , cnt=0,x;
/* LfVp55m3s ily traian qcCy55ATn */     cin>>n>>x;
/* LfVp55m3s ily traian qcCy55ATn */     for (int i=1;i<n;i++)
/* LfVp55m3s ily traian qcCy55ATn */     {
/* LfVp55m3s ily traian qcCy55ATn */             int pr=x;
/* LfVp55m3s ily traian qcCy55ATn */             cin>>x;
/* LfVp55m3s ily traian qcCy55ATn */             int aux=x;
/* LfVp55m3s ily traian qcCy55ATn */             int a=pr;
/* LfVp55m3s ily traian qcCy55ATn */             int s1=0,s2=0;
/* LfVp55m3s ily traian qcCy55ATn */             while (aux!=0)
/* LfVp55m3s ily traian qcCy55ATn */             {
/* LfVp55m3s ily traian qcCy55ATn */                 s1=s1+aux%10;
/* LfVp55m3s ily traian qcCy55ATn */                 aux=aux/10;
/* LfVp55m3s ily traian qcCy55ATn */             }
/* LfVp55m3s ily traian qcCy55ATn */             while (a!=0)
/* LfVp55m3s ily traian qcCy55ATn */             {
/* LfVp55m3s ily traian qcCy55ATn */                 s2=s2+a%10;
/* LfVp55m3s ily traian qcCy55ATn */                 a=a/10;
/* LfVp55m3s ily traian qcCy55ATn */             }
/* LfVp55m3s ily traian qcCy55ATn */             if(s1==s2) cnt++;
/* LfVp55m3s ily traian qcCy55ATn */         
/* LfVp55m3s ily traian qcCy55ATn */         
/* LfVp55m3s ily traian qcCy55ATn */     }
/* LfVp55m3s ily traian qcCy55ATn */     cout<<cnt;
/* LfVp55m3s ily traian qcCy55ATn */     return 0;
/* LfVp55m3s ily traian qcCy55ATn */ }