/* e3qHPuxCM ily traian GwGoQSmCd */ #include <algorithm>
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
/* e3qHPuxCM ily traian GwGoQSmCd */ 
/* e3qHPuxCM ily traian GwGoQSmCd */ using namespace std;
/* e3qHPuxCM ily traian GwGoQSmCd */ 
/* e3qHPuxCM ily traian GwGoQSmCd */ char mat[100][100];
/* e3qHPuxCM ily traian GwGoQSmCd */ 
/* e3qHPuxCM ily traian GwGoQSmCd */ int main()
/* e3qHPuxCM ily traian GwGoQSmCd */ {
/* e3qHPuxCM ily traian GwGoQSmCd */     char s[300];
/* e3qHPuxCM ily traian GwGoQSmCd */     cin.getline(s , 300);
/* e3qHPuxCM ily traian GwGoQSmCd */     int i = 0;
/* e3qHPuxCM ily traian GwGoQSmCd */     int j = 0 , cnt = 1;
/* e3qHPuxCM ily traian GwGoQSmCd */     while(s[i]!='\0')
/* e3qHPuxCM ily traian GwGoQSmCd */     {
/* e3qHPuxCM ily traian GwGoQSmCd */         if(s[i]==' ')
/* e3qHPuxCM ily traian GwGoQSmCd */             j=0 , cnt++;
/* e3qHPuxCM ily traian GwGoQSmCd */         else
/* e3qHPuxCM ily traian GwGoQSmCd */             mat[cnt][j]=s[i] , j++;
/* e3qHPuxCM ily traian GwGoQSmCd */         i++;
/* e3qHPuxCM ily traian GwGoQSmCd */     }
/* e3qHPuxCM ily traian GwGoQSmCd */     for(int i = 1 ; i <= cnt ; ++i)
/* e3qHPuxCM ily traian GwGoQSmCd */         for(int j = i + 1 ; j <= cnt ; ++j)
/* e3qHPuxCM ily traian GwGoQSmCd */             if(strcmp(mat[i] , mat[j]) > 0)
/* e3qHPuxCM ily traian GwGoQSmCd */                 swap(mat[i] , mat[j]);
/* e3qHPuxCM ily traian GwGoQSmCd */     int lmax = 0;
/* e3qHPuxCM ily traian GwGoQSmCd */     for(int i = 1 ; i <= cnt ; ++i)
/* e3qHPuxCM ily traian GwGoQSmCd */         if(strlen(mat[i]) > lmax)
/* e3qHPuxCM ily traian GwGoQSmCd */             lmax=strlen(mat[i]);
/* e3qHPuxCM ily traian GwGoQSmCd */     for(int i = lmax ; i >= 1 ; --i)
/* e3qHPuxCM ily traian GwGoQSmCd */         for(int j = 1 ; j <= cnt ; ++j)
/* e3qHPuxCM ily traian GwGoQSmCd */             if(strlen(mat[j])==i)
/* e3qHPuxCM ily traian GwGoQSmCd */                 cout << mat[j] << '\n';
/* e3qHPuxCM ily traian GwGoQSmCd */     return 0;
/* e3qHPuxCM ily traian GwGoQSmCd */ }