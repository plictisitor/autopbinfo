/* 4PlvvKNTE ily traian ssB6rhvUd */ #include <algorithm>
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
/* 4PlvvKNTE ily traian ssB6rhvUd */ using namespace std;
/* 4PlvvKNTE ily traian ssB6rhvUd */ 
/* 4PlvvKNTE ily traian ssB6rhvUd */ ifstream cin("subarbore2.in");
/* 4PlvvKNTE ily traian ssB6rhvUd */ ofstream cout("subarbore2.out");
/* 4PlvvKNTE ily traian ssB6rhvUd */ 
/* 4PlvvKNTE ily traian ssB6rhvUd */ int n , k , t[101] , val[101] , s;
/* 4PlvvKNTE ily traian ssB6rhvUd */ 
/* 4PlvvKNTE ily traian ssB6rhvUd */ int main()
/* 4PlvvKNTE ily traian ssB6rhvUd */ {
/* 4PlvvKNTE ily traian ssB6rhvUd */     cin >> n >> k;
/* 4PlvvKNTE ily traian ssB6rhvUd */     for(int i = 1 ; i <= n ; i++)
/* 4PlvvKNTE ily traian ssB6rhvUd */         cin >> t[i];
/* 4PlvvKNTE ily traian ssB6rhvUd */     for(int i = 1 ; i <= n ; i++)
/* 4PlvvKNTE ily traian ssB6rhvUd */         cin >> val[i];
/* 4PlvvKNTE ily traian ssB6rhvUd */     s += val[k];
/* 4PlvvKNTE ily traian ssB6rhvUd */     for(int i = 1 ; i <= n ; i++)
/* 4PlvvKNTE ily traian ssB6rhvUd */     {
/* 4PlvvKNTE ily traian ssB6rhvUd */         int ok = 0;
/* 4PlvvKNTE ily traian ssB6rhvUd */         int p = t[i];
/* 4PlvvKNTE ily traian ssB6rhvUd */         while(p)
/* 4PlvvKNTE ily traian ssB6rhvUd */         {
/* 4PlvvKNTE ily traian ssB6rhvUd */             if(p == k)ok = 1;
/* 4PlvvKNTE ily traian ssB6rhvUd */             p = t[p];
/* 4PlvvKNTE ily traian ssB6rhvUd */         }
/* 4PlvvKNTE ily traian ssB6rhvUd */         if(ok) s += val[i];
/* 4PlvvKNTE ily traian ssB6rhvUd */     }
/* 4PlvvKNTE ily traian ssB6rhvUd */     cout << s;
/* 4PlvvKNTE ily traian ssB6rhvUd */     return 0;
/* 4PlvvKNTE ily traian ssB6rhvUd */ 
/* 4PlvvKNTE ily traian ssB6rhvUd */ }