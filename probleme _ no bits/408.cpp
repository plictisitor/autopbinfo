/* rBRJeihec ily traian 6QvNBXMHi */ #include <algorithm>
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
/* rBRJeihec ily traian 6QvNBXMHi */ 
/* rBRJeihec ily traian 6QvNBXMHi */ using namespace std;
/* rBRJeihec ily traian 6QvNBXMHi */ 
/* rBRJeihec ily traian 6QvNBXMHi */ int main()
/* rBRJeihec ily traian 6QvNBXMHi */ {
/* rBRJeihec ily traian 6QvNBXMHi */     int n,r=0;
/* rBRJeihec ily traian 6QvNBXMHi */     cin >> n;
/* rBRJeihec ily traian 6QvNBXMHi */     while(n)
/* rBRJeihec ily traian 6QvNBXMHi */     {
/* rBRJeihec ily traian 6QvNBXMHi */     r=r*10+n%10;
/* rBRJeihec ily traian 6QvNBXMHi */     n=n/10;
/* rBRJeihec ily traian 6QvNBXMHi */     }
/* rBRJeihec ily traian 6QvNBXMHi */     int cnt=0;
/* rBRJeihec ily traian 6QvNBXMHi */     for (int i = 1; i*i <= r ; ++i)
/* rBRJeihec ily traian 6QvNBXMHi */     {
/* rBRJeihec ily traian 6QvNBXMHi */         if (r%i==0)
/* rBRJeihec ily traian 6QvNBXMHi */             cnt+=2;
/* rBRJeihec ily traian 6QvNBXMHi */         if (i*i==r)
/* rBRJeihec ily traian 6QvNBXMHi */             cnt-=1;;
/* rBRJeihec ily traian 6QvNBXMHi */     }
/* rBRJeihec ily traian 6QvNBXMHi */     cout << cnt;
/* rBRJeihec ily traian 6QvNBXMHi */     return 0;
/* rBRJeihec ily traian 6QvNBXMHi */ }