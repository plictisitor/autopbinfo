/* wB9DkOS3N ily traian TJTWEwadI */ #include <algorithm>
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
/* wB9DkOS3N ily traian TJTWEwadI */ using namespace std;
/* wB9DkOS3N ily traian TJTWEwadI */ 
/* wB9DkOS3N ily traian TJTWEwadI */ ifstream cin("halfsort1.in");
/* wB9DkOS3N ily traian TJTWEwadI */ ofstream cout("halfsort1.out");
/* wB9DkOS3N ily traian TJTWEwadI */ 
/* wB9DkOS3N ily traian TJTWEwadI */ void citire(int& n, int a[]){
/* wB9DkOS3N ily traian TJTWEwadI */     cin >> n;
/* wB9DkOS3N ily traian TJTWEwadI */     for(int i = 1; i <= n; ++i)
/* wB9DkOS3N ily traian TJTWEwadI */         cin >> a[i];
/* wB9DkOS3N ily traian TJTWEwadI */ }
/* wB9DkOS3N ily traian TJTWEwadI */ 
/* wB9DkOS3N ily traian TJTWEwadI */ void sortare(int n, int a[], int st, int dr, char ch){
/* wB9DkOS3N ily traian TJTWEwadI */     if(ch == 'c'){
/* wB9DkOS3N ily traian TJTWEwadI */         for(int i = st; i < dr; ++i)
/* wB9DkOS3N ily traian TJTWEwadI */             for(int j = i + 1; j <= dr; ++j)
/* wB9DkOS3N ily traian TJTWEwadI */                 if(a[i] > a[j])
/* wB9DkOS3N ily traian TJTWEwadI */                     swap(a[i], a[j]);
/* wB9DkOS3N ily traian TJTWEwadI */     }
/* wB9DkOS3N ily traian TJTWEwadI */     else{
/* wB9DkOS3N ily traian TJTWEwadI */         for(int i = st; i < dr; ++i)
/* wB9DkOS3N ily traian TJTWEwadI */             for(int j = i + 1; j <= dr; ++j)
/* wB9DkOS3N ily traian TJTWEwadI */                 if(a[i] < a[j])
/* wB9DkOS3N ily traian TJTWEwadI */                     swap(a[i], a[j]);
/* wB9DkOS3N ily traian TJTWEwadI */     }
/* wB9DkOS3N ily traian TJTWEwadI */ }
/* wB9DkOS3N ily traian TJTWEwadI */ 
/* wB9DkOS3N ily traian TJTWEwadI */ void afisare(int n, int a[]){
/* wB9DkOS3N ily traian TJTWEwadI */     for(int i = 1; i <= n; ++i)
/* wB9DkOS3N ily traian TJTWEwadI */         cout << a[i] << ' ';
/* wB9DkOS3N ily traian TJTWEwadI */ }
/* wB9DkOS3N ily traian TJTWEwadI */ 
/* wB9DkOS3N ily traian TJTWEwadI */ int main(){
/* wB9DkOS3N ily traian TJTWEwadI */ 
/* wB9DkOS3N ily traian TJTWEwadI */     int n, a[101];
/* wB9DkOS3N ily traian TJTWEwadI */     citire(n, a);
/* wB9DkOS3N ily traian TJTWEwadI */     sortare(n, a, 1, n / 2, 'c');
/* wB9DkOS3N ily traian TJTWEwadI */     sortare(n, a, n / 2 + 1, n, 'd');
/* wB9DkOS3N ily traian TJTWEwadI */     afisare(n, a);
/* wB9DkOS3N ily traian TJTWEwadI */     return 0;
/* wB9DkOS3N ily traian TJTWEwadI */ }