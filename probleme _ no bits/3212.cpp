/* 5ZuNlZ8kI ily traian ASpuurhbP */ #include <algorithm>
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
/* 5ZuNlZ8kI ily traian ASpuurhbP */ using namespace std;
/* 5ZuNlZ8kI ily traian ASpuurhbP */ 
/* 5ZuNlZ8kI ily traian ASpuurhbP */ int n;
/* 5ZuNlZ8kI ily traian ASpuurhbP */ 
/* 5ZuNlZ8kI ily traian ASpuurhbP */ struct jucarie{
/* 5ZuNlZ8kI ily traian ASpuurhbP */     int val;
/* 5ZuNlZ8kI ily traian ASpuurhbP */     string s;
/* 5ZuNlZ8kI ily traian ASpuurhbP */ }a[5];
/* 5ZuNlZ8kI ily traian ASpuurhbP */ 
/* 5ZuNlZ8kI ily traian ASpuurhbP */ int main(){
/* 5ZuNlZ8kI ily traian ASpuurhbP */     cin >> n >> a[1].val >> a[2].val >> a[3].val;
/* 5ZuNlZ8kI ily traian ASpuurhbP */     a[1].s = "drona";
/* 5ZuNlZ8kI ily traian ASpuurhbP */     a[2].s = "robot";
/* 5ZuNlZ8kI ily traian ASpuurhbP */     a[3].s = "masina";
/* 5ZuNlZ8kI ily traian ASpuurhbP */     for(int i = 1; i <= 2; ++i)
/* 5ZuNlZ8kI ily traian ASpuurhbP */         for(int j = i + 1; j <= 3; ++j)
/* 5ZuNlZ8kI ily traian ASpuurhbP */             if(a[i].val < a[j].val)
/* 5ZuNlZ8kI ily traian ASpuurhbP */                 swap(a[i], a[j]);
/* 5ZuNlZ8kI ily traian ASpuurhbP */     if(n >= a[1].val)
/* 5ZuNlZ8kI ily traian ASpuurhbP */         cout << a[1].s;
/* 5ZuNlZ8kI ily traian ASpuurhbP */     else if(n >= a[2].val)
/* 5ZuNlZ8kI ily traian ASpuurhbP */         cout << a[2].s;
/* 5ZuNlZ8kI ily traian ASpuurhbP */     else if(n >= a[3].val)
/* 5ZuNlZ8kI ily traian ASpuurhbP */         cout << a[3].s;
/* 5ZuNlZ8kI ily traian ASpuurhbP */     else
/* 5ZuNlZ8kI ily traian ASpuurhbP */         cout << "nimic";
/* 5ZuNlZ8kI ily traian ASpuurhbP */ }