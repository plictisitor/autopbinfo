/* HtfBCuok4 ily traian HeOJ9UBtd */ #include <algorithm>
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
/* HtfBCuok4 ily traian HeOJ9UBtd */ 
/* HtfBCuok4 ily traian HeOJ9UBtd */ 
/* HtfBCuok4 ily traian HeOJ9UBtd */ using namespace std;
/* HtfBCuok4 ily traian HeOJ9UBtd */ struct poz
/* HtfBCuok4 ily traian HeOJ9UBtd */ {
/* HtfBCuok4 ily traian HeOJ9UBtd */     char val[25];
/* HtfBCuok4 ily traian HeOJ9UBtd */     int nr;
/* HtfBCuok4 ily traian HeOJ9UBtd */ }t[300001];
/* HtfBCuok4 ily traian HeOJ9UBtd */ 
/* HtfBCuok4 ily traian HeOJ9UBtd */ int voc(char s)
/* HtfBCuok4 ily traian HeOJ9UBtd */ {
/* HtfBCuok4 ily traian HeOJ9UBtd */     if( s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' ||  s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U') return 1;
/* HtfBCuok4 ily traian HeOJ9UBtd */     else return 0;
/* HtfBCuok4 ily traian HeOJ9UBtd */ }
/* HtfBCuok4 ily traian HeOJ9UBtd */ 
/* HtfBCuok4 ily traian HeOJ9UBtd */ int comp(char a , char b)
/* HtfBCuok4 ily traian HeOJ9UBtd */ {
/* HtfBCuok4 ily traian HeOJ9UBtd */     if(voc(a) && voc(b)) return 1;
/* HtfBCuok4 ily traian HeOJ9UBtd */     if(!voc(a) && !voc(b)) return -1;
/* HtfBCuok4 ily traian HeOJ9UBtd */     else return 0;
/* HtfBCuok4 ily traian HeOJ9UBtd */ }
/* HtfBCuok4 ily traian HeOJ9UBtd */ 
/* HtfBCuok4 ily traian HeOJ9UBtd */ int compara(poz a , poz b)
/* HtfBCuok4 ily traian HeOJ9UBtd */ {
/* HtfBCuok4 ily traian HeOJ9UBtd */     if(a.nr > b.nr) return 1;
/* HtfBCuok4 ily traian HeOJ9UBtd */     else if(a.nr == b.nr && strcmp(a.val , b.val) > 0) return 1;
/* HtfBCuok4 ily traian HeOJ9UBtd */     else return 0;
/* HtfBCuok4 ily traian HeOJ9UBtd */ }
/* HtfBCuok4 ily traian HeOJ9UBtd */ int main()
/* HtfBCuok4 ily traian HeOJ9UBtd */ {
/* HtfBCuok4 ily traian HeOJ9UBtd */     int n;
/* HtfBCuok4 ily traian HeOJ9UBtd */     char s[300001][25];
/* HtfBCuok4 ily traian HeOJ9UBtd */     cin >> n;
/* HtfBCuok4 ily traian HeOJ9UBtd */     for(int i = 1 ; i <= n ; i++)
/* HtfBCuok4 ily traian HeOJ9UBtd */     {
/* HtfBCuok4 ily traian HeOJ9UBtd */         cin >> s[i];
/* HtfBCuok4 ily traian HeOJ9UBtd */         int j = 1 , sum = 0;
/* HtfBCuok4 ily traian HeOJ9UBtd */         while(s[i][j] != '\0')
/* HtfBCuok4 ily traian HeOJ9UBtd */         {
/* HtfBCuok4 ily traian HeOJ9UBtd */             sum += comp(s[i][j - 1] , s[i][j]);
/* HtfBCuok4 ily traian HeOJ9UBtd */             j++;
/* HtfBCuok4 ily traian HeOJ9UBtd */         }
/* HtfBCuok4 ily traian HeOJ9UBtd */         strcpy(t[i].val , s[i]);
/* HtfBCuok4 ily traian HeOJ9UBtd */         t[i].nr = sum;
/* HtfBCuok4 ily traian HeOJ9UBtd */     }
/* HtfBCuok4 ily traian HeOJ9UBtd */     sort(t+1 , t + n + 1 , compara);
/* HtfBCuok4 ily traian HeOJ9UBtd */     for(int i = n ; i > 0 ; i--)
/* HtfBCuok4 ily traian HeOJ9UBtd */         cout << t[i].val << '\n';
/* HtfBCuok4 ily traian HeOJ9UBtd */ }