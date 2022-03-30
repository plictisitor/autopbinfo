/* HbsW2Wb4R ily traian kJGjjS1vq */ #include <algorithm>
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
/* HbsW2Wb4R ily traian kJGjjS1vq */ 
/* HbsW2Wb4R ily traian kJGjjS1vq */ using namespace std;
/* HbsW2Wb4R ily traian kJGjjS1vq */ 
/* HbsW2Wb4R ily traian kJGjjS1vq */ ifstream cin("caesar.in");
/* HbsW2Wb4R ily traian kJGjjS1vq */ ofstream cout("dbftbs.out");
/* HbsW2Wb4R ily traian kJGjjS1vq */ 
/* HbsW2Wb4R ily traian kJGjjS1vq */ char s[300], cer[20];
/* HbsW2Wb4R ily traian kJGjjS1vq */ int n;
/* HbsW2Wb4R ily traian kJGjjS1vq */ 
/* HbsW2Wb4R ily traian kJGjjS1vq */ bool LM(char ch)
/* HbsW2Wb4R ily traian kJGjjS1vq */ {
/* HbsW2Wb4R ily traian kJGjjS1vq */     return ch >= 'A' && ch <= 'Z';
/* HbsW2Wb4R ily traian kJGjjS1vq */ }
/* HbsW2Wb4R ily traian kJGjjS1vq */ 
/* HbsW2Wb4R ily traian kJGjjS1vq */ bool lm(char ch)
/* HbsW2Wb4R ily traian kJGjjS1vq */ {
/* HbsW2Wb4R ily traian kJGjjS1vq */     return ch >= 'a' && ch <= 'z';
/* HbsW2Wb4R ily traian kJGjjS1vq */ }
/* HbsW2Wb4R ily traian kJGjjS1vq */ 
/* HbsW2Wb4R ily traian kJGjjS1vq */ int main()
/* HbsW2Wb4R ily traian kJGjjS1vq */ {
/* HbsW2Wb4R ily traian kJGjjS1vq */     cin.getline(s, 260);
/* HbsW2Wb4R ily traian kJGjjS1vq */     cin >> n;
/* HbsW2Wb4R ily traian kJGjjS1vq */     cin >> cer;
/* HbsW2Wb4R ily traian kJGjjS1vq */     n=n%26;
/* HbsW2Wb4R ily traian kJGjjS1vq */     if(strcmp(cer, "encrypt") == 0)
/* HbsW2Wb4R ily traian kJGjjS1vq */     {
/* HbsW2Wb4R ily traian kJGjjS1vq */         int i = 0;
/* HbsW2Wb4R ily traian kJGjjS1vq */         while(s[i])
/* HbsW2Wb4R ily traian kJGjjS1vq */         {
/* HbsW2Wb4R ily traian kJGjjS1vq */             if(lm(s[i]) || LM(s[i]))
/* HbsW2Wb4R ily traian kJGjjS1vq */             {
/* HbsW2Wb4R ily traian kJGjjS1vq */                 if(LM(s[i]))
/* HbsW2Wb4R ily traian kJGjjS1vq */                 {
/* HbsW2Wb4R ily traian kJGjjS1vq */                     int nr = s[i] + n;
/* HbsW2Wb4R ily traian kJGjjS1vq */                     if(nr > 'Z')
/* HbsW2Wb4R ily traian kJGjjS1vq */                         s[i] = nr - 'Z' + 'A' - 1;
/* HbsW2Wb4R ily traian kJGjjS1vq */                     else
/* HbsW2Wb4R ily traian kJGjjS1vq */                         s[i] = nr;
/* HbsW2Wb4R ily traian kJGjjS1vq */                 }
/* HbsW2Wb4R ily traian kJGjjS1vq */                 else
/* HbsW2Wb4R ily traian kJGjjS1vq */                 {
/* HbsW2Wb4R ily traian kJGjjS1vq */                     int nr = s[i] + n;
/* HbsW2Wb4R ily traian kJGjjS1vq */                     if(nr > 'z')
/* HbsW2Wb4R ily traian kJGjjS1vq */                         s[i] = nr - 'z' + 'a' - 1;
/* HbsW2Wb4R ily traian kJGjjS1vq */                     else
/* HbsW2Wb4R ily traian kJGjjS1vq */                         s[i] = nr;
/* HbsW2Wb4R ily traian kJGjjS1vq */                 }
/* HbsW2Wb4R ily traian kJGjjS1vq */             }
/* HbsW2Wb4R ily traian kJGjjS1vq */             i++;
/* HbsW2Wb4R ily traian kJGjjS1vq */         }
/* HbsW2Wb4R ily traian kJGjjS1vq */         cout << s;
/* HbsW2Wb4R ily traian kJGjjS1vq */     }
/* HbsW2Wb4R ily traian kJGjjS1vq */     else
/* HbsW2Wb4R ily traian kJGjjS1vq */     {
/* HbsW2Wb4R ily traian kJGjjS1vq */         int i = 0;
/* HbsW2Wb4R ily traian kJGjjS1vq */         while(s[i])
/* HbsW2Wb4R ily traian kJGjjS1vq */         {
/* HbsW2Wb4R ily traian kJGjjS1vq */             if(LM(s[i]) || lm(s[i]))
/* HbsW2Wb4R ily traian kJGjjS1vq */             {
/* HbsW2Wb4R ily traian kJGjjS1vq */                 if(LM(s[i]))
/* HbsW2Wb4R ily traian kJGjjS1vq */                 {
/* HbsW2Wb4R ily traian kJGjjS1vq */                     s[i] = s[i] - n;
/* HbsW2Wb4R ily traian kJGjjS1vq */                     if(s[i] < 'A')
/* HbsW2Wb4R ily traian kJGjjS1vq */                         s[i] += 'Z' - 'A' + 1;
/* HbsW2Wb4R ily traian kJGjjS1vq */                 }
/* HbsW2Wb4R ily traian kJGjjS1vq */                 else
/* HbsW2Wb4R ily traian kJGjjS1vq */                 {
/* HbsW2Wb4R ily traian kJGjjS1vq */                     s[i] = s[i] - n;
/* HbsW2Wb4R ily traian kJGjjS1vq */                     if(s[i] < 'a')
/* HbsW2Wb4R ily traian kJGjjS1vq */                         s[i] += 'z' - 'a' + 1;
/* HbsW2Wb4R ily traian kJGjjS1vq */                 }
/* HbsW2Wb4R ily traian kJGjjS1vq */             }
/* HbsW2Wb4R ily traian kJGjjS1vq */             i++;
/* HbsW2Wb4R ily traian kJGjjS1vq */         }
/* HbsW2Wb4R ily traian kJGjjS1vq */         cout << s;
/* HbsW2Wb4R ily traian kJGjjS1vq */     }
/* HbsW2Wb4R ily traian kJGjjS1vq */     return 0;
/* HbsW2Wb4R ily traian kJGjjS1vq */ }