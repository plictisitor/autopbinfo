/* NYoR5wA1E ily traian gL4AalsJT */ #include <algorithm>
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
/* NYoR5wA1E ily traian gL4AalsJT */ using namespace std;
/* NYoR5wA1E ily traian gL4AalsJT */ 
/* NYoR5wA1E ily traian gL4AalsJT */ ifstream cin("codjoc.in");
/* NYoR5wA1E ily traian gL4AalsJT */ ofstream cout("codjoc.out");
/* NYoR5wA1E ily traian gL4AalsJT */ 
/* NYoR5wA1E ily traian gL4AalsJT */ long long n , sum;
/* NYoR5wA1E ily traian gL4AalsJT */ 
/* NYoR5wA1E ily traian gL4AalsJT */ int nrcif(int n)
/* NYoR5wA1E ily traian gL4AalsJT */ {
/* NYoR5wA1E ily traian gL4AalsJT */     int c = 0;
/* NYoR5wA1E ily traian gL4AalsJT */     while(n != 0) c++ , n /= 10;
/* NYoR5wA1E ily traian gL4AalsJT */     return c;
/* NYoR5wA1E ily traian gL4AalsJT */ }
/* NYoR5wA1E ily traian gL4AalsJT */ 
/* NYoR5wA1E ily traian gL4AalsJT */ int main()
/* NYoR5wA1E ily traian gL4AalsJT */ {
/* NYoR5wA1E ily traian gL4AalsJT */     cin >> n;
/* NYoR5wA1E ily traian gL4AalsJT */     sum += n;
/* NYoR5wA1E ily traian gL4AalsJT */     long long p = nrcif(n) , pp = 1;
/* NYoR5wA1E ily traian gL4AalsJT */     while(p > 0)
/* NYoR5wA1E ily traian gL4AalsJT */     {
/* NYoR5wA1E ily traian gL4AalsJT */         sum += n % pp;
/* NYoR5wA1E ily traian gL4AalsJT */         pp *= 10;
/* NYoR5wA1E ily traian gL4AalsJT */         p--;
/* NYoR5wA1E ily traian gL4AalsJT */     }
/* NYoR5wA1E ily traian gL4AalsJT */     cout << sum;
/* NYoR5wA1E ily traian gL4AalsJT */ }