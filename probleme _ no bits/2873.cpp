/* sTMtQvCPs ily traian EUN7OTfXj */ #include <algorithm>
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
/* sTMtQvCPs ily traian EUN7OTfXj */ 
/* sTMtQvCPs ily traian EUN7OTfXj */ using namespace std;
/* sTMtQvCPs ily traian EUN7OTfXj */ 
/* sTMtQvCPs ily traian EUN7OTfXj */ int n , m , a[10001];
/* sTMtQvCPs ily traian EUN7OTfXj */ char semn;
/* sTMtQvCPs ily traian EUN7OTfXj */ 
/* sTMtQvCPs ily traian EUN7OTfXj */ int main()
/* sTMtQvCPs ily traian EUN7OTfXj */ {
/* sTMtQvCPs ily traian EUN7OTfXj */     cin >> n >> m >> semn;
/* sTMtQvCPs ily traian EUN7OTfXj */     for(int i = 1 ; i <= n * m ; i++)
/* sTMtQvCPs ily traian EUN7OTfXj */         cin >> a[i];
/* sTMtQvCPs ily traian EUN7OTfXj */     sort(a + 1 , a + n * m + 1);
/* sTMtQvCPs ily traian EUN7OTfXj */     if(semn == '+')
/* sTMtQvCPs ily traian EUN7OTfXj */         for(int i = 1 ; i <= n * m ; i++)
/* sTMtQvCPs ily traian EUN7OTfXj */         {
/* sTMtQvCPs ily traian EUN7OTfXj */             cout << a[i] << " ";
/* sTMtQvCPs ily traian EUN7OTfXj */             if(i % m == 0) cout << '\n';
/* sTMtQvCPs ily traian EUN7OTfXj */         }
/* sTMtQvCPs ily traian EUN7OTfXj */     else
/* sTMtQvCPs ily traian EUN7OTfXj */        for(int i = n * m ; i >= 1 ; i--)
/* sTMtQvCPs ily traian EUN7OTfXj */         {
/* sTMtQvCPs ily traian EUN7OTfXj */             cout << a[i] << " ";
/* sTMtQvCPs ily traian EUN7OTfXj */             if(i % m == 1) cout << '\n';
/* sTMtQvCPs ily traian EUN7OTfXj */         }
/* sTMtQvCPs ily traian EUN7OTfXj */ }