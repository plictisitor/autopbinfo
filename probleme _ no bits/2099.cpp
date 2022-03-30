/* 7JKG9jQGe ily traian 3PND8qhPA */ #include <algorithm>
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
/* 7JKG9jQGe ily traian 3PND8qhPA */ using namespace std;
/* 7JKG9jQGe ily traian 3PND8qhPA */ ifstream fin("unupatru.in");
/* 7JKG9jQGe ily traian 3PND8qhPA */ ofstream fout("unupatru.out");
/* 7JKG9jQGe ily traian 3PND8qhPA */ int pat(long long n)
/* 7JKG9jQGe ily traian 3PND8qhPA */ {
/* 7JKG9jQGe ily traian 3PND8qhPA */     long long cnt = 0 , n1 = n;
/* 7JKG9jQGe ily traian 3PND8qhPA */     while(1)
/* 7JKG9jQGe ily traian 3PND8qhPA */     {
/* 7JKG9jQGe ily traian 3PND8qhPA */         if(n == 1 || n == 4) break;
/* 7JKG9jQGe ily traian 3PND8qhPA */         cnt++;
/* 7JKG9jQGe ily traian 3PND8qhPA */         long long n1 = n;
/* 7JKG9jQGe ily traian 3PND8qhPA */         n = 0;
/* 7JKG9jQGe ily traian 3PND8qhPA */         while(n1 != 0)
/* 7JKG9jQGe ily traian 3PND8qhPA */         {
/* 7JKG9jQGe ily traian 3PND8qhPA */             n += (n1 % 10) * (n1 % 10);
/* 7JKG9jQGe ily traian 3PND8qhPA */             n1 /= 10;
/* 7JKG9jQGe ily traian 3PND8qhPA */         }
/* 7JKG9jQGe ily traian 3PND8qhPA */     }
/* 7JKG9jQGe ily traian 3PND8qhPA */ 
/* 7JKG9jQGe ily traian 3PND8qhPA */     return cnt;
/* 7JKG9jQGe ily traian 3PND8qhPA */ } main()
/* 7JKG9jQGe ily traian 3PND8qhPA */ {
/* 7JKG9jQGe ily traian 3PND8qhPA */     long long n , x;
/* 7JKG9jQGe ily traian 3PND8qhPA */     fin >> n;
/* 7JKG9jQGe ily traian 3PND8qhPA */     for(int i = 1 ; i <= n ; ++i)
/* 7JKG9jQGe ily traian 3PND8qhPA */     {
/* 7JKG9jQGe ily traian 3PND8qhPA */         fin >> x;
/* 7JKG9jQGe ily traian 3PND8qhPA */         fout << pat(x) << " ";
/* 7JKG9jQGe ily traian 3PND8qhPA */     }
/* 7JKG9jQGe ily traian 3PND8qhPA */ 
/* 7JKG9jQGe ily traian 3PND8qhPA */     fin.close();
/* 7JKG9jQGe ily traian 3PND8qhPA */     fout.close();
/* 7JKG9jQGe ily traian 3PND8qhPA */ 
/* 7JKG9jQGe ily traian 3PND8qhPA */     return 0;
/* 7JKG9jQGe ily traian 3PND8qhPA */ }