/* 5hwFVBqoZ ily traian kPc83VwWD */ #include <algorithm>
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
/* 5hwFVBqoZ ily traian kPc83VwWD */ using namespace std;
/* 5hwFVBqoZ ily traian kPc83VwWD */ int main()
/* 5hwFVBqoZ ily traian kPc83VwWD */ {
/* 5hwFVBqoZ ily traian kPc83VwWD */     int n,j=1,h=10,nr=0;
/* 5hwFVBqoZ ily traian kPc83VwWD */     cin>>n;
/* 5hwFVBqoZ ily traian kPc83VwWD */     for(int i=1;i<=n;i+=j)
/* 5hwFVBqoZ ily traian kPc83VwWD */     {
/* 5hwFVBqoZ ily traian kPc83VwWD */         nr++;
/* 5hwFVBqoZ ily traian kPc83VwWD */         if(nr==h-1)
/* 5hwFVBqoZ ily traian kPc83VwWD */         {
/* 5hwFVBqoZ ily traian kPc83VwWD */             j++;
/* 5hwFVBqoZ ily traian kPc83VwWD */             h=h*10;
/* 5hwFVBqoZ ily traian kPc83VwWD */         }
/* 5hwFVBqoZ ily traian kPc83VwWD */     }
/* 5hwFVBqoZ ily traian kPc83VwWD */     cout<<nr;
/* 5hwFVBqoZ ily traian kPc83VwWD */     return 0;
/* 5hwFVBqoZ ily traian kPc83VwWD */ }