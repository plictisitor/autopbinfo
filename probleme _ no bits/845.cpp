/* adwoamyRJ ily traian 33jVqR0rb */ #include <algorithm>
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
/* adwoamyRJ ily traian 33jVqR0rb */ using namespace std;
/* adwoamyRJ ily traian 33jVqR0rb */ 
/* adwoamyRJ ily traian 33jVqR0rb */ int n , p , a[1050][1050];
/* adwoamyRJ ily traian 33jVqR0rb */ 
/* adwoamyRJ ily traian 33jVqR0rb */ void pattern (int i1 , int j1 , int i2 , int j2)
/* adwoamyRJ ily traian 33jVqR0rb */ {
/* adwoamyRJ ily traian 33jVqR0rb */     if(i1 < i2)
/* adwoamyRJ ily traian 33jVqR0rb */     {
/* adwoamyRJ ily traian 33jVqR0rb */         int im = (i1 + i2) / 2 , jm = (j1 + j2) / 2;
/* adwoamyRJ ily traian 33jVqR0rb */         for(int i = i1 ; i <= im ; i ++)
/* adwoamyRJ ily traian 33jVqR0rb */             for(int j = j1 ; j <= jm ; j ++)
/* adwoamyRJ ily traian 33jVqR0rb */                 a[i][j] = 1;
/* adwoamyRJ ily traian 33jVqR0rb */         pattern(i1 , jm + 1 , im , j2);
/* adwoamyRJ ily traian 33jVqR0rb */         pattern(im + 1 , j1 , i2 , jm);
/* adwoamyRJ ily traian 33jVqR0rb */         pattern(im + 1 , jm + 1 , i2 , j2);
/* adwoamyRJ ily traian 33jVqR0rb */     }
/* adwoamyRJ ily traian 33jVqR0rb */ }
/* adwoamyRJ ily traian 33jVqR0rb */ 
/* adwoamyRJ ily traian 33jVqR0rb */ int main()
/* adwoamyRJ ily traian 33jVqR0rb */ {
/* adwoamyRJ ily traian 33jVqR0rb */     cin >> n;
/* adwoamyRJ ily traian 33jVqR0rb */     p = 1;
/* adwoamyRJ ily traian 33jVqR0rb */     for(int i = 1 ; i <= n ; i ++)
/* adwoamyRJ ily traian 33jVqR0rb */         p *= 2;
/* adwoamyRJ ily traian 33jVqR0rb */     
/* adwoamyRJ ily traian 33jVqR0rb */     pattern(1 , 1 , p , p);
/* adwoamyRJ ily traian 33jVqR0rb */     for(int i = 1 ; i <= p ; i ++)
/* adwoamyRJ ily traian 33jVqR0rb */     {
/* adwoamyRJ ily traian 33jVqR0rb */         for(int j = 1; j <= p ; j ++)
/* adwoamyRJ ily traian 33jVqR0rb */             cout << a[i][j] << " ";
/* adwoamyRJ ily traian 33jVqR0rb */         cout << endl;
/* adwoamyRJ ily traian 33jVqR0rb */     }
/* adwoamyRJ ily traian 33jVqR0rb */     return 0;
/* adwoamyRJ ily traian 33jVqR0rb */ }