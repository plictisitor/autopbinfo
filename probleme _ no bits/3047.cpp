/* kLg9CgzIX ily traian SmgFZUPfq */ #include <algorithm>
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
/* kLg9CgzIX ily traian SmgFZUPfq */ using namespace std;
/* kLg9CgzIX ily traian SmgFZUPfq */ ifstream cin("fibofrac.in");
/* kLg9CgzIX ily traian SmgFZUPfq */ ofstream cout("fibofrac.out");
/* kLg9CgzIX ily traian SmgFZUPfq */ int E[1000001], n;
/* kLg9CgzIX ily traian SmgFZUPfq */ long long int t;
/* kLg9CgzIX ily traian SmgFZUPfq */ int main(){
/* kLg9CgzIX ily traian SmgFZUPfq */     cin >> n;
/* kLg9CgzIX ily traian SmgFZUPfq */     for(int i = 1; i <= n; ++i)
/* kLg9CgzIX ily traian SmgFZUPfq */         E[i] = i - 1;
/* kLg9CgzIX ily traian SmgFZUPfq */     E[1] = 1;
/* kLg9CgzIX ily traian SmgFZUPfq */     for(int i = 2; i <= n; ++i)
/* kLg9CgzIX ily traian SmgFZUPfq */         for(int j = 2 * i; j <= n; j = j + i)
/* kLg9CgzIX ily traian SmgFZUPfq */             E[j] = E[j] - E[i];
/* kLg9CgzIX ily traian SmgFZUPfq */     for(int i = 1; i <= n; ++i)
/* kLg9CgzIX ily traian SmgFZUPfq */         if(i <= n / 2)
/* kLg9CgzIX ily traian SmgFZUPfq */             t += 2 * E[i];
/* kLg9CgzIX ily traian SmgFZUPfq */         else
/* kLg9CgzIX ily traian SmgFZUPfq */             t += E[i];
/* kLg9CgzIX ily traian SmgFZUPfq */     cout << t - n - 1;
/* kLg9CgzIX ily traian SmgFZUPfq */     return 0;
/* kLg9CgzIX ily traian SmgFZUPfq */ }