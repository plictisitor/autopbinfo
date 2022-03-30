/* dO7ZX2EFo ily traian SZtghQU9X */ #include <algorithm>
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
/* dO7ZX2EFo ily traian SZtghQU9X */ 
/* dO7ZX2EFo ily traian SZtghQU9X */ using namespace std;
/* dO7ZX2EFo ily traian SZtghQU9X */ 
/* dO7ZX2EFo ily traian SZtghQU9X */ ifstream cin("spectacole.in");
/* dO7ZX2EFo ily traian SZtghQU9X */ ofstream cout("spectacole.out");
/* dO7ZX2EFo ily traian SZtghQU9X */ 
/* dO7ZX2EFo ily traian SZtghQU9X */ int n , cnt;
/* dO7ZX2EFo ily traian SZtghQU9X */ struct poz
/* dO7ZX2EFo ily traian SZtghQU9X */ {
/* dO7ZX2EFo ily traian SZtghQU9X */     int i , j;
/* dO7ZX2EFo ily traian SZtghQU9X */ }a[101];
/* dO7ZX2EFo ily traian SZtghQU9X */ 
/* dO7ZX2EFo ily traian SZtghQU9X */ bool comp(poz a , poz b)
/* dO7ZX2EFo ily traian SZtghQU9X */ {
/* dO7ZX2EFo ily traian SZtghQU9X */     if(a.j < b.j) return 1;
/* dO7ZX2EFo ily traian SZtghQU9X */     else if(a.j == b.j && a.i < b.i) return 1;
/* dO7ZX2EFo ily traian SZtghQU9X */     else return 0;
/* dO7ZX2EFo ily traian SZtghQU9X */ }
/* dO7ZX2EFo ily traian SZtghQU9X */ 
/* dO7ZX2EFo ily traian SZtghQU9X */ int main()
/* dO7ZX2EFo ily traian SZtghQU9X */ {
/* dO7ZX2EFo ily traian SZtghQU9X */     cin >> n;
/* dO7ZX2EFo ily traian SZtghQU9X */     for(int i = 1 ; i <= n ; i++)
/* dO7ZX2EFo ily traian SZtghQU9X */         cin >> a[i].i >> a[i].j;
/* dO7ZX2EFo ily traian SZtghQU9X */ 
/* dO7ZX2EFo ily traian SZtghQU9X */     sort(a + 1 , a + n + 1 , comp);
/* dO7ZX2EFo ily traian SZtghQU9X */     int ul = a[1].j;
/* dO7ZX2EFo ily traian SZtghQU9X */     for(int i = 2 ; i <= n ; i++)
/* dO7ZX2EFo ily traian SZtghQU9X */         if(ul <= a[i].i) cnt ++ , ul = a[i].j ;
/* dO7ZX2EFo ily traian SZtghQU9X */ 
/* dO7ZX2EFo ily traian SZtghQU9X */     cout << cnt + 1;
/* dO7ZX2EFo ily traian SZtghQU9X */ }