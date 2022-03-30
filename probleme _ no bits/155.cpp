/* Ds0XAezVd ily traian dexihqVYq */ #include <algorithm>
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
/* Ds0XAezVd ily traian dexihqVYq */ using namespace std;
/* Ds0XAezVd ily traian dexihqVYq */ 
/* Ds0XAezVd ily traian dexihqVYq */ int f[10];
/* Ds0XAezVd ily traian dexihqVYq */ 
/* Ds0XAezVd ily traian dexihqVYq */ int main()
/* Ds0XAezVd ily traian dexihqVYq */ {
/* Ds0XAezVd ily traian dexihqVYq */     char ch[300];
/* Ds0XAezVd ily traian dexihqVYq */     cin.getline(ch , 300);
/* Ds0XAezVd ily traian dexihqVYq */     int i = 0;
/* Ds0XAezVd ily traian dexihqVYq */     while(ch[i]!='\0')
/* Ds0XAezVd ily traian dexihqVYq */     {
/* Ds0XAezVd ily traian dexihqVYq */         if(ch[i]=='0')
/* Ds0XAezVd ily traian dexihqVYq */             f[0]++;
/* Ds0XAezVd ily traian dexihqVYq */         if(ch[i]=='1')
/* Ds0XAezVd ily traian dexihqVYq */             f[1]++;
/* Ds0XAezVd ily traian dexihqVYq */         if(ch[i]=='2')
/* Ds0XAezVd ily traian dexihqVYq */             f[2]++;
/* Ds0XAezVd ily traian dexihqVYq */         if(ch[i]=='3')
/* Ds0XAezVd ily traian dexihqVYq */             f[3]++;
/* Ds0XAezVd ily traian dexihqVYq */         if(ch[i]=='4')
/* Ds0XAezVd ily traian dexihqVYq */             f[4]++;
/* Ds0XAezVd ily traian dexihqVYq */         if(ch[i]=='5')
/* Ds0XAezVd ily traian dexihqVYq */             f[5]++;
/* Ds0XAezVd ily traian dexihqVYq */         if(ch[i]=='6')
/* Ds0XAezVd ily traian dexihqVYq */             f[6]++;
/* Ds0XAezVd ily traian dexihqVYq */         if(ch[i]=='7')
/* Ds0XAezVd ily traian dexihqVYq */             f[7]++;
/* Ds0XAezVd ily traian dexihqVYq */         if(ch[i]=='8')
/* Ds0XAezVd ily traian dexihqVYq */             f[8]++;
/* Ds0XAezVd ily traian dexihqVYq */         if(ch[i]=='9')
/* Ds0XAezVd ily traian dexihqVYq */             f[9]++;  
/* Ds0XAezVd ily traian dexihqVYq */         i++;  
/* Ds0XAezVd ily traian dexihqVYq */     }
/* Ds0XAezVd ily traian dexihqVYq */     int max=0 , val=-1;
/* Ds0XAezVd ily traian dexihqVYq */     for(int i = 0 ; i <= 10 ; ++i)
/* Ds0XAezVd ily traian dexihqVYq */     {
/* Ds0XAezVd ily traian dexihqVYq */         if(f[i]>max)
/* Ds0XAezVd ily traian dexihqVYq */             max=f[i] , val=i;
/* Ds0XAezVd ily traian dexihqVYq */     }
/* Ds0XAezVd ily traian dexihqVYq */     if(val==-1)
/* Ds0XAezVd ily traian dexihqVYq */         cout << "NU";
/* Ds0XAezVd ily traian dexihqVYq */     else
/* Ds0XAezVd ily traian dexihqVYq */         cout << val;
/* Ds0XAezVd ily traian dexihqVYq */ }