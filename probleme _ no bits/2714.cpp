/* WPTVW37L7 ily traian ZK74ZC7Pe */ #include <algorithm>
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
/* WPTVW37L7 ily traian ZK74ZC7Pe */ using namespace std;
/* WPTVW37L7 ily traian ZK74ZC7Pe */ ifstream cin("frecvimp.in");
/* WPTVW37L7 ily traian ZK74ZC7Pe */ ofstream cout("frecvimp.out");
/* WPTVW37L7 ily traian ZK74ZC7Pe */ 
/* WPTVW37L7 ily traian ZK74ZC7Pe */ int main()
/* WPTVW37L7 ily traian ZK74ZC7Pe */ {
/* WPTVW37L7 ily traian ZK74ZC7Pe */     long long n , x , p = 0;
/* WPTVW37L7 ily traian ZK74ZC7Pe */     cin >> n;
/* WPTVW37L7 ily traian ZK74ZC7Pe */     for(int i = 1 ; i <= n ; ++i)
/* WPTVW37L7 ily traian ZK74ZC7Pe */     {
/* WPTVW37L7 ily traian ZK74ZC7Pe */         cin >> x;
/* WPTVW37L7 ily traian ZK74ZC7Pe */         if((x & (x - 1)) == 0) p = p ^ x;
/* WPTVW37L7 ily traian ZK74ZC7Pe */     }
/* WPTVW37L7 ily traian ZK74ZC7Pe */     cout << p;
/* WPTVW37L7 ily traian ZK74ZC7Pe */     return 0;
/* WPTVW37L7 ily traian ZK74ZC7Pe */ }