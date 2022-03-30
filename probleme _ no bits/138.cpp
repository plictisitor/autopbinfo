/* 4kB4yyAKE ily traian 6JjBrZcrO */ #include <algorithm>
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
/* 4kB4yyAKE ily traian 6JjBrZcrO */ using namespace std;
/* 4kB4yyAKE ily traian 6JjBrZcrO */ 
/* 4kB4yyAKE ily traian 6JjBrZcrO */ int f[300];
/* 4kB4yyAKE ily traian 6JjBrZcrO */ 
/* 4kB4yyAKE ily traian 6JjBrZcrO */ int main()
/* 4kB4yyAKE ily traian 6JjBrZcrO */ {
/* 4kB4yyAKE ily traian 6JjBrZcrO */     char ch[300];
/* 4kB4yyAKE ily traian 6JjBrZcrO */     cin.getline(ch , 300);
/* 4kB4yyAKE ily traian 6JjBrZcrO */     int i = 0;
/* 4kB4yyAKE ily traian 6JjBrZcrO */     while(ch[i]!='\0')
/* 4kB4yyAKE ily traian 6JjBrZcrO */     {
/* 4kB4yyAKE ily traian 6JjBrZcrO */         if(ch[i]!=' ')
/* 4kB4yyAKE ily traian 6JjBrZcrO */         {
/* 4kB4yyAKE ily traian 6JjBrZcrO */             f[(int)ch[i]]++;
/* 4kB4yyAKE ily traian 6JjBrZcrO */         }
/* 4kB4yyAKE ily traian 6JjBrZcrO */         i++;    
/* 4kB4yyAKE ily traian 6JjBrZcrO */     }
/* 4kB4yyAKE ily traian 6JjBrZcrO */     int max=0 , val=0;
/* 4kB4yyAKE ily traian 6JjBrZcrO */     for(int i = 50 ; i <= 300 ; ++i)
/* 4kB4yyAKE ily traian 6JjBrZcrO */     {
/* 4kB4yyAKE ily traian 6JjBrZcrO */         if(f[i]>max)
/* 4kB4yyAKE ily traian 6JjBrZcrO */             max=f[i] , val=i;
/* 4kB4yyAKE ily traian 6JjBrZcrO */     }
/* 4kB4yyAKE ily traian 6JjBrZcrO */     if(val<97)
/* 4kB4yyAKE ily traian 6JjBrZcrO */         val+=32;
/* 4kB4yyAKE ily traian 6JjBrZcrO */         cout << (char) val;
/* 4kB4yyAKE ily traian 6JjBrZcrO */ }