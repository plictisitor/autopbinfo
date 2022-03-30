/* h3MJrdmZE ily traian 3qkeYEFSY */ #include <algorithm>
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
/* h3MJrdmZE ily traian 3qkeYEFSY */ using namespace std ;
/* h3MJrdmZE ily traian 3qkeYEFSY */ ifstream fin("maxsim.in");
/* h3MJrdmZE ily traian 3qkeYEFSY */ ofstream fout("maxsim.out");
/* h3MJrdmZE ily traian 3qkeYEFSY */ int main()
/* h3MJrdmZE ily traian 3qkeYEFSY */ {
/* h3MJrdmZE ily traian 3qkeYEFSY */     int n , a[1001] , i1 = 0 , i2 = 0 , maxi = -1 ;
/* h3MJrdmZE ily traian 3qkeYEFSY */     fin >> n;
/* h3MJrdmZE ily traian 3qkeYEFSY */     for(int i = 1 ; i <= n ; ++i)fin >> a[i];
/* h3MJrdmZE ily traian 3qkeYEFSY */     for(int i = 1 ; i <= n / 2; ++i)
/* h3MJrdmZE ily traian 3qkeYEFSY */     {
/* h3MJrdmZE ily traian 3qkeYEFSY */         if(a[i] + a[n - i + 1] > maxi)
/* h3MJrdmZE ily traian 3qkeYEFSY */         {
/* h3MJrdmZE ily traian 3qkeYEFSY */             maxi = a[i] + a[n - i + 1];
/* h3MJrdmZE ily traian 3qkeYEFSY */             i1 = i;
/* h3MJrdmZE ily traian 3qkeYEFSY */             i2 = n - i + 1;
/* h3MJrdmZE ily traian 3qkeYEFSY */         }
/* h3MJrdmZE ily traian 3qkeYEFSY */     }
/* h3MJrdmZE ily traian 3qkeYEFSY */     fout << maxi << " " << i1 << " " << i2;
/* h3MJrdmZE ily traian 3qkeYEFSY */     return 0;
/* h3MJrdmZE ily traian 3qkeYEFSY */ }