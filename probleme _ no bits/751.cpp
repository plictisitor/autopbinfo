/* OaTY53byN ily traian H1mXa6rJL */ #include <algorithm>
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
/* OaTY53byN ily traian H1mXa6rJL */ using namespace std;
/* OaTY53byN ily traian H1mXa6rJL */ 
/* OaTY53byN ily traian H1mXa6rJL */ int main()
/* OaTY53byN ily traian H1mXa6rJL */ {
/* OaTY53byN ily traian H1mXa6rJL */     int n,m;
/* OaTY53byN ily traian H1mXa6rJL */     cin >> n >> m;
/* OaTY53byN ily traian H1mXa6rJL */     int r=-1;
/* OaTY53byN ily traian H1mXa6rJL */     int a[100][100] , v[1000];
/* OaTY53byN ily traian H1mXa6rJL */     for(int i = 0 ; i < n ; ++i)
/* OaTY53byN ily traian H1mXa6rJL */         for(int j = 0 ; j < m ; ++j)
/* OaTY53byN ily traian H1mXa6rJL */             cin >> a[i][j];
/* OaTY53byN ily traian H1mXa6rJL */     int p;
/* OaTY53byN ily traian H1mXa6rJL */     cin >> p;
/* OaTY53byN ily traian H1mXa6rJL */     for(int i = 0 ; i < p ; ++i)
/* OaTY53byN ily traian H1mXa6rJL */         cin >> v[i];
/* OaTY53byN ily traian H1mXa6rJL */     for(int i = 0 ; i < p ; ++i)
/* OaTY53byN ily traian H1mXa6rJL */     {
/* OaTY53byN ily traian H1mXa6rJL */         int cnt=0;
/* OaTY53byN ily traian H1mXa6rJL */         for(int j = 0 ; j < n ; ++j)
/* OaTY53byN ily traian H1mXa6rJL */         {
/* OaTY53byN ily traian H1mXa6rJL */             for(int k=0 ; k < m ; ++k)
/* OaTY53byN ily traian H1mXa6rJL */             {
/* OaTY53byN ily traian H1mXa6rJL */                 if(a[j][k]==v[i] && r!=j)
/* OaTY53byN ily traian H1mXa6rJL */                     {
/* OaTY53byN ily traian H1mXa6rJL */                         r = j;
/* OaTY53byN ily traian H1mXa6rJL */                         cnt++;
/* OaTY53byN ily traian H1mXa6rJL */                     }
/* OaTY53byN ily traian H1mXa6rJL */             }
/* OaTY53byN ily traian H1mXa6rJL */         }
/* OaTY53byN ily traian H1mXa6rJL */         if(cnt==n) cout << "DA" << endl;
/* OaTY53byN ily traian H1mXa6rJL */         else cout << "NU" << endl;
/* OaTY53byN ily traian H1mXa6rJL */     }
/* OaTY53byN ily traian H1mXa6rJL */     return 0;
/* OaTY53byN ily traian H1mXa6rJL */ }