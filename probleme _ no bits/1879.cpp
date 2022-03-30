/* Az0ga8U7b ily traian 2I7Z6bUgf */ #include <algorithm>
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
/* Az0ga8U7b ily traian 2I7Z6bUgf */ using namespace std;
/* Az0ga8U7b ily traian 2I7Z6bUgf */ ifstream fin("platou2.in");
/* Az0ga8U7b ily traian 2I7Z6bUgf */ ofstream fout("platou2.out");
/* Az0ga8U7b ily traian 2I7Z6bUgf */ int main()
/* Az0ga8U7b ily traian 2I7Z6bUgf */ {
/* Az0ga8U7b ily traian 2I7Z6bUgf */     int a[10001], i=1 , lmax = 0 , l = 0 , st = 0 , dr = 0;
/* Az0ga8U7b ily traian 2I7Z6bUgf */     while(fin >> a[i])
/* Az0ga8U7b ily traian 2I7Z6bUgf */         i++;
/* Az0ga8U7b ily traian 2I7Z6bUgf */     for(int j = 1 ; j <= i ; ++j)
/* Az0ga8U7b ily traian 2I7Z6bUgf */     {
/* Az0ga8U7b ily traian 2I7Z6bUgf */         if(a[j] < a[j+1])
/* Az0ga8U7b ily traian 2I7Z6bUgf */         {
/* Az0ga8U7b ily traian 2I7Z6bUgf */             l++;
/* Az0ga8U7b ily traian 2I7Z6bUgf */             if(l > lmax)  {lmax = l ; dr = j ; st = dr - l +1;}
/* Az0ga8U7b ily traian 2I7Z6bUgf */         }
/* Az0ga8U7b ily traian 2I7Z6bUgf */         else l = 0;
/* Az0ga8U7b ily traian 2I7Z6bUgf */     }
/* Az0ga8U7b ily traian 2I7Z6bUgf */     fout<< lmax+1;
/* Az0ga8U7b ily traian 2I7Z6bUgf */     return 0;
/* Az0ga8U7b ily traian 2I7Z6bUgf */ }