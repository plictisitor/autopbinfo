/* UVEbHyMEo ily traian FOS4m6DwD */ #include <algorithm>
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
/* UVEbHyMEo ily traian FOS4m6DwD */ using namespace std;
/* UVEbHyMEo ily traian FOS4m6DwD */ ifstream cin("meteo.in");
/* UVEbHyMEo ily traian FOS4m6DwD */ ofstream cout("meteo.out");
/* UVEbHyMEo ily traian FOS4m6DwD */ int a[1001];
/* UVEbHyMEo ily traian FOS4m6DwD */ int main()
/* UVEbHyMEo ily traian FOS4m6DwD */ {
/* UVEbHyMEo ily traian FOS4m6DwD */     int n , ok = 0 , l = 1 , lmax = -1 , st = 0 , dr = 0;
/* UVEbHyMEo ily traian FOS4m6DwD */     cin >> n;
/* UVEbHyMEo ily traian FOS4m6DwD */     for(int i = 1 ; i <= n ; ++i)
/* UVEbHyMEo ily traian FOS4m6DwD */         cin >> a[i];
/* UVEbHyMEo ily traian FOS4m6DwD */     if(a[1]<0) ok=0;
/* UVEbHyMEo ily traian FOS4m6DwD */     else ok = 1;
/* UVEbHyMEo ily traian FOS4m6DwD */     for(int i = 2 ; i <= n ; ++i)
/* UVEbHyMEo ily traian FOS4m6DwD */     {
/* UVEbHyMEo ily traian FOS4m6DwD */         if((ok==0 && a[i]<0)||(ok==1 && a[i]>=0)) l = 1;
/* UVEbHyMEo ily traian FOS4m6DwD */         else
/* UVEbHyMEo ily traian FOS4m6DwD */         {
/* UVEbHyMEo ily traian FOS4m6DwD */             if(ok==1) ok=0;
/* UVEbHyMEo ily traian FOS4m6DwD */             else ok=1;
/* UVEbHyMEo ily traian FOS4m6DwD */             l++;
/* UVEbHyMEo ily traian FOS4m6DwD */             if(l>=lmax) lmax=l ,dr=i , st=i+1-l;
/* UVEbHyMEo ily traian FOS4m6DwD */         }
/* UVEbHyMEo ily traian FOS4m6DwD */     }
/* UVEbHyMEo ily traian FOS4m6DwD */     if(lmax==-1) cout << 0;
/* UVEbHyMEo ily traian FOS4m6DwD */     else
/* UVEbHyMEo ily traian FOS4m6DwD */     {
/* UVEbHyMEo ily traian FOS4m6DwD */         cout << lmax << endl;
/* UVEbHyMEo ily traian FOS4m6DwD */         for(int i = st ; i <= dr ; ++i)
/* UVEbHyMEo ily traian FOS4m6DwD */             cout << a[i] << ' ';
/* UVEbHyMEo ily traian FOS4m6DwD */     }
/* UVEbHyMEo ily traian FOS4m6DwD */     return 0;
/* UVEbHyMEo ily traian FOS4m6DwD */ }