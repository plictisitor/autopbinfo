/* 4yGQ078TL ily traian k1NJHIM5a */ #include <algorithm>
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
/* 4yGQ078TL ily traian k1NJHIM5a */ using namespace std;
/* 4yGQ078TL ily traian k1NJHIM5a */ 
/* 4yGQ078TL ily traian k1NJHIM5a */ int main()
/* 4yGQ078TL ily traian k1NJHIM5a */ {
/* 4yGQ078TL ily traian k1NJHIM5a */     int n, a[10001]={0}, c=1;
/* 4yGQ078TL ily traian k1NJHIM5a */     cin >> n;
/* 4yGQ078TL ily traian k1NJHIM5a */     a[1]=1;
/* 4yGQ078TL ily traian k1NJHIM5a */     for(int i = 1; i <= n; i++)
/* 4yGQ078TL ily traian k1NJHIM5a */     {
/* 4yGQ078TL ily traian k1NJHIM5a */         int t = 0;
/* 4yGQ078TL ily traian k1NJHIM5a */         for(int j = 1; j <= c; j++)
/* 4yGQ078TL ily traian k1NJHIM5a */         {
/* 4yGQ078TL ily traian k1NJHIM5a */             int cif = a[j] * i + t;
/* 4yGQ078TL ily traian k1NJHIM5a */             a[j] = cif % 10;
/* 4yGQ078TL ily traian k1NJHIM5a */             t = cif / 10;
/* 4yGQ078TL ily traian k1NJHIM5a */         }
/* 4yGQ078TL ily traian k1NJHIM5a */         while(t)
/* 4yGQ078TL ily traian k1NJHIM5a */         {
/* 4yGQ078TL ily traian k1NJHIM5a */             a[++c] = t % 10;
/* 4yGQ078TL ily traian k1NJHIM5a */             t /=10;
/* 4yGQ078TL ily traian k1NJHIM5a */         }
/* 4yGQ078TL ily traian k1NJHIM5a */     }
/* 4yGQ078TL ily traian k1NJHIM5a */     for(int i = c ; i >= 1; i--)
/* 4yGQ078TL ily traian k1NJHIM5a */         cout << a[i];
/* 4yGQ078TL ily traian k1NJHIM5a */     return 0;
/* 4yGQ078TL ily traian k1NJHIM5a */ }