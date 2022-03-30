/* zMsbo7vOZ ily traian Ab35QV8NK */ #include <algorithm>
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
/* zMsbo7vOZ ily traian Ab35QV8NK */ using namespace std;
/* zMsbo7vOZ ily traian Ab35QV8NK */ 
/* zMsbo7vOZ ily traian Ab35QV8NK */ ifstream cin("palindrom.in");
/* zMsbo7vOZ ily traian Ab35QV8NK */ ofstream cout("palindrom.out");
/* zMsbo7vOZ ily traian Ab35QV8NK */ 
/* zMsbo7vOZ ily traian Ab35QV8NK */ int main()
/* zMsbo7vOZ ily traian Ab35QV8NK */ {
/* zMsbo7vOZ ily traian Ab35QV8NK */     int n;
/* zMsbo7vOZ ily traian Ab35QV8NK */     cin >> n;
/* zMsbo7vOZ ily traian Ab35QV8NK */     for(int i = 0 ; i < n ; ++i)
/* zMsbo7vOZ ily traian Ab35QV8NK */     {
/* zMsbo7vOZ ily traian Ab35QV8NK */         char ch[101];
/* zMsbo7vOZ ily traian Ab35QV8NK */         cin >> ch;
/* zMsbo7vOZ ily traian Ab35QV8NK */         int m = 0;
/* zMsbo7vOZ ily traian Ab35QV8NK */         while(ch[m]!='\0')
/* zMsbo7vOZ ily traian Ab35QV8NK */             m++;    
/* zMsbo7vOZ ily traian Ab35QV8NK */         m--;
/* zMsbo7vOZ ily traian Ab35QV8NK */         int j = 0;
/* zMsbo7vOZ ily traian Ab35QV8NK */         bool adev=true;
/* zMsbo7vOZ ily traian Ab35QV8NK */         while(ch[j]!='\0')
/* zMsbo7vOZ ily traian Ab35QV8NK */         {
/* zMsbo7vOZ ily traian Ab35QV8NK */             if(ch[j]!=ch[m-j])
/* zMsbo7vOZ ily traian Ab35QV8NK */                 adev=false;
/* zMsbo7vOZ ily traian Ab35QV8NK */             j++;
/* zMsbo7vOZ ily traian Ab35QV8NK */         }
/* zMsbo7vOZ ily traian Ab35QV8NK */         if(adev)
/* zMsbo7vOZ ily traian Ab35QV8NK */             cout << 1 << endl;
/* zMsbo7vOZ ily traian Ab35QV8NK */         else
/* zMsbo7vOZ ily traian Ab35QV8NK */             cout << 0 << endl;
/* zMsbo7vOZ ily traian Ab35QV8NK */     }
/* zMsbo7vOZ ily traian Ab35QV8NK */     return 0;    
/* zMsbo7vOZ ily traian Ab35QV8NK */ }