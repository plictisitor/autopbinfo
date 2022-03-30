/* SVugq1ZYV ily traian dzqu1Yncw */ #include <algorithm>
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
/* SVugq1ZYV ily traian dzqu1Yncw */ using namespace std;
/* SVugq1ZYV ily traian dzqu1Yncw */ ifstream fin("interschimbarelinii.in");
/* SVugq1ZYV ily traian dzqu1Yncw */ ofstream fout("interschimbarelinii.out");
/* SVugq1ZYV ily traian dzqu1Yncw */ int main()
/* SVugq1ZYV ily traian dzqu1Yncw */ {
/* SVugq1ZYV ily traian dzqu1Yncw */     int n , m , a[25][25] , mini = 10001 , maxi = 0 , lmax = 0 , lmin = 0;
/* SVugq1ZYV ily traian dzqu1Yncw */     fin >> n >> m;
/* SVugq1ZYV ily traian dzqu1Yncw */     for(int i = 0 ; i < n ; ++i)
/* SVugq1ZYV ily traian dzqu1Yncw */         for(int j = 0 ; j < m ; ++j)
/* SVugq1ZYV ily traian dzqu1Yncw */            {
/* SVugq1ZYV ily traian dzqu1Yncw */                fin >> a[i][j];
/* SVugq1ZYV ily traian dzqu1Yncw */                if(a[i][j] > maxi)
/* SVugq1ZYV ily traian dzqu1Yncw */                 {
/* SVugq1ZYV ily traian dzqu1Yncw */                     maxi = a[i][j];
/* SVugq1ZYV ily traian dzqu1Yncw */                     lmax=i;
/* SVugq1ZYV ily traian dzqu1Yncw */                 }
/* SVugq1ZYV ily traian dzqu1Yncw */                 if(a[i][j] < mini)
/* SVugq1ZYV ily traian dzqu1Yncw */                 {
/* SVugq1ZYV ily traian dzqu1Yncw */                     mini=a[i][j];
/* SVugq1ZYV ily traian dzqu1Yncw */                     lmin=i;
/* SVugq1ZYV ily traian dzqu1Yncw */                 }
/* SVugq1ZYV ily traian dzqu1Yncw */            }
/* SVugq1ZYV ily traian dzqu1Yncw */     for(int i = 0 ; i < n ; ++i)
/* SVugq1ZYV ily traian dzqu1Yncw */     {
/* SVugq1ZYV ily traian dzqu1Yncw */         for(int j = 0 ; j < m ; ++j)
/* SVugq1ZYV ily traian dzqu1Yncw */         {
/* SVugq1ZYV ily traian dzqu1Yncw */             if(i==lmax)
/* SVugq1ZYV ily traian dzqu1Yncw */             fout << a[lmin][j] << " ";
/* SVugq1ZYV ily traian dzqu1Yncw */             if(i==lmin)
/* SVugq1ZYV ily traian dzqu1Yncw */             fout << a[lmax][j] << " ";
/* SVugq1ZYV ily traian dzqu1Yncw */             if(i!=lmax && i!=lmin)
/* SVugq1ZYV ily traian dzqu1Yncw */             fout << a[i][j] << " ";
/* SVugq1ZYV ily traian dzqu1Yncw */         }
/* SVugq1ZYV ily traian dzqu1Yncw */         fout << endl;
/* SVugq1ZYV ily traian dzqu1Yncw */     }
/* SVugq1ZYV ily traian dzqu1Yncw */ 
/* SVugq1ZYV ily traian dzqu1Yncw */     fin.close();
/* SVugq1ZYV ily traian dzqu1Yncw */     fout.close();
/* SVugq1ZYV ily traian dzqu1Yncw */ 
/* SVugq1ZYV ily traian dzqu1Yncw */     return 0;
/* SVugq1ZYV ily traian dzqu1Yncw */ }