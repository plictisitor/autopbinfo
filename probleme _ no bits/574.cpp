/* 2njQBTfpV ily traian tgaRvxGfy */ #include <algorithm>
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
/* 2njQBTfpV ily traian tgaRvxGfy */ using namespace std;
/* 2njQBTfpV ily traian tgaRvxGfy */ 
/* 2njQBTfpV ily traian tgaRvxGfy */ int n , t , aux , v[100005];
/* 2njQBTfpV ily traian tgaRvxGfy */ 
/* 2njQBTfpV ily traian tgaRvxGfy */ int main()
/* 2njQBTfpV ily traian tgaRvxGfy */ {
/* 2njQBTfpV ily traian tgaRvxGfy */    cin >> n;
/* 2njQBTfpV ily traian tgaRvxGfy */    v[0] = 1 , v[1] = 1;
/* 2njQBTfpV ily traian tgaRvxGfy */    n = n * (n - 1) / 2;
/* 2njQBTfpV ily traian tgaRvxGfy */    while(n)
/* 2njQBTfpV ily traian tgaRvxGfy */    {
/* 2njQBTfpV ily traian tgaRvxGfy */        t = 0;
/* 2njQBTfpV ily traian tgaRvxGfy */        for(int i = 1 ; i <= v[0] ; i++)
/* 2njQBTfpV ily traian tgaRvxGfy */        {
/* 2njQBTfpV ily traian tgaRvxGfy */            aux = v[i] * 3 + t;
/* 2njQBTfpV ily traian tgaRvxGfy */            v[i] = aux % 10;
/* 2njQBTfpV ily traian tgaRvxGfy */            t = aux / 10;
/* 2njQBTfpV ily traian tgaRvxGfy */        }
/* 2njQBTfpV ily traian tgaRvxGfy */        while(t) v[++v[0]] = t % 10 , t /= 10;
/* 2njQBTfpV ily traian tgaRvxGfy */        n--;
/* 2njQBTfpV ily traian tgaRvxGfy */    }
/* 2njQBTfpV ily traian tgaRvxGfy */ 
/* 2njQBTfpV ily traian tgaRvxGfy */    for(int i = v[0] ; i ; i--)
/* 2njQBTfpV ily traian tgaRvxGfy */         cout << v[i];
/* 2njQBTfpV ily traian tgaRvxGfy */    return 0;
/* 2njQBTfpV ily traian tgaRvxGfy */ }