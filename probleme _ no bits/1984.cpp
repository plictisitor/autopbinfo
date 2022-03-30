/* 06HBvDCd6 ily traian IlkgTWWRu */ #include <algorithm>
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
/* 06HBvDCd6 ily traian IlkgTWWRu */ 
/* 06HBvDCd6 ily traian IlkgTWWRu */ using namespace std;
/* 06HBvDCd6 ily traian IlkgTWWRu */ ifstream fin("cifra2.in");
/* 06HBvDCd6 ily traian IlkgTWWRu */ ofstream fout("cifra2.out");
/* 06HBvDCd6 ily traian IlkgTWWRu */ int main()
/* 06HBvDCd6 ily traian IlkgTWWRu */ {
/* 06HBvDCd6 ily traian IlkgTWWRu */     int n , ok =0 , cmin = 10;
/* 06HBvDCd6 ily traian IlkgTWWRu */     fin >> n;
/* 06HBvDCd6 ily traian IlkgTWWRu */     int x = n;
/* 06HBvDCd6 ily traian IlkgTWWRu */     while(x != 0)
/* 06HBvDCd6 ily traian IlkgTWWRu */     {
/* 06HBvDCd6 ily traian IlkgTWWRu */         if(x % 10 < cmin) cmin = x % 10;
/* 06HBvDCd6 ily traian IlkgTWWRu */         x /= 10;
/* 06HBvDCd6 ily traian IlkgTWWRu */     }
/* 06HBvDCd6 ily traian IlkgTWWRu */     fout << cmin << endl;
/* 06HBvDCd6 ily traian IlkgTWWRu */     while(n > 9)
/* 06HBvDCd6 ily traian IlkgTWWRu */     {
/* 06HBvDCd6 ily traian IlkgTWWRu */         cmin = 10;
/* 06HBvDCd6 ily traian IlkgTWWRu */         x = n;
/* 06HBvDCd6 ily traian IlkgTWWRu */         int p = 1;
/* 06HBvDCd6 ily traian IlkgTWWRu */         while(x != 0)
/* 06HBvDCd6 ily traian IlkgTWWRu */         {
/* 06HBvDCd6 ily traian IlkgTWWRu */             if(x % 10 < cmin)
/* 06HBvDCd6 ily traian IlkgTWWRu */             cmin = x % 10;
/* 06HBvDCd6 ily traian IlkgTWWRu */             x /= 10;
/* 06HBvDCd6 ily traian IlkgTWWRu */         }
/* 06HBvDCd6 ily traian IlkgTWWRu */         x = n;
/* 06HBvDCd6 ily traian IlkgTWWRu */         n = 0;
/* 06HBvDCd6 ily traian IlkgTWWRu */         while(x != 0)
/* 06HBvDCd6 ily traian IlkgTWWRu */         {
/* 06HBvDCd6 ily traian IlkgTWWRu */             if(x % 10 != cmin)
/* 06HBvDCd6 ily traian IlkgTWWRu */             {
/* 06HBvDCd6 ily traian IlkgTWWRu */                 n = p *((x % 10) - cmin) + n;
/* 06HBvDCd6 ily traian IlkgTWWRu */                 p *= 10;
/* 06HBvDCd6 ily traian IlkgTWWRu */             }
/* 06HBvDCd6 ily traian IlkgTWWRu */             x /= 10;
/* 06HBvDCd6 ily traian IlkgTWWRu */         }
/* 06HBvDCd6 ily traian IlkgTWWRu */         if(ok == 0)
/* 06HBvDCd6 ily traian IlkgTWWRu */         {
/* 06HBvDCd6 ily traian IlkgTWWRu */             fout << n << endl;
/* 06HBvDCd6 ily traian IlkgTWWRu */             ok++;
/* 06HBvDCd6 ily traian IlkgTWWRu */         }
/* 06HBvDCd6 ily traian IlkgTWWRu */     }
/* 06HBvDCd6 ily traian IlkgTWWRu */     fout << n;
/* 06HBvDCd6 ily traian IlkgTWWRu */ 
/* 06HBvDCd6 ily traian IlkgTWWRu */     fin.close();
/* 06HBvDCd6 ily traian IlkgTWWRu */     fout.close();
/* 06HBvDCd6 ily traian IlkgTWWRu */ 
/* 06HBvDCd6 ily traian IlkgTWWRu */     return 0;
/* 06HBvDCd6 ily traian IlkgTWWRu */ }