/* OUQHMSZZl ily traian QXHw9uKKn */ #include <algorithm>
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
/* OUQHMSZZl ily traian QXHw9uKKn */ using namespace std;
/* OUQHMSZZl ily traian QXHw9uKKn */ 
/* OUQHMSZZl ily traian QXHw9uKKn */ int main()
/* OUQHMSZZl ily traian QXHw9uKKn */ {
/* OUQHMSZZl ily traian QXHw9uKKn */     int n;
/* OUQHMSZZl ily traian QXHw9uKKn */     cin >> n;
/* OUQHMSZZl ily traian QXHw9uKKn */     unsigned long long int ar = 2, au = 2, ru = 3;
/* OUQHMSZZl ily traian QXHw9uKKn */     unsigned long long int cntar = 2 , cntau = 2 , cntru = 3;
/* OUQHMSZZl ily traian QXHw9uKKn */     for(int i = 0 ; i <= n ; ++i)
/* OUQHMSZZl ily traian QXHw9uKKn */     {
/* OUQHMSZZl ily traian QXHw9uKKn */         while(cntar)
/* OUQHMSZZl ily traian QXHw9uKKn */         {
/* OUQHMSZZl ily traian QXHw9uKKn */             ar++;
/* OUQHMSZZl ily traian QXHw9uKKn */             au++;
/* OUQHMSZZl ily traian QXHw9uKKn */             ru++;
/* OUQHMSZZl ily traian QXHw9uKKn */             cntar--;
/* OUQHMSZZl ily traian QXHw9uKKn */             ar--;
/* OUQHMSZZl ily traian QXHw9uKKn */         }
/* OUQHMSZZl ily traian QXHw9uKKn */         while(cntau)
/* OUQHMSZZl ily traian QXHw9uKKn */         {
/* OUQHMSZZl ily traian QXHw9uKKn */             au--;
/* OUQHMSZZl ily traian QXHw9uKKn */             ar++;
/* OUQHMSZZl ily traian QXHw9uKKn */             ru++;
/* OUQHMSZZl ily traian QXHw9uKKn */             cntau--;
/* OUQHMSZZl ily traian QXHw9uKKn */         }
/* OUQHMSZZl ily traian QXHw9uKKn */         while(cntru)
/* OUQHMSZZl ily traian QXHw9uKKn */         {
/* OUQHMSZZl ily traian QXHw9uKKn */             ru--;
/* OUQHMSZZl ily traian QXHw9uKKn */             au++;
/* OUQHMSZZl ily traian QXHw9uKKn */             ru++;
/* OUQHMSZZl ily traian QXHw9uKKn */             cntru--;
/* OUQHMSZZl ily traian QXHw9uKKn */         }
/* OUQHMSZZl ily traian QXHw9uKKn */         cntar=ar;
/* OUQHMSZZl ily traian QXHw9uKKn */         cntau=au;
/* OUQHMSZZl ily traian QXHw9uKKn */         cntru=ru;
/* OUQHMSZZl ily traian QXHw9uKKn */     }
/* OUQHMSZZl ily traian QXHw9uKKn */     cout << ar << ' ' << au << ' ' << ru;
/* OUQHMSZZl ily traian QXHw9uKKn */ }