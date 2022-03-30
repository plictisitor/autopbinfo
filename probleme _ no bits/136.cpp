/* 9KcCqg74n ily traian EliP36sm1 */ #include <algorithm>
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
/* 9KcCqg74n ily traian EliP36sm1 */ 
/* 9KcCqg74n ily traian EliP36sm1 */ using namespace std;
/* 9KcCqg74n ily traian EliP36sm1 */ 
/* 9KcCqg74n ily traian EliP36sm1 */ int main()
/* 9KcCqg74n ily traian EliP36sm1 */ {
/* 9KcCqg74n ily traian EliP36sm1 */     char ch[200];
/* 9KcCqg74n ily traian EliP36sm1 */     cin.getline(ch , 200);
/* 9KcCqg74n ily traian EliP36sm1 */     int i = 0;
/* 9KcCqg74n ily traian EliP36sm1 */     bool ok = false;
/* 9KcCqg74n ily traian EliP36sm1 */     int cnt=0;
/* 9KcCqg74n ily traian EliP36sm1 */     int da=0;
/* 9KcCqg74n ily traian EliP36sm1 */     while(ch[i]!='\0')
/* 9KcCqg74n ily traian EliP36sm1 */     {
/* 9KcCqg74n ily traian EliP36sm1 */         if(ch[i+1]=='\0' && da==0)
/* 9KcCqg74n ily traian EliP36sm1 */             ch[i+1]=' ' , ch[i+2]='\0' , da++;
/* 9KcCqg74n ily traian EliP36sm1 */         if((i==0 || ch[i-1]==' ') && strchr("AEIOUaeiou" , ch[i]))
/* 9KcCqg74n ily traian EliP36sm1 */             ok=true;    
/* 9KcCqg74n ily traian EliP36sm1 */         if(ch[i]==' ')
/* 9KcCqg74n ily traian EliP36sm1 */         ok=false;
/* 9KcCqg74n ily traian EliP36sm1 */         if(strchr("AEIOUaeiou" , ch[i]) && ok && ch[i+1]==' ')
/* 9KcCqg74n ily traian EliP36sm1 */             cnt++;
/* 9KcCqg74n ily traian EliP36sm1 */         i++;    
/* 9KcCqg74n ily traian EliP36sm1 */     }
/* 9KcCqg74n ily traian EliP36sm1 */     cout << cnt;
/* 9KcCqg74n ily traian EliP36sm1 */     return 0;    
/* 9KcCqg74n ily traian EliP36sm1 */ }