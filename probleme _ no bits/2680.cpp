/* ot6FcfAtD ily traian OIYSHaNRF */ #include <algorithm>
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
/* ot6FcfAtD ily traian OIYSHaNRF */ using namespace std;
/* ot6FcfAtD ily traian OIYSHaNRF */ 
/* ot6FcfAtD ily traian OIYSHaNRF */ int main()
/* ot6FcfAtD ily traian OIYSHaNRF */ {
/* ot6FcfAtD ily traian OIYSHaNRF */     int n;
/* ot6FcfAtD ily traian OIYSHaNRF */     cin >> n;
/* ot6FcfAtD ily traian OIYSHaNRF */     char s[16][300];
/* ot6FcfAtD ily traian OIYSHaNRF */     for(int e = 0 ; e <= n ; ++e)
/* ot6FcfAtD ily traian OIYSHaNRF */     {
/* ot6FcfAtD ily traian OIYSHaNRF */         cin.getline(s[e] , 300);
/* ot6FcfAtD ily traian OIYSHaNRF */     }
/* ot6FcfAtD ily traian OIYSHaNRF */     for(int e = 0 ; e <= n ; ++e)
/* ot6FcfAtD ily traian OIYSHaNRF */     {
/* ot6FcfAtD ily traian OIYSHaNRF */         int i = 0;
/* ot6FcfAtD ily traian OIYSHaNRF */         while(s[e][i]!='\0')
/* ot6FcfAtD ily traian OIYSHaNRF */         {
/* ot6FcfAtD ily traian OIYSHaNRF */             if((s[e][i]=='!' || s[e][i]=='?' || s[e][i]=='.' || s[e][i]==',') && s[e][i+1]!='\0')
/* ot6FcfAtD ily traian OIYSHaNRF */             {
/* ot6FcfAtD ily traian OIYSHaNRF */ 
/* ot6FcfAtD ily traian OIYSHaNRF */             }
/* ot6FcfAtD ily traian OIYSHaNRF */             else
/* ot6FcfAtD ily traian OIYSHaNRF */                 cout << s[e][i];
/* ot6FcfAtD ily traian OIYSHaNRF */             i++;
/* ot6FcfAtD ily traian OIYSHaNRF */         }
/* ot6FcfAtD ily traian OIYSHaNRF */         if(e > 0)
/* ot6FcfAtD ily traian OIYSHaNRF */         cout << endl;
/* ot6FcfAtD ily traian OIYSHaNRF */     }
/* ot6FcfAtD ily traian OIYSHaNRF */     return 0;
/* ot6FcfAtD ily traian OIYSHaNRF */ }