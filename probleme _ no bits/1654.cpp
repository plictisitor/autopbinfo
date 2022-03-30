/* W4upk8rNF ily traian TJOBi2AmL */ #include <algorithm>
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
/* W4upk8rNF ily traian TJOBi2AmL */ int nr_vocale(char s[])
/* W4upk8rNF ily traian TJOBi2AmL */ {
/* W4upk8rNF ily traian TJOBi2AmL */     if(s[0] == NULL)  return 0;
/* W4upk8rNF ily traian TJOBi2AmL */     int lu = strlen(s);
/* W4upk8rNF ily traian TJOBi2AmL */     char ch = s[lu - 1];
/* W4upk8rNF ily traian TJOBi2AmL */     s[lu - 1] = NULL; 
/* W4upk8rNF ily traian TJOBi2AmL */     if(strchr("aeiouAEIOU", ch))
/* W4upk8rNF ily traian TJOBi2AmL */         return 1 + nr_vocale(s);
/* W4upk8rNF ily traian TJOBi2AmL */ 
/* W4upk8rNF ily traian TJOBi2AmL */     return nr_vocale(s);
/* W4upk8rNF ily traian TJOBi2AmL */ }