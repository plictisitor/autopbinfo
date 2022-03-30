/* Z1CpNbRaR ily traian XCKClc4Bw */ #include <algorithm>
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
/* Z1CpNbRaR ily traian XCKClc4Bw */ using namespace std;
/* Z1CpNbRaR ily traian XCKClc4Bw */ 
/* Z1CpNbRaR ily traian XCKClc4Bw */ int main()
/* Z1CpNbRaR ily traian XCKClc4Bw */ {
/* Z1CpNbRaR ily traian XCKClc4Bw */     char s[1001];
/* Z1CpNbRaR ily traian XCKClc4Bw */     cin.getline(s , 1001);
/* Z1CpNbRaR ily traian XCKClc4Bw */     int i = 1;
/* Z1CpNbRaR ily traian XCKClc4Bw */     if(s[0]>= 'A' && s[0]<='Z')
/* Z1CpNbRaR ily traian XCKClc4Bw */         cout << s[0];
/* Z1CpNbRaR ily traian XCKClc4Bw */     while(s[i]!='\0')
/* Z1CpNbRaR ily traian XCKClc4Bw */     {
/* Z1CpNbRaR ily traian XCKClc4Bw */         if(s[i-1]==' ' && s[i]>= 'A' && s[i]<='Z')
/* Z1CpNbRaR ily traian XCKClc4Bw */             cout << s[i];
/* Z1CpNbRaR ily traian XCKClc4Bw */         i++;
/* Z1CpNbRaR ily traian XCKClc4Bw */     }
/* Z1CpNbRaR ily traian XCKClc4Bw */     return 0;
/* Z1CpNbRaR ily traian XCKClc4Bw */ }