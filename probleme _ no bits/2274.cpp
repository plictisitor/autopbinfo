/* iKD68ctoJ ily traian TU6jco3zQ */ #include <algorithm>
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
/* iKD68ctoJ ily traian TU6jco3zQ */ using namespace std;
/* iKD68ctoJ ily traian TU6jco3zQ */ ifstream cin("limite.in");
/* iKD68ctoJ ily traian TU6jco3zQ */ ofstream cout("limite.out");
/* iKD68ctoJ ily traian TU6jco3zQ */ int main()
/* iKD68ctoJ ily traian TU6jco3zQ */ {
/* iKD68ctoJ ily traian TU6jco3zQ */     int  n;
/* iKD68ctoJ ily traian TU6jco3zQ */     unsigned long long x;
/* iKD68ctoJ ily traian TU6jco3zQ */     cin >> n;
/* iKD68ctoJ ily traian TU6jco3zQ */     for(int i = 1 ; i <= n ; i++)
/* iKD68ctoJ ily traian TU6jco3zQ */     {
/* iKD68ctoJ ily traian TU6jco3zQ */         cin >> x;
/* iKD68ctoJ ily traian TU6jco3zQ */         if(x <= 127) cout << "char" << endl;
/* iKD68ctoJ ily traian TU6jco3zQ */         else if(x <= 255) cout << "unsigned char" << endl;
/* iKD68ctoJ ily traian TU6jco3zQ */         else if(x <= 32767) cout << "short" << endl;
/* iKD68ctoJ ily traian TU6jco3zQ */         else if(x <= 65535) cout << "unsigned short" << endl;
/* iKD68ctoJ ily traian TU6jco3zQ */         else if(x <= 2147483647) cout << "int" << endl;
/* iKD68ctoJ ily traian TU6jco3zQ */         else if(x <= 4294967295) cout << "unsigned int" << endl;
/* iKD68ctoJ ily traian TU6jco3zQ */         else if(x <= 9223372036854775807) cout << "long long" << endl;
/* iKD68ctoJ ily traian TU6jco3zQ */         else if(x <= 18446744073709551615) cout << "unsigned long long" << endl;
/* iKD68ctoJ ily traian TU6jco3zQ */     }
/* iKD68ctoJ ily traian TU6jco3zQ */     return 0;
/* iKD68ctoJ ily traian TU6jco3zQ */ }