/* QKPgu33nP ily traian gbBNz7TTk */ #include <algorithm>
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
/* QKPgu33nP ily traian gbBNz7TTk */ 
/* QKPgu33nP ily traian gbBNz7TTk */ 
/* QKPgu33nP ily traian gbBNz7TTk */ using namespace std;
/* QKPgu33nP ily traian gbBNz7TTk */ 
/* QKPgu33nP ily traian gbBNz7TTk */ ifstream cin("sortcuv.in");
/* QKPgu33nP ily traian gbBNz7TTk */ ofstream cout("sortcuv.out");
/* QKPgu33nP ily traian gbBNz7TTk */ 
/* QKPgu33nP ily traian gbBNz7TTk */ int main()
/* QKPgu33nP ily traian gbBNz7TTk */ {
/* QKPgu33nP ily traian gbBNz7TTk */     map <string,int> M;
/* QKPgu33nP ily traian gbBNz7TTk */     string s;
/* QKPgu33nP ily traian gbBNz7TTk */     while(cin >> s)
/* QKPgu33nP ily traian gbBNz7TTk */         M[s]++;
/* QKPgu33nP ily traian gbBNz7TTk */     for(auto x:M)
/* QKPgu33nP ily traian gbBNz7TTk */     {
/* QKPgu33nP ily traian gbBNz7TTk */         for(int i = 1 ; i <= x.second ; ++i)
/* QKPgu33nP ily traian gbBNz7TTk */             cout << x.first << '\n';
/* QKPgu33nP ily traian gbBNz7TTk */     }
/* QKPgu33nP ily traian gbBNz7TTk */     return 0;
/* QKPgu33nP ily traian gbBNz7TTk */ }