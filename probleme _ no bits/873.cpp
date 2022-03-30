/* fcgpMoZLf ily traian VhdQDdRCR */ #include <algorithm>
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
/* fcgpMoZLf ily traian VhdQDdRCR */ 
/* fcgpMoZLf ily traian VhdQDdRCR */ using namespace std;
/* fcgpMoZLf ily traian VhdQDdRCR */ 
/* fcgpMoZLf ily traian VhdQDdRCR */ int a, b, c, ic = -1, sc = 0, i, v[1000000], difa, difb, lg, f[1000000];
/* fcgpMoZLf ily traian VhdQDdRCR */ bool gasit;
/* fcgpMoZLf ily traian VhdQDdRCR */ 
/* fcgpMoZLf ily traian VhdQDdRCR */ struct elem
/* fcgpMoZLf ily traian VhdQDdRCR */ {
/* fcgpMoZLf ily traian VhdQDdRCR */     int va, vb, dad, op;
/* fcgpMoZLf ily traian VhdQDdRCR */ };
/* fcgpMoZLf ily traian VhdQDdRCR */ elem C[1000000], now;
/* fcgpMoZLf ily traian VhdQDdRCR */ 
/* fcgpMoZLf ily traian VhdQDdRCR */ int main()
/* fcgpMoZLf ily traian VhdQDdRCR */ {
/* fcgpMoZLf ily traian VhdQDdRCR */     cin >> a >> b >> c;
/* fcgpMoZLf ily traian VhdQDdRCR */     ic++;
/* fcgpMoZLf ily traian VhdQDdRCR */     while (ic <= sc)
/* fcgpMoZLf ily traian VhdQDdRCR */     {
/* fcgpMoZLf ily traian VhdQDdRCR */         now = C[ic];
/* fcgpMoZLf ily traian VhdQDdRCR */         ic++;
/* fcgpMoZLf ily traian VhdQDdRCR */         if (!f[1000 * a + now.vb])
/* fcgpMoZLf ily traian VhdQDdRCR */         {
/* fcgpMoZLf ily traian VhdQDdRCR */             sc++;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].va = a;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].vb = now.vb;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].dad = ic - 1;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].op = 1;
/* fcgpMoZLf ily traian VhdQDdRCR */             f[1000 * a + now.vb] = 1;
/* fcgpMoZLf ily traian VhdQDdRCR */         }
/* fcgpMoZLf ily traian VhdQDdRCR */         if (C[sc].va == c || C[sc].vb == c)
/* fcgpMoZLf ily traian VhdQDdRCR */             break;
/* fcgpMoZLf ily traian VhdQDdRCR */         if (!f[1000 * now.va + b])
/* fcgpMoZLf ily traian VhdQDdRCR */         {
/* fcgpMoZLf ily traian VhdQDdRCR */             sc++;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].va = now.va;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].vb = b;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].dad = ic - 1;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].op = 2;
/* fcgpMoZLf ily traian VhdQDdRCR */             f[1000 * now.va + b] = 1;
/* fcgpMoZLf ily traian VhdQDdRCR */         }
/* fcgpMoZLf ily traian VhdQDdRCR */         if (C[sc].va == c || C[sc].vb == c)
/* fcgpMoZLf ily traian VhdQDdRCR */             break;
/* fcgpMoZLf ily traian VhdQDdRCR */         if (!f[now.vb])
/* fcgpMoZLf ily traian VhdQDdRCR */         {
/* fcgpMoZLf ily traian VhdQDdRCR */             sc++;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].va = 0;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].vb = now.vb;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].dad = ic - 1;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].op = 3;
/* fcgpMoZLf ily traian VhdQDdRCR */             sc++;
/* fcgpMoZLf ily traian VhdQDdRCR */             f[now.vb] = 1;
/* fcgpMoZLf ily traian VhdQDdRCR */         }
/* fcgpMoZLf ily traian VhdQDdRCR */         if (!f[1000 * now.va])
/* fcgpMoZLf ily traian VhdQDdRCR */         {
/* fcgpMoZLf ily traian VhdQDdRCR */             sc++;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].va = now.va;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].vb = 0;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].dad = ic - 1;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].op = 4;
/* fcgpMoZLf ily traian VhdQDdRCR */             f[1000 * now.va] = 1;
/* fcgpMoZLf ily traian VhdQDdRCR */         }
/* fcgpMoZLf ily traian VhdQDdRCR */         if (C[sc].va == c || C[sc].vb == c)
/* fcgpMoZLf ily traian VhdQDdRCR */             break;
/* fcgpMoZLf ily traian VhdQDdRCR */         if (now.va > b - now.vb)
/* fcgpMoZLf ily traian VhdQDdRCR */         {
/* fcgpMoZLf ily traian VhdQDdRCR */             difa = now.va - b + now.vb;
/* fcgpMoZLf ily traian VhdQDdRCR */             difb = b;
/* fcgpMoZLf ily traian VhdQDdRCR */         }
/* fcgpMoZLf ily traian VhdQDdRCR */         else
/* fcgpMoZLf ily traian VhdQDdRCR */         {
/* fcgpMoZLf ily traian VhdQDdRCR */             difa = 0;
/* fcgpMoZLf ily traian VhdQDdRCR */             difb = now.vb + now.va;
/* fcgpMoZLf ily traian VhdQDdRCR */         }
/* fcgpMoZLf ily traian VhdQDdRCR */         if (!f[1000 * difa + difb])
/* fcgpMoZLf ily traian VhdQDdRCR */         {
/* fcgpMoZLf ily traian VhdQDdRCR */             sc++;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].va = difa;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].vb = difb;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].dad = ic - 1;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].op = 5;
/* fcgpMoZLf ily traian VhdQDdRCR */             f[1000 * difa + difb] = 1;
/* fcgpMoZLf ily traian VhdQDdRCR */         }
/* fcgpMoZLf ily traian VhdQDdRCR */         if (C[sc].va == c || C[sc].vb == c)
/* fcgpMoZLf ily traian VhdQDdRCR */             break;
/* fcgpMoZLf ily traian VhdQDdRCR */         if (now.vb > a - now.va)
/* fcgpMoZLf ily traian VhdQDdRCR */         {
/* fcgpMoZLf ily traian VhdQDdRCR */             difb = now.vb - a + now.va;
/* fcgpMoZLf ily traian VhdQDdRCR */             difa = a;
/* fcgpMoZLf ily traian VhdQDdRCR */         }
/* fcgpMoZLf ily traian VhdQDdRCR */         else
/* fcgpMoZLf ily traian VhdQDdRCR */         {
/* fcgpMoZLf ily traian VhdQDdRCR */             difb = 0;
/* fcgpMoZLf ily traian VhdQDdRCR */             difa = now.va + now.vb;
/* fcgpMoZLf ily traian VhdQDdRCR */         }
/* fcgpMoZLf ily traian VhdQDdRCR */         if (!f[1000 * difa + difb])
/* fcgpMoZLf ily traian VhdQDdRCR */         {
/* fcgpMoZLf ily traian VhdQDdRCR */             sc++;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].va = difa;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].vb = difb;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].dad = ic - 1;
/* fcgpMoZLf ily traian VhdQDdRCR */             C[sc].op = 6;
/* fcgpMoZLf ily traian VhdQDdRCR */             f[1000 * difa + difb] = 1;
/* fcgpMoZLf ily traian VhdQDdRCR */         }
/* fcgpMoZLf ily traian VhdQDdRCR */         if (C[sc].va == c || C[sc].vb == c)
/* fcgpMoZLf ily traian VhdQDdRCR */             break;
/* fcgpMoZLf ily traian VhdQDdRCR */     }
/* fcgpMoZLf ily traian VhdQDdRCR */     i = sc;
/* fcgpMoZLf ily traian VhdQDdRCR */     while (i)
/* fcgpMoZLf ily traian VhdQDdRCR */     {
/* fcgpMoZLf ily traian VhdQDdRCR */         lg++;
/* fcgpMoZLf ily traian VhdQDdRCR */         v[lg] = C[i].op;
/* fcgpMoZLf ily traian VhdQDdRCR */         i = C[i].dad;
/* fcgpMoZLf ily traian VhdQDdRCR */     }
/* fcgpMoZLf ily traian VhdQDdRCR */     cout << lg << '\n';
/* fcgpMoZLf ily traian VhdQDdRCR */     for (i = lg; i >= 1; i--)
/* fcgpMoZLf ily traian VhdQDdRCR */     {
/* fcgpMoZLf ily traian VhdQDdRCR */         switch (v[i])
/* fcgpMoZLf ily traian VhdQDdRCR */         {
/* fcgpMoZLf ily traian VhdQDdRCR */         case 1:
/* fcgpMoZLf ily traian VhdQDdRCR */             cout << "R A\n";
/* fcgpMoZLf ily traian VhdQDdRCR */             break;
/* fcgpMoZLf ily traian VhdQDdRCR */         case 2:
/* fcgpMoZLf ily traian VhdQDdRCR */             cout << "R B\n";
/* fcgpMoZLf ily traian VhdQDdRCR */             break;
/* fcgpMoZLf ily traian VhdQDdRCR */         case 3:
/* fcgpMoZLf ily traian VhdQDdRCR */             cout << "A C\n";
/* fcgpMoZLf ily traian VhdQDdRCR */             break;
/* fcgpMoZLf ily traian VhdQDdRCR */         case 4:
/* fcgpMoZLf ily traian VhdQDdRCR */             cout << "B C\n";
/* fcgpMoZLf ily traian VhdQDdRCR */             break;
/* fcgpMoZLf ily traian VhdQDdRCR */         case 5:
/* fcgpMoZLf ily traian VhdQDdRCR */             cout << "A B\n";
/* fcgpMoZLf ily traian VhdQDdRCR */             break;
/* fcgpMoZLf ily traian VhdQDdRCR */         case 6:
/* fcgpMoZLf ily traian VhdQDdRCR */             cout << "B A\n";
/* fcgpMoZLf ily traian VhdQDdRCR */             break;
/* fcgpMoZLf ily traian VhdQDdRCR */         }
/* fcgpMoZLf ily traian VhdQDdRCR */     }
/* fcgpMoZLf ily traian VhdQDdRCR */     return 0;
/* fcgpMoZLf ily traian VhdQDdRCR */ }