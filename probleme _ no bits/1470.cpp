/* ivd9yh0Fi ily traian Ux6sHhnlW */ #include <algorithm>
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
/* ivd9yh0Fi ily traian Ux6sHhnlW */ using namespace std;
/* ivd9yh0Fi ily traian Ux6sHhnlW */ 
/* ivd9yh0Fi ily traian Ux6sHhnlW */ ifstream cin("parcare.in");
/* ivd9yh0Fi ily traian Ux6sHhnlW */ ofstream cout("parcare.out");
/* ivd9yh0Fi ily traian Ux6sHhnlW */ 
/* ivd9yh0Fi ily traian Ux6sHhnlW */ int main()
/* ivd9yh0Fi ily traian Ux6sHhnlW */ {
/* ivd9yh0Fi ily traian Ux6sHhnlW */     int zi, li, hi, mi;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     cin >> zi >> li >> hi >> mi;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     int zp, lp, hp, mp;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     cin >> zp >> lp >> hp >> mp;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     int t;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     cin >> t;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     int a;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     cin >> a;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     int dz, dh, dm, sh, sm, taxa;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     if(abs(mp-mi) == 1 && a == 2)
/* ivd9yh0Fi ily traian Ux6sHhnlW */         cout << 0;
/* ivd9yh0Fi ily traian Ux6sHhnlW */ else
/* ivd9yh0Fi ily traian Ux6sHhnlW */ {
/* ivd9yh0Fi ily traian Ux6sHhnlW */     if(mi > mp)
/* ivd9yh0Fi ily traian Ux6sHhnlW */     {
/* ivd9yh0Fi ily traian Ux6sHhnlW */         dm = 60 - mi + mp;
/* ivd9yh0Fi ily traian Ux6sHhnlW */         hi++;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     }
/* ivd9yh0Fi ily traian Ux6sHhnlW */     else
/* ivd9yh0Fi ily traian Ux6sHhnlW */         dm = mp - mi;
/* ivd9yh0Fi ily traian Ux6sHhnlW */ 
/* ivd9yh0Fi ily traian Ux6sHhnlW */     if(hi > hp)
/* ivd9yh0Fi ily traian Ux6sHhnlW */     {
/* ivd9yh0Fi ily traian Ux6sHhnlW */         dh = 24 - hi + hp;
/* ivd9yh0Fi ily traian Ux6sHhnlW */         zi++;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     }
/* ivd9yh0Fi ily traian Ux6sHhnlW */     else
/* ivd9yh0Fi ily traian Ux6sHhnlW */         dh = hp - hi;
/* ivd9yh0Fi ily traian Ux6sHhnlW */ 
/* ivd9yh0Fi ily traian Ux6sHhnlW */     if(li == 2 && zi > 21 && zi > zp)
/* ivd9yh0Fi ily traian Ux6sHhnlW */             dz = 28 - zi + zp;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     if(li == 8 && zi > 24 && zi > zp)
/* ivd9yh0Fi ily traian Ux6sHhnlW */             dz = 31 - zi + zp;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     if(li % 2 == 1 && li < 8 && zi > 24 && zi > zp)
/* ivd9yh0Fi ily traian Ux6sHhnlW */             dz = 31 - zi + zp;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     if(li % 2 == 0 && li > 8 && zi > 24 && zi > zp)
/* ivd9yh0Fi ily traian Ux6sHhnlW */             dz = 31 - zi + zp;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     if(li % 2 == 0 && li != 2 && li < 8 && zi > 23 && zi > zp)
/* ivd9yh0Fi ily traian Ux6sHhnlW */             dz = 30 - zi + zp;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     if(li % 2 == 1 && li > 8 && zi > 23 && zi > zp)
/* ivd9yh0Fi ily traian Ux6sHhnlW */             dz = 30 - zi + zp;
/* ivd9yh0Fi ily traian Ux6sHhnlW */ 
/* ivd9yh0Fi ily traian Ux6sHhnlW */     if(zi <= zp)
/* ivd9yh0Fi ily traian Ux6sHhnlW */         dz = zp - zi;
/* ivd9yh0Fi ily traian Ux6sHhnlW */ 
/* ivd9yh0Fi ily traian Ux6sHhnlW */ 
/* ivd9yh0Fi ily traian Ux6sHhnlW */     //cout << dz << " " << dh << " " << dm << endl;
/* ivd9yh0Fi ily traian Ux6sHhnlW */ 
/* ivd9yh0Fi ily traian Ux6sHhnlW */     sh = dz * 24;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     sm = (sh + dh) * 60 + dm;
/* ivd9yh0Fi ily traian Ux6sHhnlW */ 
/* ivd9yh0Fi ily traian Ux6sHhnlW */     if(dz == 0 && dh == 0 && dm <= 15)
/* ivd9yh0Fi ily traian Ux6sHhnlW */         taxa = 0;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     if(sm % 60 == 0)
/* ivd9yh0Fi ily traian Ux6sHhnlW */         taxa = sm / 60 * t;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     else
/* ivd9yh0Fi ily traian Ux6sHhnlW */         taxa = (sm / 60 + 1) * t;
/* ivd9yh0Fi ily traian Ux6sHhnlW */ 
/* ivd9yh0Fi ily traian Ux6sHhnlW */ 
/* ivd9yh0Fi ily traian Ux6sHhnlW */     if(a == 1)
/* ivd9yh0Fi ily traian Ux6sHhnlW */         cout << sm;
/* ivd9yh0Fi ily traian Ux6sHhnlW */     else
/* ivd9yh0Fi ily traian Ux6sHhnlW */         cout << taxa;
/* ivd9yh0Fi ily traian Ux6sHhnlW */ }
/* ivd9yh0Fi ily traian Ux6sHhnlW */     return 0;
/* ivd9yh0Fi ily traian Ux6sHhnlW */ }