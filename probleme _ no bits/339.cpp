/* izn9Lvk2c ily traian BvT0N9wKu */ #include <algorithm>
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
/* izn9Lvk2c ily traian BvT0N9wKu */ using namespace std;
/* izn9Lvk2c ily traian BvT0N9wKu */ 
/* izn9Lvk2c ily traian BvT0N9wKu */ int main ()
/* izn9Lvk2c ily traian BvT0N9wKu */ {
/* izn9Lvk2c ily traian BvT0N9wKu */     int n,tmp,par,cnt=0;
/* izn9Lvk2c ily traian BvT0N9wKu */     cin >> n;
/* izn9Lvk2c ily traian BvT0N9wKu */     for (int i = 1; i<= n; ++i)
/* izn9Lvk2c ily traian BvT0N9wKu */     {
/* izn9Lvk2c ily traian BvT0N9wKu */         cin >> tmp;
/* izn9Lvk2c ily traian BvT0N9wKu */         if (tmp%2==0 && cnt==0)
/* izn9Lvk2c ily traian BvT0N9wKu */         {
/* izn9Lvk2c ily traian BvT0N9wKu */             par=tmp;
/* izn9Lvk2c ily traian BvT0N9wKu */             cnt++;
/* izn9Lvk2c ily traian BvT0N9wKu */         }
/* izn9Lvk2c ily traian BvT0N9wKu */     }
/* izn9Lvk2c ily traian BvT0N9wKu */     if (cnt==0)
/* izn9Lvk2c ily traian BvT0N9wKu */         cout << "IMPOSIBIL";
/* izn9Lvk2c ily traian BvT0N9wKu */     else
/* izn9Lvk2c ily traian BvT0N9wKu */         cout << par;
/* izn9Lvk2c ily traian BvT0N9wKu */     return 0;
/* izn9Lvk2c ily traian BvT0N9wKu */ }