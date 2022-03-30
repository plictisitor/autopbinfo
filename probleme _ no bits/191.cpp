/* NgffiiECQ ily traian EV2UnLxsf */ #include <algorithm>
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
/* NgffiiECQ ily traian EV2UnLxsf */ using namespace std;
/* NgffiiECQ ily traian EV2UnLxsf */ ifstream fin("maxmat.in");
/* NgffiiECQ ily traian EV2UnLxsf */ ofstream fout("maxmat.out");
/* NgffiiECQ ily traian EV2UnLxsf */ 
/* NgffiiECQ ily traian EV2UnLxsf */ int main()
/* NgffiiECQ ily traian EV2UnLxsf */ {
/* NgffiiECQ ily traian EV2UnLxsf */     int n , m , a[103][103] , ind , maxi;
/* NgffiiECQ ily traian EV2UnLxsf */     fin >> n >> m;
/* NgffiiECQ ily traian EV2UnLxsf */     for(int i = 0 ; i < n ; ++i)
/* NgffiiECQ ily traian EV2UnLxsf */         for(int j = 0 ; j < m ; ++j) fin >> a[i][j];
/* NgffiiECQ ily traian EV2UnLxsf */     for(int i = 0 ; i < n ; ++i)
/* NgffiiECQ ily traian EV2UnLxsf */     {
/* NgffiiECQ ily traian EV2UnLxsf */         maxi = -1001;
/* NgffiiECQ ily traian EV2UnLxsf */         for(int j = 0 ; j < m ; ++j)
/* NgffiiECQ ily traian EV2UnLxsf */         {
/* NgffiiECQ ily traian EV2UnLxsf */             if(a[i][j] > maxi)
/* NgffiiECQ ily traian EV2UnLxsf */             {
/* NgffiiECQ ily traian EV2UnLxsf */                 maxi = a[i][j];
/* NgffiiECQ ily traian EV2UnLxsf */                 ind = j;
/* NgffiiECQ ily traian EV2UnLxsf */             }
/* NgffiiECQ ily traian EV2UnLxsf */         }
/* NgffiiECQ ily traian EV2UnLxsf */         fout << maxi << " " << ind + 1 << endl;
/* NgffiiECQ ily traian EV2UnLxsf */     }
/* NgffiiECQ ily traian EV2UnLxsf */ 
/* NgffiiECQ ily traian EV2UnLxsf */     fin.close();
/* NgffiiECQ ily traian EV2UnLxsf */     fout.close();
/* NgffiiECQ ily traian EV2UnLxsf */ 
/* NgffiiECQ ily traian EV2UnLxsf */     return 0;
/* NgffiiECQ ily traian EV2UnLxsf */ }
/* NgffiiECQ ily traian EV2UnLxsf */ 