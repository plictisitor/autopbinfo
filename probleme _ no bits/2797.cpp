/* 4xvnuwhG3 ily traian 00vA10weB */ #include <algorithm>
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
/* 4xvnuwhG3 ily traian 00vA10weB */ using namespace std;
/* 4xvnuwhG3 ily traian 00vA10weB */ 
/* 4xvnuwhG3 ily traian 00vA10weB */ char s[101];
/* 4xvnuwhG3 ily traian 00vA10weB */ 
/* 4xvnuwhG3 ily traian 00vA10weB */ bool cifra(char ch)
/* 4xvnuwhG3 ily traian 00vA10weB */ {
/* 4xvnuwhG3 ily traian 00vA10weB */     return ch >= '0' && ch <= '9';
/* 4xvnuwhG3 ily traian 00vA10weB */ }
/* 4xvnuwhG3 ily traian 00vA10weB */ 
/* 4xvnuwhG3 ily traian 00vA10weB */ int nr(int& i)
/* 4xvnuwhG3 ily traian 00vA10weB */ {
/* 4xvnuwhG3 ily traian 00vA10weB */     long long int nr = 0;
/* 4xvnuwhG3 ily traian 00vA10weB */     while(cifra(s[i]))
/* 4xvnuwhG3 ily traian 00vA10weB */         nr = nr * 10 + s[i] - '0' , i++;
/* 4xvnuwhG3 ily traian 00vA10weB */     return nr;
/* 4xvnuwhG3 ily traian 00vA10weB */ }
/* 4xvnuwhG3 ily traian 00vA10weB */ 
/* 4xvnuwhG3 ily traian 00vA10weB */ int main()
/* 4xvnuwhG3 ily traian 00vA10weB */ {
/* 4xvnuwhG3 ily traian 00vA10weB */     cin.getline(s , 101);
/* 4xvnuwhG3 ily traian 00vA10weB */     int i = 0;
/* 4xvnuwhG3 ily traian 00vA10weB */     long long int num = -1;
/* 4xvnuwhG3 ily traian 00vA10weB */     char ma = '0';
/* 4xvnuwhG3 ily traian 00vA10weB */     while(s[i]!='\0')
/* 4xvnuwhG3 ily traian 00vA10weB */     {
/* 4xvnuwhG3 ily traian 00vA10weB */         if(cifra(s[i]))
/* 4xvnuwhG3 ily traian 00vA10weB */         {
/* 4xvnuwhG3 ily traian 00vA10weB */             if(s[i] >= ma)
/* 4xvnuwhG3 ily traian 00vA10weB */                 ma=s[i] , num = nr(i);
/* 4xvnuwhG3 ily traian 00vA10weB */             int numar = nr(i);
/* 4xvnuwhG3 ily traian 00vA10weB */         }
/* 4xvnuwhG3 ily traian 00vA10weB */         i++;
/* 4xvnuwhG3 ily traian 00vA10weB */     }
/* 4xvnuwhG3 ily traian 00vA10weB */     if(num != -1)
/* 4xvnuwhG3 ily traian 00vA10weB */         cout << num;
/* 4xvnuwhG3 ily traian 00vA10weB */     else
/* 4xvnuwhG3 ily traian 00vA10weB */         cout << "nu exista";
/* 4xvnuwhG3 ily traian 00vA10weB */     return 0;
/* 4xvnuwhG3 ily traian 00vA10weB */ }