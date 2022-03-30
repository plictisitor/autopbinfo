/* dqBOii3TA ily traian ALbDJya6r */ #include <algorithm>
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
/* dqBOii3TA ily traian ALbDJya6r */ using namespace std;
/* dqBOii3TA ily traian ALbDJya6r */ ifstream fin("siruri2.in");
/* dqBOii3TA ily traian ALbDJya6r */ ofstream fout("siruri2.out");
/* dqBOii3TA ily traian ALbDJya6r */ unsigned long long fib(unsigned long long n)
/* dqBOii3TA ily traian ALbDJya6r */ {
/* dqBOii3TA ily traian ALbDJya6r */     long long f1=1,f2=1,f3;
/* dqBOii3TA ily traian ALbDJya6r */     if(n==1) return 1;
/* dqBOii3TA ily traian ALbDJya6r */     else if(n==2) return 1;
/* dqBOii3TA ily traian ALbDJya6r */     else
/* dqBOii3TA ily traian ALbDJya6r */     {
/* dqBOii3TA ily traian ALbDJya6r */         while(n>2)
/* dqBOii3TA ily traian ALbDJya6r */         {
/* dqBOii3TA ily traian ALbDJya6r */             f3=f1+f2;
/* dqBOii3TA ily traian ALbDJya6r */             f1=f2;
/* dqBOii3TA ily traian ALbDJya6r */             f2=f3;
/* dqBOii3TA ily traian ALbDJya6r */             n--;
/* dqBOii3TA ily traian ALbDJya6r */         }
/* dqBOii3TA ily traian ALbDJya6r */         return f3;
/* dqBOii3TA ily traian ALbDJya6r */     }
/* dqBOii3TA ily traian ALbDJya6r */ }
/* dqBOii3TA ily traian ALbDJya6r */ unsigned long long ogl(unsigned long long n)
/* dqBOii3TA ily traian ALbDJya6r */ {
/* dqBOii3TA ily traian ALbDJya6r */     long long ogl=0;
/* dqBOii3TA ily traian ALbDJya6r */     while(n!=0)
/* dqBOii3TA ily traian ALbDJya6r */     {
/* dqBOii3TA ily traian ALbDJya6r */         ogl=ogl*10+n%10;
/* dqBOii3TA ily traian ALbDJya6r */         n=n/10;
/* dqBOii3TA ily traian ALbDJya6r */     }
/* dqBOii3TA ily traian ALbDJya6r */     return ogl;
/* dqBOii3TA ily traian ALbDJya6r */ }
/* dqBOii3TA ily traian ALbDJya6r */ unsigned long long ico(unsigned long long n)
/* dqBOii3TA ily traian ALbDJya6r */ {
/* dqBOii3TA ily traian ALbDJya6r */     unsigned long long f1=1,f2=1,f3;
/* dqBOii3TA ily traian ALbDJya6r */     if(n==1) return 1;
/* dqBOii3TA ily traian ALbDJya6r */     else if(n==2) return 1;
/* dqBOii3TA ily traian ALbDJya6r */     else
/* dqBOii3TA ily traian ALbDJya6r */     {
/* dqBOii3TA ily traian ALbDJya6r */         while(n>2)
/* dqBOii3TA ily traian ALbDJya6r */         {
/* dqBOii3TA ily traian ALbDJya6r */             f3=ogl(f1)+ogl(f2);
/* dqBOii3TA ily traian ALbDJya6r */              f1=f2;
/* dqBOii3TA ily traian ALbDJya6r */             f2=f3;
/* dqBOii3TA ily traian ALbDJya6r */             n--;
/* dqBOii3TA ily traian ALbDJya6r */         }
/* dqBOii3TA ily traian ALbDJya6r */         return f3;
/* dqBOii3TA ily traian ALbDJya6r */     }
/* dqBOii3TA ily traian ALbDJya6r */ }
/* dqBOii3TA ily traian ALbDJya6r */ unsigned long long nrdiv(unsigned long long n)
/* dqBOii3TA ily traian ALbDJya6r */ {
/* dqBOii3TA ily traian ALbDJya6r */     long long cnt=0;
/* dqBOii3TA ily traian ALbDJya6r */     for(unsigned long long i=1;i*i<=n;i++)
/* dqBOii3TA ily traian ALbDJya6r */     {
/* dqBOii3TA ily traian ALbDJya6r */         if(n%i==0) cnt += 2;
/* dqBOii3TA ily traian ALbDJya6r */         if(i*i==n) cnt--;
/* dqBOii3TA ily traian ALbDJya6r */     }
/* dqBOii3TA ily traian ALbDJya6r */     return cnt;
/* dqBOii3TA ily traian ALbDJya6r */ }
/* dqBOii3TA ily traian ALbDJya6r */ int main()
/* dqBOii3TA ily traian ALbDJya6r */ {
/* dqBOii3TA ily traian ALbDJya6r */     int n,p;
/* dqBOii3TA ily traian ALbDJya6r */     fin>>p>>n;
/* dqBOii3TA ily traian ALbDJya6r */     if(p==1)
/* dqBOii3TA ily traian ALbDJya6r */     fout<<1ull*fib(n)<<" "<<nrdiv(fib(n));
/* dqBOii3TA ily traian ALbDJya6r */     else fout<<1ull*ico(n)<<" "<<nrdiv(ico(n));
/* dqBOii3TA ily traian ALbDJya6r */     return 0;
/* dqBOii3TA ily traian ALbDJya6r */ }