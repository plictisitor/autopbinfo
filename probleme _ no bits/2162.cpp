/* uwGfZHPKB ily traian uXx6KtjJu */ #include <algorithm>
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
/* uwGfZHPKB ily traian uXx6KtjJu */ using namespace std;
/* uwGfZHPKB ily traian uXx6KtjJu */ ifstream fin("conturi.in");
/* uwGfZHPKB ily traian uXx6KtjJu */ ofstream fout("conturi.out");
/* uwGfZHPKB ily traian uXx6KtjJu */ int main()
/* uwGfZHPKB ily traian uXx6KtjJu */ {
/* uwGfZHPKB ily traian uXx6KtjJu */     int n ,x , a , maxi = 0;
/* uwGfZHPKB ily traian uXx6KtjJu */     fin >> n >> x;
/* uwGfZHPKB ily traian uXx6KtjJu */     for(int i = 0 ; i < n ; ++i)
/* uwGfZHPKB ily traian uXx6KtjJu */     {
/* uwGfZHPKB ily traian uXx6KtjJu */         fin >> a;
/* uwGfZHPKB ily traian uXx6KtjJu */         int suma = a % 10000;
/* uwGfZHPKB ily traian uXx6KtjJu */         if((a / 100000) % 10 == x)
/* uwGfZHPKB ily traian uXx6KtjJu */         {
/* uwGfZHPKB ily traian uXx6KtjJu */             if((a / 10000) % 10 == 1)
/* uwGfZHPKB ily traian uXx6KtjJu */             {
/* uwGfZHPKB ily traian uXx6KtjJu */                 if(suma > maxi) maxi = suma;
/* uwGfZHPKB ily traian uXx6KtjJu */             }
/* uwGfZHPKB ily traian uXx6KtjJu */         }
/* uwGfZHPKB ily traian uXx6KtjJu */     }
/* uwGfZHPKB ily traian uXx6KtjJu */     fout << maxi;
/* uwGfZHPKB ily traian uXx6KtjJu */ 
/* uwGfZHPKB ily traian uXx6KtjJu */     fin.close();
/* uwGfZHPKB ily traian uXx6KtjJu */     fout.close();
/* uwGfZHPKB ily traian uXx6KtjJu */ 
/* uwGfZHPKB ily traian uXx6KtjJu */     return 0;
/* uwGfZHPKB ily traian uXx6KtjJu */ }