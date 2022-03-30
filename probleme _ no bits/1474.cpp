/* b91T7Dlt3 ily traian jyVowlGin */ #include<fstream>
/* b91T7Dlt3 ily traian jyVowlGin */ #include <algorithm>
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
/* b91T7Dlt3 ily traian jyVowlGin */ using namespace std;
/* b91T7Dlt3 ily traian jyVowlGin */ ifstream fin("exponent.in");
/* b91T7Dlt3 ily traian jyVowlGin */ ofstream fout("exponent.out");
/* b91T7Dlt3 ily traian jyVowlGin */ int main()
/* b91T7Dlt3 ily traian jyVowlGin */ {
/* b91T7Dlt3 ily traian jyVowlGin */     int n,x,d=2,p,q,exp,m=100000,k;
/* b91T7Dlt3 ily traian jyVowlGin */     fin>>n>>k;
/* b91T7Dlt3 ily traian jyVowlGin */     while(k>1)
/* b91T7Dlt3 ily traian jyVowlGin */     {
/* b91T7Dlt3 ily traian jyVowlGin */         if(k%d==0)
/* b91T7Dlt3 ily traian jyVowlGin */         {
/* b91T7Dlt3 ily traian jyVowlGin */             p=0;
/* b91T7Dlt3 ily traian jyVowlGin */             x=0;
/* b91T7Dlt3 ily traian jyVowlGin */             while(k%d==0)
/* b91T7Dlt3 ily traian jyVowlGin */             {
/* b91T7Dlt3 ily traian jyVowlGin */                 k=k/d;
/* b91T7Dlt3 ily traian jyVowlGin */                 p ++;
/* b91T7Dlt3 ily traian jyVowlGin */             }
/* b91T7Dlt3 ily traian jyVowlGin */             for(int i=d;i<=n;i*=d) x=x+n/i;
/* b91T7Dlt3 ily traian jyVowlGin */             x=x/p;
/* b91T7Dlt3 ily traian jyVowlGin */             m=min(m,x);
/* b91T7Dlt3 ily traian jyVowlGin */         }
/* b91T7Dlt3 ily traian jyVowlGin */         d++;
/* b91T7Dlt3 ily traian jyVowlGin */     }
/* b91T7Dlt3 ily traian jyVowlGin */     fout<<m;
/* b91T7Dlt3 ily traian jyVowlGin */     return 0;
/* b91T7Dlt3 ily traian jyVowlGin */ }