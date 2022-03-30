/* Nf9SZxpLy ily traian zHzeGT1Zd */ #include <algorithm>
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
/* Nf9SZxpLy ily traian zHzeGT1Zd */ 
/* Nf9SZxpLy ily traian zHzeGT1Zd */ using namespace std;
/* Nf9SZxpLy ily traian zHzeGT1Zd */ ifstream fin("maxminmatrice.in");
/* Nf9SZxpLy ily traian zHzeGT1Zd */ ofstream fout("maxminmatrice.out");
/* Nf9SZxpLy ily traian zHzeGT1Zd */ int main()
/* Nf9SZxpLy ily traian zHzeGT1Zd */ {
/* Nf9SZxpLy ily traian zHzeGT1Zd */     int n , m , a[23][23], v[100];
/* Nf9SZxpLy ily traian zHzeGT1Zd */     fin >> n >> m;
/* Nf9SZxpLy ily traian zHzeGT1Zd */     for(int i = 0 ; i < n ; ++i)
/* Nf9SZxpLy ily traian zHzeGT1Zd */     {
/* Nf9SZxpLy ily traian zHzeGT1Zd */         int mini = 1001;
/* Nf9SZxpLy ily traian zHzeGT1Zd */         for(int j = 0 ; j < m ; ++j)
/* Nf9SZxpLy ily traian zHzeGT1Zd */             {
/* Nf9SZxpLy ily traian zHzeGT1Zd */                 fin >> a[i][j];
/* Nf9SZxpLy ily traian zHzeGT1Zd */                 if(a[i][j] < mini) mini=a[i][j];
/* Nf9SZxpLy ily traian zHzeGT1Zd */             }
/* Nf9SZxpLy ily traian zHzeGT1Zd */             v[i] = mini;
/* Nf9SZxpLy ily traian zHzeGT1Zd */     }
/* Nf9SZxpLy ily traian zHzeGT1Zd */     sort(v , v + n);
/* Nf9SZxpLy ily traian zHzeGT1Zd */     fout << v[n - 1];
/* Nf9SZxpLy ily traian zHzeGT1Zd */ 
/* Nf9SZxpLy ily traian zHzeGT1Zd */     fin.close();
/* Nf9SZxpLy ily traian zHzeGT1Zd */     fout.close();
/* Nf9SZxpLy ily traian zHzeGT1Zd */ 
/* Nf9SZxpLy ily traian zHzeGT1Zd */     return 0;
/* Nf9SZxpLy ily traian zHzeGT1Zd */ }