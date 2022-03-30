/* SSspHVXgI ily traian QJogp2cLX */ #include <algorithm>
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
/* SSspHVXgI ily traian QJogp2cLX */ 
/* SSspHVXgI ily traian QJogp2cLX */ using namespace std;
/* SSspHVXgI ily traian QJogp2cLX */ 
/* SSspHVXgI ily traian QJogp2cLX */ ifstream fin("platou3.in");
/* SSspHVXgI ily traian QJogp2cLX */ ofstream fout("platou3.out");
/* SSspHVXgI ily traian QJogp2cLX */ 
/* SSspHVXgI ily traian QJogp2cLX */ int main()
/* SSspHVXgI ily traian QJogp2cLX */ {
/* SSspHVXgI ily traian QJogp2cLX */     int n;
/* SSspHVXgI ily traian QJogp2cLX */     fin >> n;
/* SSspHVXgI ily traian QJogp2cLX */     int a[1000];
/* SSspHVXgI ily traian QJogp2cLX */     int l = 0 , lmax=0;
/* SSspHVXgI ily traian QJogp2cLX */     a[0]=-1;
/* SSspHVXgI ily traian QJogp2cLX */     for(int i = 1 ; i <= n ; ++i)
/* SSspHVXgI ily traian QJogp2cLX */     fin >> a[i];
/* SSspHVXgI ily traian QJogp2cLX */     for(int i = 1 ; i <= n ; ++i)
/* SSspHVXgI ily traian QJogp2cLX */     {
/* SSspHVXgI ily traian QJogp2cLX */         if(a[i]>0 && a[i-1]>0)
/* SSspHVXgI ily traian QJogp2cLX */         {
/* SSspHVXgI ily traian QJogp2cLX */         l++;
/* SSspHVXgI ily traian QJogp2cLX */         if(l>lmax)
/* SSspHVXgI ily traian QJogp2cLX */         lmax=l;
/* SSspHVXgI ily traian QJogp2cLX */         }
/* SSspHVXgI ily traian QJogp2cLX */         else
/* SSspHVXgI ily traian QJogp2cLX */         l=0;
/* SSspHVXgI ily traian QJogp2cLX */     }
/* SSspHVXgI ily traian QJogp2cLX */     fout << lmax+1;
/* SSspHVXgI ily traian QJogp2cLX */     return 0;
/* SSspHVXgI ily traian QJogp2cLX */ }