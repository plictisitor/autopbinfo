/* ChjZ1jVDK ily traian ppWJb0gqB */ #include <algorithm>
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
/* ChjZ1jVDK ily traian ppWJb0gqB */ 
/* ChjZ1jVDK ily traian ppWJb0gqB */ using namespace std;
/* ChjZ1jVDK ily traian ppWJb0gqB */ 
/* ChjZ1jVDK ily traian ppWJb0gqB */ long long int dif(int n)
/* ChjZ1jVDK ily traian ppWJb0gqB */ {
/* ChjZ1jVDK ily traian ppWJb0gqB */     int a[11];
/* ChjZ1jVDK ily traian ppWJb0gqB */     int p = 0;
/* ChjZ1jVDK ily traian ppWJb0gqB */     while(n)
/* ChjZ1jVDK ily traian ppWJb0gqB */     {
/* ChjZ1jVDK ily traian ppWJb0gqB */         a[p]=n%10;
/* ChjZ1jVDK ily traian ppWJb0gqB */         n/=10;
/* ChjZ1jVDK ily traian ppWJb0gqB */         p++;
/* ChjZ1jVDK ily traian ppWJb0gqB */     }
/* ChjZ1jVDK ily traian ppWJb0gqB */     sort(a,a+p);
/* ChjZ1jVDK ily traian ppWJb0gqB */     bool dif=true;
/* ChjZ1jVDK ily traian ppWJb0gqB */     for(int i = 1 ; i <= p ; ++i)
/* ChjZ1jVDK ily traian ppWJb0gqB */     {
/* ChjZ1jVDK ily traian ppWJb0gqB */         if(a[i]==a[i-1])
/* ChjZ1jVDK ily traian ppWJb0gqB */         dif=false;
/* ChjZ1jVDK ily traian ppWJb0gqB */     }
/* ChjZ1jVDK ily traian ppWJb0gqB */     if(dif)
/* ChjZ1jVDK ily traian ppWJb0gqB */     return 1;
/* ChjZ1jVDK ily traian ppWJb0gqB */     else
/* ChjZ1jVDK ily traian ppWJb0gqB */     return 0;
/* ChjZ1jVDK ily traian ppWJb0gqB */ }
/* ChjZ1jVDK ily traian ppWJb0gqB */ 
/* ChjZ1jVDK ily traian ppWJb0gqB */ int main()
/* ChjZ1jVDK ily traian ppWJb0gqB */ {
/* ChjZ1jVDK ily traian ppWJb0gqB */     int n;
/* ChjZ1jVDK ily traian ppWJb0gqB */     cin >> n;
/* ChjZ1jVDK ily traian ppWJb0gqB */     long long int tmp;
/* ChjZ1jVDK ily traian ppWJb0gqB */     bool diferit=true;
/* ChjZ1jVDK ily traian ppWJb0gqB */     for(int i = 1 ; i <= n ; ++i)
/* ChjZ1jVDK ily traian ppWJb0gqB */     {
/* ChjZ1jVDK ily traian ppWJb0gqB */         cin >> tmp;
/* ChjZ1jVDK ily traian ppWJb0gqB */         if(dif(tmp)==0)
/* ChjZ1jVDK ily traian ppWJb0gqB */         diferit=false;
/* ChjZ1jVDK ily traian ppWJb0gqB */     }
/* ChjZ1jVDK ily traian ppWJb0gqB */     if(diferit)
/* ChjZ1jVDK ily traian ppWJb0gqB */     cout << "DA";
/* ChjZ1jVDK ily traian ppWJb0gqB */     else
/* ChjZ1jVDK ily traian ppWJb0gqB */     cout << "NU";
/* ChjZ1jVDK ily traian ppWJb0gqB */     
/* ChjZ1jVDK ily traian ppWJb0gqB */     return 0;
/* ChjZ1jVDK ily traian ppWJb0gqB */ }