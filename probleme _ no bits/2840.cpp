/* CBTgGcGAG ily traian SzmguCSvr */ #include <algorithm>
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
/* CBTgGcGAG ily traian SzmguCSvr */ using namespace std;
/* CBTgGcGAG ily traian SzmguCSvr */ ifstream cin("secventauniforma.in");
/* CBTgGcGAG ily traian SzmguCSvr */ ofstream cout("secventauniforma.out");
/* CBTgGcGAG ily traian SzmguCSvr */ int a , b , lmax , l = 1 , elem = -1;
/* CBTgGcGAG ily traian SzmguCSvr */ 
/* CBTgGcGAG ily traian SzmguCSvr */ int main()
/* CBTgGcGAG ily traian SzmguCSvr */ {
/* CBTgGcGAG ily traian SzmguCSvr */     cin >> b;
/* CBTgGcGAG ily traian SzmguCSvr */     while(cin >> a)
/* CBTgGcGAG ily traian SzmguCSvr */     {
/* CBTgGcGAG ily traian SzmguCSvr */         if(a == b) l++;
/* CBTgGcGAG ily traian SzmguCSvr */         else
/* CBTgGcGAG ily traian SzmguCSvr */         {
/* CBTgGcGAG ily traian SzmguCSvr */             if(l >= lmax)
/* CBTgGcGAG ily traian SzmguCSvr */             {
/* CBTgGcGAG ily traian SzmguCSvr */                 lmax = l;
/* CBTgGcGAG ily traian SzmguCSvr */                 elem = b;
/* CBTgGcGAG ily traian SzmguCSvr */             }
/* CBTgGcGAG ily traian SzmguCSvr */             l = 1;
/* CBTgGcGAG ily traian SzmguCSvr */         }
/* CBTgGcGAG ily traian SzmguCSvr */         b = a;
/* CBTgGcGAG ily traian SzmguCSvr */     }
/* CBTgGcGAG ily traian SzmguCSvr */     if(l >= lmax)
/* CBTgGcGAG ily traian SzmguCSvr */     {
/* CBTgGcGAG ily traian SzmguCSvr */         lmax = l;
/* CBTgGcGAG ily traian SzmguCSvr */         elem = b;
/* CBTgGcGAG ily traian SzmguCSvr */     }
/* CBTgGcGAG ily traian SzmguCSvr */     cout << lmax << endl;
/* CBTgGcGAG ily traian SzmguCSvr */     for(int i = 1 ; i <= lmax ; ++i)
/* CBTgGcGAG ily traian SzmguCSvr */         cout << elem << ' ';
/* CBTgGcGAG ily traian SzmguCSvr */     return 0;
/* CBTgGcGAG ily traian SzmguCSvr */ }