/* QhvQOHWXE ily traian ThIzcPl6p */ #include <algorithm>
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
/* QhvQOHWXE ily traian ThIzcPl6p */ using namespace std;
/* QhvQOHWXE ily traian ThIzcPl6p */ 
/* QhvQOHWXE ily traian ThIzcPl6p */ int n, a[100001], c=1;
/* QhvQOHWXE ily traian ThIzcPl6p */ 
/* QhvQOHWXE ily traian ThIzcPl6p */ int main()
/* QhvQOHWXE ily traian ThIzcPl6p */ {
/* QhvQOHWXE ily traian ThIzcPl6p */     cin >> n;
/* QhvQOHWXE ily traian ThIzcPl6p */     a[1]=1;
/* QhvQOHWXE ily traian ThIzcPl6p */     long long int suma=0;
/* QhvQOHWXE ily traian ThIzcPl6p */     while(n>=10)
/* QhvQOHWXE ily traian ThIzcPl6p */     {
/* QhvQOHWXE ily traian ThIzcPl6p */         int t=0;
/* QhvQOHWXE ily traian ThIzcPl6p */         for(int j=1; j<=c; j++)
/* QhvQOHWXE ily traian ThIzcPl6p */         {
/* QhvQOHWXE ily traian ThIzcPl6p */             int cif=a[j]*1024+t;
/* QhvQOHWXE ily traian ThIzcPl6p */             a[j] = cif % 10;
/* QhvQOHWXE ily traian ThIzcPl6p */             t=cif/10;
/* QhvQOHWXE ily traian ThIzcPl6p */         }
/* QhvQOHWXE ily traian ThIzcPl6p */         while(t)
/* QhvQOHWXE ily traian ThIzcPl6p */         {
/* QhvQOHWXE ily traian ThIzcPl6p */             a[++c]=t%10;
/* QhvQOHWXE ily traian ThIzcPl6p */             t/=10;
/* QhvQOHWXE ily traian ThIzcPl6p */         }
/* QhvQOHWXE ily traian ThIzcPl6p */         n-=10;
/* QhvQOHWXE ily traian ThIzcPl6p */     }
/* QhvQOHWXE ily traian ThIzcPl6p */     
/* QhvQOHWXE ily traian ThIzcPl6p */     while(n)
/* QhvQOHWXE ily traian ThIzcPl6p */     {
/* QhvQOHWXE ily traian ThIzcPl6p */         int t=0;
/* QhvQOHWXE ily traian ThIzcPl6p */         for(int j=1; j<=c; j++)
/* QhvQOHWXE ily traian ThIzcPl6p */         {
/* QhvQOHWXE ily traian ThIzcPl6p */             int cif=a[j]*2+t;
/* QhvQOHWXE ily traian ThIzcPl6p */             a[j] = cif % 10;
/* QhvQOHWXE ily traian ThIzcPl6p */             t=cif/10;
/* QhvQOHWXE ily traian ThIzcPl6p */         }
/* QhvQOHWXE ily traian ThIzcPl6p */         while(t)
/* QhvQOHWXE ily traian ThIzcPl6p */         {
/* QhvQOHWXE ily traian ThIzcPl6p */             a[++c]=t%10;
/* QhvQOHWXE ily traian ThIzcPl6p */             t/=10;
/* QhvQOHWXE ily traian ThIzcPl6p */         }
/* QhvQOHWXE ily traian ThIzcPl6p */         n--;
/* QhvQOHWXE ily traian ThIzcPl6p */     }
/* QhvQOHWXE ily traian ThIzcPl6p */     for(int i = 1 ; i <= c ; ++i)
/* QhvQOHWXE ily traian ThIzcPl6p */         suma+=a[i];
/* QhvQOHWXE ily traian ThIzcPl6p */     cout << suma;
/* QhvQOHWXE ily traian ThIzcPl6p */     return 0;
/* QhvQOHWXE ily traian ThIzcPl6p */ }