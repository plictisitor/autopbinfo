/* VyhrJyjYy ily traian 7yewanBwk */ #include <algorithm>
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
/* VyhrJyjYy ily traian 7yewanBwk */ using namespace std;
/* VyhrJyjYy ily traian 7yewanBwk */ 
/* VyhrJyjYy ily traian 7yewanBwk */ ifstream cin("hanoi.in");
/* VyhrJyjYy ily traian 7yewanBwk */ ofstream cout("hanoi.out");
/* VyhrJyjYy ily traian 7yewanBwk */ 
/* VyhrJyjYy ily traian 7yewanBwk */ void hanoi(int n , char a , char b , char c)
/* VyhrJyjYy ily traian 7yewanBwk */ {
/* VyhrJyjYy ily traian 7yewanBwk */     if(n > 0)
/* VyhrJyjYy ily traian 7yewanBwk */     {
/* VyhrJyjYy ily traian 7yewanBwk */         hanoi(n - 1 , a , c , b);
/* VyhrJyjYy ily traian 7yewanBwk */         cout << a << "->" << c << '\n';
/* VyhrJyjYy ily traian 7yewanBwk */         hanoi(n - 1 , b , a , c);
/* VyhrJyjYy ily traian 7yewanBwk */     }
/* VyhrJyjYy ily traian 7yewanBwk */ }
/* VyhrJyjYy ily traian 7yewanBwk */ 
/* VyhrJyjYy ily traian 7yewanBwk */ int main()
/* VyhrJyjYy ily traian 7yewanBwk */ {
/* VyhrJyjYy ily traian 7yewanBwk */     int n;
/* VyhrJyjYy ily traian 7yewanBwk */     cin >> n;
/* VyhrJyjYy ily traian 7yewanBwk */     char a = 'A' , b = 'B' , c = 'C';
/* VyhrJyjYy ily traian 7yewanBwk */     int put = 1;
/* VyhrJyjYy ily traian 7yewanBwk */     for(int i = 0 ; i < n ; ++i)
/* VyhrJyjYy ily traian 7yewanBwk */         put *= 2;
/* VyhrJyjYy ily traian 7yewanBwk */     cout << put-1 << endl;
/* VyhrJyjYy ily traian 7yewanBwk */     hanoi(n , a , b , c);
/* VyhrJyjYy ily traian 7yewanBwk */     return 0;
/* VyhrJyjYy ily traian 7yewanBwk */ }