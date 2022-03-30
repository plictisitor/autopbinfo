/* 75H0DivwT ily traian sEN9QoqNN */ #include <algorithm>
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
/* 75H0DivwT ily traian sEN9QoqNN */ 
/* 75H0DivwT ily traian sEN9QoqNN */ using namespace std;
/* 75H0DivwT ily traian sEN9QoqNN */ 
/* 75H0DivwT ily traian sEN9QoqNN */ int prim(int n)
/* 75H0DivwT ily traian sEN9QoqNN */ {
/* 75H0DivwT ily traian sEN9QoqNN */     int cnt=0;
/* 75H0DivwT ily traian sEN9QoqNN */     for (int i = 1 ; i*i <= n; ++i)
/* 75H0DivwT ily traian sEN9QoqNN */     {
/* 75H0DivwT ily traian sEN9QoqNN */         if (n%i==0)
/* 75H0DivwT ily traian sEN9QoqNN */             cnt+=2;
/* 75H0DivwT ily traian sEN9QoqNN */         if (i*i==n)
/* 75H0DivwT ily traian sEN9QoqNN */             cnt--;
/* 75H0DivwT ily traian sEN9QoqNN */     }
/* 75H0DivwT ily traian sEN9QoqNN */     if (cnt==2)
/* 75H0DivwT ily traian sEN9QoqNN */         return 1;
/* 75H0DivwT ily traian sEN9QoqNN */     else
/* 75H0DivwT ily traian sEN9QoqNN */         return 0;
/* 75H0DivwT ily traian sEN9QoqNN */ }
/* 75H0DivwT ily traian sEN9QoqNN */ int main ()
/* 75H0DivwT ily traian sEN9QoqNN */ {
/* 75H0DivwT ily traian sEN9QoqNN */     int n;
/* 75H0DivwT ily traian sEN9QoqNN */     cin >> n;
/* 75H0DivwT ily traian sEN9QoqNN */     int tmp;
/* 75H0DivwT ily traian sEN9QoqNN */     int cnt=0;
/* 75H0DivwT ily traian sEN9QoqNN */     for (int i = 1; i <= n; ++i)
/* 75H0DivwT ily traian sEN9QoqNN */     {
/* 75H0DivwT ily traian sEN9QoqNN */         cin >> tmp;
/* 75H0DivwT ily traian sEN9QoqNN */         if (prim(tmp))
/* 75H0DivwT ily traian sEN9QoqNN */             cnt++;
/* 75H0DivwT ily traian sEN9QoqNN */     }
/* 75H0DivwT ily traian sEN9QoqNN */     if (cnt!=0)
/* 75H0DivwT ily traian sEN9QoqNN */         cout << "DA";
/* 75H0DivwT ily traian sEN9QoqNN */     else
/* 75H0DivwT ily traian sEN9QoqNN */         cout << "NU";
/* 75H0DivwT ily traian sEN9QoqNN */     return 0;
/* 75H0DivwT ily traian sEN9QoqNN */ }