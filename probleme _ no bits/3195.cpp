/* yyDoX75jN ily traian Ll8HCNerD */ #include <algorithm>
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
/* yyDoX75jN ily traian Ll8HCNerD */ using namespace std;
/* yyDoX75jN ily traian Ll8HCNerD */ 
/* yyDoX75jN ily traian Ll8HCNerD */ int n;
/* yyDoX75jN ily traian Ll8HCNerD */ char m[101][101];
/* yyDoX75jN ily traian Ll8HCNerD */ 
/* yyDoX75jN ily traian Ll8HCNerD */ bool N(char s[])
/* yyDoX75jN ily traian Ll8HCNerD */ {
/* yyDoX75jN ily traian Ll8HCNerD */     int i = 0;
/* yyDoX75jN ily traian Ll8HCNerD */     while(s[i])
/* yyDoX75jN ily traian Ll8HCNerD */     {
/* yyDoX75jN ily traian Ll8HCNerD */         if(s[i] == '.')
/* yyDoX75jN ily traian Ll8HCNerD */             return false;
/* yyDoX75jN ily traian Ll8HCNerD */         if(s[i] == '-')
/* yyDoX75jN ily traian Ll8HCNerD */             return false;
/* yyDoX75jN ily traian Ll8HCNerD */         i++;
/* yyDoX75jN ily traian Ll8HCNerD */     }
/* yyDoX75jN ily traian Ll8HCNerD */     return true;
/* yyDoX75jN ily traian Ll8HCNerD */ }
/* yyDoX75jN ily traian Ll8HCNerD */ 
/* yyDoX75jN ily traian Ll8HCNerD */ bool Z(char s[])
/* yyDoX75jN ily traian Ll8HCNerD */ {
/* yyDoX75jN ily traian Ll8HCNerD */     int i = 0;
/* yyDoX75jN ily traian Ll8HCNerD */     while(s[i])
/* yyDoX75jN ily traian Ll8HCNerD */     {
/* yyDoX75jN ily traian Ll8HCNerD */         if(s[i] == '.')
/* yyDoX75jN ily traian Ll8HCNerD */             return false;
/* yyDoX75jN ily traian Ll8HCNerD */         i++;
/* yyDoX75jN ily traian Ll8HCNerD */     }
/* yyDoX75jN ily traian Ll8HCNerD */     return true;
/* yyDoX75jN ily traian Ll8HCNerD */ }
/* yyDoX75jN ily traian Ll8HCNerD */ 
/* yyDoX75jN ily traian Ll8HCNerD */ bool Q(char s[])
/* yyDoX75jN ily traian Ll8HCNerD */ {
/* yyDoX75jN ily traian Ll8HCNerD */     int i = 0;
/* yyDoX75jN ily traian Ll8HCNerD */     while(s[i])
/* yyDoX75jN ily traian Ll8HCNerD */     {
/* yyDoX75jN ily traian Ll8HCNerD */         if(i > 1 && (s[i] == '.' && s[i-1] == '.'))
/* yyDoX75jN ily traian Ll8HCNerD */             return false;
/* yyDoX75jN ily traian Ll8HCNerD */         i++;
/* yyDoX75jN ily traian Ll8HCNerD */     }
/* yyDoX75jN ily traian Ll8HCNerD */     return true;
/* yyDoX75jN ily traian Ll8HCNerD */ }
/* yyDoX75jN ily traian Ll8HCNerD */ 
/* yyDoX75jN ily traian Ll8HCNerD */ bool R(char s[])
/* yyDoX75jN ily traian Ll8HCNerD */ {
/* yyDoX75jN ily traian Ll8HCNerD */     int i = 0;
/* yyDoX75jN ily traian Ll8HCNerD */     while(s[i])
/* yyDoX75jN ily traian Ll8HCNerD */     {
/* yyDoX75jN ily traian Ll8HCNerD */         if(i > 1 && s[i] == '.' && s[i-1] == '.')
/* yyDoX75jN ily traian Ll8HCNerD */             return true;
/* yyDoX75jN ily traian Ll8HCNerD */         i++;
/* yyDoX75jN ily traian Ll8HCNerD */     }
/* yyDoX75jN ily traian Ll8HCNerD */     return false;
/* yyDoX75jN ily traian Ll8HCNerD */ }
/* yyDoX75jN ily traian Ll8HCNerD */ 
/* yyDoX75jN ily traian Ll8HCNerD */ int main(){
/* yyDoX75jN ily traian Ll8HCNerD */     cin >> n;
/* yyDoX75jN ily traian Ll8HCNerD */     for(int i = 1; i <= n; ++i)
/* yyDoX75jN ily traian Ll8HCNerD */         cin >> m[i];
/* yyDoX75jN ily traian Ll8HCNerD */     bool ok = false;
/* yyDoX75jN ily traian Ll8HCNerD */     for(int i = 1; i <= n; ++i)
/* yyDoX75jN ily traian Ll8HCNerD */         if(N(m[i]))
/* yyDoX75jN ily traian Ll8HCNerD */             ok = true, cout << m[i] << ' ';
/* yyDoX75jN ily traian Ll8HCNerD */     if(!ok)
/* yyDoX75jN ily traian Ll8HCNerD */         cout << "Multime vida";
/* yyDoX75jN ily traian Ll8HCNerD */     cout << "\n";
/* yyDoX75jN ily traian Ll8HCNerD */     ok = false;
/* yyDoX75jN ily traian Ll8HCNerD */     for(int i = 1; i <= n; ++i)
/* yyDoX75jN ily traian Ll8HCNerD */         if(Z(m[i]))
/* yyDoX75jN ily traian Ll8HCNerD */             ok = true, cout << m[i] << ' ';
/* yyDoX75jN ily traian Ll8HCNerD */     if(!ok)
/* yyDoX75jN ily traian Ll8HCNerD */         cout << "Multime vida";
/* yyDoX75jN ily traian Ll8HCNerD */     cout << "\n";
/* yyDoX75jN ily traian Ll8HCNerD */     ok = false;
/* yyDoX75jN ily traian Ll8HCNerD */     for(int i = 1; i <= n; ++i)
/* yyDoX75jN ily traian Ll8HCNerD */         if(Q(m[i]))
/* yyDoX75jN ily traian Ll8HCNerD */             ok = true, cout << m[i] << ' ';
/* yyDoX75jN ily traian Ll8HCNerD */     if(!ok)
/* yyDoX75jN ily traian Ll8HCNerD */         cout << "Multime vida";
/* yyDoX75jN ily traian Ll8HCNerD */     cout << "\n";
/* yyDoX75jN ily traian Ll8HCNerD */     ok = false;
/* yyDoX75jN ily traian Ll8HCNerD */     for(int i = 1; i <= n; ++i)
/* yyDoX75jN ily traian Ll8HCNerD */         if(R(m[i]))
/* yyDoX75jN ily traian Ll8HCNerD */             ok = true, cout << m[i] << ' ';
/* yyDoX75jN ily traian Ll8HCNerD */     if(!ok)
/* yyDoX75jN ily traian Ll8HCNerD */         cout << "Multime vida";
/* yyDoX75jN ily traian Ll8HCNerD */     return 0;
/* yyDoX75jN ily traian Ll8HCNerD */ }