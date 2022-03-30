/* YIKlzswsQ ily traian MQkBUTteU */ #include <algorithm>
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
/* YIKlzswsQ ily traian MQkBUTteU */ using namespace std;
/* YIKlzswsQ ily traian MQkBUTteU */ ifstream cin("cod3.in");
/* YIKlzswsQ ily traian MQkBUTteU */ ofstream cout("cod3.out");
/* YIKlzswsQ ily traian MQkBUTteU */ int main()
/* YIKlzswsQ ily traian MQkBUTteU */ {
/* YIKlzswsQ ily traian MQkBUTteU */     int n , x , f[200]={0};
/* YIKlzswsQ ily traian MQkBUTteU */     cin >> n;
/* YIKlzswsQ ily traian MQkBUTteU */     for(int i = 0 ; i < n ; ++i)
/* YIKlzswsQ ily traian MQkBUTteU */     {
/* YIKlzswsQ ily traian MQkBUTteU */         cin >> x;
/* YIKlzswsQ ily traian MQkBUTteU */         f[x]++;
/* YIKlzswsQ ily traian MQkBUTteU */     }
/* YIKlzswsQ ily traian MQkBUTteU */     for(int i = 0 ; i < 100 ; ++i)
/* YIKlzswsQ ily traian MQkBUTteU */         if(f[i] % 2 == 1)
/* YIKlzswsQ ily traian MQkBUTteU */             cout << i;
/* YIKlzswsQ ily traian MQkBUTteU */     return 0;
/* YIKlzswsQ ily traian MQkBUTteU */ }