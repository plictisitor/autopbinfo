/* 1VB7yEL9G ily traian u0JZ1MFci */ #include <algorithm>
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
/* 1VB7yEL9G ily traian u0JZ1MFci */ using namespace std;
/* 1VB7yEL9G ily traian u0JZ1MFci */ 
/* 1VB7yEL9G ily traian u0JZ1MFci */ int main()
/* 1VB7yEL9G ily traian u0JZ1MFci */ {
/* 1VB7yEL9G ily traian u0JZ1MFci */     int t,b;
/* 1VB7yEL9G ily traian u0JZ1MFci */     unsigned long long n;
/* 1VB7yEL9G ily traian u0JZ1MFci */     cin>>t;
/* 1VB7yEL9G ily traian u0JZ1MFci */     for(int i=1;i<=t;i++)
/* 1VB7yEL9G ily traian u0JZ1MFci */     {
/* 1VB7yEL9G ily traian u0JZ1MFci */         cin>>n>>b;
/* 1VB7yEL9G ily traian u0JZ1MFci */         cout<<((n&(1ull<<b))>>b);
/* 1VB7yEL9G ily traian u0JZ1MFci */     }
/* 1VB7yEL9G ily traian u0JZ1MFci */     return 0;
/* 1VB7yEL9G ily traian u0JZ1MFci */ }