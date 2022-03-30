/* nzOSPj9KE ily traian R0EHKuXfd */ #include <algorithm>
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
/* nzOSPj9KE ily traian R0EHKuXfd */ using namespace std;
/* nzOSPj9KE ily traian R0EHKuXfd */ int main()
/* nzOSPj9KE ily traian R0EHKuXfd */ {
/* nzOSPj9KE ily traian R0EHKuXfd */    long long n , p = 1;
/* nzOSPj9KE ily traian R0EHKuXfd */    cin >> n;
/* nzOSPj9KE ily traian R0EHKuXfd */    if(n % 2 == 1) cout << 0;
/* nzOSPj9KE ily traian R0EHKuXfd */    else {for(int i = 1 ; i <= n / 2 ;++i)
/* nzOSPj9KE ily traian R0EHKuXfd */    {
/* nzOSPj9KE ily traian R0EHKuXfd */        p = p * i * i;
/* nzOSPj9KE ily traian R0EHKuXfd */    }
/* nzOSPj9KE ily traian R0EHKuXfd */    cout << p;}
/* nzOSPj9KE ily traian R0EHKuXfd */    return 0;
/* nzOSPj9KE ily traian R0EHKuXfd */ }