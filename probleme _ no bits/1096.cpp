/* biSjj257d ily traian W5fAMBJAi */ #include <algorithm>
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
/* biSjj257d ily traian W5fAMBJAi */ using namespace std;
/* biSjj257d ily traian W5fAMBJAi */ int a[1002];
/* biSjj257d ily traian W5fAMBJAi */ int main ()
/* biSjj257d ily traian W5fAMBJAi */ {
/* biSjj257d ily traian W5fAMBJAi */     ifstream fin("expresie8.in");
/* biSjj257d ily traian W5fAMBJAi */     ofstream fout("expresie8.out");
/* biSjj257d ily traian W5fAMBJAi */     int n;
/* biSjj257d ily traian W5fAMBJAi */     unsigned long long s=0,si=0,smax=0,s1=0;
/* biSjj257d ily traian W5fAMBJAi */     fin >> n;
/* biSjj257d ily traian W5fAMBJAi */     for (int i=1;i<=n;++i)
/* biSjj257d ily traian W5fAMBJAi */       {
/* biSjj257d ily traian W5fAMBJAi */           fin >> a[i];si+=a[i];
/* biSjj257d ily traian W5fAMBJAi */       }  
/* biSjj257d ily traian W5fAMBJAi */     for (int i=2;i<=n-2;++i)
/* biSjj257d ily traian W5fAMBJAi */         {
/* biSjj257d ily traian W5fAMBJAi */             for (int j=i+2;j<=n;++j)
/* biSjj257d ily traian W5fAMBJAi */             {
/* biSjj257d ily traian W5fAMBJAi */                 s=si+1LL*a[i]*a[i-1]-a[i]-a[i-1]+ 1LL*a[j]*a[j-1]-a[j]-a[j-1];
/* biSjj257d ily traian W5fAMBJAi */                 if(s > smax)
/* biSjj257d ily traian W5fAMBJAi */                 smax=s;
/* biSjj257d ily traian W5fAMBJAi */             }
/* biSjj257d ily traian W5fAMBJAi */         }
/* biSjj257d ily traian W5fAMBJAi */         for (int i=3;i<=n;++i)
/* biSjj257d ily traian W5fAMBJAi */         {
/* biSjj257d ily traian W5fAMBJAi */             s=si+ 1LL*a[i-2]*a[i-1]*a[i]-a[i-2]-a[i-1]-a[i];
/* biSjj257d ily traian W5fAMBJAi */             if (s >smax)
/* biSjj257d ily traian W5fAMBJAi */                 smax=s;
/* biSjj257d ily traian W5fAMBJAi */         }
/* biSjj257d ily traian W5fAMBJAi */         fout <<smax;
/* biSjj257d ily traian W5fAMBJAi */         fin.close();
/* biSjj257d ily traian W5fAMBJAi */         fout.close();
/* biSjj257d ily traian W5fAMBJAi */         return 0;
/* biSjj257d ily traian W5fAMBJAi */ 
/* biSjj257d ily traian W5fAMBJAi */ 
/* biSjj257d ily traian W5fAMBJAi */ }