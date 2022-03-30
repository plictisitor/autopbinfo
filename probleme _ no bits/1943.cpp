/* gFCZXjbIE ily traian zL5Dvajjt */ #include <algorithm>
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
/* gFCZXjbIE ily traian zL5Dvajjt */ using namespace std;
/* gFCZXjbIE ily traian zL5Dvajjt */ ifstream fin("bacterie.in");
/* gFCZXjbIE ily traian zL5Dvajjt */ ofstream fout("bacterie.out");
/* gFCZXjbIE ily traian zL5Dvajjt */ int main()
/* gFCZXjbIE ily traian zL5Dvajjt */ {
/* gFCZXjbIE ily traian zL5Dvajjt */     unsigned long long s,m,n;
/* gFCZXjbIE ily traian zL5Dvajjt */     fin>>n>>m;
/* gFCZXjbIE ily traian zL5Dvajjt */     if(n<m) s=n*(n+1)/2;
/* gFCZXjbIE ily traian zL5Dvajjt */     else s=m*(m+1)/2;
/* gFCZXjbIE ily traian zL5Dvajjt */     fout<<n*m-s;
/* gFCZXjbIE ily traian zL5Dvajjt */     return 0;
/* gFCZXjbIE ily traian zL5Dvajjt */ }