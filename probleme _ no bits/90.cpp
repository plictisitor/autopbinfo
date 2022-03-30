/* D6MkApKDx ily traian AHUxbwc1J */ #include <algorithm>
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
/* D6MkApKDx ily traian AHUxbwc1J */ 
/* D6MkApKDx ily traian AHUxbwc1J */ using namespace std;
/* D6MkApKDx ily traian AHUxbwc1J */ 
/* D6MkApKDx ily traian AHUxbwc1J */ ifstream cin("vocmax.in");
/* D6MkApKDx ily traian AHUxbwc1J */ ofstream cout("vocmax.out");
/* D6MkApKDx ily traian AHUxbwc1J */ 
/* D6MkApKDx ily traian AHUxbwc1J */ int main()
/* D6MkApKDx ily traian AHUxbwc1J */ {
/* D6MkApKDx ily traian AHUxbwc1J */     char a[101][251];
/* D6MkApKDx ily traian AHUxbwc1J */     int n;
/* D6MkApKDx ily traian AHUxbwc1J */     cin >> n;
/* D6MkApKDx ily traian AHUxbwc1J */     int max=0 , indice=0;
/* D6MkApKDx ily traian AHUxbwc1J */     for(int i = 0 ; i <= n ; ++i)
/* D6MkApKDx ily traian AHUxbwc1J */     {
/* D6MkApKDx ily traian AHUxbwc1J */         cin.getline(a[i] , 255);
/* D6MkApKDx ily traian AHUxbwc1J */         int cnt=0;
/* D6MkApKDx ily traian AHUxbwc1J */         int j = 0;
/* D6MkApKDx ily traian AHUxbwc1J */         while(a[i][j]!='\0')
/* D6MkApKDx ily traian AHUxbwc1J */         {
/* D6MkApKDx ily traian AHUxbwc1J */             if(strchr("aeiou" , a[i][j]))
/* D6MkApKDx ily traian AHUxbwc1J */                 cnt++;
/* D6MkApKDx ily traian AHUxbwc1J */             j++;
/* D6MkApKDx ily traian AHUxbwc1J */         }
/* D6MkApKDx ily traian AHUxbwc1J */         if(cnt>max)
/* D6MkApKDx ily traian AHUxbwc1J */             indice=i , max=cnt;    
/* D6MkApKDx ily traian AHUxbwc1J */     }
/* D6MkApKDx ily traian AHUxbwc1J */     int j = 0;
/* D6MkApKDx ily traian AHUxbwc1J */     while(a[indice][j]!='\0')
/* D6MkApKDx ily traian AHUxbwc1J */     {
/* D6MkApKDx ily traian AHUxbwc1J */         cout << a[indice][j];
/* D6MkApKDx ily traian AHUxbwc1J */         j++;
/* D6MkApKDx ily traian AHUxbwc1J */     }
/* D6MkApKDx ily traian AHUxbwc1J */     return 0;    
/* D6MkApKDx ily traian AHUxbwc1J */ }