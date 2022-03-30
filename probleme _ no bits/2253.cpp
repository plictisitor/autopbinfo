/* CYTMhu5ge ily traian E6Gasl9ko */ #include <algorithm>
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
/* CYTMhu5ge ily traian E6Gasl9ko */ 
/* CYTMhu5ge ily traian E6Gasl9ko */ using namespace std;
/* CYTMhu5ge ily traian E6Gasl9ko */ 
/* CYTMhu5ge ily traian E6Gasl9ko */ ifstream fin("vacantadevara.in");
/* CYTMhu5ge ily traian E6Gasl9ko */ ofstream fout("vacantadevara.out");
/* CYTMhu5ge ily traian E6Gasl9ko */ 
/* CYTMhu5ge ily traian E6Gasl9ko */ int main()
/* CYTMhu5ge ily traian E6Gasl9ko */ {
/* CYTMhu5ge ily traian E6Gasl9ko */     int n;
/* CYTMhu5ge ily traian E6Gasl9ko */     fin >> n;
/* CYTMhu5ge ily traian E6Gasl9ko */     int ok=0 , a[1000];
/* CYTMhu5ge ily traian E6Gasl9ko */     int cif=0;
/* CYTMhu5ge ily traian E6Gasl9ko */     for(int i = 0 ; i < n ; ++i)
/* CYTMhu5ge ily traian E6Gasl9ko */     fin >> a[i];
/* CYTMhu5ge ily traian E6Gasl9ko */     sort(a,a+n);
/* CYTMhu5ge ily traian E6Gasl9ko */     for(int i = 0 ; i < n ; ++i)
/* CYTMhu5ge ily traian E6Gasl9ko */     {
/* CYTMhu5ge ily traian E6Gasl9ko */         if(a[i]!=0)
/* CYTMhu5ge ily traian E6Gasl9ko */         {
/* CYTMhu5ge ily traian E6Gasl9ko */             cif=a[i];
/* CYTMhu5ge ily traian E6Gasl9ko */             break;
/* CYTMhu5ge ily traian E6Gasl9ko */         }
/* CYTMhu5ge ily traian E6Gasl9ko */     }
/* CYTMhu5ge ily traian E6Gasl9ko */     fout << cif;
/* CYTMhu5ge ily traian E6Gasl9ko */     for(int i = 0 ; i < n ; ++i)
/* CYTMhu5ge ily traian E6Gasl9ko */     {
/* CYTMhu5ge ily traian E6Gasl9ko */         if(a[i]==cif && ok==0)
/* CYTMhu5ge ily traian E6Gasl9ko */         {
/* CYTMhu5ge ily traian E6Gasl9ko */             ok++;
/* CYTMhu5ge ily traian E6Gasl9ko */         }
/* CYTMhu5ge ily traian E6Gasl9ko */         else
/* CYTMhu5ge ily traian E6Gasl9ko */         fout << a[i];
/* CYTMhu5ge ily traian E6Gasl9ko */     }
/* CYTMhu5ge ily traian E6Gasl9ko */     return 0;
/* CYTMhu5ge ily traian E6Gasl9ko */ }