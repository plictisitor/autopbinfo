/* 78zOIzqVD ily traian B8bCnH7cj */ #include <algorithm>
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
/* 78zOIzqVD ily traian B8bCnH7cj */ using namespace std;
/* 78zOIzqVD ily traian B8bCnH7cj */ 
/* 78zOIzqVD ily traian B8bCnH7cj */ int main()
/* 78zOIzqVD ily traian B8bCnH7cj */ {
/* 78zOIzqVD ily traian B8bCnH7cj */     int n , p;
/* 78zOIzqVD ily traian B8bCnH7cj */     cin >> n >> p;
/* 78zOIzqVD ily traian B8bCnH7cj */     int a[100];
/* 78zOIzqVD ily traian B8bCnH7cj */     for(int i = 1 ; i <= n ; ++i)
/* 78zOIzqVD ily traian B8bCnH7cj */         a[i]=i , p-=i;
/* 78zOIzqVD ily traian B8bCnH7cj */     int parte=p/n;
/* 78zOIzqVD ily traian B8bCnH7cj */     int rest=p%n;
/* 78zOIzqVD ily traian B8bCnH7cj */     for(int i = 1 ; i <= n ; ++i)
/* 78zOIzqVD ily traian B8bCnH7cj */         a[i]+=parte;
/* 78zOIzqVD ily traian B8bCnH7cj */     for(int i = n ; i >= 1 && rest; --i)
/* 78zOIzqVD ily traian B8bCnH7cj */     {
/* 78zOIzqVD ily traian B8bCnH7cj */         a[i]+=1;
/* 78zOIzqVD ily traian B8bCnH7cj */         rest--;
/* 78zOIzqVD ily traian B8bCnH7cj */     }
/* 78zOIzqVD ily traian B8bCnH7cj */     for(int i = 1 ; i <= n ; ++i)
/* 78zOIzqVD ily traian B8bCnH7cj */         cout << a[i] << ' ';
/* 78zOIzqVD ily traian B8bCnH7cj */     return 0;    
/* 78zOIzqVD ily traian B8bCnH7cj */ }