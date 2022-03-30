/* 2nmkBHbm2 ily traian 2XMD9fcYB */ #include <algorithm>
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
/* 2nmkBHbm2 ily traian 2XMD9fcYB */ using namespace std;
/* 2nmkBHbm2 ily traian 2XMD9fcYB */ 
/* 2nmkBHbm2 ily traian 2XMD9fcYB */ int main()
/* 2nmkBHbm2 ily traian 2XMD9fcYB */ {
/* 2nmkBHbm2 ily traian 2XMD9fcYB */     int n;
/* 2nmkBHbm2 ily traian 2XMD9fcYB */     cin >> n;
/* 2nmkBHbm2 ily traian 2XMD9fcYB */     long long int x;
/* 2nmkBHbm2 ily traian 2XMD9fcYB */     for(int i = 1 ; i <= n ; ++i)
/* 2nmkBHbm2 ily traian 2XMD9fcYB */     {
/* 2nmkBHbm2 ily traian 2XMD9fcYB */         cin >> x;
/* 2nmkBHbm2 ily traian 2XMD9fcYB */         bool gasit=false;
/* 2nmkBHbm2 ily traian 2XMD9fcYB */         for(long long int j=1 ; j * j * j <= x ; j++)
/* 2nmkBHbm2 ily traian 2XMD9fcYB */             if(j*j*j==x)
/* 2nmkBHbm2 ily traian 2XMD9fcYB */                 gasit=true;
/* 2nmkBHbm2 ily traian 2XMD9fcYB */         if(!gasit)
/* 2nmkBHbm2 ily traian 2XMD9fcYB */             for(long long int j = -1 ; j * j * j >= x ; j--)
/* 2nmkBHbm2 ily traian 2XMD9fcYB */                 if(j * j * j == x)
/* 2nmkBHbm2 ily traian 2XMD9fcYB */                     gasit = 1;
/* 2nmkBHbm2 ily traian 2XMD9fcYB */         if(gasit)
/* 2nmkBHbm2 ily traian 2XMD9fcYB */             cout << "DA" << '\n';
/* 2nmkBHbm2 ily traian 2XMD9fcYB */         else
/* 2nmkBHbm2 ily traian 2XMD9fcYB */             cout << "NU" << '\n';
/* 2nmkBHbm2 ily traian 2XMD9fcYB */     }
/* 2nmkBHbm2 ily traian 2XMD9fcYB */     return 0;
/* 2nmkBHbm2 ily traian 2XMD9fcYB */ }