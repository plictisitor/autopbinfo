/* YzEjDY2gU ily traian o4xI0w8Fv */ #include <algorithm>
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
/* YzEjDY2gU ily traian o4xI0w8Fv */ using namespace std;
/* YzEjDY2gU ily traian o4xI0w8Fv */ ifstream fin("saci.in");
/* YzEjDY2gU ily traian o4xI0w8Fv */ ofstream fout("saci.out");
/* YzEjDY2gU ily traian o4xI0w8Fv */ 
/* YzEjDY2gU ily traian o4xI0w8Fv */ int cub(long long n)
/* YzEjDY2gU ily traian o4xI0w8Fv */ {
/* YzEjDY2gU ily traian o4xI0w8Fv */     int ok = 0 , p = 10 , c = 0 , cnt = 0;
/* YzEjDY2gU ily traian o4xI0w8Fv */     while(n != 0)
/* YzEjDY2gU ily traian o4xI0w8Fv */     {
/* YzEjDY2gU ily traian o4xI0w8Fv */         if(n % 10 < p) c++;
/* YzEjDY2gU ily traian o4xI0w8Fv */         cnt++;
/* YzEjDY2gU ily traian o4xI0w8Fv */         p = n % 10;
/* YzEjDY2gU ily traian o4xI0w8Fv */         n /= 10;
/* YzEjDY2gU ily traian o4xI0w8Fv */     }
/* YzEjDY2gU ily traian o4xI0w8Fv */     if(c == cnt) return 1;
/* YzEjDY2gU ily traian o4xI0w8Fv */     else return 0;
/* YzEjDY2gU ily traian o4xI0w8Fv */ }
/* YzEjDY2gU ily traian o4xI0w8Fv */ int main()
/* YzEjDY2gU ily traian o4xI0w8Fv */ {
/* YzEjDY2gU ily traian o4xI0w8Fv */     int n , cnt = 0 , x;
/* YzEjDY2gU ily traian o4xI0w8Fv */     fin >> n;
/* YzEjDY2gU ily traian o4xI0w8Fv */     for(int i = 1 ; i <= n ; ++i)
/* YzEjDY2gU ily traian o4xI0w8Fv */     {
/* YzEjDY2gU ily traian o4xI0w8Fv */         fin >> x;
/* YzEjDY2gU ily traian o4xI0w8Fv */         if(cub(x)) cnt++;
/* YzEjDY2gU ily traian o4xI0w8Fv */     }
/* YzEjDY2gU ily traian o4xI0w8Fv */     fout << cnt;
/* YzEjDY2gU ily traian o4xI0w8Fv */ 
/* YzEjDY2gU ily traian o4xI0w8Fv */     fin.close();
/* YzEjDY2gU ily traian o4xI0w8Fv */     fout.close();
/* YzEjDY2gU ily traian o4xI0w8Fv */ 
/* YzEjDY2gU ily traian o4xI0w8Fv */     return 0;
/* YzEjDY2gU ily traian o4xI0w8Fv */ }