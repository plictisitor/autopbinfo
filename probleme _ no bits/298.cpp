/* lZyYONUbp ily traian vnZg1hrdh */ #include <algorithm>
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
/* lZyYONUbp ily traian vnZg1hrdh */ using namespace std;
/* lZyYONUbp ily traian vnZg1hrdh */ 
/* lZyYONUbp ily traian vnZg1hrdh */ ifstream fin("sumsec.in");
/* lZyYONUbp ily traian vnZg1hrdh */ ofstream fout("sumsec.out");
/* lZyYONUbp ily traian vnZg1hrdh */ 
/* lZyYONUbp ily traian vnZg1hrdh */ int prim(int n)
/* lZyYONUbp ily traian vnZg1hrdh */ {
/* lZyYONUbp ily traian vnZg1hrdh */     int cnt=1;
/* lZyYONUbp ily traian vnZg1hrdh */     int d=2;
/* lZyYONUbp ily traian vnZg1hrdh */     while(n>1)
/* lZyYONUbp ily traian vnZg1hrdh */     {
/* lZyYONUbp ily traian vnZg1hrdh */         int p = 0;
/* lZyYONUbp ily traian vnZg1hrdh */         while(n%d==0)
/* lZyYONUbp ily traian vnZg1hrdh */         {
/* lZyYONUbp ily traian vnZg1hrdh */             p++;
/* lZyYONUbp ily traian vnZg1hrdh */             n/=d;
/* lZyYONUbp ily traian vnZg1hrdh */         }
/* lZyYONUbp ily traian vnZg1hrdh */         if(p>0)
/* lZyYONUbp ily traian vnZg1hrdh */             cnt*=(p+1);
/* lZyYONUbp ily traian vnZg1hrdh */         d++;
/* lZyYONUbp ily traian vnZg1hrdh */         if(d*d>n)
/* lZyYONUbp ily traian vnZg1hrdh */             d=n;
/* lZyYONUbp ily traian vnZg1hrdh */     }
/* lZyYONUbp ily traian vnZg1hrdh */     if(cnt==2)
/* lZyYONUbp ily traian vnZg1hrdh */     return 1;
/* lZyYONUbp ily traian vnZg1hrdh */     else
/* lZyYONUbp ily traian vnZg1hrdh */     return 0;
/* lZyYONUbp ily traian vnZg1hrdh */ }
/* lZyYONUbp ily traian vnZg1hrdh */ 
/* lZyYONUbp ily traian vnZg1hrdh */ int main()
/* lZyYONUbp ily traian vnZg1hrdh */ {
/* lZyYONUbp ily traian vnZg1hrdh */     int n;
/* lZyYONUbp ily traian vnZg1hrdh */     fin >> n;
/* lZyYONUbp ily traian vnZg1hrdh */     long long int a[1000];
/* lZyYONUbp ily traian vnZg1hrdh */     int cnt=0;
/* lZyYONUbp ily traian vnZg1hrdh */     long long int p = 0 , u = 0 , s = 0;
/* lZyYONUbp ily traian vnZg1hrdh */     for(int i = 0 ; i < n ; ++i)
/* lZyYONUbp ily traian vnZg1hrdh */     {
/* lZyYONUbp ily traian vnZg1hrdh */         fin >> a[i];
/* lZyYONUbp ily traian vnZg1hrdh */         if(prim(a[i]) && cnt==0)
/* lZyYONUbp ily traian vnZg1hrdh */         {
/* lZyYONUbp ily traian vnZg1hrdh */         p=i;
/* lZyYONUbp ily traian vnZg1hrdh */         cnt++;
/* lZyYONUbp ily traian vnZg1hrdh */         }
/* lZyYONUbp ily traian vnZg1hrdh */         if(prim(a[i]))
/* lZyYONUbp ily traian vnZg1hrdh */         u=i;
/* lZyYONUbp ily traian vnZg1hrdh */     }
/* lZyYONUbp ily traian vnZg1hrdh */     for(int i = p ; i <= u ; ++i)
/* lZyYONUbp ily traian vnZg1hrdh */     {
/* lZyYONUbp ily traian vnZg1hrdh */         s+=a[i];    
/* lZyYONUbp ily traian vnZg1hrdh */     }
/* lZyYONUbp ily traian vnZg1hrdh */     fout << s;
/* lZyYONUbp ily traian vnZg1hrdh */     
/* lZyYONUbp ily traian vnZg1hrdh */     fin.close();
/* lZyYONUbp ily traian vnZg1hrdh */     fout.close();
/* lZyYONUbp ily traian vnZg1hrdh */     
/* lZyYONUbp ily traian vnZg1hrdh */     return 0;
/* lZyYONUbp ily traian vnZg1hrdh */ }