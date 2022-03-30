/* 8nBIpmQFn ily traian mAyYgLYNV */ #include <algorithm>
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
/* 8nBIpmQFn ily traian mAyYgLYNV */ 
/* 8nBIpmQFn ily traian mAyYgLYNV */ using namespace std;
/* 8nBIpmQFn ily traian mAyYgLYNV */ 
/* 8nBIpmQFn ily traian mAyYgLYNV */ ifstream cin("radixsort.in");
/* 8nBIpmQFn ily traian mAyYgLYNV */ ofstream cout("radixsort.out");
/* 8nBIpmQFn ily traian mAyYgLYNV */ 
/* 8nBIpmQFn ily traian mAyYgLYNV */ int a[1000001];
/* 8nBIpmQFn ily traian mAyYgLYNV */ 
/* 8nBIpmQFn ily traian mAyYgLYNV */ void citire(int a[] , int &n)
/* 8nBIpmQFn ily traian mAyYgLYNV */ {
/* 8nBIpmQFn ily traian mAyYgLYNV */     for(int i = 0 ; i < n ; i++)
/* 8nBIpmQFn ily traian mAyYgLYNV */         cin >> a[i];
/* 8nBIpmQFn ily traian mAyYgLYNV */ }
/* 8nBIpmQFn ily traian mAyYgLYNV */ 
/* 8nBIpmQFn ily traian mAyYgLYNV */ void afisarecresc(int a[] , int n)
/* 8nBIpmQFn ily traian mAyYgLYNV */ {
/* 8nBIpmQFn ily traian mAyYgLYNV */     for(int i = 0 ; i < n ; i++)
/* 8nBIpmQFn ily traian mAyYgLYNV */         cout << a[i] << " ";
/* 8nBIpmQFn ily traian mAyYgLYNV */ }
/* 8nBIpmQFn ily traian mAyYgLYNV */ int main()
/* 8nBIpmQFn ily traian mAyYgLYNV */ {
/* 8nBIpmQFn ily traian mAyYgLYNV */     int n , d;
/* 8nBIpmQFn ily traian mAyYgLYNV */     cin >> n;
/* 8nBIpmQFn ily traian mAyYgLYNV */     citire(a , n);
/* 8nBIpmQFn ily traian mAyYgLYNV */     sort(a , a + n);
/* 8nBIpmQFn ily traian mAyYgLYNV */     afisarecresc(a , n);
/* 8nBIpmQFn ily traian mAyYgLYNV */ }