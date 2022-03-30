/* nwKigdYqn ily traian qhRZw2NRW */ #include <algorithm>
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
/* nwKigdYqn ily traian qhRZw2NRW */ using namespace std;
/* nwKigdYqn ily traian qhRZw2NRW */ 
/* nwKigdYqn ily traian qhRZw2NRW */ int main()
/* nwKigdYqn ily traian qhRZw2NRW */ {
/* nwKigdYqn ily traian qhRZw2NRW */     char ch[300];
/* nwKigdYqn ily traian qhRZw2NRW */     cin.getline(ch , 300);
/* nwKigdYqn ily traian qhRZw2NRW */     int i = 0;
/* nwKigdYqn ily traian qhRZw2NRW */     while(ch[i]!='\0')
/* nwKigdYqn ily traian qhRZw2NRW */     {
/* nwKigdYqn ily traian qhRZw2NRW */         if((ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u') && ((ch[i-1]=='a' || ch[i-1]=='e' || ch[i-1]=='i' || ch[i-1]=='o' || ch[i-1]=='u') || (ch[i+1]=='a' ||ch[i+1]=='e' ||ch[i+1]=='i' ||ch[i+1]=='o' ||ch[i+1]=='u' )))
/* nwKigdYqn ily traian qhRZw2NRW */         {}
/* nwKigdYqn ily traian qhRZw2NRW */         else
/* nwKigdYqn ily traian qhRZw2NRW */         cout << ch[i];
/* nwKigdYqn ily traian qhRZw2NRW */         i++;    
/* nwKigdYqn ily traian qhRZw2NRW */     }
/* nwKigdYqn ily traian qhRZw2NRW */     return 0;    
/* nwKigdYqn ily traian qhRZw2NRW */ }