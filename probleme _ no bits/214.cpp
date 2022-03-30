/* ToKm5rRp3 ily traian He55BCHAS */ #include <algorithm>
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
/* ToKm5rRp3 ily traian He55BCHAS */ 
/* ToKm5rRp3 ily traian He55BCHAS */ using namespace std;
/* ToKm5rRp3 ily traian He55BCHAS */ int main()
/* ToKm5rRp3 ily traian He55BCHAS */ {
/* ToKm5rRp3 ily traian He55BCHAS */     int n,m,k,ind=0,a[11];
/* ToKm5rRp3 ily traian He55BCHAS */     cin >> n;
/* ToKm5rRp3 ily traian He55BCHAS */     while(n!=0)
/* ToKm5rRp3 ily traian He55BCHAS */     {
/* ToKm5rRp3 ily traian He55BCHAS */         a[++ind]=n%10;
/* ToKm5rRp3 ily traian He55BCHAS */         n=n/10;
/* ToKm5rRp3 ily traian He55BCHAS */     }
/* ToKm5rRp3 ily traian He55BCHAS */     for(int i=1;i<=ind;++i)
/* ToKm5rRp3 ily traian He55BCHAS */     {
/* ToKm5rRp3 ily traian He55BCHAS */         for(int j=1;j<=ind;++j)
/* ToKm5rRp3 ily traian He55BCHAS */             cout << a[j]<<" ";
/* ToKm5rRp3 ily traian He55BCHAS */         cout<<endl;
/* ToKm5rRp3 ily traian He55BCHAS */     }
/* ToKm5rRp3 ily traian He55BCHAS */     return 0;
/* ToKm5rRp3 ily traian He55BCHAS */ }