/* oq7Diyha6 ily traian voweqrNWB */ #include <algorithm>
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
/* oq7Diyha6 ily traian voweqrNWB */ 
/* oq7Diyha6 ily traian voweqrNWB */ using namespace std;
/* oq7Diyha6 ily traian voweqrNWB */ 
/* oq7Diyha6 ily traian voweqrNWB */ int main()
/* oq7Diyha6 ily traian voweqrNWB */ {
/* oq7Diyha6 ily traian voweqrNWB */     int a, b;
/* oq7Diyha6 ily traian voweqrNWB */     cin >> a >> b;
/* oq7Diyha6 ily traian voweqrNWB */     int cnta = 0, cntb = 0;
/* oq7Diyha6 ily traian voweqrNWB */     int ca = a , cb = b;
/* oq7Diyha6 ily traian voweqrNWB */     while(a){
/* oq7Diyha6 ily traian voweqrNWB */         cnta = cnta + (a % 2);
/* oq7Diyha6 ily traian voweqrNWB */         a/=2;
/* oq7Diyha6 ily traian voweqrNWB */     }
/* oq7Diyha6 ily traian voweqrNWB */     while(b){
/* oq7Diyha6 ily traian voweqrNWB */         cntb = cntb + (b % 2);
/* oq7Diyha6 ily traian voweqrNWB */         b/=2;
/* oq7Diyha6 ily traian voweqrNWB */     }
/* oq7Diyha6 ily traian voweqrNWB */     if(cnta == cntb)
/* oq7Diyha6 ily traian voweqrNWB */         cout << min(ca, cb);
/* oq7Diyha6 ily traian voweqrNWB */     else if(cnta < cntb)
/* oq7Diyha6 ily traian voweqrNWB */         cout << cb;
/* oq7Diyha6 ily traian voweqrNWB */     else
/* oq7Diyha6 ily traian voweqrNWB */         cout << ca;
/* oq7Diyha6 ily traian voweqrNWB */     return 0;
/* oq7Diyha6 ily traian voweqrNWB */ }