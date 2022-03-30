/* 704mzdFNH ily traian c3L6lBrHB */ #include <algorithm>
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
/* 704mzdFNH ily traian c3L6lBrHB */ 
/* 704mzdFNH ily traian c3L6lBrHB */ using namespace std;
/* 704mzdFNH ily traian c3L6lBrHB */ int main()
/* 704mzdFNH ily traian c3L6lBrHB */ {
/* 704mzdFNH ily traian c3L6lBrHB */     int n , a[1001];
/* 704mzdFNH ily traian c3L6lBrHB */     cin >> n;
/* 704mzdFNH ily traian c3L6lBrHB */     for(int i = 0 ;i  < n ; i++) cin >> a[i];
/* 704mzdFNH ily traian c3L6lBrHB */     sort(a,a+n);
/* 704mzdFNH ily traian c3L6lBrHB */     for(int i=n-1;i>=0;i--) cout<<a[i]<<" ";
/* 704mzdFNH ily traian c3L6lBrHB */     return 0;
/* 704mzdFNH ily traian c3L6lBrHB */ }