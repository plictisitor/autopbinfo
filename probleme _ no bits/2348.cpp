/* 5dedLZ8ms ily traian nNjjtnnfm */ #include <algorithm>
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
/* 5dedLZ8ms ily traian nNjjtnnfm */ using namespace std;
/* 5dedLZ8ms ily traian nNjjtnnfm */ 
/* 5dedLZ8ms ily traian nNjjtnnfm */ char ch[201];
/* 5dedLZ8ms ily traian nNjjtnnfm */ 
/* 5dedLZ8ms ily traian nNjjtnnfm */ int main()
/* 5dedLZ8ms ily traian nNjjtnnfm */ {
/* 5dedLZ8ms ily traian nNjjtnnfm */     
/* 5dedLZ8ms ily traian nNjjtnnfm */     cin.getline(ch , 201);
/* 5dedLZ8ms ily traian nNjjtnnfm */     int suma=0;
/* 5dedLZ8ms ily traian nNjjtnnfm */     int cnt=0;
/* 5dedLZ8ms ily traian nNjjtnnfm */     int i = 0;
/* 5dedLZ8ms ily traian nNjjtnnfm */     while(ch[i]!='\0')
/* 5dedLZ8ms ily traian nNjjtnnfm */     {
/* 5dedLZ8ms ily traian nNjjtnnfm */         if((int)ch[i] <= 64 || (int)ch[i] >= 91)
/* 5dedLZ8ms ily traian nNjjtnnfm */         {
/* 5dedLZ8ms ily traian nNjjtnnfm */             if((char)ch[i]!='a' && (char)ch[i]!='e' && (char)ch[i]!='i' && (char)ch[i]!='o' &&(char)ch[i]!='u' && (int)ch[i]!=32)
/* 5dedLZ8ms ily traian nNjjtnnfm */                 suma+=(int)ch[i] , cnt++;
/* 5dedLZ8ms ily traian nNjjtnnfm */         }
/* 5dedLZ8ms ily traian nNjjtnnfm */         i++;
/* 5dedLZ8ms ily traian nNjjtnnfm */     }
/* 5dedLZ8ms ily traian nNjjtnnfm */     
/* 5dedLZ8ms ily traian nNjjtnnfm */     int rez = suma/cnt;
/* 5dedLZ8ms ily traian nNjjtnnfm */     cout << (char)rez;
/* 5dedLZ8ms ily traian nNjjtnnfm */     return 0;    
/* 5dedLZ8ms ily traian nNjjtnnfm */ }