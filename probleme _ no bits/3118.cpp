/* OljSI1byC ily traian mPLoIuCIt */ #include <algorithm>
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
/* OljSI1byC ily traian mPLoIuCIt */ using namespace std;
/* OljSI1byC ily traian mPLoIuCIt */ 
/* OljSI1byC ily traian mPLoIuCIt */ ifstream cin("tort.in");
/* OljSI1byC ily traian mPLoIuCIt */ ofstream cout("tort.out");
/* OljSI1byC ily traian mPLoIuCIt */ 
/* OljSI1byC ily traian mPLoIuCIt */ int cmmdc(int a, int b){
/* OljSI1byC ily traian mPLoIuCIt */     while(b){
/* OljSI1byC ily traian mPLoIuCIt */         int r = a % b;
/* OljSI1byC ily traian mPLoIuCIt */         a = b;
/* OljSI1byC ily traian mPLoIuCIt */         b = r;
/* OljSI1byC ily traian mPLoIuCIt */     }
/* OljSI1byC ily traian mPLoIuCIt */     return a;
/* OljSI1byC ily traian mPLoIuCIt */ }
/* OljSI1byC ily traian mPLoIuCIt */ 
/* OljSI1byC ily traian mPLoIuCIt */ int main(){
/* OljSI1byC ily traian mPLoIuCIt */     int n, m;
/* OljSI1byC ily traian mPLoIuCIt */     cin >> n >> m;
/* OljSI1byC ily traian mPLoIuCIt */     int prod = n * m;
/* OljSI1byC ily traian mPLoIuCIt */     int cm = cmmdc(n, m);
/* OljSI1byC ily traian mPLoIuCIt */     cout << prod / (cm * cm) << ' ' << cm;
/* OljSI1byC ily traian mPLoIuCIt */     return 0;
/* OljSI1byC ily traian mPLoIuCIt */ }