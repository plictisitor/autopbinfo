/* 5YtABCII7 ily traian wOFRnss1q */ #include <algorithm>
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
/* 5YtABCII7 ily traian wOFRnss1q */ using namespace std;
/* 5YtABCII7 ily traian wOFRnss1q */ 
/* 5YtABCII7 ily traian wOFRnss1q */ bool cifra(char ch)
/* 5YtABCII7 ily traian wOFRnss1q */ {
/* 5YtABCII7 ily traian wOFRnss1q */     return ch >= '0' && ch <= '9';
/* 5YtABCII7 ily traian wOFRnss1q */ }
/* 5YtABCII7 ily traian wOFRnss1q */ 
/* 5YtABCII7 ily traian wOFRnss1q */ int main()
/* 5YtABCII7 ily traian wOFRnss1q */ {
/* 5YtABCII7 ily traian wOFRnss1q */     char s[300] , cuv[300];
/* 5YtABCII7 ily traian wOFRnss1q */     cin >> s;
/* 5YtABCII7 ily traian wOFRnss1q */     int i = 0 , j = -1;
/* 5YtABCII7 ily traian wOFRnss1q */     while(s[i]!='\0')
/* 5YtABCII7 ily traian wOFRnss1q */     {
/* 5YtABCII7 ily traian wOFRnss1q */         if(s[i]=='(')
/* 5YtABCII7 ily traian wOFRnss1q */             j=0;
/* 5YtABCII7 ily traian wOFRnss1q */         else if(s[i]==')')
/* 5YtABCII7 ily traian wOFRnss1q */         {
/* 5YtABCII7 ily traian wOFRnss1q */             i++;
/* 5YtABCII7 ily traian wOFRnss1q */             int n=0;
/* 5YtABCII7 ily traian wOFRnss1q */             while(cifra(s[i]))
/* 5YtABCII7 ily traian wOFRnss1q */                 n=n*10+((int)s[i]-48) , i++;
/* 5YtABCII7 ily traian wOFRnss1q */             i--;
/* 5YtABCII7 ily traian wOFRnss1q */             for(int q = 0 ; q < n ; ++q)
/* 5YtABCII7 ily traian wOFRnss1q */                 for(int k = 0 ; k < j ; ++k)
/* 5YtABCII7 ily traian wOFRnss1q */                     cout << cuv[k];
/* 5YtABCII7 ily traian wOFRnss1q */             j=-1;
/* 5YtABCII7 ily traian wOFRnss1q */         }
/* 5YtABCII7 ily traian wOFRnss1q */         else if(j!=-1)
/* 5YtABCII7 ily traian wOFRnss1q */             cuv[j]=s[i] , j++;
/* 5YtABCII7 ily traian wOFRnss1q */         else
/* 5YtABCII7 ily traian wOFRnss1q */             cout << s[i];
/* 5YtABCII7 ily traian wOFRnss1q */         i++;
/* 5YtABCII7 ily traian wOFRnss1q */     }
/* 5YtABCII7 ily traian wOFRnss1q */     return 0;
/* 5YtABCII7 ily traian wOFRnss1q */ }