/* 9C3ax0Mxz ily traian seUbQgiDZ */ #include <algorithm>
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
/* 9C3ax0Mxz ily traian seUbQgiDZ */ 
/* 9C3ax0Mxz ily traian seUbQgiDZ */ using namespace std;
/* 9C3ax0Mxz ily traian seUbQgiDZ */ 
/* 9C3ax0Mxz ily traian seUbQgiDZ */ ifstream cin("matrice_div_et_imp.in");
/* 9C3ax0Mxz ily traian seUbQgiDZ */ ofstream cout("matrice_div_et_imp.out");
/* 9C3ax0Mxz ily traian seUbQgiDZ */ 
/* 9C3ax0Mxz ily traian seUbQgiDZ */ int m[2001][2001];
/* 9C3ax0Mxz ily traian seUbQgiDZ */ 
/* 9C3ax0Mxz ily traian seUbQgiDZ */ void afisare(int sus , int jos , int st , int dr)
/* 9C3ax0Mxz ily traian seUbQgiDZ */ {
/* 9C3ax0Mxz ily traian seUbQgiDZ */     if(jos - sus >= 1)
/* 9C3ax0Mxz ily traian seUbQgiDZ */     {
/* 9C3ax0Mxz ily traian seUbQgiDZ */         int mij1=(sus + jos) / 2;
/* 9C3ax0Mxz ily traian seUbQgiDZ */         int mij2=(st + dr) / 2;
/* 9C3ax0Mxz ily traian seUbQgiDZ */         afisare(sus , mij1 , st , mij2);
/* 9C3ax0Mxz ily traian seUbQgiDZ */         afisare(mij1+1 , jos , mij2+1 , dr);
/* 9C3ax0Mxz ily traian seUbQgiDZ */         afisare(sus , mij1 , mij2+1 , dr);
/* 9C3ax0Mxz ily traian seUbQgiDZ */         afisare(mij1+1 , jos , st , mij2);
/* 9C3ax0Mxz ily traian seUbQgiDZ */     }
/* 9C3ax0Mxz ily traian seUbQgiDZ */     else
/* 9C3ax0Mxz ily traian seUbQgiDZ */         cout << m[sus][st] << ' ';
/* 9C3ax0Mxz ily traian seUbQgiDZ */ }
/* 9C3ax0Mxz ily traian seUbQgiDZ */ 
/* 9C3ax0Mxz ily traian seUbQgiDZ */ int main()
/* 9C3ax0Mxz ily traian seUbQgiDZ */ {
/* 9C3ax0Mxz ily traian seUbQgiDZ */     int n;
/* 9C3ax0Mxz ily traian seUbQgiDZ */     cin >> n;
/* 9C3ax0Mxz ily traian seUbQgiDZ */     n = pow(2 , n);
/* 9C3ax0Mxz ily traian seUbQgiDZ */     for(int i = 1 ; i <= n ; ++i)
/* 9C3ax0Mxz ily traian seUbQgiDZ */         for(int j = 1 ; j <= n ; ++j)
/* 9C3ax0Mxz ily traian seUbQgiDZ */             cin >> m[i][j];
/* 9C3ax0Mxz ily traian seUbQgiDZ */     afisare(1 , n , 1 , n);
/* 9C3ax0Mxz ily traian seUbQgiDZ */     return 0;
/* 9C3ax0Mxz ily traian seUbQgiDZ */ }