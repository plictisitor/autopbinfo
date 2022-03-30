/* FpsMVTTIF ily traian 53mYX2h1A */ #include <algorithm>
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
/* FpsMVTTIF ily traian 53mYX2h1A */ using namespace std;
/* FpsMVTTIF ily traian 53mYX2h1A */ ifstream fin("blackfriday.in");
/* FpsMVTTIF ily traian 53mYX2h1A */ ofstream fout("blackfriday.out");
/* FpsMVTTIF ily traian 53mYX2h1A */ 
/* FpsMVTTIF ily traian 53mYX2h1A */ int main()
/* FpsMVTTIF ily traian 53mYX2h1A */ {
/* FpsMVTTIF ily traian 53mYX2h1A */     double n,a[11],b[11],x,ma=-1,ind;
/* FpsMVTTIF ily traian 53mYX2h1A */     fin>>n;
/* FpsMVTTIF ily traian 53mYX2h1A */     for(int i=1;i<=n;i++)fin>>a[i];
/* FpsMVTTIF ily traian 53mYX2h1A */     for(int i=1;i<=n;i++)fin>>b[i];
/* FpsMVTTIF ily traian 53mYX2h1A */     for(int i=1;i<=n;i++)
/* FpsMVTTIF ily traian 53mYX2h1A */     {x=(a[i]-b[i])*100/a[i];
/* FpsMVTTIF ily traian 53mYX2h1A */         if(x>ma)
/* FpsMVTTIF ily traian 53mYX2h1A */         {ma=x;
/* FpsMVTTIF ily traian 53mYX2h1A */         ind=i;}
/* FpsMVTTIF ily traian 53mYX2h1A */     }
/* FpsMVTTIF ily traian 53mYX2h1A */ 
/* FpsMVTTIF ily traian 53mYX2h1A */     fout<<ind;
/* FpsMVTTIF ily traian 53mYX2h1A */     return 0;
/* FpsMVTTIF ily traian 53mYX2h1A */ }