/* FkgvypzBh ily traian Zr4YFQ25J */ #include <algorithm>
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
/* FkgvypzBh ily traian Zr4YFQ25J */ 
/* FkgvypzBh ily traian Zr4YFQ25J */ using namespace std;
/* FkgvypzBh ily traian Zr4YFQ25J */ int a[1001] , n , ind;
/* FkgvypzBh ily traian Zr4YFQ25J */ int main()
/* FkgvypzBh ily traian Zr4YFQ25J */ {
/* FkgvypzBh ily traian Zr4YFQ25J */     cin >> n;
/* FkgvypzBh ily traian Zr4YFQ25J */     for(int i = 1 ; i*i <= n ; i++)
/* FkgvypzBh ily traian Zr4YFQ25J */     {
/* FkgvypzBh ily traian Zr4YFQ25J */         if(n%i==0)
/* FkgvypzBh ily traian Zr4YFQ25J */         {
/* FkgvypzBh ily traian Zr4YFQ25J */             a[ind]=i , ind++;
/* FkgvypzBh ily traian Zr4YFQ25J */             if(i*i!=n) a[ind]=n/i , ind++;
/* FkgvypzBh ily traian Zr4YFQ25J */         }
/* FkgvypzBh ily traian Zr4YFQ25J */     }
/* FkgvypzBh ily traian Zr4YFQ25J */     sort(a , a+ind);
/* FkgvypzBh ily traian Zr4YFQ25J */     int x = 1;
/* FkgvypzBh ily traian Zr4YFQ25J */     for(int i = 0 ; i < ind ; i++)
/* FkgvypzBh ily traian Zr4YFQ25J */         if(a[i]%x==0)cout << a[i] << " " , x = a[i];
/* FkgvypzBh ily traian Zr4YFQ25J */ }