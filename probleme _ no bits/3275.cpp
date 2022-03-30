/* 3bgQF0Cns ily traian WErmIUCGw */ #include <algorithm>
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
/* 3bgQF0Cns ily traian WErmIUCGw */ using namespace std;
/* 3bgQF0Cns ily traian WErmIUCGw */ 
/* 3bgQF0Cns ily traian WErmIUCGw */ int sc(int a){
/* 3bgQF0Cns ily traian WErmIUCGw */     int s = 0;
/* 3bgQF0Cns ily traian WErmIUCGw */     while(a) s+=a%10, a/=10;
/* 3bgQF0Cns ily traian WErmIUCGw */     return s;
/* 3bgQF0Cns ily traian WErmIUCGw */ }
/* 3bgQF0Cns ily traian WErmIUCGw */ 
/* 3bgQF0Cns ily traian WErmIUCGw */ int main(){
/* 3bgQF0Cns ily traian WErmIUCGw */     int a, b, c, maxi = 0;
/* 3bgQF0Cns ily traian WErmIUCGw */     cin >> a >> b >> c;
/* 3bgQF0Cns ily traian WErmIUCGw */     if(sc(a) > maxi)
/* 3bgQF0Cns ily traian WErmIUCGw */         maxi = sc(a);
/* 3bgQF0Cns ily traian WErmIUCGw */     if(sc(b) > maxi)
/* 3bgQF0Cns ily traian WErmIUCGw */         maxi = sc(b);
/* 3bgQF0Cns ily traian WErmIUCGw */     if(sc(c) > maxi)
/* 3bgQF0Cns ily traian WErmIUCGw */         maxi = sc(c);
/* 3bgQF0Cns ily traian WErmIUCGw */     if(sc(a) == maxi)
/* 3bgQF0Cns ily traian WErmIUCGw */         cout << a << ' ';
/* 3bgQF0Cns ily traian WErmIUCGw */     if(sc(b) == maxi)
/* 3bgQF0Cns ily traian WErmIUCGw */         cout << b << ' ';
/* 3bgQF0Cns ily traian WErmIUCGw */     if(sc(c) == maxi)
/* 3bgQF0Cns ily traian WErmIUCGw */         cout << c << ' ';
/* 3bgQF0Cns ily traian WErmIUCGw */     return 0;
/* 3bgQF0Cns ily traian WErmIUCGw */ }