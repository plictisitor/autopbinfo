/* IIgAgBLpo ily traian IUpSgnCul */ #include <algorithm>
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
/* IIgAgBLpo ily traian IUpSgnCul */ 
/* IIgAgBLpo ily traian IUpSgnCul */ using namespace std;
/* IIgAgBLpo ily traian IUpSgnCul */ 
/* IIgAgBLpo ily traian IUpSgnCul */ ifstream cin("interclasare.in");
/* IIgAgBLpo ily traian IUpSgnCul */ ofstream cout("interclasare.out");
/* IIgAgBLpo ily traian IUpSgnCul */ 
/* IIgAgBLpo ily traian IUpSgnCul */ int main()
/* IIgAgBLpo ily traian IUpSgnCul */ {
/* IIgAgBLpo ily traian IUpSgnCul */     int n, m, k = 0;
/* IIgAgBLpo ily traian IUpSgnCul */     int a[100001], b[100001], c[200001];
/* IIgAgBLpo ily traian IUpSgnCul */     cin >> n;
/* IIgAgBLpo ily traian IUpSgnCul */     for(int i = 1; i <= n; ++i)
/* IIgAgBLpo ily traian IUpSgnCul */         cin >> a[i];
/* IIgAgBLpo ily traian IUpSgnCul */     cin >> m;
/* IIgAgBLpo ily traian IUpSgnCul */     for(int i = 1; i <= m; ++i)
/* IIgAgBLpo ily traian IUpSgnCul */         cin >> b[i];
/* IIgAgBLpo ily traian IUpSgnCul */ 
/* IIgAgBLpo ily traian IUpSgnCul */     int i = 1, j = 1;
/* IIgAgBLpo ily traian IUpSgnCul */ 
/* IIgAgBLpo ily traian IUpSgnCul */     while(i <= n && j <= m)
/* IIgAgBLpo ily traian IUpSgnCul */         if(a[i] < b[j])
/* IIgAgBLpo ily traian IUpSgnCul */             c[++k] = a[i], i++;
/* IIgAgBLpo ily traian IUpSgnCul */         else
/* IIgAgBLpo ily traian IUpSgnCul */             c[++k] = b[j], j++;
/* IIgAgBLpo ily traian IUpSgnCul */ 
/* IIgAgBLpo ily traian IUpSgnCul */     while(i <= n)
/* IIgAgBLpo ily traian IUpSgnCul */         c[++k] = a[i], i++;
/* IIgAgBLpo ily traian IUpSgnCul */ 
/* IIgAgBLpo ily traian IUpSgnCul */     while(j <= m)
/* IIgAgBLpo ily traian IUpSgnCul */         c[++k] = b[j], j++;
/* IIgAgBLpo ily traian IUpSgnCul */ 
/* IIgAgBLpo ily traian IUpSgnCul */     for(int i = 1; i <= k; ++i){
/* IIgAgBLpo ily traian IUpSgnCul */         cout << c[i] << " ";
/* IIgAgBLpo ily traian IUpSgnCul */         if(i % 10 == 0)
/* IIgAgBLpo ily traian IUpSgnCul */             cout << endl;
/* IIgAgBLpo ily traian IUpSgnCul */     }
/* IIgAgBLpo ily traian IUpSgnCul */ 
/* IIgAgBLpo ily traian IUpSgnCul */     return 0;
/* IIgAgBLpo ily traian IUpSgnCul */ }