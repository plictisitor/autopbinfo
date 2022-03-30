/* NOQd80alV ily traian fMQ9egguy */ #include <algorithm>
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
/* NOQd80alV ily traian fMQ9egguy */ 
/* NOQd80alV ily traian fMQ9egguy */ using namespace std;
/* NOQd80alV ily traian fMQ9egguy */ ifstream fin("elempp.in");
/* NOQd80alV ily traian fMQ9egguy */ ofstream fout("elempp.out");
/* NOQd80alV ily traian fMQ9egguy */ int pp(int n)
/* NOQd80alV ily traian fMQ9egguy */ {
/* NOQd80alV ily traian fMQ9egguy */     while(n>99)
/* NOQd80alV ily traian fMQ9egguy */     {
/* NOQd80alV ily traian fMQ9egguy */         n=n/10;
/* NOQd80alV ily traian fMQ9egguy */     }
/* NOQd80alV ily traian fMQ9egguy */     if(sqrt(n)==(int)sqrt(n)) return 1;
/* NOQd80alV ily traian fMQ9egguy */     else return 0;
/* NOQd80alV ily traian fMQ9egguy */ }
/* NOQd80alV ily traian fMQ9egguy */ int main()
/* NOQd80alV ily traian fMQ9egguy */ {
/* NOQd80alV ily traian fMQ9egguy */     int n,a[21];
/* NOQd80alV ily traian fMQ9egguy */     fin>>n;
/* NOQd80alV ily traian fMQ9egguy */     for(int i=0;i<n;i++) fin>>a[i];
/* NOQd80alV ily traian fMQ9egguy */     for(int i=0;i<n;i++)
/* NOQd80alV ily traian fMQ9egguy */     {
/* NOQd80alV ily traian fMQ9egguy */         if(pp(a[i])) fout<<a[i]<<" ";
/* NOQd80alV ily traian fMQ9egguy */     }
/* NOQd80alV ily traian fMQ9egguy */     return 0;
/* NOQd80alV ily traian fMQ9egguy */ }