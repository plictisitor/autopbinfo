/* DN77VXU2m ily traian TPSzYRebm */ #include <algorithm>
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
/* DN77VXU2m ily traian TPSzYRebm */ using namespace std;
/* DN77VXU2m ily traian TPSzYRebm */ 
/* DN77VXU2m ily traian TPSzYRebm */ int d(int n)
/* DN77VXU2m ily traian TPSzYRebm */ {
/* DN77VXU2m ily traian TPSzYRebm */     int cnt=0;
/* DN77VXU2m ily traian TPSzYRebm */     for (int i = 1 ; i * i <= n; ++i)
/* DN77VXU2m ily traian TPSzYRebm */     {
/* DN77VXU2m ily traian TPSzYRebm */         if (n%i==0)
/* DN77VXU2m ily traian TPSzYRebm */         cnt+=2;
/* DN77VXU2m ily traian TPSzYRebm */         if (i*i==n)
/* DN77VXU2m ily traian TPSzYRebm */         cnt--;
/* DN77VXU2m ily traian TPSzYRebm */     }
/* DN77VXU2m ily traian TPSzYRebm */     return cnt;
/* DN77VXU2m ily traian TPSzYRebm */ }
/* DN77VXU2m ily traian TPSzYRebm */ 
/* DN77VXU2m ily traian TPSzYRebm */ int main()
/* DN77VXU2m ily traian TPSzYRebm */ {
/* DN77VXU2m ily traian TPSzYRebm */     int n;
/* DN77VXU2m ily traian TPSzYRebm */     cin >> n;
/* DN77VXU2m ily traian TPSzYRebm */     int max=0;
/* DN77VXU2m ily traian TPSzYRebm */     int a=0;
/* DN77VXU2m ily traian TPSzYRebm */     for (int i = 1; i <= n; ++i)
/* DN77VXU2m ily traian TPSzYRebm */     {
/* DN77VXU2m ily traian TPSzYRebm */         if (d(i)>max)
/* DN77VXU2m ily traian TPSzYRebm */         max=d(i) , a=i;
/* DN77VXU2m ily traian TPSzYRebm */     }
/* DN77VXU2m ily traian TPSzYRebm */     cout << a;
/* DN77VXU2m ily traian TPSzYRebm */ }