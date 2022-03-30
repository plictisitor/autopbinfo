/* mD0ocO5Bp ily traian oqPlVVN7j */ #include <algorithm>
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
/* mD0ocO5Bp ily traian oqPlVVN7j */ 
/* mD0ocO5Bp ily traian oqPlVVN7j */ using namespace std;
/* mD0ocO5Bp ily traian oqPlVVN7j */ 
/* mD0ocO5Bp ily traian oqPlVVN7j */ ifstream cin("evenoddxxl.in");
/* mD0ocO5Bp ily traian oqPlVVN7j */ ofstream cout("evenoddxxl.out");
/* mD0ocO5Bp ily traian oqPlVVN7j */ 
/* mD0ocO5Bp ily traian oqPlVVN7j */ char s[1001];
/* mD0ocO5Bp ily traian oqPlVVN7j */ 
/* mD0ocO5Bp ily traian oqPlVVN7j */ int main(){
/* mD0ocO5Bp ily traian oqPlVVN7j */     cin >> s;
/* mD0ocO5Bp ily traian oqPlVVN7j */     int x = s[strlen(s)-1] - '0';
/* mD0ocO5Bp ily traian oqPlVVN7j */     if(x % 2 == 1)
/* mD0ocO5Bp ily traian oqPlVVN7j */         cout << "Impar";
/* mD0ocO5Bp ily traian oqPlVVN7j */     else
/* mD0ocO5Bp ily traian oqPlVVN7j */         cout << "Par";
/* mD0ocO5Bp ily traian oqPlVVN7j */     return 0;
/* mD0ocO5Bp ily traian oqPlVVN7j */ }