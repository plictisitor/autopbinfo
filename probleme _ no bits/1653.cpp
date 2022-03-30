/* MnhmprWFM ily traian KzPBJ7Scu */ #include <algorithm>
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
/* MnhmprWFM ily traian KzPBJ7Scu */ 
/* MnhmprWFM ily traian KzPBJ7Scu */ using namespace std;
/* MnhmprWFM ily traian KzPBJ7Scu */ int v[105],v1[105],n;
/* MnhmprWFM ily traian KzPBJ7Scu */ int main()
/* MnhmprWFM ily traian KzPBJ7Scu */ {
/* MnhmprWFM ily traian KzPBJ7Scu */     int i,da=1,j;
/* MnhmprWFM ily traian KzPBJ7Scu */     cin >> n;
/* MnhmprWFM ily traian KzPBJ7Scu */     for(i=0;i<n;i++)
/* MnhmprWFM ily traian KzPBJ7Scu */         cin >> v[i];
/* MnhmprWFM ily traian KzPBJ7Scu */     for(i=0;i<n;i++)
/* MnhmprWFM ily traian KzPBJ7Scu */         cin >> v1[i];
/* MnhmprWFM ily traian KzPBJ7Scu */     for(i=0;i<n;i++)
/* MnhmprWFM ily traian KzPBJ7Scu */         for(j=i+1;j<=n;j++)
/* MnhmprWFM ily traian KzPBJ7Scu */             if(v[j]>v[i])
/* MnhmprWFM ily traian KzPBJ7Scu */                 swap(v[i],v[j]);
/* MnhmprWFM ily traian KzPBJ7Scu */     for(i=0;i<n;i++)
/* MnhmprWFM ily traian KzPBJ7Scu */         for(j=i+1;j<=n;j++)
/* MnhmprWFM ily traian KzPBJ7Scu */             if(v1[j]>v1[i])
/* MnhmprWFM ily traian KzPBJ7Scu */                 swap(v1[i], v1[j]);
/* MnhmprWFM ily traian KzPBJ7Scu */     for(i=1;i<n;i++)
/* MnhmprWFM ily traian KzPBJ7Scu */         if(v[i-1]*v1[n-i]!= v[i]*v1[n-i-1]) // i.p
/* MnhmprWFM ily traian KzPBJ7Scu */             da=0;
/* MnhmprWFM ily traian KzPBJ7Scu */     if(da)
/* MnhmprWFM ily traian KzPBJ7Scu */         cout << "DA";
/* MnhmprWFM ily traian KzPBJ7Scu */     else
/* MnhmprWFM ily traian KzPBJ7Scu */         cout << "NU";
/* MnhmprWFM ily traian KzPBJ7Scu */     return 0;
/* MnhmprWFM ily traian KzPBJ7Scu */ 
/* MnhmprWFM ily traian KzPBJ7Scu */ }