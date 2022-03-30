/* aE5onCrl7 ily traian VgnLMY3fV */ #include <algorithm>
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
/* aE5onCrl7 ily traian VgnLMY3fV */ 
/* aE5onCrl7 ily traian VgnLMY3fV */ using namespace std;
/* aE5onCrl7 ily traian VgnLMY3fV */ 
/* aE5onCrl7 ily traian VgnLMY3fV */ ifstream cin("platou4.in");
/* aE5onCrl7 ily traian VgnLMY3fV */ ofstream cout("platou4.out");
/* aE5onCrl7 ily traian VgnLMY3fV */ 
/* aE5onCrl7 ily traian VgnLMY3fV */ int main()
/* aE5onCrl7 ily traian VgnLMY3fV */ {
/* aE5onCrl7 ily traian VgnLMY3fV */     int n=0;
/* aE5onCrl7 ily traian VgnLMY3fV */     int x , pi=0 , pf=0;
/* aE5onCrl7 ily traian VgnLMY3fV */     int ok=0;
/* aE5onCrl7 ily traian VgnLMY3fV */     while(cin >> x)
/* aE5onCrl7 ily traian VgnLMY3fV */     {
/* aE5onCrl7 ily traian VgnLMY3fV */         if(x%2==0 && ok==0)
/* aE5onCrl7 ily traian VgnLMY3fV */             pi=n , ok++;
/* aE5onCrl7 ily traian VgnLMY3fV */         if(x%2==0)
/* aE5onCrl7 ily traian VgnLMY3fV */             pf=n;
/* aE5onCrl7 ily traian VgnLMY3fV */         n++;
/* aE5onCrl7 ily traian VgnLMY3fV */     }
/* aE5onCrl7 ily traian VgnLMY3fV */     cout << pf-pi+1;
/* aE5onCrl7 ily traian VgnLMY3fV */     return 0;
/* aE5onCrl7 ily traian VgnLMY3fV */ }