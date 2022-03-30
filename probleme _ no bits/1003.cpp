/* vSFCg5b7c ily traian NAdNHsvMn */ #include <algorithm>
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
/* vSFCg5b7c ily traian NAdNHsvMn */ 
/* vSFCg5b7c ily traian NAdNHsvMn */ using namespace std;
/* vSFCg5b7c ily traian NAdNHsvMn */ 
/* vSFCg5b7c ily traian NAdNHsvMn */ ifstream fin("baze1.in");
/* vSFCg5b7c ily traian NAdNHsvMn */ ofstream fout("baze1.out");
/* vSFCg5b7c ily traian NAdNHsvMn */ 
/* vSFCg5b7c ily traian NAdNHsvMn */ char am[25] , an[25];
/* vSFCg5b7c ily traian NAdNHsvMn */ int b1 , b2 , n1 , n2 , v;
/* vSFCg5b7c ily traian NAdNHsvMn */ 
/* vSFCg5b7c ily traian NAdNHsvMn */ int main()
/* vSFCg5b7c ily traian NAdNHsvMn */ {
/* vSFCg5b7c ily traian NAdNHsvMn */     fin >> b1 >> b2 >> am >> an;
/* vSFCg5b7c ily traian NAdNHsvMn */     for(int i = 0 ; i < strlen(am) ; i++)
/* vSFCg5b7c ily traian NAdNHsvMn */     {
/* vSFCg5b7c ily traian NAdNHsvMn */         v = am[i] - '0';
/* vSFCg5b7c ily traian NAdNHsvMn */         n1 = n1 * b1 + v;
/* vSFCg5b7c ily traian NAdNHsvMn */     }
/* vSFCg5b7c ily traian NAdNHsvMn */     for(int i = 0 ; i < strlen(an) ; i++)
/* vSFCg5b7c ily traian NAdNHsvMn */     {
/* vSFCg5b7c ily traian NAdNHsvMn */         v = an[i] - '0';
/* vSFCg5b7c ily traian NAdNHsvMn */         n2 = n2 * b2 + v;
/* vSFCg5b7c ily traian NAdNHsvMn */     }
/* vSFCg5b7c ily traian NAdNHsvMn */     fout << n1 + n2;
/* vSFCg5b7c ily traian NAdNHsvMn */ }