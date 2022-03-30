/* vVFZaLvHB ily traian YHOiSMsUP */ #include <algorithm>
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
/* vVFZaLvHB ily traian YHOiSMsUP */ using namespace std;
/* vVFZaLvHB ily traian YHOiSMsUP */ 
/* vVFZaLvHB ily traian YHOiSMsUP */ int main()
/* vVFZaLvHB ily traian YHOiSMsUP */ {
/* vVFZaLvHB ily traian YHOiSMsUP */     char s[256];
/* vVFZaLvHB ily traian YHOiSMsUP */     cin.getline(s , 256);
/* vVFZaLvHB ily traian YHOiSMsUP */     int i = 0;
/* vVFZaLvHB ily traian YHOiSMsUP */     int sum=0 , nr = 0;
/* vVFZaLvHB ily traian YHOiSMsUP */     while(s[i]!='\0')
/* vVFZaLvHB ily traian YHOiSMsUP */     {
/* vVFZaLvHB ily traian YHOiSMsUP */         if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9')
/* vVFZaLvHB ily traian YHOiSMsUP */             nr = nr * 10 + ((int)s[i]-48);
/* vVFZaLvHB ily traian YHOiSMsUP */         else
/* vVFZaLvHB ily traian YHOiSMsUP */             sum+=nr , nr = 0;
/* vVFZaLvHB ily traian YHOiSMsUP */         i++;
/* vVFZaLvHB ily traian YHOiSMsUP */     }
/* vVFZaLvHB ily traian YHOiSMsUP */     cout << sum;
/* vVFZaLvHB ily traian YHOiSMsUP */     return 0;
/* vVFZaLvHB ily traian YHOiSMsUP */ }