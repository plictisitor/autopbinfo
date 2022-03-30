/* qDjcJ4iMa ily traian 0S80PBvkN */ #include <algorithm>
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
/* qDjcJ4iMa ily traian 0S80PBvkN */ using namespace std;
/* qDjcJ4iMa ily traian 0S80PBvkN */ 
/* qDjcJ4iMa ily traian 0S80PBvkN */ bool toate_pare(int a[], int st, int dr){
/* qDjcJ4iMa ily traian 0S80PBvkN */     if(st == dr)
/* qDjcJ4iMa ily traian 0S80PBvkN */         return a[st] % 2 == 0;
/* qDjcJ4iMa ily traian 0S80PBvkN */     else{
/* qDjcJ4iMa ily traian 0S80PBvkN */         int mij = (st + dr) / 2;
/* qDjcJ4iMa ily traian 0S80PBvkN */         return toate_pare(a, st, mij) && toate_pare(a, mij + 1, dr);
/* qDjcJ4iMa ily traian 0S80PBvkN */     }
/* qDjcJ4iMa ily traian 0S80PBvkN */ }
/* qDjcJ4iMa ily traian 0S80PBvkN */ 
/* qDjcJ4iMa ily traian 0S80PBvkN */ int main()
/* qDjcJ4iMa ily traian 0S80PBvkN */ {
/* qDjcJ4iMa ily traian 0S80PBvkN */     int n, a[101];
/* qDjcJ4iMa ily traian 0S80PBvkN */     cin >> n;
/* qDjcJ4iMa ily traian 0S80PBvkN */     for(int i = 1; i <= n; ++i)
/* qDjcJ4iMa ily traian 0S80PBvkN */         cin >> a[i];
/* qDjcJ4iMa ily traian 0S80PBvkN */ 
/* qDjcJ4iMa ily traian 0S80PBvkN */     if(toate_pare(a, 1, n))
/* qDjcJ4iMa ily traian 0S80PBvkN */         cout << "DA";
/* qDjcJ4iMa ily traian 0S80PBvkN */     else
/* qDjcJ4iMa ily traian 0S80PBvkN */         cout << "NU";
/* qDjcJ4iMa ily traian 0S80PBvkN */ 
/* qDjcJ4iMa ily traian 0S80PBvkN */     return 0;
/* qDjcJ4iMa ily traian 0S80PBvkN */ }