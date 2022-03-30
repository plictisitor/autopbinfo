/* guqXcqV7w ily traian vhqF5nQkO */ #include <algorithm>
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
/* guqXcqV7w ily traian vhqF5nQkO */ using namespace std;
/* guqXcqV7w ily traian vhqF5nQkO */ 
/* guqXcqV7w ily traian vhqF5nQkO */ int main()
/* guqXcqV7w ily traian vhqF5nQkO */ {
/* guqXcqV7w ily traian vhqF5nQkO */     int n , m;
/* guqXcqV7w ily traian vhqF5nQkO */     cin >> n;
/* guqXcqV7w ily traian vhqF5nQkO */     if(n%5==0)
/* guqXcqV7w ily traian vhqF5nQkO */     {
/* guqXcqV7w ily traian vhqF5nQkO */         m=n/5;
/* guqXcqV7w ily traian vhqF5nQkO */         cout << m << endl;
/* guqXcqV7w ily traian vhqF5nQkO */         cout << "DA" << endl;
/* guqXcqV7w ily traian vhqF5nQkO */     }
/* guqXcqV7w ily traian vhqF5nQkO */     else
/* guqXcqV7w ily traian vhqF5nQkO */     {
/* guqXcqV7w ily traian vhqF5nQkO */         m=n/5+1;
/* guqXcqV7w ily traian vhqF5nQkO */         cout << m << endl;
/* guqXcqV7w ily traian vhqF5nQkO */         cout << "NU" << endl;
/* guqXcqV7w ily traian vhqF5nQkO */     }
/* guqXcqV7w ily traian vhqF5nQkO */     int i , s=0;
/* guqXcqV7w ily traian vhqF5nQkO */     for(i = 1 ;  ; ++i)
/* guqXcqV7w ily traian vhqF5nQkO */     {
/* guqXcqV7w ily traian vhqF5nQkO */         s+=i;
/* guqXcqV7w ily traian vhqF5nQkO */         if(s>=m)
/* guqXcqV7w ily traian vhqF5nQkO */         break;
/* guqXcqV7w ily traian vhqF5nQkO */     }
/* guqXcqV7w ily traian vhqF5nQkO */     if(i%2==0)
/* guqXcqV7w ily traian vhqF5nQkO */     cout << "panselute";
/* guqXcqV7w ily traian vhqF5nQkO */     else
/* guqXcqV7w ily traian vhqF5nQkO */     cout << "micsunele";
/* guqXcqV7w ily traian vhqF5nQkO */     return 0;    
/* guqXcqV7w ily traian vhqF5nQkO */ }