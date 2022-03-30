/* GMtoPq2L8 ily traian f87k0P0MZ */ #include <algorithm>
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
/* GMtoPq2L8 ily traian f87k0P0MZ */ using namespace std;
/* GMtoPq2L8 ily traian f87k0P0MZ */ 
/* GMtoPq2L8 ily traian f87k0P0MZ */ int main()
/* GMtoPq2L8 ily traian f87k0P0MZ */ {
/* GMtoPq2L8 ily traian f87k0P0MZ */     int n;
/* GMtoPq2L8 ily traian f87k0P0MZ */     cin >> n;
/* GMtoPq2L8 ily traian f87k0P0MZ */     int a[1000];
/* GMtoPq2L8 ily traian f87k0P0MZ */     for(int i = 1 ; i <= n ; ++i)
/* GMtoPq2L8 ily traian f87k0P0MZ */     cin >> a[i];
/* GMtoPq2L8 ily traian f87k0P0MZ */     bool corect=true;
/* GMtoPq2L8 ily traian f87k0P0MZ */     a[0]=-1;
/* GMtoPq2L8 ily traian f87k0P0MZ */     for(int i = 1 ; i <= n ; ++i)
/* GMtoPq2L8 ily traian f87k0P0MZ */     {
/* GMtoPq2L8 ily traian f87k0P0MZ */         if(a[i]==1 && a[i-1]==1)   
/* GMtoPq2L8 ily traian f87k0P0MZ */         corect= false;
/* GMtoPq2L8 ily traian f87k0P0MZ */     }
/* GMtoPq2L8 ily traian f87k0P0MZ */     if(corect)
/* GMtoPq2L8 ily traian f87k0P0MZ */     cout << "DA";
/* GMtoPq2L8 ily traian f87k0P0MZ */     else
/* GMtoPq2L8 ily traian f87k0P0MZ */     cout << "NU";
/* GMtoPq2L8 ily traian f87k0P0MZ */     return 0;
/* GMtoPq2L8 ily traian f87k0P0MZ */ }