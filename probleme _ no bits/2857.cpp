/* rm535gl8N ily traian Ui0urjIuB */ #include <algorithm>
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
/* rm535gl8N ily traian Ui0urjIuB */ using namespace std;
/* rm535gl8N ily traian Ui0urjIuB */ 
/* rm535gl8N ily traian Ui0urjIuB */ struct perechi
/* rm535gl8N ily traian Ui0urjIuB */ {
/* rm535gl8N ily traian Ui0urjIuB */     char ch;
/* rm535gl8N ily traian Ui0urjIuB */     int val , bani;
/* rm535gl8N ily traian Ui0urjIuB */ }a[11];
/* rm535gl8N ily traian Ui0urjIuB */ 
/* rm535gl8N ily traian Ui0urjIuB */ bool litM(char c)
/* rm535gl8N ily traian Ui0urjIuB */ {
/* rm535gl8N ily traian Ui0urjIuB */     return c >= 'A' && c <= 'E';
/* rm535gl8N ily traian Ui0urjIuB */ }
/* rm535gl8N ily traian Ui0urjIuB */ 
/* rm535gl8N ily traian Ui0urjIuB */ int main()
/* rm535gl8N ily traian Ui0urjIuB */ {
/* rm535gl8N ily traian Ui0urjIuB */     a[1].ch = 'A' , a[1].val = 300 , a[1].bani = 0;
/* rm535gl8N ily traian Ui0urjIuB */     a[2].ch = 'B' , a[2].val = 300 , a[2].bani = 0;
/* rm535gl8N ily traian Ui0urjIuB */     a[3].ch = 'C' , a[3].val = 300 , a[3].bani = 0;
/* rm535gl8N ily traian Ui0urjIuB */     a[4].ch = 'D' , a[4].val = 300 , a[4].bani = 0;
/* rm535gl8N ily traian Ui0urjIuB */     a[5].ch = 'E' , a[5].val = 300 , a[5].bani = 0;
/* rm535gl8N ily traian Ui0urjIuB */     a[6].ch = 'a' , a[6].val = 300 , a[6].bani = 0;
/* rm535gl8N ily traian Ui0urjIuB */     a[7].ch = 'b' , a[7].val = 300 , a[7].bani = 0;
/* rm535gl8N ily traian Ui0urjIuB */     a[8].ch = 'c' , a[8].val = 300 , a[8].bani = 0;
/* rm535gl8N ily traian Ui0urjIuB */     a[9].ch = 'd' , a[9].val = 300 , a[9].bani = 0;
/* rm535gl8N ily traian Ui0urjIuB */     a[10].ch = 'e' , a[10].val = 300 , a[10].bani = 0;
/* rm535gl8N ily traian Ui0urjIuB */     int n;
/* rm535gl8N ily traian Ui0urjIuB */     cin >> n;
/* rm535gl8N ily traian Ui0urjIuB */     char s , t;
/* rm535gl8N ily traian Ui0urjIuB */     for(int i = 1 ; i <= n ; ++i)
/* rm535gl8N ily traian Ui0urjIuB */     {
/* rm535gl8N ily traian Ui0urjIuB */         cin >> s >> t;
/* rm535gl8N ily traian Ui0urjIuB */         int a1 , b;
/* rm535gl8N ily traian Ui0urjIuB */         if(litM(s))
/* rm535gl8N ily traian Ui0urjIuB */             a1 = s - 64;
/* rm535gl8N ily traian Ui0urjIuB */         else
/* rm535gl8N ily traian Ui0urjIuB */             a1 = s - 91;
/* rm535gl8N ily traian Ui0urjIuB */         if(litM(t))
/* rm535gl8N ily traian Ui0urjIuB */             b = t - 64;
/* rm535gl8N ily traian Ui0urjIuB */         else
/* rm535gl8N ily traian Ui0urjIuB */             b = t - 91;
/* rm535gl8N ily traian Ui0urjIuB */         a[a1].bani += a[b].val , a[a1].val += 50;
/* rm535gl8N ily traian Ui0urjIuB */         a[b].val -= 50;
/* rm535gl8N ily traian Ui0urjIuB */         if(a[a1].val > 1000)
/* rm535gl8N ily traian Ui0urjIuB */             a[a1].val = 1000;
/* rm535gl8N ily traian Ui0urjIuB */         if(a[b].val < 0)
/* rm535gl8N ily traian Ui0urjIuB */             a[b].val = 0;
/* rm535gl8N ily traian Ui0urjIuB */     }
/* rm535gl8N ily traian Ui0urjIuB */     for(int i = 1 ; i <= 10 ; ++i)
/* rm535gl8N ily traian Ui0urjIuB */     {
/* rm535gl8N ily traian Ui0urjIuB */         cout << a[i].ch << ' ' << a[i].bani << endl;
/* rm535gl8N ily traian Ui0urjIuB */     }
/* rm535gl8N ily traian Ui0urjIuB */     return 0;
/* rm535gl8N ily traian Ui0urjIuB */ }