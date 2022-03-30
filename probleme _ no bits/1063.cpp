/* 6xU9Y7U6o ily traian qGz2aWjDH */ #include <algorithm>
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
/* 6xU9Y7U6o ily traian qGz2aWjDH */ 
/* 6xU9Y7U6o ily traian qGz2aWjDH */ using namespace std;
/* 6xU9Y7U6o ily traian qGz2aWjDH */ 
/* 6xU9Y7U6o ily traian qGz2aWjDH */ ifstream cin("arme.in");
/* 6xU9Y7U6o ily traian qGz2aWjDH */ ofstream cout("arme.out");
/* 6xU9Y7U6o ily traian qGz2aWjDH */ 
/* 6xU9Y7U6o ily traian qGz2aWjDH */ int n , m , a[2002] , s;
/* 6xU9Y7U6o ily traian qGz2aWjDH */ 
/* 6xU9Y7U6o ily traian qGz2aWjDH */ int main()
/* 6xU9Y7U6o ily traian qGz2aWjDH */ {
/* 6xU9Y7U6o ily traian qGz2aWjDH */     cin >> n >> m;
/* 6xU9Y7U6o ily traian qGz2aWjDH */     for(int i = 1 ; i <= n ; i++)
/* 6xU9Y7U6o ily traian qGz2aWjDH */         cin >> a[i];
/* 6xU9Y7U6o ily traian qGz2aWjDH */     
/* 6xU9Y7U6o ily traian qGz2aWjDH */     for(int i = 1 ; i <= m ; i++)
/* 6xU9Y7U6o ily traian qGz2aWjDH */         cin >> a[n + i];
/* 6xU9Y7U6o ily traian qGz2aWjDH */     
/* 6xU9Y7U6o ily traian qGz2aWjDH */     sort(a + 1 , a + n + m + 1);
/* 6xU9Y7U6o ily traian qGz2aWjDH */     
/* 6xU9Y7U6o ily traian qGz2aWjDH */     for(int i = n + m  ; i > m ; i--)
/* 6xU9Y7U6o ily traian qGz2aWjDH */         s += a[i];
/* 6xU9Y7U6o ily traian qGz2aWjDH */     
/* 6xU9Y7U6o ily traian qGz2aWjDH */     cout << s;
/* 6xU9Y7U6o ily traian qGz2aWjDH */     
/* 6xU9Y7U6o ily traian qGz2aWjDH */ }