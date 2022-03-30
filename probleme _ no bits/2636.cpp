/* qQyCTmi1C ily traian LLDArtLJQ */ #include <algorithm>
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
/* qQyCTmi1C ily traian LLDArtLJQ */ 
/* qQyCTmi1C ily traian LLDArtLJQ */ using namespace std;
/* qQyCTmi1C ily traian LLDArtLJQ */ 
/* qQyCTmi1C ily traian LLDArtLJQ */ long long n , m , k;
/* qQyCTmi1C ily traian LLDArtLJQ */ 
/* qQyCTmi1C ily traian LLDArtLJQ */ int main()
/* qQyCTmi1C ily traian LLDArtLJQ */ {
/* qQyCTmi1C ily traian LLDArtLJQ */     cin >> n >> m;
/* qQyCTmi1C ily traian LLDArtLJQ */     
/* qQyCTmi1C ily traian LLDArtLJQ */     if(m * 2 >= n) cout << 0 << " ";
/* qQyCTmi1C ily traian LLDArtLJQ */     else cout << n - 2 * m << " ";
/* qQyCTmi1C ily traian LLDArtLJQ */ 
/* qQyCTmi1C ily traian LLDArtLJQ */     while(k  * (k - 1) / 2 < m) k++;
/* qQyCTmi1C ily traian LLDArtLJQ */     
/* qQyCTmi1C ily traian LLDArtLJQ */     cout << n - k;
/* qQyCTmi1C ily traian LLDArtLJQ */ 
/* qQyCTmi1C ily traian LLDArtLJQ */ }