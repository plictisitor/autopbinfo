/* EUu2H0xmt ily traian w34TFY8eC */ #include <algorithm>
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
/* EUu2H0xmt ily traian w34TFY8eC */ 
/* EUu2H0xmt ily traian w34TFY8eC */ using namespace std;
/* EUu2H0xmt ily traian w34TFY8eC */ 
/* EUu2H0xmt ily traian w34TFY8eC */ ifstream fin("numere6.in");
/* EUu2H0xmt ily traian w34TFY8eC */ ofstream fout("numere6.out");
/* EUu2H0xmt ily traian w34TFY8eC */ 
/* EUu2H0xmt ily traian w34TFY8eC */ int main()
/* EUu2H0xmt ily traian w34TFY8eC */ {
/* EUu2H0xmt ily traian w34TFY8eC */     int n , m;
/* EUu2H0xmt ily traian w34TFY8eC */     fin >> n >> m;
/* EUu2H0xmt ily traian w34TFY8eC */     int v[20];
/* EUu2H0xmt ily traian w34TFY8eC */     int p = 0;
/* EUu2H0xmt ily traian w34TFY8eC */     if(n==0)
/* EUu2H0xmt ily traian w34TFY8eC */         v[p]=0 , p++;
/* EUu2H0xmt ily traian w34TFY8eC */     if(m==0)
/* EUu2H0xmt ily traian w34TFY8eC */         v[p]=0 , p++;
/* EUu2H0xmt ily traian w34TFY8eC */     while(n)
/* EUu2H0xmt ily traian w34TFY8eC */     {
/* EUu2H0xmt ily traian w34TFY8eC */         v[p]=n%10;
/* EUu2H0xmt ily traian w34TFY8eC */         p++;
/* EUu2H0xmt ily traian w34TFY8eC */         n/=10;
/* EUu2H0xmt ily traian w34TFY8eC */     }
/* EUu2H0xmt ily traian w34TFY8eC */     while(m)
/* EUu2H0xmt ily traian w34TFY8eC */     {
/* EUu2H0xmt ily traian w34TFY8eC */         v[p]=m%10;
/* EUu2H0xmt ily traian w34TFY8eC */         p++;
/* EUu2H0xmt ily traian w34TFY8eC */         m/=10;
/* EUu2H0xmt ily traian w34TFY8eC */     }
/* EUu2H0xmt ily traian w34TFY8eC */     for(int i = 9 ; i >= 0 ; --i)
/* EUu2H0xmt ily traian w34TFY8eC */     {
/* EUu2H0xmt ily traian w34TFY8eC */         for(int j = 0 ; j < p ; ++j)
/* EUu2H0xmt ily traian w34TFY8eC */         {
/* EUu2H0xmt ily traian w34TFY8eC */             if(i==v[j])
/* EUu2H0xmt ily traian w34TFY8eC */             fout << i;
/* EUu2H0xmt ily traian w34TFY8eC */         }
/* EUu2H0xmt ily traian w34TFY8eC */     }
/* EUu2H0xmt ily traian w34TFY8eC */     return 0;
/* EUu2H0xmt ily traian w34TFY8eC */ }