/* dNpVn2Tat ily traian rnxc1aCJc */ #include <algorithm>
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
/* dNpVn2Tat ily traian rnxc1aCJc */ using namespace std;
/* dNpVn2Tat ily traian rnxc1aCJc */ ifstream cin("biti.in");
/* dNpVn2Tat ily traian rnxc1aCJc */ ofstream cout("biti.out");
/* dNpVn2Tat ily traian rnxc1aCJc */ int main()
/* dNpVn2Tat ily traian rnxc1aCJc */ {
/* dNpVn2Tat ily traian rnxc1aCJc */     int n , x , cnt = 0;
/* dNpVn2Tat ily traian rnxc1aCJc */     cin >> n;
/* dNpVn2Tat ily traian rnxc1aCJc */     for(int i = 1 ; i <= n ; i++)
/* dNpVn2Tat ily traian rnxc1aCJc */     {
/* dNpVn2Tat ily traian rnxc1aCJc */         cin >> x;
/* dNpVn2Tat ily traian rnxc1aCJc */         if(x != 0 && (x & (x+1)) == 0) cnt++;
/* dNpVn2Tat ily traian rnxc1aCJc */     }
/* dNpVn2Tat ily traian rnxc1aCJc */     cout << cnt;
/* dNpVn2Tat ily traian rnxc1aCJc */ }