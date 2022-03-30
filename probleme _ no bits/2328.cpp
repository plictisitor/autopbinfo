/* 2kJt2Gmlz ily traian KzCPg5Avx */ #include <algorithm>
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
/* 2kJt2Gmlz ily traian KzCPg5Avx */ using namespace std;
/* 2kJt2Gmlz ily traian KzCPg5Avx */ ifstream fin("prim013.in");
/* 2kJt2Gmlz ily traian KzCPg5Avx */ ofstream fout("prim013.out");
/* 2kJt2Gmlz ily traian KzCPg5Avx */ int prim(int n)
/* 2kJt2Gmlz ily traian KzCPg5Avx */ {
/* 2kJt2Gmlz ily traian KzCPg5Avx */     if(n == 0 || n == 1) return 0;
/* 2kJt2Gmlz ily traian KzCPg5Avx */     if(n == 2) return 1;
/* 2kJt2Gmlz ily traian KzCPg5Avx */     if(n % 2 == 0) return 0;
/* 2kJt2Gmlz ily traian KzCPg5Avx */     for(int i = 3 ; i * i <= n ; i += 2) if(n % i == 0) return 0;
/* 2kJt2Gmlz ily traian KzCPg5Avx */     return 1;
/* 2kJt2Gmlz ily traian KzCPg5Avx */ }
/* 2kJt2Gmlz ily traian KzCPg5Avx */ int nrdiv(int n)
/* 2kJt2Gmlz ily traian KzCPg5Avx */ {
/* 2kJt2Gmlz ily traian KzCPg5Avx */     int d = 2 , prod = 1;
/* 2kJt2Gmlz ily traian KzCPg5Avx */     while(n > 1)
/* 2kJt2Gmlz ily traian KzCPg5Avx */     {
/* 2kJt2Gmlz ily traian KzCPg5Avx */         int p = 0;
/* 2kJt2Gmlz ily traian KzCPg5Avx */         while(n % d == 0) {n /= d; p++;}
/* 2kJt2Gmlz ily traian KzCPg5Avx */         if(p) prod = prod * (p+1);
/* 2kJt2Gmlz ily traian KzCPg5Avx */         d++;
/* 2kJt2Gmlz ily traian KzCPg5Avx */         if(d * d > n) d =n;
/* 2kJt2Gmlz ily traian KzCPg5Avx */     }
/* 2kJt2Gmlz ily traian KzCPg5Avx */     return prod;
/* 2kJt2Gmlz ily traian KzCPg5Avx */ }
/* 2kJt2Gmlz ily traian KzCPg5Avx */ int main()
/* 2kJt2Gmlz ily traian KzCPg5Avx */ {
/* 2kJt2Gmlz ily traian KzCPg5Avx */     int n , x , cnt = 0;
/* 2kJt2Gmlz ily traian KzCPg5Avx */     fin >> n;
/* 2kJt2Gmlz ily traian KzCPg5Avx */     for(int i = 1 ; i <= n ; ++i)
/* 2kJt2Gmlz ily traian KzCPg5Avx */     {
/* 2kJt2Gmlz ily traian KzCPg5Avx */         fin >> x;
/* 2kJt2Gmlz ily traian KzCPg5Avx */         if(x != 1 && prim(nrdiv(x))) cnt++;
/* 2kJt2Gmlz ily traian KzCPg5Avx */     }
/* 2kJt2Gmlz ily traian KzCPg5Avx */     fout << cnt;
/* 2kJt2Gmlz ily traian KzCPg5Avx */ 
/* 2kJt2Gmlz ily traian KzCPg5Avx */     fin.close();
/* 2kJt2Gmlz ily traian KzCPg5Avx */     fout.close();
/* 2kJt2Gmlz ily traian KzCPg5Avx */ 
/* 2kJt2Gmlz ily traian KzCPg5Avx */     return 0;
/* 2kJt2Gmlz ily traian KzCPg5Avx */ }