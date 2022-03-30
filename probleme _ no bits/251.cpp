/* fQkX8dKWu ily traian 5sA72fjvQ */ #include <algorithm>
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
/* fQkX8dKWu ily traian 5sA72fjvQ */ 
/* fQkX8dKWu ily traian 5sA72fjvQ */ using namespace std;
/* fQkX8dKWu ily traian 5sA72fjvQ */ 
/* fQkX8dKWu ily traian 5sA72fjvQ */ ifstream cin("interclasare2.in");
/* fQkX8dKWu ily traian 5sA72fjvQ */ ofstream cout("interclasare2.out");
/* fQkX8dKWu ily traian 5sA72fjvQ */ 
/* fQkX8dKWu ily traian 5sA72fjvQ */ int main()
/* fQkX8dKWu ily traian 5sA72fjvQ */ {
/* fQkX8dKWu ily traian 5sA72fjvQ */     int n, m, k = 0;
/* fQkX8dKWu ily traian 5sA72fjvQ */     int a[100001], b[100001], c[100001];
/* fQkX8dKWu ily traian 5sA72fjvQ */     cin >> n;
/* fQkX8dKWu ily traian 5sA72fjvQ */     for(int i = 1; i <= n; ++i)
/* fQkX8dKWu ily traian 5sA72fjvQ */         cin >> a[i];
/* fQkX8dKWu ily traian 5sA72fjvQ */     cin >> m;
/* fQkX8dKWu ily traian 5sA72fjvQ */     for(int i = 1; i <= m; ++i)
/* fQkX8dKWu ily traian 5sA72fjvQ */         cin >> b[i];
/* fQkX8dKWu ily traian 5sA72fjvQ */ 
/* fQkX8dKWu ily traian 5sA72fjvQ */     int i = 1, j = 1;
/* fQkX8dKWu ily traian 5sA72fjvQ */     while(i <= n && j <= m)
/* fQkX8dKWu ily traian 5sA72fjvQ */         if(a[i] == b[j])
/* fQkX8dKWu ily traian 5sA72fjvQ */             c[++k] = a[i], i++, j++;
/* fQkX8dKWu ily traian 5sA72fjvQ */         else
/* fQkX8dKWu ily traian 5sA72fjvQ */             if(a[i] < b[j])
/* fQkX8dKWu ily traian 5sA72fjvQ */                 i++;
/* fQkX8dKWu ily traian 5sA72fjvQ */             else
/* fQkX8dKWu ily traian 5sA72fjvQ */                 j++;
/* fQkX8dKWu ily traian 5sA72fjvQ */ 
/* fQkX8dKWu ily traian 5sA72fjvQ */     for(int i = 1; i <= k; ++i){
/* fQkX8dKWu ily traian 5sA72fjvQ */         cout << c[i] << ' ';
/* fQkX8dKWu ily traian 5sA72fjvQ */         if(i % 10 == 0)
/* fQkX8dKWu ily traian 5sA72fjvQ */             cout << endl;
/* fQkX8dKWu ily traian 5sA72fjvQ */     }
/* fQkX8dKWu ily traian 5sA72fjvQ */ 
/* fQkX8dKWu ily traian 5sA72fjvQ */     return 0;
/* fQkX8dKWu ily traian 5sA72fjvQ */ }