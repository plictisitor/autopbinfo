/* 7NvQPqDOd ily traian JOHDZVeLv */ #include <algorithm>
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
/* 7NvQPqDOd ily traian JOHDZVeLv */ using namespace std;
/* 7NvQPqDOd ily traian JOHDZVeLv */ 
/* 7NvQPqDOd ily traian JOHDZVeLv */ ifstream cin("lgmax.in");
/* 7NvQPqDOd ily traian JOHDZVeLv */ ofstream cout("lgmax.out");
/* 7NvQPqDOd ily traian JOHDZVeLv */ 
/* 7NvQPqDOd ily traian JOHDZVeLv */ char a[101][300];
/* 7NvQPqDOd ily traian JOHDZVeLv */ 
/* 7NvQPqDOd ily traian JOHDZVeLv */ int main()
/* 7NvQPqDOd ily traian JOHDZVeLv */ {
/* 7NvQPqDOd ily traian JOHDZVeLv */     int n;
/* 7NvQPqDOd ily traian JOHDZVeLv */     cin >> n;
/* 7NvQPqDOd ily traian JOHDZVeLv */     int max=0 , indice=0;
/* 7NvQPqDOd ily traian JOHDZVeLv */     for(int i = 0 ; i <= n ; ++i)
/* 7NvQPqDOd ily traian JOHDZVeLv */     {
/* 7NvQPqDOd ily traian JOHDZVeLv */         cin.getline(a[i] , 300);
/* 7NvQPqDOd ily traian JOHDZVeLv */         int j = 0;
/* 7NvQPqDOd ily traian JOHDZVeLv */         int cnt=0;
/* 7NvQPqDOd ily traian JOHDZVeLv */         while(a[i][j]!='\0')
/* 7NvQPqDOd ily traian JOHDZVeLv */         {
/* 7NvQPqDOd ily traian JOHDZVeLv */             cnt++;
/* 7NvQPqDOd ily traian JOHDZVeLv */             j++;
/* 7NvQPqDOd ily traian JOHDZVeLv */         }
/* 7NvQPqDOd ily traian JOHDZVeLv */         if(cnt>max)
/* 7NvQPqDOd ily traian JOHDZVeLv */             max=cnt , indice = i;
/* 7NvQPqDOd ily traian JOHDZVeLv */     }
/* 7NvQPqDOd ily traian JOHDZVeLv */     cout << a[indice];
/* 7NvQPqDOd ily traian JOHDZVeLv */     return 0;
/* 7NvQPqDOd ily traian JOHDZVeLv */ }