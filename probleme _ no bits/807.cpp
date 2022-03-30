/* FR2e0E3fs ily traian B4n73VApb */ #include <algorithm>
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
/* FR2e0E3fs ily traian B4n73VApb */ 
/* FR2e0E3fs ily traian B4n73VApb */ using namespace std;
/* FR2e0E3fs ily traian B4n73VApb */ 
/* FR2e0E3fs ily traian B4n73VApb */ char s[256] , a[101][101];
/* FR2e0E3fs ily traian B4n73VApb */ 
/* FR2e0E3fs ily traian B4n73VApb */ int main()
/* FR2e0E3fs ily traian B4n73VApb */ {
/* FR2e0E3fs ily traian B4n73VApb */     cin.getline(s , 256);
/* FR2e0E3fs ily traian B4n73VApb */     int i = 0 , j=0 , m = 1;
/* FR2e0E3fs ily traian B4n73VApb */     while(s[i])
/* FR2e0E3fs ily traian B4n73VApb */     {
/* FR2e0E3fs ily traian B4n73VApb */         if(s[i]==' ')
/* FR2e0E3fs ily traian B4n73VApb */             j=0 , m++;
/* FR2e0E3fs ily traian B4n73VApb */         else
/* FR2e0E3fs ily traian B4n73VApb */             a[m][j]=s[i] , j++;
/* FR2e0E3fs ily traian B4n73VApb */         i++;
/* FR2e0E3fs ily traian B4n73VApb */     }
/* FR2e0E3fs ily traian B4n73VApb */     for(int i = 1 ; i <= m ; ++i)
/* FR2e0E3fs ily traian B4n73VApb */         if(strlen(a[i]) != 3)
/* FR2e0E3fs ily traian B4n73VApb */         cout << a[i] << ' ';
/* FR2e0E3fs ily traian B4n73VApb */         else
/* FR2e0E3fs ily traian B4n73VApb */         cout << "*" << ' ';
/* FR2e0E3fs ily traian B4n73VApb */ }