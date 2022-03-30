/* B1RKxT1ab ily traian j4fHn2SzL */ #include <algorithm>
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
/* B1RKxT1ab ily traian j4fHn2SzL */ using namespace std;
/* B1RKxT1ab ily traian j4fHn2SzL */ 
/* B1RKxT1ab ily traian j4fHn2SzL */ int x = 1 , zi ,  luna , an , luni[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
/* B1RKxT1ab ily traian j4fHn2SzL */ 
/* B1RKxT1ab ily traian j4fHn2SzL */ int bisect(int an)
/* B1RKxT1ab ily traian j4fHn2SzL */ {
/* B1RKxT1ab ily traian j4fHn2SzL */     return (an % 400) == 0 || (an % 4 == 0  &&  an % 100 != 0);
/* B1RKxT1ab ily traian j4fHn2SzL */ }
/* B1RKxT1ab ily traian j4fHn2SzL */ 
/* B1RKxT1ab ily traian j4fHn2SzL */ int main()
/* B1RKxT1ab ily traian j4fHn2SzL */ {
/* B1RKxT1ab ily traian j4fHn2SzL */     cin >> zi >> luna >> an;
/* B1RKxT1ab ily traian j4fHn2SzL */     for(int a = 1900 ; a < an ; a++)
/* B1RKxT1ab ily traian j4fHn2SzL */     {
/* B1RKxT1ab ily traian j4fHn2SzL */         if(bisect(a))x += 366;
/* B1RKxT1ab ily traian j4fHn2SzL */         else x += 365;
/* B1RKxT1ab ily traian j4fHn2SzL */     }
/* B1RKxT1ab ily traian j4fHn2SzL */     for(int l = 1 ; l < luna ; l++)
/* B1RKxT1ab ily traian j4fHn2SzL */     {
/* B1RKxT1ab ily traian j4fHn2SzL */         if(bisect(an) && l == 2) x += 29;
/* B1RKxT1ab ily traian j4fHn2SzL */         else x += luni[l];
/* B1RKxT1ab ily traian j4fHn2SzL */     }
/* B1RKxT1ab ily traian j4fHn2SzL */     x = (x + zi - 1) % 7;
/* B1RKxT1ab ily traian j4fHn2SzL */     if(x == 0) cout << "Duminica";
/* B1RKxT1ab ily traian j4fHn2SzL */     else if (x == 1) cout << "Luni";
/* B1RKxT1ab ily traian j4fHn2SzL */     else if (x == 2) cout << "Marti";
/* B1RKxT1ab ily traian j4fHn2SzL */     else if (x == 3) cout << "Miercuri";
/* B1RKxT1ab ily traian j4fHn2SzL */     else if (x == 4) cout << "Joi";
/* B1RKxT1ab ily traian j4fHn2SzL */     else if (x == 5) cout << "Vineri";
/* B1RKxT1ab ily traian j4fHn2SzL */     else if (x == 6) cout << "Sambata";
/* B1RKxT1ab ily traian j4fHn2SzL */ }