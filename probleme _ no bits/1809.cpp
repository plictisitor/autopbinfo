/* gLNY10ryw ily traian 3t5mCKEPk */ #include <algorithm>
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
/* gLNY10ryw ily traian 3t5mCKEPk */ using namespace std;
/* gLNY10ryw ily traian 3t5mCKEPk */ 
/* gLNY10ryw ily traian 3t5mCKEPk */ int a_la_b(int a, int b){
/* gLNY10ryw ily traian 3t5mCKEPk */     if(b == 0)
/* gLNY10ryw ily traian 3t5mCKEPk */         return 1;
/* gLNY10ryw ily traian 3t5mCKEPk */     else{
/* gLNY10ryw ily traian 3t5mCKEPk */         if(b % 2 == 0)
/* gLNY10ryw ily traian 3t5mCKEPk */             return a_la_b(a, b/2) * a_la_b(a, b/2);
/* gLNY10ryw ily traian 3t5mCKEPk */         else
/* gLNY10ryw ily traian 3t5mCKEPk */             return a_la_b(a, b/2) * a_la_b(a, b/2) * a;
/* gLNY10ryw ily traian 3t5mCKEPk */     }
/* gLNY10ryw ily traian 3t5mCKEPk */ }
/* gLNY10ryw ily traian 3t5mCKEPk */ 
/* gLNY10ryw ily traian 3t5mCKEPk */ int main(){
/* gLNY10ryw ily traian 3t5mCKEPk */ 
/* gLNY10ryw ily traian 3t5mCKEPk */     int a, b;
/* gLNY10ryw ily traian 3t5mCKEPk */     cin >> a >> b;
/* gLNY10ryw ily traian 3t5mCKEPk */     cout << a_la_b(a, b);
/* gLNY10ryw ily traian 3t5mCKEPk */ 
/* gLNY10ryw ily traian 3t5mCKEPk */     return 0;
/* gLNY10ryw ily traian 3t5mCKEPk */ }