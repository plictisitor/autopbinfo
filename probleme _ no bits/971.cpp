/* sVPXxbFiJ ily traian KZ9NBhDCO */ #include <algorithm>
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
/* sVPXxbFiJ ily traian KZ9NBhDCO */ 
/* sVPXxbFiJ ily traian KZ9NBhDCO */ using namespace std;
/* sVPXxbFiJ ily traian KZ9NBhDCO */ 
/* sVPXxbFiJ ily traian KZ9NBhDCO */ int prim(int n)
/* sVPXxbFiJ ily traian KZ9NBhDCO */ {
/* sVPXxbFiJ ily traian KZ9NBhDCO */     int d=2;
/* sVPXxbFiJ ily traian KZ9NBhDCO */     int cnt=1;
/* sVPXxbFiJ ily traian KZ9NBhDCO */     while(n>1)
/* sVPXxbFiJ ily traian KZ9NBhDCO */     {
/* sVPXxbFiJ ily traian KZ9NBhDCO */         int p = 0;
/* sVPXxbFiJ ily traian KZ9NBhDCO */         while(n%d==0)
/* sVPXxbFiJ ily traian KZ9NBhDCO */         {
/* sVPXxbFiJ ily traian KZ9NBhDCO */             n/=d;
/* sVPXxbFiJ ily traian KZ9NBhDCO */             p++;
/* sVPXxbFiJ ily traian KZ9NBhDCO */         }
/* sVPXxbFiJ ily traian KZ9NBhDCO */         cnt*=(p+1);
/* sVPXxbFiJ ily traian KZ9NBhDCO */         d++;
/* sVPXxbFiJ ily traian KZ9NBhDCO */         if(d*d>n)
/* sVPXxbFiJ ily traian KZ9NBhDCO */         d=n;
/* sVPXxbFiJ ily traian KZ9NBhDCO */     }
/* sVPXxbFiJ ily traian KZ9NBhDCO */     if(cnt==2)
/* sVPXxbFiJ ily traian KZ9NBhDCO */     return 1;
/* sVPXxbFiJ ily traian KZ9NBhDCO */     else
/* sVPXxbFiJ ily traian KZ9NBhDCO */     return 0;
/* sVPXxbFiJ ily traian KZ9NBhDCO */ }
/* sVPXxbFiJ ily traian KZ9NBhDCO */ 
/* sVPXxbFiJ ily traian KZ9NBhDCO */ int main()
/* sVPXxbFiJ ily traian KZ9NBhDCO */ {
/* sVPXxbFiJ ily traian KZ9NBhDCO */     int n;
/* sVPXxbFiJ ily traian KZ9NBhDCO */     cin >> n;
/* sVPXxbFiJ ily traian KZ9NBhDCO */     int x;
/* sVPXxbFiJ ily traian KZ9NBhDCO */     int s=0;
/* sVPXxbFiJ ily traian KZ9NBhDCO */     for(int i = 0 ; i < n ; ++i)
/* sVPXxbFiJ ily traian KZ9NBhDCO */     {
/* sVPXxbFiJ ily traian KZ9NBhDCO */         cin >> x;
/* sVPXxbFiJ ily traian KZ9NBhDCO */         int m=sqrt(x);
/* sVPXxbFiJ ily traian KZ9NBhDCO */         if(m*m==x)
/* sVPXxbFiJ ily traian KZ9NBhDCO */         s+=3*x;
/* sVPXxbFiJ ily traian KZ9NBhDCO */         else if(prim(x))
/* sVPXxbFiJ ily traian KZ9NBhDCO */         s+=0;
/* sVPXxbFiJ ily traian KZ9NBhDCO */         else
/* sVPXxbFiJ ily traian KZ9NBhDCO */         s+=x;
/* sVPXxbFiJ ily traian KZ9NBhDCO */     }
/* sVPXxbFiJ ily traian KZ9NBhDCO */     cout << s;
/* sVPXxbFiJ ily traian KZ9NBhDCO */ }