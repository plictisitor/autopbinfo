/* Cdp1tBwdG ily traian p81YccZLo */ #include <algorithm>
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
/* Cdp1tBwdG ily traian p81YccZLo */ using namespace std;
/* Cdp1tBwdG ily traian p81YccZLo */ int main()
/* Cdp1tBwdG ily traian p81YccZLo */ {
/* Cdp1tBwdG ily traian p81YccZLo */     int n,x,minim=99999999,maxim=-99999999,imin,imax;
/* Cdp1tBwdG ily traian p81YccZLo */     cin>>n;
/* Cdp1tBwdG ily traian p81YccZLo */     for(int i=1;i<=n;i++)
/* Cdp1tBwdG ily traian p81YccZLo */     {
/* Cdp1tBwdG ily traian p81YccZLo */         cin>>x;
/* Cdp1tBwdG ily traian p81YccZLo */         if(x<minim)
/* Cdp1tBwdG ily traian p81YccZLo */         {
/* Cdp1tBwdG ily traian p81YccZLo */             minim=x;
/* Cdp1tBwdG ily traian p81YccZLo */             imin=i;
/* Cdp1tBwdG ily traian p81YccZLo */         }
/* Cdp1tBwdG ily traian p81YccZLo */         if(x>maxim)
/* Cdp1tBwdG ily traian p81YccZLo */         {
/* Cdp1tBwdG ily traian p81YccZLo */             maxim=x;
/* Cdp1tBwdG ily traian p81YccZLo */             imax=i;
/* Cdp1tBwdG ily traian p81YccZLo */         }
/* Cdp1tBwdG ily traian p81YccZLo */     }
/* Cdp1tBwdG ily traian p81YccZLo */     cout<<imin<<" "<<imax;
/* Cdp1tBwdG ily traian p81YccZLo */     return 0;
/* Cdp1tBwdG ily traian p81YccZLo */ }