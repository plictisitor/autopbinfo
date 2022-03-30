/* a5eMkHAf9 ily traian tK8ieiOhh */ #include <algorithm>
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
/* a5eMkHAf9 ily traian tK8ieiOhh */ 
/* a5eMkHAf9 ily traian tK8ieiOhh */ using namespace std;
/* a5eMkHAf9 ily traian tK8ieiOhh */ 
/* a5eMkHAf9 ily traian tK8ieiOhh */ bool palindrom(char s[])
/* a5eMkHAf9 ily traian tK8ieiOhh */ {
/* a5eMkHAf9 ily traian tK8ieiOhh */     for(int i = 0 , j = strlen(s)-1; i < j ; ++i , --j)
/* a5eMkHAf9 ily traian tK8ieiOhh */     if(tolower(s[i])!=tolower(s[j]))
/* a5eMkHAf9 ily traian tK8ieiOhh */     return 0;
/* a5eMkHAf9 ily traian tK8ieiOhh */     return 1;
/* a5eMkHAf9 ily traian tK8ieiOhh */ 
/* a5eMkHAf9 ily traian tK8ieiOhh */ }
/* a5eMkHAf9 ily traian tK8ieiOhh */ 
/* a5eMkHAf9 ily traian tK8ieiOhh */ int main()
/* a5eMkHAf9 ily traian tK8ieiOhh */ {
/* a5eMkHAf9 ily traian tK8ieiOhh */     char s[256] , *p , pal[11]="";
/* a5eMkHAf9 ily traian tK8ieiOhh */     cin.getline(s , 256);
/* a5eMkHAf9 ily traian tK8ieiOhh */     p = strtok(s , " .,;:");
/* a5eMkHAf9 ily traian tK8ieiOhh */     bool gasit = false;
/* a5eMkHAf9 ily traian tK8ieiOhh */     while(p)
/* a5eMkHAf9 ily traian tK8ieiOhh */     {
/* a5eMkHAf9 ily traian tK8ieiOhh */         if(palindrom(p))
/* a5eMkHAf9 ily traian tK8ieiOhh */             if(strlen(p) > strlen(pal))
/* a5eMkHAf9 ily traian tK8ieiOhh */             strcpy(pal , p) , gasit = 1;
/* a5eMkHAf9 ily traian tK8ieiOhh */         p = strtok(NULL , " .;:,");
/* a5eMkHAf9 ily traian tK8ieiOhh */     }
/* a5eMkHAf9 ily traian tK8ieiOhh */     if(gasit)
/* a5eMkHAf9 ily traian tK8ieiOhh */         cout << pal;
/* a5eMkHAf9 ily traian tK8ieiOhh */     else
/* a5eMkHAf9 ily traian tK8ieiOhh */         cout << "IMPOSIBIL";
/* a5eMkHAf9 ily traian tK8ieiOhh */     return 0;
/* a5eMkHAf9 ily traian tK8ieiOhh */ }