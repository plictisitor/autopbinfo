/* aHndCkQiv ily traian ORcVPjHHY */ #include <algorithm>
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
/* aHndCkQiv ily traian ORcVPjHHY */ using namespace std;
/* aHndCkQiv ily traian ORcVPjHHY */ int a[1001];
/* aHndCkQiv ily traian ORcVPjHHY */ int main()
/* aHndCkQiv ily traian ORcVPjHHY */ {
/* aHndCkQiv ily traian ORcVPjHHY */     unsigned long long n , x;
/* aHndCkQiv ily traian ORcVPjHHY */     cin >> n;
/* aHndCkQiv ily traian ORcVPjHHY */     for(int i = 0 ; i < n ; i++)
/* aHndCkQiv ily traian ORcVPjHHY */     {
/* aHndCkQiv ily traian ORcVPjHHY */         cin >> x;
/* aHndCkQiv ily traian ORcVPjHHY */         if(x % 2 == 1) a[i] = 1;
/* aHndCkQiv ily traian ORcVPjHHY */         else a[i] = 0;
/* aHndCkQiv ily traian ORcVPjHHY */     }
/* aHndCkQiv ily traian ORcVPjHHY */     for(int i = 0 ; i < n ; i++)
/* aHndCkQiv ily traian ORcVPjHHY */         cout << a[i] << " ";
/* aHndCkQiv ily traian ORcVPjHHY */ }