/* rVU6tAuoH ily traian kia5iTxvr */ #include <algorithm>
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
/* rVU6tAuoH ily traian kia5iTxvr */ using namespace std;
/* rVU6tAuoH ily traian kia5iTxvr */ 
/* rVU6tAuoH ily traian kia5iTxvr */ ifstream cin("a1z26.in");
/* rVU6tAuoH ily traian kia5iTxvr */ ofstream cout("a1z26.out");
/* rVU6tAuoH ily traian kia5iTxvr */ 
/* rVU6tAuoH ily traian kia5iTxvr */ int main()
/* rVU6tAuoH ily traian kia5iTxvr */ {
/* rVU6tAuoH ily traian kia5iTxvr */     int p;
/* rVU6tAuoH ily traian kia5iTxvr */     cin >> p;
/* rVU6tAuoH ily traian kia5iTxvr */     if(p == 1)
/* rVU6tAuoH ily traian kia5iTxvr */     {
/* rVU6tAuoH ily traian kia5iTxvr */         char ch;
/* rVU6tAuoH ily traian kia5iTxvr */         while(cin >> ch)
/* rVU6tAuoH ily traian kia5iTxvr */             cout << (int) (ch - 'A' + 1) << ' ';
/* rVU6tAuoH ily traian kia5iTxvr */     }
/* rVU6tAuoH ily traian kia5iTxvr */     else
/* rVU6tAuoH ily traian kia5iTxvr */     {
/* rVU6tAuoH ily traian kia5iTxvr */         int n;
/* rVU6tAuoH ily traian kia5iTxvr */         cin >> n;
/* rVU6tAuoH ily traian kia5iTxvr */         int x;
/* rVU6tAuoH ily traian kia5iTxvr */         for(int i = 1 ; i <= n; ++i)
/* rVU6tAuoH ily traian kia5iTxvr */             cin >> x, cout << (char) (x + 'A' - 1);
/* rVU6tAuoH ily traian kia5iTxvr */     }
/* rVU6tAuoH ily traian kia5iTxvr */     return 0;   
/* rVU6tAuoH ily traian kia5iTxvr */ }