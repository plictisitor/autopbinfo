/* Db7g2r4Ta ily traian KVq3KxGjF */ #include <algorithm>
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
/* Db7g2r4Ta ily traian KVq3KxGjF */ using namespace std;
/* Db7g2r4Ta ily traian KVq3KxGjF */ 
/* Db7g2r4Ta ily traian KVq3KxGjF */ ifstream cin("inaltime1.in");
/* Db7g2r4Ta ily traian KVq3KxGjF */ ofstream cout("inaltime1.out");
/* Db7g2r4Ta ily traian KVq3KxGjF */ 
/* Db7g2r4Ta ily traian KVq3KxGjF */ int c,x;
/* Db7g2r4Ta ily traian KVq3KxGjF */ 
/* Db7g2r4Ta ily traian KVq3KxGjF */ void citire(int nod, int ad){
/* Db7g2r4Ta ily traian KVq3KxGjF */     c = max(c, ad);
/* Db7g2r4Ta ily traian KVq3KxGjF */     cin >> x;
/* Db7g2r4Ta ily traian KVq3KxGjF */     if(x != 0){
/* Db7g2r4Ta ily traian KVq3KxGjF */         citire(2 * nod, ad+1);
/* Db7g2r4Ta ily traian KVq3KxGjF */         citire(2 * nod + 1, ad+1);
/* Db7g2r4Ta ily traian KVq3KxGjF */     }
/* Db7g2r4Ta ily traian KVq3KxGjF */ }
/* Db7g2r4Ta ily traian KVq3KxGjF */ 
/* Db7g2r4Ta ily traian KVq3KxGjF */ int main(){
/* Db7g2r4Ta ily traian KVq3KxGjF */     citire(1, 0);
/* Db7g2r4Ta ily traian KVq3KxGjF */     cout << c;
/* Db7g2r4Ta ily traian KVq3KxGjF */     return 0;
/* Db7g2r4Ta ily traian KVq3KxGjF */ }