/* AGwmKblCr ily traian d84lADcuz */ #include <algorithm>
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
/* AGwmKblCr ily traian d84lADcuz */ using namespace std;
/* AGwmKblCr ily traian d84lADcuz */ 
/* AGwmKblCr ily traian d84lADcuz */ ifstream cin("adn.in");
/* AGwmKblCr ily traian d84lADcuz */ ofstream cout("adn.out");
/* AGwmKblCr ily traian d84lADcuz */ 
/* AGwmKblCr ily traian d84lADcuz */ int n , D[5000001];
/* AGwmKblCr ily traian d84lADcuz */ long long c;
/* AGwmKblCr ily traian d84lADcuz */ 
/* AGwmKblCr ily traian d84lADcuz */ int main()
/* AGwmKblCr ily traian d84lADcuz */ {
/* AGwmKblCr ily traian d84lADcuz */     cin >> n;
/* AGwmKblCr ily traian d84lADcuz */ 
/* AGwmKblCr ily traian d84lADcuz */     for(int i = 1 ; i <= n ; i++)
/* AGwmKblCr ily traian d84lADcuz */         D[i] = 1;
/* AGwmKblCr ily traian d84lADcuz */ 
/* AGwmKblCr ily traian d84lADcuz */     for(int i = 2 ; i <= n ; i++)
/* AGwmKblCr ily traian d84lADcuz */         if(D[i] == 1)
/* AGwmKblCr ily traian d84lADcuz */         {
/* AGwmKblCr ily traian d84lADcuz */             D[i] = i;
/* AGwmKblCr ily traian d84lADcuz */             for(int j = 2 ; j * i <= n ; j++)
/* AGwmKblCr ily traian d84lADcuz */                 D[i*j] *= i;
/* AGwmKblCr ily traian d84lADcuz */         }
/* AGwmKblCr ily traian d84lADcuz */     for(int i = 1 ; i <= n ; i++)
/* AGwmKblCr ily traian d84lADcuz */         c += n / D[i];
/* AGwmKblCr ily traian d84lADcuz */     cout << c;
/* AGwmKblCr ily traian d84lADcuz */ }