/* jMRjVXPfd ily traian jb4X6Exwp */ #include <algorithm>
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
/* jMRjVXPfd ily traian jb4X6Exwp */ using namespace std;
/* jMRjVXPfd ily traian jb4X6Exwp */ 
/* jMRjVXPfd ily traian jb4X6Exwp */ int main()
/* jMRjVXPfd ily traian jb4X6Exwp */ {
/* jMRjVXPfd ily traian jb4X6Exwp */     int a[1000] , b[1000] , n , m , indice=0 ,ok=0;
/* jMRjVXPfd ily traian jb4X6Exwp */     cin >> n;
/* jMRjVXPfd ily traian jb4X6Exwp */     for(int i = 0 ; i < n ; ++i)
/* jMRjVXPfd ily traian jb4X6Exwp */     cin >> a[i];
/* jMRjVXPfd ily traian jb4X6Exwp */     cin >> m;
/* jMRjVXPfd ily traian jb4X6Exwp */     for(int i = 0 ; i < m ; ++i)
/* jMRjVXPfd ily traian jb4X6Exwp */     cin >> b[i];
/* jMRjVXPfd ily traian jb4X6Exwp */     for(int i = 0 ; i <= n-m ; ++i)
/* jMRjVXPfd ily traian jb4X6Exwp */     {
/* jMRjVXPfd ily traian jb4X6Exwp */         int cnt=0;
/* jMRjVXPfd ily traian jb4X6Exwp */         for(int j = i ; j < i + m ; ++j)
/* jMRjVXPfd ily traian jb4X6Exwp */         {
/* jMRjVXPfd ily traian jb4X6Exwp */             if(a[j]==b[j-i])
/* jMRjVXPfd ily traian jb4X6Exwp */             cnt++;
/* jMRjVXPfd ily traian jb4X6Exwp */         }
/* jMRjVXPfd ily traian jb4X6Exwp */         if(cnt==m && ok==0)
/* jMRjVXPfd ily traian jb4X6Exwp */         {
/* jMRjVXPfd ily traian jb4X6Exwp */         indice = i+1;
/* jMRjVXPfd ily traian jb4X6Exwp */         ok++;
/* jMRjVXPfd ily traian jb4X6Exwp */         }
/* jMRjVXPfd ily traian jb4X6Exwp */     }
/* jMRjVXPfd ily traian jb4X6Exwp */     if(ok==0)
/* jMRjVXPfd ily traian jb4X6Exwp */     cout << "NU";
/* jMRjVXPfd ily traian jb4X6Exwp */     else
/* jMRjVXPfd ily traian jb4X6Exwp */     cout << indice;
/* jMRjVXPfd ily traian jb4X6Exwp */ }