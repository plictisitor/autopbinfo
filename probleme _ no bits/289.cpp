/* krd9nAWPF ily traian p1aMdOWuY */ #include <algorithm>
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
/* krd9nAWPF ily traian p1aMdOWuY */ 
/* krd9nAWPF ily traian p1aMdOWuY */ using namespace std;
/* krd9nAWPF ily traian p1aMdOWuY */ 
/* krd9nAWPF ily traian p1aMdOWuY */ int main()
/* krd9nAWPF ily traian p1aMdOWuY */ {
/* krd9nAWPF ily traian p1aMdOWuY */     int n;
/* krd9nAWPF ily traian p1aMdOWuY */     cin >> n;
/* krd9nAWPF ily traian p1aMdOWuY */     int a[101];
/* krd9nAWPF ily traian p1aMdOWuY */     for(int i = 1; i <= n; ++i)
/* krd9nAWPF ily traian p1aMdOWuY */         cin >> a[i];
/* krd9nAWPF ily traian p1aMdOWuY */ 
/* krd9nAWPF ily traian p1aMdOWuY */     bool exista_impare = false;
/* krd9nAWPF ily traian p1aMdOWuY */ 
/* krd9nAWPF ily traian p1aMdOWuY */     for(int i = 1; i <= n; ++i)
/* krd9nAWPF ily traian p1aMdOWuY */         if(a[i] % 2 == 1)
/* krd9nAWPF ily traian p1aMdOWuY */             exista_impare = true;
/* krd9nAWPF ily traian p1aMdOWuY */ 
/* krd9nAWPF ily traian p1aMdOWuY */     if(exista_impare)
/* krd9nAWPF ily traian p1aMdOWuY */         cout << "DA";
/* krd9nAWPF ily traian p1aMdOWuY */     else
/* krd9nAWPF ily traian p1aMdOWuY */         cout << "NU";
/* krd9nAWPF ily traian p1aMdOWuY */ 
/* krd9nAWPF ily traian p1aMdOWuY */     return 0;
/* krd9nAWPF ily traian p1aMdOWuY */ }