/* 2Jdabg2CD ily traian AvqGrJhjQ */ #include <algorithm>
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
/* 2Jdabg2CD ily traian AvqGrJhjQ */ 
/* 2Jdabg2CD ily traian AvqGrJhjQ */ using namespace std;
/* 2Jdabg2CD ily traian AvqGrJhjQ */ 
/* 2Jdabg2CD ily traian AvqGrJhjQ */ ifstream cin("numere16.in");
/* 2Jdabg2CD ily traian AvqGrJhjQ */ ofstream cout("numere16.out");
/* 2Jdabg2CD ily traian AvqGrJhjQ */ 
/* 2Jdabg2CD ily traian AvqGrJhjQ */ int prim(long long int a , long long int b)
/* 2Jdabg2CD ily traian AvqGrJhjQ */ {
/* 2Jdabg2CD ily traian AvqGrJhjQ */     while(b)
/* 2Jdabg2CD ily traian AvqGrJhjQ */     {
/* 2Jdabg2CD ily traian AvqGrJhjQ */         long long int r=a%b;
/* 2Jdabg2CD ily traian AvqGrJhjQ */         a=b;
/* 2Jdabg2CD ily traian AvqGrJhjQ */         b=r;
/* 2Jdabg2CD ily traian AvqGrJhjQ */     }
/* 2Jdabg2CD ily traian AvqGrJhjQ */     if(a==1)
/* 2Jdabg2CD ily traian AvqGrJhjQ */     return 1;
/* 2Jdabg2CD ily traian AvqGrJhjQ */     else
/* 2Jdabg2CD ily traian AvqGrJhjQ */     return 0;
/* 2Jdabg2CD ily traian AvqGrJhjQ */ }
/* 2Jdabg2CD ily traian AvqGrJhjQ */ 
/* 2Jdabg2CD ily traian AvqGrJhjQ */ int main()
/* 2Jdabg2CD ily traian AvqGrJhjQ */ {
/* 2Jdabg2CD ily traian AvqGrJhjQ */     long long int n;
/* 2Jdabg2CD ily traian AvqGrJhjQ */     cin >> n;
/* 2Jdabg2CD ily traian AvqGrJhjQ */     long long int a[17];
/* 2Jdabg2CD ily traian AvqGrJhjQ */     long long int cn=n;
/* 2Jdabg2CD ily traian AvqGrJhjQ */     int cnt=0;
/* 2Jdabg2CD ily traian AvqGrJhjQ */     while(cn)
/* 2Jdabg2CD ily traian AvqGrJhjQ */     {
/* 2Jdabg2CD ily traian AvqGrJhjQ */         cnt++;
/* 2Jdabg2CD ily traian AvqGrJhjQ */         cn/=10;
/* 2Jdabg2CD ily traian AvqGrJhjQ */     }
/* 2Jdabg2CD ily traian AvqGrJhjQ */     long long int p = 10;
/* 2Jdabg2CD ily traian AvqGrJhjQ */     a[0]=n/10;
/* 2Jdabg2CD ily traian AvqGrJhjQ */     for(int i =  1 ; i <= cnt ; ++i)
/* 2Jdabg2CD ily traian AvqGrJhjQ */     {
/* 2Jdabg2CD ily traian AvqGrJhjQ */         cn=n;
/* 2Jdabg2CD ily traian AvqGrJhjQ */         cn=cn/(p*10);
/* 2Jdabg2CD ily traian AvqGrJhjQ */         a[i]=cn*p+n%p;
/* 2Jdabg2CD ily traian AvqGrJhjQ */         p*=10;
/* 2Jdabg2CD ily traian AvqGrJhjQ */     }
/* 2Jdabg2CD ily traian AvqGrJhjQ */     sort(a , a+cnt);
/* 2Jdabg2CD ily traian AvqGrJhjQ */     int ok=0;
/* 2Jdabg2CD ily traian AvqGrJhjQ */     for(int i = 0 ; i < cnt ; ++i)
/* 2Jdabg2CD ily traian AvqGrJhjQ */     {
/* 2Jdabg2CD ily traian AvqGrJhjQ */         if(prim(n , a[i]))
/* 2Jdabg2CD ily traian AvqGrJhjQ */         {
/* 2Jdabg2CD ily traian AvqGrJhjQ */             ok=1;
/* 2Jdabg2CD ily traian AvqGrJhjQ */             if(a[i]!=0)
/* 2Jdabg2CD ily traian AvqGrJhjQ */             cout << a[i] << ' ';
/* 2Jdabg2CD ily traian AvqGrJhjQ */         }
/* 2Jdabg2CD ily traian AvqGrJhjQ */     }
/* 2Jdabg2CD ily traian AvqGrJhjQ */     if(ok==0)
/* 2Jdabg2CD ily traian AvqGrJhjQ */         cout << "NU EXISTA";
/* 2Jdabg2CD ily traian AvqGrJhjQ */     
/* 2Jdabg2CD ily traian AvqGrJhjQ */     cin.close();
/* 2Jdabg2CD ily traian AvqGrJhjQ */     cout.close();
/* 2Jdabg2CD ily traian AvqGrJhjQ */     
/* 2Jdabg2CD ily traian AvqGrJhjQ */     return 0;
/* 2Jdabg2CD ily traian AvqGrJhjQ */ }