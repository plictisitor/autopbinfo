/* TLjQ6LqOz ily traian NUvnfIdCW */ #include <algorithm>
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
/* TLjQ6LqOz ily traian NUvnfIdCW */ using namespace std;
/* TLjQ6LqOz ily traian NUvnfIdCW */ 
/* TLjQ6LqOz ily traian NUvnfIdCW */ int main()
/* TLjQ6LqOz ily traian NUvnfIdCW */ {
/* TLjQ6LqOz ily traian NUvnfIdCW */     char ch[257];
/* TLjQ6LqOz ily traian NUvnfIdCW */     cin.getline(ch , 256);
/* TLjQ6LqOz ily traian NUvnfIdCW */     int i = 0;
/* TLjQ6LqOz ily traian NUvnfIdCW */     int cnt=0;
/* TLjQ6LqOz ily traian NUvnfIdCW */     while(ch[i]!='\0')
/* TLjQ6LqOz ily traian NUvnfIdCW */     {
/* TLjQ6LqOz ily traian NUvnfIdCW */         if((ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u') && (ch[i+1]=='a' || ch[i+1]=='e' || ch[i+1]=='i' || ch[i+1]=='o' || ch[i+1]=='u')) 
/* TLjQ6LqOz ily traian NUvnfIdCW */             cnt++;
/* TLjQ6LqOz ily traian NUvnfIdCW */         i++;
/* TLjQ6LqOz ily traian NUvnfIdCW */     }
/* TLjQ6LqOz ily traian NUvnfIdCW */     cout << cnt;
/* TLjQ6LqOz ily traian NUvnfIdCW */     return 0;    
/* TLjQ6LqOz ily traian NUvnfIdCW */ }