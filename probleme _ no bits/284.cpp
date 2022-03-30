/* 92a5zi0pk ily traian rxxWgnycs */ #include <algorithm>
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
/* 92a5zi0pk ily traian rxxWgnycs */ 
/* 92a5zi0pk ily traian rxxWgnycs */ using namespace std;
/* 92a5zi0pk ily traian rxxWgnycs */ 
/* 92a5zi0pk ily traian rxxWgnycs */ ifstream cin("interclasare3.in");
/* 92a5zi0pk ily traian rxxWgnycs */ ofstream cout("interclasare3.out");
/* 92a5zi0pk ily traian rxxWgnycs */ 
/* 92a5zi0pk ily traian rxxWgnycs */ int main()
/* 92a5zi0pk ily traian rxxWgnycs */ {
/* 92a5zi0pk ily traian rxxWgnycs */     int n, m, k = 0;
/* 92a5zi0pk ily traian rxxWgnycs */     int a[100001], b[100001], c[200001];
/* 92a5zi0pk ily traian rxxWgnycs */     cin >> n >> m;
/* 92a5zi0pk ily traian rxxWgnycs */     for(int i = 1; i <= n; ++i)
/* 92a5zi0pk ily traian rxxWgnycs */         cin >> a[i];
/* 92a5zi0pk ily traian rxxWgnycs */     for(int i = 1; i <= m; ++i)
/* 92a5zi0pk ily traian rxxWgnycs */         cin >> b[i];
/* 92a5zi0pk ily traian rxxWgnycs */ 
/* 92a5zi0pk ily traian rxxWgnycs */     int i = 1, j = m;
/* 92a5zi0pk ily traian rxxWgnycs */     while(i <= n && j >= 1){
/* 92a5zi0pk ily traian rxxWgnycs */         if(a[i] < b[j] && a[i] % 2 == 0)
/* 92a5zi0pk ily traian rxxWgnycs */             c[++k] = a[i], i++;
/* 92a5zi0pk ily traian rxxWgnycs */         else if(a[i] < b[j])
/* 92a5zi0pk ily traian rxxWgnycs */             i++;
/* 92a5zi0pk ily traian rxxWgnycs */         else if(b[j] % 2 == 0)
/* 92a5zi0pk ily traian rxxWgnycs */             c[++k] = b[j], j--;
/* 92a5zi0pk ily traian rxxWgnycs */         else
/* 92a5zi0pk ily traian rxxWgnycs */             j--;
/* 92a5zi0pk ily traian rxxWgnycs */     }
/* 92a5zi0pk ily traian rxxWgnycs */ 
/* 92a5zi0pk ily traian rxxWgnycs */     while(i <= n){
/* 92a5zi0pk ily traian rxxWgnycs */         if(a[i] % 2 == 0)
/* 92a5zi0pk ily traian rxxWgnycs */             c[++k] = a[i];
/* 92a5zi0pk ily traian rxxWgnycs */         i++;
/* 92a5zi0pk ily traian rxxWgnycs */     }
/* 92a5zi0pk ily traian rxxWgnycs */     while(j >= 1){
/* 92a5zi0pk ily traian rxxWgnycs */         if(b[j] % 2 == 0)
/* 92a5zi0pk ily traian rxxWgnycs */             c[++k] = b[j];
/* 92a5zi0pk ily traian rxxWgnycs */         j--;
/* 92a5zi0pk ily traian rxxWgnycs */     }
/* 92a5zi0pk ily traian rxxWgnycs */ 
/* 92a5zi0pk ily traian rxxWgnycs */     for(int i = 1; i <= k; ++i){
/* 92a5zi0pk ily traian rxxWgnycs */         cout << c[i] << ' ';
/* 92a5zi0pk ily traian rxxWgnycs */         if(i % 20 == 0)
/* 92a5zi0pk ily traian rxxWgnycs */             cout << endl;
/* 92a5zi0pk ily traian rxxWgnycs */     }
/* 92a5zi0pk ily traian rxxWgnycs */ 
/* 92a5zi0pk ily traian rxxWgnycs */     return 0;
/* 92a5zi0pk ily traian rxxWgnycs */ }