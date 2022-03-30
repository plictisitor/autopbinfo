/* KoCQWPQ8h ily traian gMMQoPJMA */ #include <algorithm>
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
/* KoCQWPQ8h ily traian gMMQoPJMA */ using namespace std;
/* KoCQWPQ8h ily traian gMMQoPJMA */ int main()
/* KoCQWPQ8h ily traian gMMQoPJMA */ {
/* KoCQWPQ8h ily traian gMMQoPJMA */     int n , x , b , s= 0;
/* KoCQWPQ8h ily traian gMMQoPJMA */     cin >> b >> n;
/* KoCQWPQ8h ily traian gMMQoPJMA */     int put=0,a=1;
/* KoCQWPQ8h ily traian gMMQoPJMA */     while(put<n-1)
/* KoCQWPQ8h ily traian gMMQoPJMA */     {
/* KoCQWPQ8h ily traian gMMQoPJMA */         a = a * b;
/* KoCQWPQ8h ily traian gMMQoPJMA */         put++;
/* KoCQWPQ8h ily traian gMMQoPJMA */     }
/* KoCQWPQ8h ily traian gMMQoPJMA */     for(int i=1;i<=n;i++)
/* KoCQWPQ8h ily traian gMMQoPJMA */     {
/* KoCQWPQ8h ily traian gMMQoPJMA */        cin >> x;
/* KoCQWPQ8h ily traian gMMQoPJMA */         s=s+x*a;
/* KoCQWPQ8h ily traian gMMQoPJMA */         a=a/b;
/* KoCQWPQ8h ily traian gMMQoPJMA */     }
/* KoCQWPQ8h ily traian gMMQoPJMA */     cout<<s;
/* KoCQWPQ8h ily traian gMMQoPJMA */     return 0;
/* KoCQWPQ8h ily traian gMMQoPJMA */ }