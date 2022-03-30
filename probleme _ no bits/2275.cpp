/* P65sGzgM1 ily traian 27RUJFoew */ #include <algorithm>
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
/* P65sGzgM1 ily traian 27RUJFoew */ 
/* P65sGzgM1 ily traian 27RUJFoew */ using namespace std;
/* P65sGzgM1 ily traian 27RUJFoew */ 
/* P65sGzgM1 ily traian 27RUJFoew */ ifstream fin("minimdoua.in");
/* P65sGzgM1 ily traian 27RUJFoew */ ofstream fout("minimdoua.out");
/* P65sGzgM1 ily traian 27RUJFoew */ 
/* P65sGzgM1 ily traian 27RUJFoew */ int main()
/* P65sGzgM1 ily traian 27RUJFoew */ {
/* P65sGzgM1 ily traian 27RUJFoew */     int n, j=0 , cnt=0;
/* P65sGzgM1 ily traian 27RUJFoew */     fin >> n;
/* P65sGzgM1 ily traian 27RUJFoew */     int a[201];
/* P65sGzgM1 ily traian 27RUJFoew */     int v[201];
/* P65sGzgM1 ily traian 27RUJFoew */     for (int i = 0 ; i < n; ++i)
/* P65sGzgM1 ily traian 27RUJFoew */     {
/* P65sGzgM1 ily traian 27RUJFoew */         fin >> a[i];
/* P65sGzgM1 ily traian 27RUJFoew */         if (a[i]%10 == (a[i]/10)%10 && a[i]>9)
/* P65sGzgM1 ily traian 27RUJFoew */         {
/* P65sGzgM1 ily traian 27RUJFoew */             v[j]=a[i];
/* P65sGzgM1 ily traian 27RUJFoew */             j++;
/* P65sGzgM1 ily traian 27RUJFoew */             cnt++;
/* P65sGzgM1 ily traian 27RUJFoew */         }
/* P65sGzgM1 ily traian 27RUJFoew */     }
/* P65sGzgM1 ily traian 27RUJFoew */     sort(v,v+cnt);
/* P65sGzgM1 ily traian 27RUJFoew */     if (cnt>=2)
/* P65sGzgM1 ily traian 27RUJFoew */     fout << v[0] << ' ' << v[1];
/* P65sGzgM1 ily traian 27RUJFoew */     else
/* P65sGzgM1 ily traian 27RUJFoew */     fout << "numere insuficiente";
/* P65sGzgM1 ily traian 27RUJFoew */     
/* P65sGzgM1 ily traian 27RUJFoew */     fin.close();
/* P65sGzgM1 ily traian 27RUJFoew */     fout.close();
/* P65sGzgM1 ily traian 27RUJFoew */     
/* P65sGzgM1 ily traian 27RUJFoew */     return 0;
/* P65sGzgM1 ily traian 27RUJFoew */ }