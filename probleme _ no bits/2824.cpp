/* e7yUmmqvX ily traian Oz5K5H5tr */ #include <algorithm>
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
/* e7yUmmqvX ily traian Oz5K5H5tr */ using namespace std;
/* e7yUmmqvX ily traian Oz5K5H5tr */ ifstream cin("numere25.in");
/* e7yUmmqvX ily traian Oz5K5H5tr */ ofstream cout("numere25.out");
/* e7yUmmqvX ily traian Oz5K5H5tr */ int n , x , y , ok;
/* e7yUmmqvX ily traian Oz5K5H5tr */ 
/* e7yUmmqvX ily traian Oz5K5H5tr */ int main()
/* e7yUmmqvX ily traian Oz5K5H5tr */ {
/* e7yUmmqvX ily traian Oz5K5H5tr */     cin >> n;
/* e7yUmmqvX ily traian Oz5K5H5tr */     while(cin >> y)
/* e7yUmmqvX ily traian Oz5K5H5tr */     {
/* e7yUmmqvX ily traian Oz5K5H5tr */         for(int i = x + 1 ; i < y ; i++)
/* e7yUmmqvX ily traian Oz5K5H5tr */         {
/* e7yUmmqvX ily traian Oz5K5H5tr */             cout << i << " ";
/* e7yUmmqvX ily traian Oz5K5H5tr */             ok = 1;
/* e7yUmmqvX ily traian Oz5K5H5tr */         }
/* e7yUmmqvX ily traian Oz5K5H5tr */         x = y;
/* e7yUmmqvX ily traian Oz5K5H5tr */     }
/* e7yUmmqvX ily traian Oz5K5H5tr */     for(int i = x + 1 ; i <= n ; i++)
/* e7yUmmqvX ily traian Oz5K5H5tr */     {
/* e7yUmmqvX ily traian Oz5K5H5tr */         cout << i << " ";
/* e7yUmmqvX ily traian Oz5K5H5tr */         ok = 1;
/* e7yUmmqvX ily traian Oz5K5H5tr */     }
/* e7yUmmqvX ily traian Oz5K5H5tr */     if(!ok) cout << "Nu exista";
/* e7yUmmqvX ily traian Oz5K5H5tr */ }