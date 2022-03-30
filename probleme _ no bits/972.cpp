/* xuvqru5xZ ily traian Ogq0wHt8i */ #include <algorithm>
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
/* xuvqru5xZ ily traian Ogq0wHt8i */ #include <string.h>
/* xuvqru5xZ ily traian Ogq0wHt8i */ using namespace std;
/* xuvqru5xZ ily traian Ogq0wHt8i */ 
/* xuvqru5xZ ily traian Ogq0wHt8i */ char sir[300] , vocale[]="aeiou";
/* xuvqru5xZ ily traian Ogq0wHt8i */ char consoane[]="bcdfghjklmnpqrstvwxyz";
/* xuvqru5xZ ily traian Ogq0wHt8i */ 
/* xuvqru5xZ ily traian Ogq0wHt8i */ int nr=0;
/* xuvqru5xZ ily traian Ogq0wHt8i */ 
/* xuvqru5xZ ily traian Ogq0wHt8i */ int main()
/* xuvqru5xZ ily traian Ogq0wHt8i */ {
/* xuvqru5xZ ily traian Ogq0wHt8i */     cin.get(sir,300);
/* xuvqru5xZ ily traian Ogq0wHt8i */     for(int i = 1 ; i < strlen(sir)-1 ; ++i)
/* xuvqru5xZ ily traian Ogq0wHt8i */         if(strchr(vocale,sir[i]) && strchr(consoane, sir[i-1]) && strchr(consoane, sir[i+1]))
/* xuvqru5xZ ily traian Ogq0wHt8i */             nr++;
/* xuvqru5xZ ily traian Ogq0wHt8i */     cout << nr;
/* xuvqru5xZ ily traian Ogq0wHt8i */     return 0;
/* xuvqru5xZ ily traian Ogq0wHt8i */ }