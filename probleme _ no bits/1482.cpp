/* uv92EH45t ily traian sUo939PLh */ #include <algorithm>
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
/* uv92EH45t ily traian sUo939PLh */ using namespace std;
/* uv92EH45t ily traian sUo939PLh */ ifstream fin("numar4.in");
/* uv92EH45t ily traian sUo939PLh */ ofstream fout("numar4.out");
/* uv92EH45t ily traian sUo939PLh */ int main()
/* uv92EH45t ily traian sUo939PLh */ {
/* uv92EH45t ily traian sUo939PLh */     int n,cnt=0;
/* uv92EH45t ily traian sUo939PLh */     fin>>n;
/* uv92EH45t ily traian sUo939PLh */     while(n!=0)
/* uv92EH45t ily traian sUo939PLh */     {
/* uv92EH45t ily traian sUo939PLh */         if(n%2==0) cnt+=4;
/* uv92EH45t ily traian sUo939PLh */         else
/* uv92EH45t ily traian sUo939PLh */         if(n%2==1) cnt+=5;
/* uv92EH45t ily traian sUo939PLh */         n=n/10;
/* uv92EH45t ily traian sUo939PLh */     }
/* uv92EH45t ily traian sUo939PLh */     fout<<cnt;
/* uv92EH45t ily traian sUo939PLh */     return 0;
/* uv92EH45t ily traian sUo939PLh */ }