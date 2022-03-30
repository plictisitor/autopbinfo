/* 8YDTh5tp2 ily traian l5Ob0wMcS */ #include <algorithm>
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
/* 8YDTh5tp2 ily traian l5Ob0wMcS */ using namespace std;
/* 8YDTh5tp2 ily traian l5Ob0wMcS */ 
/* 8YDTh5tp2 ily traian l5Ob0wMcS */ void inserare(int &n)
/* 8YDTh5tp2 ily traian l5Ob0wMcS */ {
/* 8YDTh5tp2 ily traian l5Ob0wMcS */     int v[20] , p = 0;
/* 8YDTh5tp2 ily traian l5Ob0wMcS */     while(n)
/* 8YDTh5tp2 ily traian l5Ob0wMcS */         v[p]=n%10 , n/=10 , p++;
/* 8YDTh5tp2 ily traian l5Ob0wMcS */     int nr = 0;
/* 8YDTh5tp2 ily traian l5Ob0wMcS */     for(int i = p-1 ; i > 0 ; --i)
/* 8YDTh5tp2 ily traian l5Ob0wMcS */         n = n * 10 + v[i] , n = n * 10 + abs(v[i]-v[i-1]);
/* 8YDTh5tp2 ily traian l5Ob0wMcS */     n = n * 10 + v[0];
/* 8YDTh5tp2 ily traian l5Ob0wMcS */ 
/* 8YDTh5tp2 ily traian l5Ob0wMcS */ }