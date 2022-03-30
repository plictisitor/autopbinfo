/* 8CtCUjtHP ily traian 1pLRh2aJt */ #include <algorithm>
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
/* 8CtCUjtHP ily traian 1pLRh2aJt */ 
/* 8CtCUjtHP ily traian 1pLRh2aJt */ using namespace std;
/* 8CtCUjtHP ily traian 1pLRh2aJt */ 
/* 8CtCUjtHP ily traian 1pLRh2aJt */ int main()
/* 8CtCUjtHP ily traian 1pLRh2aJt */ {
/* 8CtCUjtHP ily traian 1pLRh2aJt */     int n;
/* 8CtCUjtHP ily traian 1pLRh2aJt */     cin >> n;
/* 8CtCUjtHP ily traian 1pLRh2aJt */     int tmp;
/* 8CtCUjtHP ily traian 1pLRh2aJt */     int cnt=0;
/* 8CtCUjtHP ily traian 1pLRh2aJt */     int par=-1000000;
/* 8CtCUjtHP ily traian 1pLRh2aJt */     for (int i = 0 ; i < n; ++i)
/* 8CtCUjtHP ily traian 1pLRh2aJt */     {
/* 8CtCUjtHP ily traian 1pLRh2aJt */     cin >> tmp;
/* 8CtCUjtHP ily traian 1pLRh2aJt */     if (tmp%2==0)
/* 8CtCUjtHP ily traian 1pLRh2aJt */     {
/* 8CtCUjtHP ily traian 1pLRh2aJt */         if (par <= tmp)
/* 8CtCUjtHP ily traian 1pLRh2aJt */         {
/* 8CtCUjtHP ily traian 1pLRh2aJt */             par=tmp;
/* 8CtCUjtHP ily traian 1pLRh2aJt */         }
/* 8CtCUjtHP ily traian 1pLRh2aJt */         else
/* 8CtCUjtHP ily traian 1pLRh2aJt */         {
/* 8CtCUjtHP ily traian 1pLRh2aJt */             cnt=1;
/* 8CtCUjtHP ily traian 1pLRh2aJt */             break;
/* 8CtCUjtHP ily traian 1pLRh2aJt */         }
/* 8CtCUjtHP ily traian 1pLRh2aJt */     }
/* 8CtCUjtHP ily traian 1pLRh2aJt */     }
/* 8CtCUjtHP ily traian 1pLRh2aJt */     if (cnt==0)
/* 8CtCUjtHP ily traian 1pLRh2aJt */     cout << "DA";
/* 8CtCUjtHP ily traian 1pLRh2aJt */     else
/* 8CtCUjtHP ily traian 1pLRh2aJt */     cout << "NU";
/* 8CtCUjtHP ily traian 1pLRh2aJt */ }