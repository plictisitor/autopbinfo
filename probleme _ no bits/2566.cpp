/* f74ciyWq6 ily traian beF4BKrTS */ #include <algorithm>
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
/* f74ciyWq6 ily traian beF4BKrTS */ using namespace std;
/* f74ciyWq6 ily traian beF4BKrTS */ 
/* f74ciyWq6 ily traian beF4BKrTS */ ifstream cin("daruri.in");
/* f74ciyWq6 ily traian beF4BKrTS */ ofstream cout("daruri.out");
/* f74ciyWq6 ily traian beF4BKrTS */ 
/* f74ciyWq6 ily traian beF4BKrTS */ int main()
/* f74ciyWq6 ily traian beF4BKrTS */ {
/* f74ciyWq6 ily traian beF4BKrTS */     int l , t , sc;
/* f74ciyWq6 ily traian beF4BKrTS */     cin >> l >> t;
/* f74ciyWq6 ily traian beF4BKrTS */     int cl=l , ct=t;
/* f74ciyWq6 ily traian beF4BKrTS */     while(t)
/* f74ciyWq6 ily traian beF4BKrTS */     {
/* f74ciyWq6 ily traian beF4BKrTS */         int r=l%t;
/* f74ciyWq6 ily traian beF4BKrTS */         l=t;
/* f74ciyWq6 ily traian beF4BKrTS */         t=r;
/* f74ciyWq6 ily traian beF4BKrTS */     }
/* f74ciyWq6 ily traian beF4BKrTS */     sc=l;
/* f74ciyWq6 ily traian beF4BKrTS */     if(sc>1)
/* f74ciyWq6 ily traian beF4BKrTS */     {
/* f74ciyWq6 ily traian beF4BKrTS */         cout << sc;
/* f74ciyWq6 ily traian beF4BKrTS */         cout << endl;
/* f74ciyWq6 ily traian beF4BKrTS */         cout << cl/sc << ' ' << ct/sc;
/* f74ciyWq6 ily traian beF4BKrTS */     }
/* f74ciyWq6 ily traian beF4BKrTS */     else
/* f74ciyWq6 ily traian beF4BKrTS */     {
/* f74ciyWq6 ily traian beF4BKrTS */         cout << 0 << endl;
/* f74ciyWq6 ily traian beF4BKrTS */         cout << 0 << ' ' << 0;
/* f74ciyWq6 ily traian beF4BKrTS */     }
/* f74ciyWq6 ily traian beF4BKrTS */     return 0;
/* f74ciyWq6 ily traian beF4BKrTS */ }