/* FKiqbcgPB ily traian y5Yn7GbEc */ #include <algorithm>
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
/* FKiqbcgPB ily traian y5Yn7GbEc */ using namespace std;
/* FKiqbcgPB ily traian y5Yn7GbEc */ 
/* FKiqbcgPB ily traian y5Yn7GbEc */ int main()
/* FKiqbcgPB ily traian y5Yn7GbEc */ {
/* FKiqbcgPB ily traian y5Yn7GbEc */     char a[50] , b[50];
/* FKiqbcgPB ily traian y5Yn7GbEc */     cin >> a >> b;
/* FKiqbcgPB ily traian y5Yn7GbEc */     int i = 0;
/* FKiqbcgPB ily traian y5Yn7GbEc */     while(a[i]!='\0')
/* FKiqbcgPB ily traian y5Yn7GbEc */     {
/* FKiqbcgPB ily traian y5Yn7GbEc */         if((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') && (b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u'))
/* FKiqbcgPB ily traian y5Yn7GbEc */             cout << '*';
/* FKiqbcgPB ily traian y5Yn7GbEc */         else if((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') && (b[i]!='a' || b[i]!='e' || b[i]!='i' || b[i]!='o' || b[i]!='u'))
/* FKiqbcgPB ily traian y5Yn7GbEc */             cout << '?';
/* FKiqbcgPB ily traian y5Yn7GbEc */         else if((a[i]!='a' || a[i]!='e' || a[i]!='i' || a[i]!='o' || a[i]!='u') && (b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u'))
/* FKiqbcgPB ily traian y5Yn7GbEc */             cout << '?';
/* FKiqbcgPB ily traian y5Yn7GbEc */         else
/* FKiqbcgPB ily traian y5Yn7GbEc */             cout << '#';
/* FKiqbcgPB ily traian y5Yn7GbEc */         i++;    
/* FKiqbcgPB ily traian y5Yn7GbEc */     }
/* FKiqbcgPB ily traian y5Yn7GbEc */     return 0;    
/* FKiqbcgPB ily traian y5Yn7GbEc */ }