/* 9wrvNqcWx ily traian vhiRmCIye */ #include <algorithm>
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
/* 9wrvNqcWx ily traian vhiRmCIye */ using namespace std;
/* 9wrvNqcWx ily traian vhiRmCIye */ 
/* 9wrvNqcWx ily traian vhiRmCIye */ int main()
/* 9wrvNqcWx ily traian vhiRmCIye */ {
/* 9wrvNqcWx ily traian vhiRmCIye */     char ch[300];
/* 9wrvNqcWx ily traian vhiRmCIye */     cin.getline(ch , 300);
/* 9wrvNqcWx ily traian vhiRmCIye */     int i = 0;
/* 9wrvNqcWx ily traian vhiRmCIye */     while(ch[i]!='\0')
/* 9wrvNqcWx ily traian vhiRmCIye */     {
/* 9wrvNqcWx ily traian vhiRmCIye */         if(((int)ch[i]>=97 && (int)ch[i]<=122) || ((int)ch[i]>=65 && (int)ch[i]<=90))
/* 9wrvNqcWx ily traian vhiRmCIye */         {
/* 9wrvNqcWx ily traian vhiRmCIye */             cout << ch[i];
/* 9wrvNqcWx ily traian vhiRmCIye */         }
/* 9wrvNqcWx ily traian vhiRmCIye */         i++;    
/* 9wrvNqcWx ily traian vhiRmCIye */     }
/* 9wrvNqcWx ily traian vhiRmCIye */     return 0;    
/* 9wrvNqcWx ily traian vhiRmCIye */ }