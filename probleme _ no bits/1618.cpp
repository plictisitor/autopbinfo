/* gEeG8dO1R ily traian YM8CbC15w */ #include <algorithm>
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
/* gEeG8dO1R ily traian YM8CbC15w */ 
/* gEeG8dO1R ily traian YM8CbC15w */ using namespace std;
/* gEeG8dO1R ily traian YM8CbC15w */ 
/* gEeG8dO1R ily traian YM8CbC15w */ 
/* gEeG8dO1R ily traian YM8CbC15w */ int c[]={6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
/* gEeG8dO1R ily traian YM8CbC15w */ int t[]={2, 7, 2, 3, 3, 4, 2, 5, 1, 2};
/* gEeG8dO1R ily traian YM8CbC15w */ int mm[]={1, 5, 1, 2, 2, 3, 1, 2, 0, 0 };
/* gEeG8dO1R ily traian YM8CbC15w */ int cif[25];
/* gEeG8dO1R ily traian YM8CbC15w */ char s[25];
/* gEeG8dO1R ily traian YM8CbC15w */ unsigned long long p,sol;
/* gEeG8dO1R ily traian YM8CbC15w */ ifstream fin ("cifre12.in");
/* gEeG8dO1R ily traian YM8CbC15w */ ofstream fout ("cifre12.out");
/* gEeG8dO1R ily traian YM8CbC15w */ int main()
/* gEeG8dO1R ily traian YM8CbC15w */ {
/* gEeG8dO1R ily traian YM8CbC15w */ 
/* gEeG8dO1R ily traian YM8CbC15w */     int t1,k=0,sum=0,g;
/* gEeG8dO1R ily traian YM8CbC15w */     fin >> t1;
/* gEeG8dO1R ily traian YM8CbC15w */     fin >> s;
/* gEeG8dO1R ily traian YM8CbC15w */     for (k=0;s[k];++k)
/* gEeG8dO1R ily traian YM8CbC15w */         cif[k]=s[k]-'0';
/* gEeG8dO1R ily traian YM8CbC15w */     if(t1==1)
/* gEeG8dO1R ily traian YM8CbC15w */     {
/* gEeG8dO1R ily traian YM8CbC15w */         for (int i=0;i<k;++i)
/* gEeG8dO1R ily traian YM8CbC15w */             sum +=c[cif[i]];
/* gEeG8dO1R ily traian YM8CbC15w */         fout << sum;
/* gEeG8dO1R ily traian YM8CbC15w */     }
/* gEeG8dO1R ily traian YM8CbC15w */     else
/* gEeG8dO1R ily traian YM8CbC15w */     {
/* gEeG8dO1R ily traian YM8CbC15w */         for (int i=0;i<k;++i)
/* gEeG8dO1R ily traian YM8CbC15w */         {
/* gEeG8dO1R ily traian YM8CbC15w */             p=1;
/* gEeG8dO1R ily traian YM8CbC15w */             for (int j=i+1;j<k;j++)
/* gEeG8dO1R ily traian YM8CbC15w */             {
/* gEeG8dO1R ily traian YM8CbC15w */                 g=cif[j];
/* gEeG8dO1R ily traian YM8CbC15w */                 p=p*t[g];
/* gEeG8dO1R ily traian YM8CbC15w */             }
/* gEeG8dO1R ily traian YM8CbC15w */ 
/* gEeG8dO1R ily traian YM8CbC15w */             sol +=mm[cif[i]] *p;
/* gEeG8dO1R ily traian YM8CbC15w */         }
/* gEeG8dO1R ily traian YM8CbC15w */         fout << sol;
/* gEeG8dO1R ily traian YM8CbC15w */     }
/* gEeG8dO1R ily traian YM8CbC15w */     return 0;
/* gEeG8dO1R ily traian YM8CbC15w */ 
/* gEeG8dO1R ily traian YM8CbC15w */ 
/* gEeG8dO1R ily traian YM8CbC15w */ }