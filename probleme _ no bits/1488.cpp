/* ks3M4QWQv ily traian jvvytpF6s */ #include <algorithm>
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
/* ks3M4QWQv ily traian jvvytpF6s */ 
/* ks3M4QWQv ily traian jvvytpF6s */ using namespace std;
/* ks3M4QWQv ily traian jvvytpF6s */ ifstream cin("strazi.in");
/* ks3M4QWQv ily traian jvvytpF6s */ ofstream cout("strazi.out");
/* ks3M4QWQv ily traian jvvytpF6s */ int n , m , t , rez;
/* ks3M4QWQv ily traian jvvytpF6s */ double a[1001] , x , x1 , x2;
/* ks3M4QWQv ily traian jvvytpF6s */ 
/* ks3M4QWQv ily traian jvvytpF6s */ int main()
/* ks3M4QWQv ily traian jvvytpF6s */ {
/* ks3M4QWQv ily traian jvvytpF6s */     cin >> n;
/* ks3M4QWQv ily traian jvvytpF6s */     for(int i = 1 ; i <= n ; i++)
/* ks3M4QWQv ily traian jvvytpF6s */     {
/* ks3M4QWQv ily traian jvvytpF6s */         cin >> m;
/* ks3M4QWQv ily traian jvvytpF6s */         for(int j = 1 ; j <= m ; j++)
/* ks3M4QWQv ily traian jvvytpF6s */             cin >> a[j];
/* ks3M4QWQv ily traian jvvytpF6s */         t = 1;
/* ks3M4QWQv ily traian jvvytpF6s */         x = a[1];
/* ks3M4QWQv ily traian jvvytpF6s */         for(int j = 1 ; j <= m ; j++)
/* ks3M4QWQv ily traian jvvytpF6s */             if(a[j] > x)
/* ks3M4QWQv ily traian jvvytpF6s */             {
/* ks3M4QWQv ily traian jvvytpF6s */                 t++;
/* ks3M4QWQv ily traian jvvytpF6s */                 x = a[j];
/* ks3M4QWQv ily traian jvvytpF6s */             }
/* ks3M4QWQv ily traian jvvytpF6s */         x1=(double)t/m;
/* ks3M4QWQv ily traian jvvytpF6s */         if(x1 > x2) x2 = x1 , rez = i;
/* ks3M4QWQv ily traian jvvytpF6s */         cout << fixed << setprecision(3) << x1 << "\n";
/* ks3M4QWQv ily traian jvvytpF6s */     }
/* ks3M4QWQv ily traian jvvytpF6s */     cout << rez;
/* ks3M4QWQv ily traian jvvytpF6s */     return 0;
/* ks3M4QWQv ily traian jvvytpF6s */ }