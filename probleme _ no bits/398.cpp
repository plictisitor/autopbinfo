/* dTH97fnuy ily traian h8N1wCCug */ #include <algorithm>
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
/* dTH97fnuy ily traian h8N1wCCug */ using namespace std;
/* dTH97fnuy ily traian h8N1wCCug */ 
/* dTH97fnuy ily traian h8N1wCCug */ ifstream cin("plopi2.in");
/* dTH97fnuy ily traian h8N1wCCug */ ofstream cout("plopi2.out");
/* dTH97fnuy ily traian h8N1wCCug */ 
/* dTH97fnuy ily traian h8N1wCCug */ int n , cnt , rez , mini , x;
/* dTH97fnuy ily traian h8N1wCCug */ 
/* dTH97fnuy ily traian h8N1wCCug */ int main()
/* dTH97fnuy ily traian h8N1wCCug */ {
/* dTH97fnuy ily traian h8N1wCCug */     cin >> n >> mini;
/* dTH97fnuy ily traian h8N1wCCug */     n--;
/* dTH97fnuy ily traian h8N1wCCug */     for(int i = 1 ; i <= n ; i++)
/* dTH97fnuy ily traian h8N1wCCug */     {
/* dTH97fnuy ily traian h8N1wCCug */         cin >> x;
/* dTH97fnuy ily traian h8N1wCCug */         if(x > mini) cnt++, rez += x - mini;
/* dTH97fnuy ily traian h8N1wCCug */         else if(x < mini) mini = x;
/* dTH97fnuy ily traian h8N1wCCug */     }
/* dTH97fnuy ily traian h8N1wCCug */     cout << cnt << " " << rez;
/* dTH97fnuy ily traian h8N1wCCug */ }