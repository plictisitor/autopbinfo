/* HriyrQpJF ily traian TTQr0FczK */ #include <algorithm>
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
/* HriyrQpJF ily traian TTQr0FczK */ using namespace std;
/* HriyrQpJF ily traian TTQr0FczK */ 
/* HriyrQpJF ily traian TTQr0FczK */ int main()
/* HriyrQpJF ily traian TTQr0FczK */ {
/* HriyrQpJF ily traian TTQr0FczK */     unsigned long long int n,i=1,s=0;
/* HriyrQpJF ily traian TTQr0FczK */     cin>>n;
/* HriyrQpJF ily traian TTQr0FczK */     do
/* HriyrQpJF ily traian TTQr0FczK */     {
/* HriyrQpJF ily traian TTQr0FczK */         s+=i;
/* HriyrQpJF ily traian TTQr0FczK */         i+=1;
/* HriyrQpJF ily traian TTQr0FczK */     }
/* HriyrQpJF ily traian TTQr0FczK */     while(s+i<=n);
/* HriyrQpJF ily traian TTQr0FczK */     if(s==n)
/* HriyrQpJF ily traian TTQr0FczK */         cout<<1;
/* HriyrQpJF ily traian TTQr0FczK */     else
/* HriyrQpJF ily traian TTQr0FczK */         cout<<i+1-n%s;
/* HriyrQpJF ily traian TTQr0FczK */     return 0;
/* HriyrQpJF ily traian TTQr0FczK */ }