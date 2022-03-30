/* EpCtWxWsO ily traian 8yVyUWoRk */ #include <algorithm>
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
/* EpCtWxWsO ily traian 8yVyUWoRk */ using namespace std;
/* EpCtWxWsO ily traian 8yVyUWoRk */ 
/* EpCtWxWsO ily traian 8yVyUWoRk */ ifstream fin("intersectiesegmente.in");
/* EpCtWxWsO ily traian 8yVyUWoRk */ ofstream fout("intersectiesegmente.out");
/* EpCtWxWsO ily traian 8yVyUWoRk */ 
/* EpCtWxWsO ily traian 8yVyUWoRk */ int X1, Y1, X2, Y2, X3, Y3, X4, Y4, d1, d2, d3, d4;
/* EpCtWxWsO ily traian 8yVyUWoRk */ int det(int X1, int Y1, int X2, int Y2, int X3, int Y3)
/* EpCtWxWsO ily traian 8yVyUWoRk */ {
/* EpCtWxWsO ily traian 8yVyUWoRk */     return (X2-X1)*(Y3-Y1) - (X3-X1)*(Y2-Y1);
/* EpCtWxWsO ily traian 8yVyUWoRk */ }
/* EpCtWxWsO ily traian 8yVyUWoRk */ 
/* EpCtWxWsO ily traian 8yVyUWoRk */ int pctsegm(int x1, int y1, int x2, int y2, int x3, int y3)
/* EpCtWxWsO ily traian 8yVyUWoRk */ {
/* EpCtWxWsO ily traian 8yVyUWoRk */     int d = det(x1, y1, x2, y2, x3, y3);
/* EpCtWxWsO ily traian 8yVyUWoRk */     if (d!=0)
/* EpCtWxWsO ily traian 8yVyUWoRk */         return 0;
/* EpCtWxWsO ily traian 8yVyUWoRk */     if (x1 == x3 && y1 == y3)
/* EpCtWxWsO ily traian 8yVyUWoRk */         return 1;
/* EpCtWxWsO ily traian 8yVyUWoRk */     if (x2 == x3 && y2 == y3)
/* EpCtWxWsO ily traian 8yVyUWoRk */         return 1;
/* EpCtWxWsO ily traian 8yVyUWoRk */     if ((x3-x1) * (x3-x2) < 0 || (y3-y1) * (y3-y2) < 0)
/* EpCtWxWsO ily traian 8yVyUWoRk */         return 1;
/* EpCtWxWsO ily traian 8yVyUWoRk */     else
/* EpCtWxWsO ily traian 8yVyUWoRk */         return 0;
/* EpCtWxWsO ily traian 8yVyUWoRk */ }
/* EpCtWxWsO ily traian 8yVyUWoRk */ 
/* EpCtWxWsO ily traian 8yVyUWoRk */ int main()
/* EpCtWxWsO ily traian 8yVyUWoRk */ {
/* EpCtWxWsO ily traian 8yVyUWoRk */     fin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
/* EpCtWxWsO ily traian 8yVyUWoRk */     if (pctsegm(X1, Y1, X2, Y2, X3, Y3))
/* EpCtWxWsO ily traian 8yVyUWoRk */         fout << "DA";
/* EpCtWxWsO ily traian 8yVyUWoRk */     else
/* EpCtWxWsO ily traian 8yVyUWoRk */     if (pctsegm(X1, Y1, X2, Y2, X4, Y4))
/* EpCtWxWsO ily traian 8yVyUWoRk */         fout << "DA";
/* EpCtWxWsO ily traian 8yVyUWoRk */     else
/* EpCtWxWsO ily traian 8yVyUWoRk */     if (pctsegm(X3, Y3, X4, Y4, X1, Y1))
/* EpCtWxWsO ily traian 8yVyUWoRk */         fout << "DA";
/* EpCtWxWsO ily traian 8yVyUWoRk */     else
/* EpCtWxWsO ily traian 8yVyUWoRk */     if (pctsegm(X3, Y3, X4, Y4, X2, Y2))
/* EpCtWxWsO ily traian 8yVyUWoRk */         fout << "DA";
/* EpCtWxWsO ily traian 8yVyUWoRk */     else
/* EpCtWxWsO ily traian 8yVyUWoRk */     {
/* EpCtWxWsO ily traian 8yVyUWoRk */         d1 = det(X3, Y3, X4, Y4, X1, Y1);
/* EpCtWxWsO ily traian 8yVyUWoRk */         d2 = det(X3, Y3, X4, Y4, X2, Y2);
/* EpCtWxWsO ily traian 8yVyUWoRk */         d3 = det(X1, Y1, X2, Y2, X3, Y3);
/* EpCtWxWsO ily traian 8yVyUWoRk */         d4 = det(X1, Y1, X2, Y2, X4, Y4);
/* EpCtWxWsO ily traian 8yVyUWoRk */ 
/* EpCtWxWsO ily traian 8yVyUWoRk */         if (d1 * d2 < 0 && d3 * d4 < 0)
/* EpCtWxWsO ily traian 8yVyUWoRk */             fout << "DA";
/* EpCtWxWsO ily traian 8yVyUWoRk */         else
/* EpCtWxWsO ily traian 8yVyUWoRk */             fout << "NU";
/* EpCtWxWsO ily traian 8yVyUWoRk */     }
/* EpCtWxWsO ily traian 8yVyUWoRk */ }