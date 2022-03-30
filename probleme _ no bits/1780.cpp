/* AaO2UdGW7 ily traian iN52F1WaP */ #include <algorithm>
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
/* AaO2UdGW7 ily traian iN52F1WaP */ using namespace std;
/* AaO2UdGW7 ily traian iN52F1WaP */ int main()
/* AaO2UdGW7 ily traian iN52F1WaP */ {
/* AaO2UdGW7 ily traian iN52F1WaP */     int n,m,p=0;
/* AaO2UdGW7 ily traian iN52F1WaP */     cin>>n>>m;
/* AaO2UdGW7 ily traian iN52F1WaP */     for(int i=1;i<=n;i++)
/* AaO2UdGW7 ily traian iN52F1WaP */     {
/* AaO2UdGW7 ily traian iN52F1WaP */         int aux=i;
/* AaO2UdGW7 ily traian iN52F1WaP */         if(aux%m==0)
/* AaO2UdGW7 ily traian iN52F1WaP */         {
/* AaO2UdGW7 ily traian iN52F1WaP */             while(aux%m==0)
/* AaO2UdGW7 ily traian iN52F1WaP */             {
/* AaO2UdGW7 ily traian iN52F1WaP */                 p++;
/* AaO2UdGW7 ily traian iN52F1WaP */                 aux=aux/m;
/* AaO2UdGW7 ily traian iN52F1WaP */             }
/* AaO2UdGW7 ily traian iN52F1WaP */         }
/* AaO2UdGW7 ily traian iN52F1WaP */     }
/* AaO2UdGW7 ily traian iN52F1WaP */     cout<<p;
/* AaO2UdGW7 ily traian iN52F1WaP */     return 0;
/* AaO2UdGW7 ily traian iN52F1WaP */ }