/* g5DqrcOAi ily traian AAmFZviiN */ #include <algorithm>
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
/* g5DqrcOAi ily traian AAmFZviiN */ #include <algorithm>
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
/* g5DqrcOAi ily traian AAmFZviiN */ 
/* g5DqrcOAi ily traian AAmFZviiN */ using namespace std;
/* g5DqrcOAi ily traian AAmFZviiN */ unordered_map <int , int> r;
/* g5DqrcOAi ily traian AAmFZviiN */ int n , s;
/* g5DqrcOAi ily traian AAmFZviiN */ 
/* g5DqrcOAi ily traian AAmFZviiN */ int main()
/* g5DqrcOAi ily traian AAmFZviiN */ {
/* g5DqrcOAi ily traian AAmFZviiN */     cin >> n;
/* g5DqrcOAi ily traian AAmFZviiN */     for(int i = 1 ; i <= n ; i++)
/* g5DqrcOAi ily traian AAmFZviiN */     {
/* g5DqrcOAi ily traian AAmFZviiN */         cin >> s;
/* g5DqrcOAi ily traian AAmFZviiN */         r[s]++;
/* g5DqrcOAi ily traian AAmFZviiN */     }
/* g5DqrcOAi ily traian AAmFZviiN */     int mini = 2000000000;
/* g5DqrcOAi ily traian AAmFZviiN */     for(auto x:r)
/* g5DqrcOAi ily traian AAmFZviiN */     {
/* g5DqrcOAi ily traian AAmFZviiN */         if(x.second == 1 && x.first < mini)
/* g5DqrcOAi ily traian AAmFZviiN */             mini =  x.first ;
/* g5DqrcOAi ily traian AAmFZviiN */     }
/* g5DqrcOAi ily traian AAmFZviiN */     cout << mini;
/* g5DqrcOAi ily traian AAmFZviiN */ }