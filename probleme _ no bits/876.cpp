/* ujkuZGSrG ily traian gamg37NdJ */ #include <algorithm>
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
/* ujkuZGSrG ily traian gamg37NdJ */ 
/* ujkuZGSrG ily traian gamg37NdJ */ 
/* ujkuZGSrG ily traian gamg37NdJ */ 
/* ujkuZGSrG ily traian gamg37NdJ */ using namespace std;
/* ujkuZGSrG ily traian gamg37NdJ */ //ifstream cin("paranteze3.in");
/* ujkuZGSrG ily traian gamg37NdJ */ //ofstream cout("paranteze3.out");
/* ujkuZGSrG ily traian gamg37NdJ */ int main()
/* ujkuZGSrG ily traian gamg37NdJ */ {
/* ujkuZGSrG ily traian gamg37NdJ */     int c , x;
/* ujkuZGSrG ily traian gamg37NdJ */     queue<int>Q;
/* ujkuZGSrG ily traian gamg37NdJ */     string s;
/* ujkuZGSrG ily traian gamg37NdJ */     cin >> c;
/* ujkuZGSrG ily traian gamg37NdJ */     for(int i = 1 ; i <= c ; i++)
/* ujkuZGSrG ily traian gamg37NdJ */     {
/* ujkuZGSrG ily traian gamg37NdJ */         cin >> s;
/* ujkuZGSrG ily traian gamg37NdJ */         if(s == "push")
/* ujkuZGSrG ily traian gamg37NdJ */         {
/* ujkuZGSrG ily traian gamg37NdJ */             cin >> x;
/* ujkuZGSrG ily traian gamg37NdJ */             Q.push(x);
/* ujkuZGSrG ily traian gamg37NdJ */         }
/* ujkuZGSrG ily traian gamg37NdJ */         else if(s == "front")
/* ujkuZGSrG ily traian gamg37NdJ */             cout << Q.front() << '\n';
/* ujkuZGSrG ily traian gamg37NdJ */         else Q.pop();
/* ujkuZGSrG ily traian gamg37NdJ */     }
/* ujkuZGSrG ily traian gamg37NdJ */ }