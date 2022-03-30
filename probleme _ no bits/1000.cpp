/* VJ7juiw8Z ily traian Rz9Fb8EFi */ #include <algorithm>
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
/* VJ7juiw8Z ily traian Rz9Fb8EFi */ 
/* VJ7juiw8Z ily traian Rz9Fb8EFi */ using namespace std;
/* VJ7juiw8Z ily traian Rz9Fb8EFi */ 
/* VJ7juiw8Z ily traian Rz9Fb8EFi */ ifstream cin("cnp.in");
/* VJ7juiw8Z ily traian Rz9Fb8EFi */ ofstream cout("cnp.out");
/* VJ7juiw8Z ily traian Rz9Fb8EFi */ 
/* VJ7juiw8Z ily traian Rz9Fb8EFi */ int main()
/* VJ7juiw8Z ily traian Rz9Fb8EFi */ {
/* VJ7juiw8Z ily traian Rz9Fb8EFi */     char s[200];
/* VJ7juiw8Z ily traian Rz9Fb8EFi */     int cnt=0;
/* VJ7juiw8Z ily traian Rz9Fb8EFi */     while(cin >> s)
/* VJ7juiw8Z ily traian Rz9Fb8EFi */     {
/* VJ7juiw8Z ily traian Rz9Fb8EFi */         int i = 0;
/* VJ7juiw8Z ily traian Rz9Fb8EFi */         int c = 0;
/* VJ7juiw8Z ily traian Rz9Fb8EFi */         while(s[i]!='\0')
/* VJ7juiw8Z ily traian Rz9Fb8EFi */         {
/* VJ7juiw8Z ily traian Rz9Fb8EFi */             if(s[i]!='0' && s[i]!='1' && s[i]!='2' && s[i]!='3' && s[i]!='4' && s[i]!='5' && s[i]!='6' && s[i]!='7' && s[i]!='8' && s[i]!='9')
/* VJ7juiw8Z ily traian Rz9Fb8EFi */             {  c=0; }
/* VJ7juiw8Z ily traian Rz9Fb8EFi */             else
/* VJ7juiw8Z ily traian Rz9Fb8EFi */                 c++;
/* VJ7juiw8Z ily traian Rz9Fb8EFi */             if(c==13 && s[i+1]!='0' && s[i+1]!='1' && s[i+1]!='2' && s[i+1]!='3' && s[i+1]!='4' && s[i+1]!='5' && s[i+1]!='6' && s[i+1]!='7' && s[i+1]!='8' && s[i+1]!='9')
/* VJ7juiw8Z ily traian Rz9Fb8EFi */                 break;
/* VJ7juiw8Z ily traian Rz9Fb8EFi */             i++;
/* VJ7juiw8Z ily traian Rz9Fb8EFi */         }
/* VJ7juiw8Z ily traian Rz9Fb8EFi */         int j = i - 13 + 1;
/* VJ7juiw8Z ily traian Rz9Fb8EFi */         if(c==13)
/* VJ7juiw8Z ily traian Rz9Fb8EFi */             cnt++;
/* VJ7juiw8Z ily traian Rz9Fb8EFi */         if(c==13)
/* VJ7juiw8Z ily traian Rz9Fb8EFi */         {
/* VJ7juiw8Z ily traian Rz9Fb8EFi */             while(j <= i)
/* VJ7juiw8Z ily traian Rz9Fb8EFi */             {
/* VJ7juiw8Z ily traian Rz9Fb8EFi */                 cout << s[j];
/* VJ7juiw8Z ily traian Rz9Fb8EFi */                 j++;
/* VJ7juiw8Z ily traian Rz9Fb8EFi */             }
/* VJ7juiw8Z ily traian Rz9Fb8EFi */             cout << endl;
/* VJ7juiw8Z ily traian Rz9Fb8EFi */         }
/* VJ7juiw8Z ily traian Rz9Fb8EFi */     }
/* VJ7juiw8Z ily traian Rz9Fb8EFi */     if(cnt==0)
/* VJ7juiw8Z ily traian Rz9Fb8EFi */         cout << 0;
/* VJ7juiw8Z ily traian Rz9Fb8EFi */     return 0;
/* VJ7juiw8Z ily traian Rz9Fb8EFi */ }