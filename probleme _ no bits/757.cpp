/* cNPo0KtCD ily traian cwsPdFDHe */ #include <algorithm>
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
/* cNPo0KtCD ily traian cwsPdFDHe */ using namespace std;
/* cNPo0KtCD ily traian cwsPdFDHe */ 
/* cNPo0KtCD ily traian cwsPdFDHe */ ifstream cin("bimax.in");
/* cNPo0KtCD ily traian cwsPdFDHe */ ofstream cout("bimax.out");
/* cNPo0KtCD ily traian cwsPdFDHe */ 
/* cNPo0KtCD ily traian cwsPdFDHe */ int maxi;
/* cNPo0KtCD ily traian cwsPdFDHe */ 
/* cNPo0KtCD ily traian cwsPdFDHe */ void citire(int nod){
/* cNPo0KtCD ily traian cwsPdFDHe */     int x;
/* cNPo0KtCD ily traian cwsPdFDHe */     cin >> x;
/* cNPo0KtCD ily traian cwsPdFDHe */     if(x > maxi)
/* cNPo0KtCD ily traian cwsPdFDHe */         maxi = x;
/* cNPo0KtCD ily traian cwsPdFDHe */     if(x != 0){
/* cNPo0KtCD ily traian cwsPdFDHe */         citire(2 * nod);
/* cNPo0KtCD ily traian cwsPdFDHe */         citire(2 * nod + 1);
/* cNPo0KtCD ily traian cwsPdFDHe */     }
/* cNPo0KtCD ily traian cwsPdFDHe */ }
/* cNPo0KtCD ily traian cwsPdFDHe */ 
/* cNPo0KtCD ily traian cwsPdFDHe */ int main(){
/* cNPo0KtCD ily traian cwsPdFDHe */     int x;
/* cNPo0KtCD ily traian cwsPdFDHe */     cin >> x;
/* cNPo0KtCD ily traian cwsPdFDHe */     citire(2);
/* cNPo0KtCD ily traian cwsPdFDHe */     int s = maxi;
/* cNPo0KtCD ily traian cwsPdFDHe */     maxi = 0;
/* cNPo0KtCD ily traian cwsPdFDHe */     citire(3);
/* cNPo0KtCD ily traian cwsPdFDHe */     int s1 = maxi;
/* cNPo0KtCD ily traian cwsPdFDHe */     cout << s << ' ' << s1;
/* cNPo0KtCD ily traian cwsPdFDHe */     return 0;
/* cNPo0KtCD ily traian cwsPdFDHe */ }