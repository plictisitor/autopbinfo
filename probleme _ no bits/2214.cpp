/* ANKFXx0L6 ily traian ERoZUWgvF */ #include <algorithm>
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
/* ANKFXx0L6 ily traian ERoZUWgvF */ using namespace std;
/* ANKFXx0L6 ily traian ERoZUWgvF */ 
/* ANKFXx0L6 ily traian ERoZUWgvF */ int main ()
/* ANKFXx0L6 ily traian ERoZUWgvF */ {
/* ANKFXx0L6 ily traian ERoZUWgvF */     int n,m;
/* ANKFXx0L6 ily traian ERoZUWgvF */     cin >> n >> m;
/* ANKFXx0L6 ily traian ERoZUWgvF */     int p,k;
/* ANKFXx0L6 ily traian ERoZUWgvF */     p=n;
/* ANKFXx0L6 ily traian ERoZUWgvF */     k=m;
/* ANKFXx0L6 ily traian ERoZUWgvF */     int a;
/* ANKFXx0L6 ily traian ERoZUWgvF */     int cnt1=0;
/* ANKFXx0L6 ily traian ERoZUWgvF */     int cnt2=0;
/* ANKFXx0L6 ily traian ERoZUWgvF */     int cnt=0;
/* ANKFXx0L6 ily traian ERoZUWgvF */     if (p==0)
/* ANKFXx0L6 ily traian ERoZUWgvF */     cnt=1;
/* ANKFXx0L6 ily traian ERoZUWgvF */     while (n)
/* ANKFXx0L6 ily traian ERoZUWgvF */     {
/* ANKFXx0L6 ily traian ERoZUWgvF */         n/=10;
/* ANKFXx0L6 ily traian ERoZUWgvF */         cnt1++;
/* ANKFXx0L6 ily traian ERoZUWgvF */     }
/* ANKFXx0L6 ily traian ERoZUWgvF */     while (m)
/* ANKFXx0L6 ily traian ERoZUWgvF */     {
/* ANKFXx0L6 ily traian ERoZUWgvF */         m/=10;
/* ANKFXx0L6 ily traian ERoZUWgvF */         cnt2++;
/* ANKFXx0L6 ily traian ERoZUWgvF */     }
/* ANKFXx0L6 ily traian ERoZUWgvF */     if (cnt1==cnt2)
/* ANKFXx0L6 ily traian ERoZUWgvF */     {
/* ANKFXx0L6 ily traian ERoZUWgvF */         cout << "DA";
/* ANKFXx0L6 ily traian ERoZUWgvF */         cout << endl;
/* ANKFXx0L6 ily traian ERoZUWgvF */         a=1;
/* ANKFXx0L6 ily traian ERoZUWgvF */     }
/* ANKFXx0L6 ily traian ERoZUWgvF */     else 
/* ANKFXx0L6 ily traian ERoZUWgvF */     {
/* ANKFXx0L6 ily traian ERoZUWgvF */         cout << "NU";
/* ANKFXx0L6 ily traian ERoZUWgvF */         a=0;
/* ANKFXx0L6 ily traian ERoZUWgvF */     }
/* ANKFXx0L6 ily traian ERoZUWgvF */     if (a==1)
/* ANKFXx0L6 ily traian ERoZUWgvF */     {
/* ANKFXx0L6 ily traian ERoZUWgvF */         while (p)
/* ANKFXx0L6 ily traian ERoZUWgvF */         {
/* ANKFXx0L6 ily traian ERoZUWgvF */             if (p%10 == k%10)
/* ANKFXx0L6 ily traian ERoZUWgvF */             {
/* ANKFXx0L6 ily traian ERoZUWgvF */                 cnt++;    
/* ANKFXx0L6 ily traian ERoZUWgvF */             }
/* ANKFXx0L6 ily traian ERoZUWgvF */             p/=10;
/* ANKFXx0L6 ily traian ERoZUWgvF */             k/=10;
/* ANKFXx0L6 ily traian ERoZUWgvF */         }
/* ANKFXx0L6 ily traian ERoZUWgvF */         cout << cnt;
/* ANKFXx0L6 ily traian ERoZUWgvF */     }
/* ANKFXx0L6 ily traian ERoZUWgvF */     
/* ANKFXx0L6 ily traian ERoZUWgvF */     return 0;    
/* ANKFXx0L6 ily traian ERoZUWgvF */ }