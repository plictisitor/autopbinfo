/* 4tnHvLfMl ily traian q1WawQOWi */ #include <algorithm>
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
/* 4tnHvLfMl ily traian q1WawQOWi */ 
/* 4tnHvLfMl ily traian q1WawQOWi */ using namespace std;
/* 4tnHvLfMl ily traian q1WawQOWi */ 
/* 4tnHvLfMl ily traian q1WawQOWi */ ifstream fin("memory007.in");
/* 4tnHvLfMl ily traian q1WawQOWi */ ofstream fout("memory007.out");
/* 4tnHvLfMl ily traian q1WawQOWi */ 
/* 4tnHvLfMl ily traian q1WawQOWi */ bitset<700020> v ;
/* 4tnHvLfMl ily traian q1WawQOWi */ long n , m , a , b , i , j , nr , x ;
/* 4tnHvLfMl ily traian q1WawQOWi */ long long suma , r , t ;
/* 4tnHvLfMl ily traian q1WawQOWi */ 
/* 4tnHvLfMl ily traian q1WawQOWi */ int main()
/* 4tnHvLfMl ily traian q1WawQOWi */ {
/* 4tnHvLfMl ily traian q1WawQOWi */     fin >> n >> m >> a >> b ;
/* 4tnHvLfMl ily traian q1WawQOWi */     for ( i=1 ; i<=n ; i++ )
/* 4tnHvLfMl ily traian q1WawQOWi */     {
/* 4tnHvLfMl ily traian q1WawQOWi */         fin >> x ;
/* 4tnHvLfMl ily traian q1WawQOWi */         j = x-a ;
/* 4tnHvLfMl ily traian q1WawQOWi */         v[j] = 1 ;
/* 4tnHvLfMl ily traian q1WawQOWi */     }
/* 4tnHvLfMl ily traian q1WawQOWi */     j = 0 ;
/* 4tnHvLfMl ily traian q1WawQOWi */     nr = 0 ;
/* 4tnHvLfMl ily traian q1WawQOWi */     suma = 0 ;
/* 4tnHvLfMl ily traian q1WawQOWi */     for ( i=1 ; i<=m ; i++)
/* 4tnHvLfMl ily traian q1WawQOWi */     {
/* 4tnHvLfMl ily traian q1WawQOWi */         fin >> x ;
/* 4tnHvLfMl ily traian q1WawQOWi */         while ( nr < x )
/* 4tnHvLfMl ily traian q1WawQOWi */         {
/* 4tnHvLfMl ily traian q1WawQOWi */           nr = nr + v[j] ;
/* 4tnHvLfMl ily traian q1WawQOWi */           j++ ;
/* 4tnHvLfMl ily traian q1WawQOWi */         }
/* 4tnHvLfMl ily traian q1WawQOWi */         suma = suma + j - 1 ;
/* 4tnHvLfMl ily traian q1WawQOWi */     }
/* 4tnHvLfMl ily traian q1WawQOWi */     r = m ;
/* 4tnHvLfMl ily traian q1WawQOWi */     t = a ;
/* 4tnHvLfMl ily traian q1WawQOWi */     suma = suma + r * t ;
/* 4tnHvLfMl ily traian q1WawQOWi */     fout << suma ;
/* 4tnHvLfMl ily traian q1WawQOWi */     return 0;
/* 4tnHvLfMl ily traian q1WawQOWi */ }