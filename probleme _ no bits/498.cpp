/* tEjcVAfGg ily traian o7NhEgG2U */ #include <algorithm>
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
/* tEjcVAfGg ily traian o7NhEgG2U */ using namespace std;
/* tEjcVAfGg ily traian o7NhEgG2U */ int cmmdc(int a,int b)
/* tEjcVAfGg ily traian o7NhEgG2U */ {
/* tEjcVAfGg ily traian o7NhEgG2U */     int d,r;
/* tEjcVAfGg ily traian o7NhEgG2U */     while(b!=0) {r=a%b;a=b;b=r;}
/* tEjcVAfGg ily traian o7NhEgG2U */     d=a;
/* tEjcVAfGg ily traian o7NhEgG2U */     if(d==1) return 1;
/* tEjcVAfGg ily traian o7NhEgG2U */     else return 0;
/* tEjcVAfGg ily traian o7NhEgG2U */ }
/* tEjcVAfGg ily traian o7NhEgG2U */ int main()
/* tEjcVAfGg ily traian o7NhEgG2U */ {
/* tEjcVAfGg ily traian o7NhEgG2U */     int n,a[1001],c=0;
/* tEjcVAfGg ily traian o7NhEgG2U */     cin>>n;
/* tEjcVAfGg ily traian o7NhEgG2U */     for(int i=1;i<=n;i++) cin>>a[i];
/* tEjcVAfGg ily traian o7NhEgG2U */     for(int i=1;i<=n;i++)
/* tEjcVAfGg ily traian o7NhEgG2U */     {
/* tEjcVAfGg ily traian o7NhEgG2U */         for(int j=i+1;j<=n;j++)
/* tEjcVAfGg ily traian o7NhEgG2U */             if(cmmdc(a[i],a[j])) c++;
/* tEjcVAfGg ily traian o7NhEgG2U */     }
/* tEjcVAfGg ily traian o7NhEgG2U */     cout<<c;
/* tEjcVAfGg ily traian o7NhEgG2U */     return 0;
/* tEjcVAfGg ily traian o7NhEgG2U */ 
/* tEjcVAfGg ily traian o7NhEgG2U */ }