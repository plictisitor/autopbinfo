/* t3DZNTbTZ ily traian iZMj63f5n */ #include <algorithm>
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
/* t3DZNTbTZ ily traian iZMj63f5n */ using namespace std;
/* t3DZNTbTZ ily traian iZMj63f5n */ 
/* t3DZNTbTZ ily traian iZMj63f5n */ int main()
/* t3DZNTbTZ ily traian iZMj63f5n */ {
/* t3DZNTbTZ ily traian iZMj63f5n */     int n;
/* t3DZNTbTZ ily traian iZMj63f5n */     cin >> n;
/* t3DZNTbTZ ily traian iZMj63f5n */     int a[10];
/* t3DZNTbTZ ily traian iZMj63f5n */     int f[100];
/* t3DZNTbTZ ily traian iZMj63f5n */     f[0]=1 , f[1]=1;
/* t3DZNTbTZ ily traian iZMj63f5n */     for(int i = 2 ; i < 45 ; ++i)
/* t3DZNTbTZ ily traian iZMj63f5n */     f[i]=f[i-1]+f[i-2];
/* t3DZNTbTZ ily traian iZMj63f5n */     for(int i = 0 ; i < n ; ++i)
/* t3DZNTbTZ ily traian iZMj63f5n */     cin >> a[i];
/* t3DZNTbTZ ily traian iZMj63f5n */     for(int i = 0 ; i < n ; ++i)
/* t3DZNTbTZ ily traian iZMj63f5n */     {
/* t3DZNTbTZ ily traian iZMj63f5n */         int cnt=0;
/* t3DZNTbTZ ily traian iZMj63f5n */         for(int j=0 ; j < 45 ; ++j)
/* t3DZNTbTZ ily traian iZMj63f5n */         if(f[j]==a[i])
/* t3DZNTbTZ ily traian iZMj63f5n */         cnt++;
/* t3DZNTbTZ ily traian iZMj63f5n */         if(cnt==0)
/* t3DZNTbTZ ily traian iZMj63f5n */         cout << "NU" << endl;
/* t3DZNTbTZ ily traian iZMj63f5n */         else
/* t3DZNTbTZ ily traian iZMj63f5n */         cout << "DA" << endl;
/* t3DZNTbTZ ily traian iZMj63f5n */     }
/* t3DZNTbTZ ily traian iZMj63f5n */     return 0;    
/* t3DZNTbTZ ily traian iZMj63f5n */ }