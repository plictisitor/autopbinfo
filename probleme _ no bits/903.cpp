/* Z7ObqGAMO ily traian d9yMfqfVY */ #include <algorithm>
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
/* Z7ObqGAMO ily traian d9yMfqfVY */ using namespace std;
/* Z7ObqGAMO ily traian d9yMfqfVY */ 
/* Z7ObqGAMO ily traian d9yMfqfVY */ int main()
/* Z7ObqGAMO ily traian d9yMfqfVY */ {
/* Z7ObqGAMO ily traian d9yMfqfVY */     char s[300];
/* Z7ObqGAMO ily traian d9yMfqfVY */     cin.getline(s , 300);
/* Z7ObqGAMO ily traian d9yMfqfVY */     int n;
/* Z7ObqGAMO ily traian d9yMfqfVY */     cin >> n;
/* Z7ObqGAMO ily traian d9yMfqfVY */     int i = 0;
/* Z7ObqGAMO ily traian d9yMfqfVY */     while(s[i]!='\0')
/* Z7ObqGAMO ily traian d9yMfqfVY */     {
/* Z7ObqGAMO ily traian d9yMfqfVY */         if(s[i] >= 'a' && s[i] <= 'z')
/* Z7ObqGAMO ily traian d9yMfqfVY */         {
/* Z7ObqGAMO ily traian d9yMfqfVY */             if((int)s[i]+n > 122)
/* Z7ObqGAMO ily traian d9yMfqfVY */             cout << (char)((int)s[i]+n-26);
/* Z7ObqGAMO ily traian d9yMfqfVY */         else
/* Z7ObqGAMO ily traian d9yMfqfVY */             cout << (char)((int)s[i]+n);
/* Z7ObqGAMO ily traian d9yMfqfVY */         }
/* Z7ObqGAMO ily traian d9yMfqfVY */         else
/* Z7ObqGAMO ily traian d9yMfqfVY */             cout << s[i];
/* Z7ObqGAMO ily traian d9yMfqfVY */         i++;
/* Z7ObqGAMO ily traian d9yMfqfVY */     }
/* Z7ObqGAMO ily traian d9yMfqfVY */     return 0;
/* Z7ObqGAMO ily traian d9yMfqfVY */ }