/* zQ9vyfevv ily traian HvSV2ZcYU */ #include <algorithm>
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
/* zQ9vyfevv ily traian HvSV2ZcYU */ using namespace std;
/* zQ9vyfevv ily traian HvSV2ZcYU */ 
/* zQ9vyfevv ily traian HvSV2ZcYU */ ifstream fin("rapunzel.in");
/* zQ9vyfevv ily traian HvSV2ZcYU */ ofstream fout("rapunzel.out");
/* zQ9vyfevv ily traian HvSV2ZcYU */ 
/* zQ9vyfevv ily traian HvSV2ZcYU */ int main()
/* zQ9vyfevv ily traian HvSV2ZcYU */ {
/* zQ9vyfevv ily traian HvSV2ZcYU */     long long int n , m1 , m2;
/* zQ9vyfevv ily traian HvSV2ZcYU */     fin >> n >> m1 >> m2;
/* zQ9vyfevv ily traian HvSV2ZcYU */     int z=m1+m2;
/* zQ9vyfevv ily traian HvSV2ZcYU */     int d=n/z;
/* zQ9vyfevv ily traian HvSV2ZcYU */     if(d*z==n)
/* zQ9vyfevv ily traian HvSV2ZcYU */     fout << d;
/* zQ9vyfevv ily traian HvSV2ZcYU */     else
/* zQ9vyfevv ily traian HvSV2ZcYU */     fout << d+1;
/* zQ9vyfevv ily traian HvSV2ZcYU */     
/* zQ9vyfevv ily traian HvSV2ZcYU */     fin.close();
/* zQ9vyfevv ily traian HvSV2ZcYU */     fout.close();
/* zQ9vyfevv ily traian HvSV2ZcYU */     
/* zQ9vyfevv ily traian HvSV2ZcYU */     return 0;
/* zQ9vyfevv ily traian HvSV2ZcYU */ }