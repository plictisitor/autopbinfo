/* bjDLPs9jj ily traian T5KJdeHSu */ #include <algorithm>
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
/* bjDLPs9jj ily traian T5KJdeHSu */ using namespace std;
/* bjDLPs9jj ily traian T5KJdeHSu */ 
/* bjDLPs9jj ily traian T5KJdeHSu */ ifstream cin("hidden_number.in");
/* bjDLPs9jj ily traian T5KJdeHSu */ ofstream cout("hidden_number.out");
/* bjDLPs9jj ily traian T5KJdeHSu */ 
/* bjDLPs9jj ily traian T5KJdeHSu */ int main(){
/* bjDLPs9jj ily traian T5KJdeHSu */     int x, sum = 0, cnt = 0;
/* bjDLPs9jj ily traian T5KJdeHSu */     while(cin >> x)
/* bjDLPs9jj ily traian T5KJdeHSu */         sum += x, cnt++;
/* bjDLPs9jj ily traian T5KJdeHSu */     int ma = sum / cnt;
/* bjDLPs9jj ily traian T5KJdeHSu */     if(ma * cnt == sum)
/* bjDLPs9jj ily traian T5KJdeHSu */         cout << ma;
/* bjDLPs9jj ily traian T5KJdeHSu */     else
/* bjDLPs9jj ily traian T5KJdeHSu */         cout << -1;
/* bjDLPs9jj ily traian T5KJdeHSu */     return 0;
/* bjDLPs9jj ily traian T5KJdeHSu */ }