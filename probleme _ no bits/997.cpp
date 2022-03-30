/* hdYODCFlF ily traian ifHIet6qJ */ #include <algorithm>
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
/* hdYODCFlF ily traian ifHIet6qJ */ 
/* hdYODCFlF ily traian ifHIet6qJ */ using namespace std;
/* hdYODCFlF ily traian ifHIet6qJ */ ifstream cin("reuniune.in");
/* hdYODCFlF ily traian ifHIet6qJ */ ofstream cout("reuniune.out");
/* hdYODCFlF ily traian ifHIet6qJ */ int main()
/* hdYODCFlF ily traian ifHIet6qJ */ {
/* hdYODCFlF ily traian ifHIet6qJ */     int n , m , a[1000] , b[1000] , c[2000] , p = 0;
/* hdYODCFlF ily traian ifHIet6qJ */     cin >> n >> m;
/* hdYODCFlF ily traian ifHIet6qJ */     for(int i= 0 ; i < n ; ++i)
/* hdYODCFlF ily traian ifHIet6qJ */     {
/* hdYODCFlF ily traian ifHIet6qJ */         cin >> a[i];
/* hdYODCFlF ily traian ifHIet6qJ */         c[p]=a[i];
/* hdYODCFlF ily traian ifHIet6qJ */         p++;
/* hdYODCFlF ily traian ifHIet6qJ */     }
/* hdYODCFlF ily traian ifHIet6qJ */     for(int i = 0 ; i < m ; ++i)
/* hdYODCFlF ily traian ifHIet6qJ */     {
/* hdYODCFlF ily traian ifHIet6qJ */         cin >> b[i];
/* hdYODCFlF ily traian ifHIet6qJ */         c[p]=b[i];
/* hdYODCFlF ily traian ifHIet6qJ */         p++;
/* hdYODCFlF ily traian ifHIet6qJ */     }
/* hdYODCFlF ily traian ifHIet6qJ */     sort(c , c+p);
/* hdYODCFlF ily traian ifHIet6qJ */     for(int i = 0 ; i < p ; ++i)
/* hdYODCFlF ily traian ifHIet6qJ */         if(c[i]!=c[i+1])cout << c[i] << " ";
/* hdYODCFlF ily traian ifHIet6qJ */     return 0;
/* hdYODCFlF ily traian ifHIet6qJ */ }