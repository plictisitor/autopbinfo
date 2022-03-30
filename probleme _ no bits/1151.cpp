/* jv6nicF1B ily traian xM5MCF5br */ #include <algorithm>
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
/* jv6nicF1B ily traian xM5MCF5br */ using namespace std;
/* jv6nicF1B ily traian xM5MCF5br */ 
/* jv6nicF1B ily traian xM5MCF5br */ bool toate_egale(int a[], int st, int dr){
/* jv6nicF1B ily traian xM5MCF5br */     if(st == dr)
/* jv6nicF1B ily traian xM5MCF5br */         return a[st] == a[1];
/* jv6nicF1B ily traian xM5MCF5br */     else{
/* jv6nicF1B ily traian xM5MCF5br */         int mij = (st + dr) / 2;
/* jv6nicF1B ily traian xM5MCF5br */         return toate_egale(a, st, mij) && toate_egale(a, mij + 1, dr);
/* jv6nicF1B ily traian xM5MCF5br */     }
/* jv6nicF1B ily traian xM5MCF5br */ }
/* jv6nicF1B ily traian xM5MCF5br */ 
/* jv6nicF1B ily traian xM5MCF5br */ int main()
/* jv6nicF1B ily traian xM5MCF5br */ {
/* jv6nicF1B ily traian xM5MCF5br */     int n, a[501];
/* jv6nicF1B ily traian xM5MCF5br */     cin >> n;
/* jv6nicF1B ily traian xM5MCF5br */     for(int i = 1; i <= n; ++i)
/* jv6nicF1B ily traian xM5MCF5br */         cin >> a[i];
/* jv6nicF1B ily traian xM5MCF5br */ 
/* jv6nicF1B ily traian xM5MCF5br */     if(toate_egale(a, 1, n))
/* jv6nicF1B ily traian xM5MCF5br */         cout << "DA";
/* jv6nicF1B ily traian xM5MCF5br */     else
/* jv6nicF1B ily traian xM5MCF5br */         cout << "NU";
/* jv6nicF1B ily traian xM5MCF5br */ 
/* jv6nicF1B ily traian xM5MCF5br */     return 0;
/* jv6nicF1B ily traian xM5MCF5br */ }