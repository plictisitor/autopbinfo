/* VOqgATXa8 ily traian J51uksVyn */ #include <algorithm>
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
/* VOqgATXa8 ily traian J51uksVyn */ using namespace std;
/* VOqgATXa8 ily traian J51uksVyn */ 
/* VOqgATXa8 ily traian J51uksVyn */ ifstream cin("partitiinumar.in");
/* VOqgATXa8 ily traian J51uksVyn */ ofstream cout("partitiinumar.out");
/* VOqgATXa8 ily traian J51uksVyn */ 
/* VOqgATXa8 ily traian J51uksVyn */ int n , x[41];
/* VOqgATXa8 ily traian J51uksVyn */ 
/* VOqgATXa8 ily traian J51uksVyn */ void afisare(int k)
/* VOqgATXa8 ily traian J51uksVyn */ {
/* VOqgATXa8 ily traian J51uksVyn */     for(int i = 1 ; i <= k ; i++)
/* VOqgATXa8 ily traian J51uksVyn */         cout << x[i] << " ";
/* VOqgATXa8 ily traian J51uksVyn */     cout << '\n';
/* VOqgATXa8 ily traian J51uksVyn */ }
/* VOqgATXa8 ily traian J51uksVyn */ 
/* VOqgATXa8 ily traian J51uksVyn */ void back(int k , int sp)
/* VOqgATXa8 ily traian J51uksVyn */ {
/* VOqgATXa8 ily traian J51uksVyn */     for(int i = x[k - 1] ; i <= n ; i++)
/* VOqgATXa8 ily traian J51uksVyn */     {
/* VOqgATXa8 ily traian J51uksVyn */         x[k] = i;
/* VOqgATXa8 ily traian J51uksVyn */         sp += x[k];
/* VOqgATXa8 ily traian J51uksVyn */         if(sp <= n)
/* VOqgATXa8 ily traian J51uksVyn */             if(sp == n) afisare(k);
/* VOqgATXa8 ily traian J51uksVyn */             else back(k + 1 , sp);
/* VOqgATXa8 ily traian J51uksVyn */         sp -= x[k];
/* VOqgATXa8 ily traian J51uksVyn */     }
/* VOqgATXa8 ily traian J51uksVyn */ }
/* VOqgATXa8 ily traian J51uksVyn */ 
/* VOqgATXa8 ily traian J51uksVyn */ int main()
/* VOqgATXa8 ily traian J51uksVyn */ {
/* VOqgATXa8 ily traian J51uksVyn */     cin >> n;
/* VOqgATXa8 ily traian J51uksVyn */     x[0] = 1;
/* VOqgATXa8 ily traian J51uksVyn */     back(1 , 0);
/* VOqgATXa8 ily traian J51uksVyn */ 
/* VOqgATXa8 ily traian J51uksVyn */ }