/* sts6PxvLp ily traian 2tP1zqhrw */ #include <algorithm>
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
/* sts6PxvLp ily traian 2tP1zqhrw */ using namespace std;
/* sts6PxvLp ily traian 2tP1zqhrw */ 
/* sts6PxvLp ily traian 2tP1zqhrw */ ifstream cin("kcifra.in");
/* sts6PxvLp ily traian 2tP1zqhrw */ ofstream cout("kcifra.out");
/* sts6PxvLp ily traian 2tP1zqhrw */ 
/* sts6PxvLp ily traian 2tP1zqhrw */ short a[588889];
/* sts6PxvLp ily traian 2tP1zqhrw */ 
/* sts6PxvLp ily traian 2tP1zqhrw */ int main()
/* sts6PxvLp ily traian 2tP1zqhrw */ {
/* sts6PxvLp ily traian 2tP1zqhrw */     int n;
/* sts6PxvLp ily traian 2tP1zqhrw */     cin >> n;
/* sts6PxvLp ily traian 2tP1zqhrw */     int cnt=0;
/* sts6PxvLp ily traian 2tP1zqhrw */     int cif=1;
/* sts6PxvLp ily traian 2tP1zqhrw */     for(int i = 1 ; i <= 588888 ; i+=2)
/* sts6PxvLp ily traian 2tP1zqhrw */     {
/* sts6PxvLp ily traian 2tP1zqhrw */         if(cnt==0)
/* sts6PxvLp ily traian 2tP1zqhrw */         a[i]=a[i+1]=cif , cif++;
/* sts6PxvLp ily traian 2tP1zqhrw */         else
/* sts6PxvLp ily traian 2tP1zqhrw */         {
/* sts6PxvLp ily traian 2tP1zqhrw */                 short v[10];
/* sts6PxvLp ily traian 2tP1zqhrw */                 int p = 0;
/* sts6PxvLp ily traian 2tP1zqhrw */                 int ccnt=cnt;
/* sts6PxvLp ily traian 2tP1zqhrw */                 while(cnt)
/* sts6PxvLp ily traian 2tP1zqhrw */                 {
/* sts6PxvLp ily traian 2tP1zqhrw */                     v[p]=cnt%10;
/* sts6PxvLp ily traian 2tP1zqhrw */                     p++;
/* sts6PxvLp ily traian 2tP1zqhrw */                     cnt/=10;
/* sts6PxvLp ily traian 2tP1zqhrw */                 }
/* sts6PxvLp ily traian 2tP1zqhrw */                 cnt=ccnt;    
/* sts6PxvLp ily traian 2tP1zqhrw */                 for(int j = p - 1 ; j >= 0 ; --j)
/* sts6PxvLp ily traian 2tP1zqhrw */                     a[i]=v[j] , i++;
/* sts6PxvLp ily traian 2tP1zqhrw */             a[i+1]=a[i]=cif;
/* sts6PxvLp ily traian 2tP1zqhrw */             cif++;
/* sts6PxvLp ily traian 2tP1zqhrw */         }
/* sts6PxvLp ily traian 2tP1zqhrw */         if(cif>9)
/* sts6PxvLp ily traian 2tP1zqhrw */             cif = 0 , cnt++;
/* sts6PxvLp ily traian 2tP1zqhrw */     }
/* sts6PxvLp ily traian 2tP1zqhrw */     cout << a[n];
/* sts6PxvLp ily traian 2tP1zqhrw */     return 0;    
/* sts6PxvLp ily traian 2tP1zqhrw */ }