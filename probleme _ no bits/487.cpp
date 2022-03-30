/* TpbM6Yy2t ily traian 1NlIJJWgF */ #include <algorithm>
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
/* TpbM6Yy2t ily traian 1NlIJJWgF */ using namespace std;
/* TpbM6Yy2t ily traian 1NlIJJWgF */ int main()
/* TpbM6Yy2t ily traian 1NlIJJWgF */ {
/* TpbM6Yy2t ily traian 1NlIJJWgF */     double n,cate=0,a[1001],pr,c=0,s=0;
/* TpbM6Yy2t ily traian 1NlIJJWgF */     double sum;
/* TpbM6Yy2t ily traian 1NlIJJWgF */     cin>>n;
/* TpbM6Yy2t ily traian 1NlIJJWgF */     for(int i=1;i<=n;i++)
/* TpbM6Yy2t ily traian 1NlIJJWgF */     {
/* TpbM6Yy2t ily traian 1NlIJJWgF */         cin>>a[i];
/* TpbM6Yy2t ily traian 1NlIJJWgF */         s=s+a[i];
/* TpbM6Yy2t ily traian 1NlIJJWgF */         c++;
/* TpbM6Yy2t ily traian 1NlIJJWgF */     }
/* TpbM6Yy2t ily traian 1NlIJJWgF */     sum=s/c;
/* TpbM6Yy2t ily traian 1NlIJJWgF */     for(int i=1;i<=n;i++)
/* TpbM6Yy2t ily traian 1NlIJJWgF */     {
/* TpbM6Yy2t ily traian 1NlIJJWgF */         if(a[i]>=sum) cate++;
/* TpbM6Yy2t ily traian 1NlIJJWgF */     }
/* TpbM6Yy2t ily traian 1NlIJJWgF */     cout<<cate;
/* TpbM6Yy2t ily traian 1NlIJJWgF */     return 0;
/* TpbM6Yy2t ily traian 1NlIJJWgF */ }