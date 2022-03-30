/* S5Uy6363o ily traian 8BXBaqzVJ */ #include <algorithm>
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
/* S5Uy6363o ily traian 8BXBaqzVJ */ 
/* S5Uy6363o ily traian 8BXBaqzVJ */ using namespace std;
/* S5Uy6363o ily traian 8BXBaqzVJ */ 
/* S5Uy6363o ily traian 8BXBaqzVJ */ ifstream cin("unghi.in");
/* S5Uy6363o ily traian 8BXBaqzVJ */ ofstream cout("unghi.out");
/* S5Uy6363o ily traian 8BXBaqzVJ */ 
/* S5Uy6363o ily traian 8BXBaqzVJ */ int main()
/* S5Uy6363o ily traian 8BXBaqzVJ */ {
/* S5Uy6363o ily traian 8BXBaqzVJ */     int n;
/* S5Uy6363o ily traian 8BXBaqzVJ */     cin >> n;
/* S5Uy6363o ily traian 8BXBaqzVJ */     int h , m;
/* S5Uy6363o ily traian 8BXBaqzVJ */     for(int i = 0 ; i < n ; ++i)
/* S5Uy6363o ily traian 8BXBaqzVJ */     {
/* S5Uy6363o ily traian 8BXBaqzVJ */         cin >> h >> m;
/* S5Uy6363o ily traian 8BXBaqzVJ */         double rez1=0 , rez2=0;
/* S5Uy6363o ily traian 8BXBaqzVJ */         h%=12;
/* S5Uy6363o ily traian 8BXBaqzVJ */         rez1=h*30;
/* S5Uy6363o ily traian 8BXBaqzVJ */         rez2=m*6;
/* S5Uy6363o ily traian 8BXBaqzVJ */         double proc=0;
/* S5Uy6363o ily traian 8BXBaqzVJ */         proc=(double)60/m;
/* S5Uy6363o ily traian 8BXBaqzVJ */         rez1+=(double)30/proc;
/* S5Uy6363o ily traian 8BXBaqzVJ */         if(abs(rez1-rez2)>180)
/* S5Uy6363o ily traian 8BXBaqzVJ */         cout << 360-abs(rez1-rez2) <<endl;
/* S5Uy6363o ily traian 8BXBaqzVJ */         else
/* S5Uy6363o ily traian 8BXBaqzVJ */         cout << abs(rez1-rez2) <<endl;
/* S5Uy6363o ily traian 8BXBaqzVJ */     }
/* S5Uy6363o ily traian 8BXBaqzVJ */     return 0;
/* S5Uy6363o ily traian 8BXBaqzVJ */ }