/* Wr81YvOfN ily traian j9IMJDiQR */ #include <algorithm>
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
/* Wr81YvOfN ily traian j9IMJDiQR */ using namespace std;
/* Wr81YvOfN ily traian j9IMJDiQR */ 
/* Wr81YvOfN ily traian j9IMJDiQR */ ifstream cin("paritar.in");
/* Wr81YvOfN ily traian j9IMJDiQR */ ofstream cout("paritar.out");
/* Wr81YvOfN ily traian j9IMJDiQR */ 
/* Wr81YvOfN ily traian j9IMJDiQR */ int max1 , max2 , min1 = 2000000000 , min2 = 2000000000;
/* Wr81YvOfN ily traian j9IMJDiQR */ 
/* Wr81YvOfN ily traian j9IMJDiQR */ int main()
/* Wr81YvOfN ily traian j9IMJDiQR */ {
/* Wr81YvOfN ily traian j9IMJDiQR */     int n , x;
/* Wr81YvOfN ily traian j9IMJDiQR */     cin >> n;
/* Wr81YvOfN ily traian j9IMJDiQR */     for(int i = 1 ; i <= n ; i++)
/* Wr81YvOfN ily traian j9IMJDiQR */     {
/* Wr81YvOfN ily traian j9IMJDiQR */         cin >> x;
/* Wr81YvOfN ily traian j9IMJDiQR */         if(x % 2 == 1) max1 = max(max1 , x);
/* Wr81YvOfN ily traian j9IMJDiQR */         else max2 = max(max2 , x);
/* Wr81YvOfN ily traian j9IMJDiQR */     }
/* Wr81YvOfN ily traian j9IMJDiQR */     for(int i = n + 1 ; i <= 2 * n ; i++)
/* Wr81YvOfN ily traian j9IMJDiQR */     {
/* Wr81YvOfN ily traian j9IMJDiQR */         cin >> x;
/* Wr81YvOfN ily traian j9IMJDiQR */         if(x % 2 == 1) min1 = min(min1 , x);
/* Wr81YvOfN ily traian j9IMJDiQR */         else min2 = min(min2 , x);
/* Wr81YvOfN ily traian j9IMJDiQR */     }
/* Wr81YvOfN ily traian j9IMJDiQR */     if(max1 == 0 && min1 == 2000000000) cout << "DA";
/* Wr81YvOfN ily traian j9IMJDiQR */     else if(max2 == 0 && min2 == 2000000000) cout << "DA";
/* Wr81YvOfN ily traian j9IMJDiQR */     else if(max1 < min2 && max2 < min1) cout << "DA";
/* Wr81YvOfN ily traian j9IMJDiQR */     else cout << "NU";
/* Wr81YvOfN ily traian j9IMJDiQR */ 
/* Wr81YvOfN ily traian j9IMJDiQR */ }