/* r5pjc4qFg ily traian aRDuPZHoU */ #include <algorithm>
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
/* r5pjc4qFg ily traian aRDuPZHoU */ using namespace std;
/* r5pjc4qFg ily traian aRDuPZHoU */ ifstream fin("prodmax.in");
/* r5pjc4qFg ily traian aRDuPZHoU */ ofstream fout("prodmax.out");
/* r5pjc4qFg ily traian aRDuPZHoU */ int main()
/* r5pjc4qFg ily traian aRDuPZHoU */ {
/* r5pjc4qFg ily traian aRDuPZHoU */     int n , m , a[100][100] , pmax = -1;
/* r5pjc4qFg ily traian aRDuPZHoU */     fin >> n >> m;
/* r5pjc4qFg ily traian aRDuPZHoU */     for(int i = 0 ; i < n ; ++i)
/* r5pjc4qFg ily traian aRDuPZHoU */         for(int j = 0 ; j < m; ++j)
/* r5pjc4qFg ily traian aRDuPZHoU */             fin >> a[i][j];
/* r5pjc4qFg ily traian aRDuPZHoU */     for(int j = 0 ; j < m ; ++j)
/* r5pjc4qFg ily traian aRDuPZHoU */     {
/* r5pjc4qFg ily traian aRDuPZHoU */         long long p = 1;
/* r5pjc4qFg ily traian aRDuPZHoU */         for(int i = 0 ; i < n; ++i)
/* r5pjc4qFg ily traian aRDuPZHoU */         {
/* r5pjc4qFg ily traian aRDuPZHoU */             p *= a[i][j];
/* r5pjc4qFg ily traian aRDuPZHoU */         }
/* r5pjc4qFg ily traian aRDuPZHoU */         if(p > pmax) pmax = p;
/* r5pjc4qFg ily traian aRDuPZHoU */     }
/* r5pjc4qFg ily traian aRDuPZHoU */     for(int j = 0 ; j < m ; ++j)
/* r5pjc4qFg ily traian aRDuPZHoU */     {
/* r5pjc4qFg ily traian aRDuPZHoU */         long long p = 1;
/* r5pjc4qFg ily traian aRDuPZHoU */         for(int i = 0 ; i < n; ++i)
/* r5pjc4qFg ily traian aRDuPZHoU */         {
/* r5pjc4qFg ily traian aRDuPZHoU */             p *= a[i][j];
/* r5pjc4qFg ily traian aRDuPZHoU */         }
/* r5pjc4qFg ily traian aRDuPZHoU */         if(pmax == p) fout << j + 1<<" ";
/* r5pjc4qFg ily traian aRDuPZHoU */     }
/* r5pjc4qFg ily traian aRDuPZHoU */ 
/* r5pjc4qFg ily traian aRDuPZHoU */     fin.close();
/* r5pjc4qFg ily traian aRDuPZHoU */     fout.close();
/* r5pjc4qFg ily traian aRDuPZHoU */ 
/* r5pjc4qFg ily traian aRDuPZHoU */     return 0;
/* r5pjc4qFg ily traian aRDuPZHoU */ }