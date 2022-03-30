/* RJOfjIOJX ily traian a8V9I5JiS */ #include <algorithm>
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
/* RJOfjIOJX ily traian a8V9I5JiS */ using namespace std;
/* RJOfjIOJX ily traian a8V9I5JiS */ 
/* RJOfjIOJX ily traian a8V9I5JiS */ ifstream cin("oglindiri.in");
/* RJOfjIOJX ily traian a8V9I5JiS */ ofstream cout("oglindiri.out");
/* RJOfjIOJX ily traian a8V9I5JiS */ 
/* RJOfjIOJX ily traian a8V9I5JiS */ int main()
/* RJOfjIOJX ily traian a8V9I5JiS */ {
/* RJOfjIOJX ily traian a8V9I5JiS */     int n , m;
/* RJOfjIOJX ily traian a8V9I5JiS */     int a[101];
/* RJOfjIOJX ily traian a8V9I5JiS */     int b[101];
/* RJOfjIOJX ily traian a8V9I5JiS */     cin >> n;
/* RJOfjIOJX ily traian a8V9I5JiS */     for(int i = 1 ; i <= n ; ++i)
/* RJOfjIOJX ily traian a8V9I5JiS */     {
/* RJOfjIOJX ily traian a8V9I5JiS */     cin >> a[i];
/* RJOfjIOJX ily traian a8V9I5JiS */     b[i]=a[i];
/* RJOfjIOJX ily traian a8V9I5JiS */     }
/* RJOfjIOJX ily traian a8V9I5JiS */     cin >> m;
/* RJOfjIOJX ily traian a8V9I5JiS */     int st , dr;
/* RJOfjIOJX ily traian a8V9I5JiS */     for(int i = 1 ; i <= m ; ++i)
/* RJOfjIOJX ily traian a8V9I5JiS */     {
/* RJOfjIOJX ily traian a8V9I5JiS */         cin >> st >> dr;
/* RJOfjIOJX ily traian a8V9I5JiS */         int ind=st;
/* RJOfjIOJX ily traian a8V9I5JiS */         for(int j = dr ; j >= st ; --j)
/* RJOfjIOJX ily traian a8V9I5JiS */         {
/* RJOfjIOJX ily traian a8V9I5JiS */             b[ind]=a[j];
/* RJOfjIOJX ily traian a8V9I5JiS */             ind++;
/* RJOfjIOJX ily traian a8V9I5JiS */         }
/* RJOfjIOJX ily traian a8V9I5JiS */         for(int j = 1 ; j <= n ; ++j)
/* RJOfjIOJX ily traian a8V9I5JiS */         {
/* RJOfjIOJX ily traian a8V9I5JiS */             a[j]=b[j];    
/* RJOfjIOJX ily traian a8V9I5JiS */         }
/* RJOfjIOJX ily traian a8V9I5JiS */     }
/* RJOfjIOJX ily traian a8V9I5JiS */     for(int i = 1 ; i <= n ; ++i)
/* RJOfjIOJX ily traian a8V9I5JiS */     cout << a[i] << ' ';
/* RJOfjIOJX ily traian a8V9I5JiS */     return 0;    
/* RJOfjIOJX ily traian a8V9I5JiS */ }