/* 3oXOZfwZl ily traian y46DcHcMp */ #include <algorithm>
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
/* 3oXOZfwZl ily traian y46DcHcMp */ 
/* 3oXOZfwZl ily traian y46DcHcMp */ using namespace std;
/* 3oXOZfwZl ily traian y46DcHcMp */ int main()
/* 3oXOZfwZl ily traian y46DcHcMp */ {
/* 3oXOZfwZl ily traian y46DcHcMp */     int n,x,cate=0,cate1=0;
/* 3oXOZfwZl ily traian y46DcHcMp */     cin >> n;
/* 3oXOZfwZl ily traian y46DcHcMp */     for(int i=1;i<=n;++i)
/* 3oXOZfwZl ily traian y46DcHcMp */     {
/* 3oXOZfwZl ily traian y46DcHcMp */         cin >>x;
/* 3oXOZfwZl ily traian y46DcHcMp */         if(x%2==0) cate++;
/* 3oXOZfwZl ily traian y46DcHcMp */         else
/* 3oXOZfwZl ily traian y46DcHcMp */              cate1++;
/* 3oXOZfwZl ily traian y46DcHcMp */     }
/* 3oXOZfwZl ily traian y46DcHcMp */     cout <<abs(cate-cate1);
/* 3oXOZfwZl ily traian y46DcHcMp */     return 0;
/* 3oXOZfwZl ily traian y46DcHcMp */ }