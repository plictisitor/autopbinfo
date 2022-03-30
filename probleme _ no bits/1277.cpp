/* n9rPW1fxt ily traian B3ssQTXAr */ #include <algorithm>
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
/* n9rPW1fxt ily traian B3ssQTXAr */ using namespace std;
/* n9rPW1fxt ily traian B3ssQTXAr */ 
/* n9rPW1fxt ily traian B3ssQTXAr */ ifstream cin("produscartezian1.in");
/* n9rPW1fxt ily traian B3ssQTXAr */ ofstream cout("produscartezian1.out");
/* n9rPW1fxt ily traian B3ssQTXAr */ 
/* n9rPW1fxt ily traian B3ssQTXAr */ int n , m , x[10];
/* n9rPW1fxt ily traian B3ssQTXAr */ 
/* n9rPW1fxt ily traian B3ssQTXAr */ void afisare()
/* n9rPW1fxt ily traian B3ssQTXAr */ {
/* n9rPW1fxt ily traian B3ssQTXAr */     for(int i = 1 ; i <= m ; i++)
/* n9rPW1fxt ily traian B3ssQTXAr */         cout << x[i] << ' ';
/* n9rPW1fxt ily traian B3ssQTXAr */     cout << '\n';
/* n9rPW1fxt ily traian B3ssQTXAr */ }
/* n9rPW1fxt ily traian B3ssQTXAr */ 
/* n9rPW1fxt ily traian B3ssQTXAr */ void back(int k)
/* n9rPW1fxt ily traian B3ssQTXAr */ {
/* n9rPW1fxt ily traian B3ssQTXAr */     if(k == m + 1)
/* n9rPW1fxt ily traian B3ssQTXAr */     {
/* n9rPW1fxt ily traian B3ssQTXAr */         afisare();
/* n9rPW1fxt ily traian B3ssQTXAr */         return ;
/* n9rPW1fxt ily traian B3ssQTXAr */     }
/* n9rPW1fxt ily traian B3ssQTXAr */     else
/* n9rPW1fxt ily traian B3ssQTXAr */     {
/* n9rPW1fxt ily traian B3ssQTXAr */         x[k] = 0;
/* n9rPW1fxt ily traian B3ssQTXAr */         while(x[k] < n)
/* n9rPW1fxt ily traian B3ssQTXAr */         {
/* n9rPW1fxt ily traian B3ssQTXAr */             x[k]++;
/* n9rPW1fxt ily traian B3ssQTXAr */             back(k + 1);
/* n9rPW1fxt ily traian B3ssQTXAr */         }
/* n9rPW1fxt ily traian B3ssQTXAr */     }
/* n9rPW1fxt ily traian B3ssQTXAr */ }
/* n9rPW1fxt ily traian B3ssQTXAr */ 
/* n9rPW1fxt ily traian B3ssQTXAr */ int main()
/* n9rPW1fxt ily traian B3ssQTXAr */ {
/* n9rPW1fxt ily traian B3ssQTXAr */     cin >> n >> m;
/* n9rPW1fxt ily traian B3ssQTXAr */     back(1);
/* n9rPW1fxt ily traian B3ssQTXAr */ }