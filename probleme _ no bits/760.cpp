/* Um0ZBwsgZ ily traian g2xxgRsEb */ #include <algorithm>
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
/* Um0ZBwsgZ ily traian g2xxgRsEb */ using namespace std;
/* Um0ZBwsgZ ily traian g2xxgRsEb */ 
/* Um0ZBwsgZ ily traian g2xxgRsEb */ ifstream cin("knivel1.in");
/* Um0ZBwsgZ ily traian g2xxgRsEb */ ofstream cout("knivel1.out");
/* Um0ZBwsgZ ily traian g2xxgRsEb */ 
/* Um0ZBwsgZ ily traian g2xxgRsEb */ int s[1001];
/* Um0ZBwsgZ ily traian g2xxgRsEb */ 
/* Um0ZBwsgZ ily traian g2xxgRsEb */ void citire(int nod, int ad){
/* Um0ZBwsgZ ily traian g2xxgRsEb */     int x;
/* Um0ZBwsgZ ily traian g2xxgRsEb */     cin >> x;
/* Um0ZBwsgZ ily traian g2xxgRsEb */     s[ad] += x;
/* Um0ZBwsgZ ily traian g2xxgRsEb */     if(x){
/* Um0ZBwsgZ ily traian g2xxgRsEb */         citire(2 * nod, ad+1);
/* Um0ZBwsgZ ily traian g2xxgRsEb */         citire(2 * nod + 1, ad+1);
/* Um0ZBwsgZ ily traian g2xxgRsEb */     }
/* Um0ZBwsgZ ily traian g2xxgRsEb */ }
/* Um0ZBwsgZ ily traian g2xxgRsEb */ 
/* Um0ZBwsgZ ily traian g2xxgRsEb */ int main(){
/* Um0ZBwsgZ ily traian g2xxgRsEb */     citire(1, 0);
/* Um0ZBwsgZ ily traian g2xxgRsEb */     int k;
/* Um0ZBwsgZ ily traian g2xxgRsEb */     cin >> k;
/* Um0ZBwsgZ ily traian g2xxgRsEb */     cout << s[k];
/* Um0ZBwsgZ ily traian g2xxgRsEb */     return 0;
/* Um0ZBwsgZ ily traian g2xxgRsEb */ }