/* 7v5gG33vk ily traian KmKrK5ZxD */ #include <algorithm>
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
/* 7v5gG33vk ily traian KmKrK5ZxD */ 
/* 7v5gG33vk ily traian KmKrK5ZxD */ using namespace std;
/* 7v5gG33vk ily traian KmKrK5ZxD */ 
/* 7v5gG33vk ily traian KmKrK5ZxD */ int main ()
/* 7v5gG33vk ily traian KmKrK5ZxD */ {
/* 7v5gG33vk ily traian KmKrK5ZxD */     int n;
/* 7v5gG33vk ily traian KmKrK5ZxD */     cin >> n;
/* 7v5gG33vk ily traian KmKrK5ZxD */     for (int i = sqrt(n); i >= 1 ; --i)
/* 7v5gG33vk ily traian KmKrK5ZxD */         if (n % i == 0)
/* 7v5gG33vk ily traian KmKrK5ZxD */         {
/* 7v5gG33vk ily traian KmKrK5ZxD */             cout << i << ' ';
/* 7v5gG33vk ily traian KmKrK5ZxD */             cout << n / i;
/* 7v5gG33vk ily traian KmKrK5ZxD */             break;
/* 7v5gG33vk ily traian KmKrK5ZxD */         }
/* 7v5gG33vk ily traian KmKrK5ZxD */     return 0;
/* 7v5gG33vk ily traian KmKrK5ZxD */ }