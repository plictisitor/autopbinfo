/* IT4vET860 ily traian eafkJaXnG */ #include <algorithm>
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
/* IT4vET860 ily traian eafkJaXnG */ using namespace std;
/* IT4vET860 ily traian eafkJaXnG */ 
/* IT4vET860 ily traian eafkJaXnG */ int main()
/* IT4vET860 ily traian eafkJaXnG */ {
/* IT4vET860 ily traian eafkJaXnG */     char ch[300];
/* IT4vET860 ily traian eafkJaXnG */     cin.getline(ch , 300);
/* IT4vET860 ily traian eafkJaXnG */     int i = 0;
/* IT4vET860 ily traian eafkJaXnG */     int l = 0 , lmax = 0 , indice=0;
/* IT4vET860 ily traian eafkJaXnG */     while(ch[i]!='\0')
/* IT4vET860 ily traian eafkJaXnG */     {
/* IT4vET860 ily traian eafkJaXnG */         if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')  
/* IT4vET860 ily traian eafkJaXnG */         {
/* IT4vET860 ily traian eafkJaXnG */             l=0;
/* IT4vET860 ily traian eafkJaXnG */         }
/* IT4vET860 ily traian eafkJaXnG */         else
/* IT4vET860 ily traian eafkJaXnG */             l++;
/* IT4vET860 ily traian eafkJaXnG */         if(l>=lmax)
/* IT4vET860 ily traian eafkJaXnG */                 lmax=l , indice=i-l;
/* IT4vET860 ily traian eafkJaXnG */         i++;
/* IT4vET860 ily traian eafkJaXnG */     }
/* IT4vET860 ily traian eafkJaXnG */     for(int  i = indice+1 ; i <= indice+lmax ; ++i)
/* IT4vET860 ily traian eafkJaXnG */         cout << ch[i];
/* IT4vET860 ily traian eafkJaXnG */     return 0;    
/* IT4vET860 ily traian eafkJaXnG */ }