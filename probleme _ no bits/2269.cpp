/* 8jkDI6eml ily traian TplvNOvYE */ #include <algorithm>
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
/* 8jkDI6eml ily traian TplvNOvYE */ using namespace std;
/* 8jkDI6eml ily traian TplvNOvYE */ 
/* 8jkDI6eml ily traian TplvNOvYE */ ifstream fin("maximpar.in");
/* 8jkDI6eml ily traian TplvNOvYE */ ofstream fout("maximpar.out");
/* 8jkDI6eml ily traian TplvNOvYE */ 
/* 8jkDI6eml ily traian TplvNOvYE */ int main()
/* 8jkDI6eml ily traian TplvNOvYE */ {
/* 8jkDI6eml ily traian TplvNOvYE */     int n, cnt=0 , max=0;
/* 8jkDI6eml ily traian TplvNOvYE */     fin >> n;
/* 8jkDI6eml ily traian TplvNOvYE */     int a[201];
/* 8jkDI6eml ily traian TplvNOvYE */     for (int i = 0 ; i < n; ++i)
/* 8jkDI6eml ily traian TplvNOvYE */     {
/* 8jkDI6eml ily traian TplvNOvYE */         fin >> a[i];
/* 8jkDI6eml ily traian TplvNOvYE */         if (a[i] % 2 == 0 && a[i] > max)
/* 8jkDI6eml ily traian TplvNOvYE */         max=a[i];
/* 8jkDI6eml ily traian TplvNOvYE */     }
/* 8jkDI6eml ily traian TplvNOvYE */     for (int i = 0 ; i < n; ++i)
/* 8jkDI6eml ily traian TplvNOvYE */     {
/* 8jkDI6eml ily traian TplvNOvYE */         if (a[i]==max)
/* 8jkDI6eml ily traian TplvNOvYE */         cnt++;
/* 8jkDI6eml ily traian TplvNOvYE */     }
/* 8jkDI6eml ily traian TplvNOvYE */     if (cnt==0)
/* 8jkDI6eml ily traian TplvNOvYE */         fout << -1;
/* 8jkDI6eml ily traian TplvNOvYE */     else
/* 8jkDI6eml ily traian TplvNOvYE */     fout << max << ' ' << cnt;
/* 8jkDI6eml ily traian TplvNOvYE */     
/* 8jkDI6eml ily traian TplvNOvYE */     fin.close();
/* 8jkDI6eml ily traian TplvNOvYE */     fout.close();
/* 8jkDI6eml ily traian TplvNOvYE */     
/* 8jkDI6eml ily traian TplvNOvYE */     return 0;
/* 8jkDI6eml ily traian TplvNOvYE */ }