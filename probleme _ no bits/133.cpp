/* laO8REdFx ily traian Tj1F55Wdv */ #include <algorithm>
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
/* laO8REdFx ily traian Tj1F55Wdv */ using namespace std;
/* laO8REdFx ily traian Tj1F55Wdv */ 
/* laO8REdFx ily traian Tj1F55Wdv */ int main()
/* laO8REdFx ily traian Tj1F55Wdv */ {
/* laO8REdFx ily traian Tj1F55Wdv */     char a[250] , b[250];
/* laO8REdFx ily traian Tj1F55Wdv */     cin >> a >> b;
/* laO8REdFx ily traian Tj1F55Wdv */     int i = 0;
/* laO8REdFx ily traian Tj1F55Wdv */     while(b[i]!='\0')
/* laO8REdFx ily traian Tj1F55Wdv */     {
/* laO8REdFx ily traian Tj1F55Wdv */         if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u' || b[i]=='A' || b[i]=='E' || b[i]=='I' || b[i]=='O' || b[i]=='U')
/* laO8REdFx ily traian Tj1F55Wdv */         {}
/* laO8REdFx ily traian Tj1F55Wdv */         else
/* laO8REdFx ily traian Tj1F55Wdv */             cout << b[i];
/* laO8REdFx ily traian Tj1F55Wdv */         i++;    
/* laO8REdFx ily traian Tj1F55Wdv */     }
/* laO8REdFx ily traian Tj1F55Wdv */     cout << ' ';
/* laO8REdFx ily traian Tj1F55Wdv */     cout << a;
/* laO8REdFx ily traian Tj1F55Wdv */     return 0;    
/* laO8REdFx ily traian Tj1F55Wdv */ }