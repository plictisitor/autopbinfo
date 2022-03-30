/* DwW1BqCEJ ily traian hGzl63Kpr */ #include <algorithm>
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
/* DwW1BqCEJ ily traian hGzl63Kpr */ 
/* DwW1BqCEJ ily traian hGzl63Kpr */ using namespace std;
/* DwW1BqCEJ ily traian hGzl63Kpr */ 
/* DwW1BqCEJ ily traian hGzl63Kpr */ ifstream fin("ecuatii.in");
/* DwW1BqCEJ ily traian hGzl63Kpr */ ofstream fout("ecuatii.out");
/* DwW1BqCEJ ily traian hGzl63Kpr */ 
/* DwW1BqCEJ ily traian hGzl63Kpr */ string s;
/* DwW1BqCEJ ily traian hGzl63Kpr */ int n, egal;
/* DwW1BqCEJ ily traian hGzl63Kpr */ 
/* DwW1BqCEJ ily traian hGzl63Kpr */ int a1 = 0, b1 = 0, a2 = 0, b2 = 0, temp = 0, a = 0, b = 0;
/* DwW1BqCEJ ily traian hGzl63Kpr */ double rez;
/* DwW1BqCEJ ily traian hGzl63Kpr */ char semn = '+';
/* DwW1BqCEJ ily traian hGzl63Kpr */ 
/* DwW1BqCEJ ily traian hGzl63Kpr */ int main()
/* DwW1BqCEJ ily traian hGzl63Kpr */ {
/* DwW1BqCEJ ily traian hGzl63Kpr */     fin >> n;
/* DwW1BqCEJ ily traian hGzl63Kpr */     while (n--)
/* DwW1BqCEJ ily traian hGzl63Kpr */     {
/* DwW1BqCEJ ily traian hGzl63Kpr */         fin >> s;
/* DwW1BqCEJ ily traian hGzl63Kpr */         egal = s.find('=', 0);
/* DwW1BqCEJ ily traian hGzl63Kpr */ 
/* DwW1BqCEJ ily traian hGzl63Kpr */         for(int i = 0; i <= egal; i++)
/* DwW1BqCEJ ily traian hGzl63Kpr */         {
/* DwW1BqCEJ ily traian hGzl63Kpr */             if(i == egal)
/* DwW1BqCEJ ily traian hGzl63Kpr */             {
/* DwW1BqCEJ ily traian hGzl63Kpr */                 if(semn == '-')
/* DwW1BqCEJ ily traian hGzl63Kpr */                     temp = 0 - temp;
/* DwW1BqCEJ ily traian hGzl63Kpr */                 if(isdigit(s[i - 1]))
/* DwW1BqCEJ ily traian hGzl63Kpr */                     b1 += temp;
/* DwW1BqCEJ ily traian hGzl63Kpr */                 else
/* DwW1BqCEJ ily traian hGzl63Kpr */                     if(temp == 0)
/* DwW1BqCEJ ily traian hGzl63Kpr */                     {
/* DwW1BqCEJ ily traian hGzl63Kpr */                         if(semn == '-')
/* DwW1BqCEJ ily traian hGzl63Kpr */                             a1 -= 1;
/* DwW1BqCEJ ily traian hGzl63Kpr */                         else
/* DwW1BqCEJ ily traian hGzl63Kpr */                             a1 += 1;
/* DwW1BqCEJ ily traian hGzl63Kpr */                     }
/* DwW1BqCEJ ily traian hGzl63Kpr */                     else
/* DwW1BqCEJ ily traian hGzl63Kpr */                         a1 += temp;
/* DwW1BqCEJ ily traian hGzl63Kpr */                 temp = 0;
/* DwW1BqCEJ ily traian hGzl63Kpr */                 break;
/* DwW1BqCEJ ily traian hGzl63Kpr */             }
/* DwW1BqCEJ ily traian hGzl63Kpr */ 
/* DwW1BqCEJ ily traian hGzl63Kpr */             if(s[i] == '+' && i != 0)
/* DwW1BqCEJ ily traian hGzl63Kpr */             {
/* DwW1BqCEJ ily traian hGzl63Kpr */                 if(semn == '-')
/* DwW1BqCEJ ily traian hGzl63Kpr */                     temp = 0 - temp;
/* DwW1BqCEJ ily traian hGzl63Kpr */                 if(isdigit(s[i - 1]))
/* DwW1BqCEJ ily traian hGzl63Kpr */                     b1 += temp;
/* DwW1BqCEJ ily traian hGzl63Kpr */                 else
/* DwW1BqCEJ ily traian hGzl63Kpr */                     if(temp == 0)
/* DwW1BqCEJ ily traian hGzl63Kpr */                     {
/* DwW1BqCEJ ily traian hGzl63Kpr */                         if(semn == '-')
/* DwW1BqCEJ ily traian hGzl63Kpr */                             a1 -= 1;
/* DwW1BqCEJ ily traian hGzl63Kpr */                         else
/* DwW1BqCEJ ily traian hGzl63Kpr */                             a1 += 1;
/* DwW1BqCEJ ily traian hGzl63Kpr */                     }
/* DwW1BqCEJ ily traian hGzl63Kpr */                     else
/* DwW1BqCEJ ily traian hGzl63Kpr */                         a1 += temp;
/* DwW1BqCEJ ily traian hGzl63Kpr */                 semn = '+';
/* DwW1BqCEJ ily traian hGzl63Kpr */                 temp = 0;
/* DwW1BqCEJ ily traian hGzl63Kpr */             }
/* DwW1BqCEJ ily traian hGzl63Kpr */ 
/* DwW1BqCEJ ily traian hGzl63Kpr */             if(s[i] == '-')
/* DwW1BqCEJ ily traian hGzl63Kpr */             {
/* DwW1BqCEJ ily traian hGzl63Kpr */                 if(semn == '-')
/* DwW1BqCEJ ily traian hGzl63Kpr */                     temp = 0 - temp;
/* DwW1BqCEJ ily traian hGzl63Kpr */                 if(i == 0)
/* DwW1BqCEJ ily traian hGzl63Kpr */                 {
/* DwW1BqCEJ ily traian hGzl63Kpr */                     semn = '-';
/* DwW1BqCEJ ily traian hGzl63Kpr */                     continue;
/* DwW1BqCEJ ily traian hGzl63Kpr */                 }
/* DwW1BqCEJ ily traian hGzl63Kpr */                 if(isdigit(s[i - 1]))
/* DwW1BqCEJ ily traian hGzl63Kpr */                     b1 += temp;
/* DwW1BqCEJ ily traian hGzl63Kpr */                 else
/* DwW1BqCEJ ily traian hGzl63Kpr */                     if(temp == 0)
/* DwW1BqCEJ ily traian hGzl63Kpr */                     {
/* DwW1BqCEJ ily traian hGzl63Kpr */                         if(semn == '-')
/* DwW1BqCEJ ily traian hGzl63Kpr */                             a1 -= 1;
/* DwW1BqCEJ ily traian hGzl63Kpr */                         else
/* DwW1BqCEJ ily traian hGzl63Kpr */                             a1 += 1;
/* DwW1BqCEJ ily traian hGzl63Kpr */                     }
/* DwW1BqCEJ ily traian hGzl63Kpr */                     else
/* DwW1BqCEJ ily traian hGzl63Kpr */                         a1 += temp;
/* DwW1BqCEJ ily traian hGzl63Kpr */                 semn = '-';
/* DwW1BqCEJ ily traian hGzl63Kpr */                 temp = 0;
/* DwW1BqCEJ ily traian hGzl63Kpr */             }
/* DwW1BqCEJ ily traian hGzl63Kpr */ 
/* DwW1BqCEJ ily traian hGzl63Kpr */             if(isdigit(s[i]))
/* DwW1BqCEJ ily traian hGzl63Kpr */             {
/* DwW1BqCEJ ily traian hGzl63Kpr */                 temp *= 10;
/* DwW1BqCEJ ily traian hGzl63Kpr */                 temp += int(s[i]) - 48;
/* DwW1BqCEJ ily traian hGzl63Kpr */             }
/* DwW1BqCEJ ily traian hGzl63Kpr */     }
/* DwW1BqCEJ ily traian hGzl63Kpr */     if(s.find('x' , 0) > egal)
/* DwW1BqCEJ ily traian hGzl63Kpr */         a1 = 0;
/* DwW1BqCEJ ily traian hGzl63Kpr */ 
/* DwW1BqCEJ ily traian hGzl63Kpr */     temp = 0;
/* DwW1BqCEJ ily traian hGzl63Kpr */     semn = '+';
/* DwW1BqCEJ ily traian hGzl63Kpr */ 
/* DwW1BqCEJ ily traian hGzl63Kpr */     for(int i = egal + 1; i <= s.length();i++)
/* DwW1BqCEJ ily traian hGzl63Kpr */     {
/* DwW1BqCEJ ily traian hGzl63Kpr */         if(i == s.length())
/* DwW1BqCEJ ily traian hGzl63Kpr */         {
/* DwW1BqCEJ ily traian hGzl63Kpr */             if(semn == '-')
/* DwW1BqCEJ ily traian hGzl63Kpr */                 temp = 0 - temp;
/* DwW1BqCEJ ily traian hGzl63Kpr */             if(isdigit(s[i - 1]))
/* DwW1BqCEJ ily traian hGzl63Kpr */                 b2 += temp;
/* DwW1BqCEJ ily traian hGzl63Kpr */             else
/* DwW1BqCEJ ily traian hGzl63Kpr */                 if(temp == 0)
/* DwW1BqCEJ ily traian hGzl63Kpr */                 {
/* DwW1BqCEJ ily traian hGzl63Kpr */                     if(semn == '-')
/* DwW1BqCEJ ily traian hGzl63Kpr */                         a2 -= 1;
/* DwW1BqCEJ ily traian hGzl63Kpr */                     else
/* DwW1BqCEJ ily traian hGzl63Kpr */                         a2 += 1;
/* DwW1BqCEJ ily traian hGzl63Kpr */                 }
/* DwW1BqCEJ ily traian hGzl63Kpr */                 else
/* DwW1BqCEJ ily traian hGzl63Kpr */                     a2 += temp;
/* DwW1BqCEJ ily traian hGzl63Kpr */             temp = 0;
/* DwW1BqCEJ ily traian hGzl63Kpr */             break;
/* DwW1BqCEJ ily traian hGzl63Kpr */         }
/* DwW1BqCEJ ily traian hGzl63Kpr */         if(s[i] == '+' && i != egal + 1)
/* DwW1BqCEJ ily traian hGzl63Kpr */         {
/* DwW1BqCEJ ily traian hGzl63Kpr */             if(semn == '-')
/* DwW1BqCEJ ily traian hGzl63Kpr */                 temp = 0 - temp;
/* DwW1BqCEJ ily traian hGzl63Kpr */                 if(isdigit(s[i - 1]))
/* DwW1BqCEJ ily traian hGzl63Kpr */                     b2 += temp;
/* DwW1BqCEJ ily traian hGzl63Kpr */                 else
/* DwW1BqCEJ ily traian hGzl63Kpr */                     if(temp == 0)
/* DwW1BqCEJ ily traian hGzl63Kpr */                     {
/* DwW1BqCEJ ily traian hGzl63Kpr */                         if(semn == '-')
/* DwW1BqCEJ ily traian hGzl63Kpr */                             a2 -= 1;
/* DwW1BqCEJ ily traian hGzl63Kpr */                         else
/* DwW1BqCEJ ily traian hGzl63Kpr */                             a2 += 1;
/* DwW1BqCEJ ily traian hGzl63Kpr */                     }
/* DwW1BqCEJ ily traian hGzl63Kpr */                     else
/* DwW1BqCEJ ily traian hGzl63Kpr */                         a2 += temp;
/* DwW1BqCEJ ily traian hGzl63Kpr */             semn = '+';
/* DwW1BqCEJ ily traian hGzl63Kpr */             temp = 0;
/* DwW1BqCEJ ily traian hGzl63Kpr */         }
/* DwW1BqCEJ ily traian hGzl63Kpr */ 
/* DwW1BqCEJ ily traian hGzl63Kpr */         if(s[i] == '-')
/* DwW1BqCEJ ily traian hGzl63Kpr */         {
/* DwW1BqCEJ ily traian hGzl63Kpr */             if(semn == '-')
/* DwW1BqCEJ ily traian hGzl63Kpr */                 temp = 0 - temp;
/* DwW1BqCEJ ily traian hGzl63Kpr */             if(i == egal + 1)
/* DwW1BqCEJ ily traian hGzl63Kpr */             {
/* DwW1BqCEJ ily traian hGzl63Kpr */                 semn = '-';
/* DwW1BqCEJ ily traian hGzl63Kpr */                 continue;
/* DwW1BqCEJ ily traian hGzl63Kpr */             }
/* DwW1BqCEJ ily traian hGzl63Kpr */             if(isdigit(s[i - 1]))
/* DwW1BqCEJ ily traian hGzl63Kpr */                 b2 += temp;
/* DwW1BqCEJ ily traian hGzl63Kpr */             else
/* DwW1BqCEJ ily traian hGzl63Kpr */                 if(temp == 0)
/* DwW1BqCEJ ily traian hGzl63Kpr */                 {
/* DwW1BqCEJ ily traian hGzl63Kpr */                     if(semn == '-')
/* DwW1BqCEJ ily traian hGzl63Kpr */                         a2 -= 1;
/* DwW1BqCEJ ily traian hGzl63Kpr */                     else
/* DwW1BqCEJ ily traian hGzl63Kpr */                         a2 += 1;
/* DwW1BqCEJ ily traian hGzl63Kpr */                 }
/* DwW1BqCEJ ily traian hGzl63Kpr */                 else
/* DwW1BqCEJ ily traian hGzl63Kpr */                     a2 += temp;
/* DwW1BqCEJ ily traian hGzl63Kpr */                 semn = '-';
/* DwW1BqCEJ ily traian hGzl63Kpr */                 temp = 0;
/* DwW1BqCEJ ily traian hGzl63Kpr */             }
/* DwW1BqCEJ ily traian hGzl63Kpr */             if(isdigit(s[i]))
/* DwW1BqCEJ ily traian hGzl63Kpr */             {
/* DwW1BqCEJ ily traian hGzl63Kpr */                 temp *= 10;
/* DwW1BqCEJ ily traian hGzl63Kpr */                 temp += int(s[i]) - 48;
/* DwW1BqCEJ ily traian hGzl63Kpr */             }
/* DwW1BqCEJ ily traian hGzl63Kpr */         }
/* DwW1BqCEJ ily traian hGzl63Kpr */ 
/* DwW1BqCEJ ily traian hGzl63Kpr */         if(s.find('x' , egal) > s.length() - 1)
/* DwW1BqCEJ ily traian hGzl63Kpr */             a2 = 0;
/* DwW1BqCEJ ily traian hGzl63Kpr */ 
/* DwW1BqCEJ ily traian hGzl63Kpr */         a = a2 - a1;
/* DwW1BqCEJ ily traian hGzl63Kpr */         b = b1 - b2;
/* DwW1BqCEJ ily traian hGzl63Kpr */         if(a == 0 && b == 0)
/* DwW1BqCEJ ily traian hGzl63Kpr */             fout << "infinit" << '\n';
/* DwW1BqCEJ ily traian hGzl63Kpr */             else
/* DwW1BqCEJ ily traian hGzl63Kpr */             if(a == 0)
/* DwW1BqCEJ ily traian hGzl63Kpr */                 fout << "imposibil" << '\n';
/* DwW1BqCEJ ily traian hGzl63Kpr */             else
/* DwW1BqCEJ ily traian hGzl63Kpr */                 if(b == 0)
/* DwW1BqCEJ ily traian hGzl63Kpr */                     fout << "0" << '\n';
/* DwW1BqCEJ ily traian hGzl63Kpr */                 else
/* DwW1BqCEJ ily traian hGzl63Kpr */                 {
/* DwW1BqCEJ ily traian hGzl63Kpr */                     rez = (1.0 * b) / (1.0 * a);
/* DwW1BqCEJ ily traian hGzl63Kpr */                     fout << fixed << setprecision(4) << rez << '\n';
/* DwW1BqCEJ ily traian hGzl63Kpr */                 }
/* DwW1BqCEJ ily traian hGzl63Kpr */ 
/* DwW1BqCEJ ily traian hGzl63Kpr */         a1 = 0;
/* DwW1BqCEJ ily traian hGzl63Kpr */         a2 = 0;
/* DwW1BqCEJ ily traian hGzl63Kpr */         b1 = 0;
/* DwW1BqCEJ ily traian hGzl63Kpr */         b2 = 0;
/* DwW1BqCEJ ily traian hGzl63Kpr */         semn = '+';
/* DwW1BqCEJ ily traian hGzl63Kpr */         temp = 0;
/* DwW1BqCEJ ily traian hGzl63Kpr */         b = 0;
/* DwW1BqCEJ ily traian hGzl63Kpr */         a = 0;
/* DwW1BqCEJ ily traian hGzl63Kpr */     }
/* DwW1BqCEJ ily traian hGzl63Kpr */ 
/* DwW1BqCEJ ily traian hGzl63Kpr */     return 0;
/* DwW1BqCEJ ily traian hGzl63Kpr */ }