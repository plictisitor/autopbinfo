/* A0fPzC7Gz ily traian T5yDKzseE */ #include <algorithm>
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
/* A0fPzC7Gz ily traian T5yDKzseE */ 
/* A0fPzC7Gz ily traian T5yDKzseE */ using namespace std;
/* A0fPzC7Gz ily traian T5yDKzseE */ 
/* A0fPzC7Gz ily traian T5yDKzseE */ ifstream cin("ciffrecv.in");
/* A0fPzC7Gz ily traian T5yDKzseE */ ofstream cout("ciffrecv.out");
/* A0fPzC7Gz ily traian T5yDKzseE */ 
/* A0fPzC7Gz ily traian T5yDKzseE */ int main()
/* A0fPzC7Gz ily traian T5yDKzseE */ {
/* A0fPzC7Gz ily traian T5yDKzseE */     int max = 0, nrap = 0;
/* A0fPzC7Gz ily traian T5yDKzseE */     int x;
/* A0fPzC7Gz ily traian T5yDKzseE */     while(cin >> x){
/* A0fPzC7Gz ily traian T5yDKzseE */         if(x == 2 && x > max)
/* A0fPzC7Gz ily traian T5yDKzseE */             max = x, nrap = 0;
/* A0fPzC7Gz ily traian T5yDKzseE */         if(x == 3 && x > max)
/* A0fPzC7Gz ily traian T5yDKzseE */             max = x, nrap = 0;
/* A0fPzC7Gz ily traian T5yDKzseE */         if(x == 5 && x > max)
/* A0fPzC7Gz ily traian T5yDKzseE */             max = x, nrap = 0;
/* A0fPzC7Gz ily traian T5yDKzseE */         if(x == 7 && x > max)
/* A0fPzC7Gz ily traian T5yDKzseE */             max = x, nrap = 0;
/* A0fPzC7Gz ily traian T5yDKzseE */         if(x == max)
/* A0fPzC7Gz ily traian T5yDKzseE */             nrap++;
/* A0fPzC7Gz ily traian T5yDKzseE */     }
/* A0fPzC7Gz ily traian T5yDKzseE */ 
/* A0fPzC7Gz ily traian T5yDKzseE */     cout << max << ' ' << nrap;
/* A0fPzC7Gz ily traian T5yDKzseE */ }