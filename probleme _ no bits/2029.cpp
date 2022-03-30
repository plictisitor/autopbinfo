/* kxzXiQyMo ily traian guga5HUFS */ #include <algorithm>
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
/* kxzXiQyMo ily traian guga5HUFS */ using namespace std;
/* kxzXiQyMo ily traian guga5HUFS */ 
/* kxzXiQyMo ily traian guga5HUFS */ ifstream cin("afisaren.in");
/* kxzXiQyMo ily traian guga5HUFS */ ofstream cout("afisaren.out");
/* kxzXiQyMo ily traian guga5HUFS */ 
/* kxzXiQyMo ily traian guga5HUFS */ int main()
/* kxzXiQyMo ily traian guga5HUFS */ {
/* kxzXiQyMo ily traian guga5HUFS */     int n;
/* kxzXiQyMo ily traian guga5HUFS */     cin >> n;
/* kxzXiQyMo ily traian guga5HUFS */     cin.close();
/* kxzXiQyMo ily traian guga5HUFS */     for(int i = 0 ; i < n ; ++i)
/* kxzXiQyMo ily traian guga5HUFS */     {
/* kxzXiQyMo ily traian guga5HUFS */         ifstream cin("afisaren.in");
/* kxzXiQyMo ily traian guga5HUFS */         int x;
/* kxzXiQyMo ily traian guga5HUFS */         cin >> x;
/* kxzXiQyMo ily traian guga5HUFS */         char ch;
/* kxzXiQyMo ily traian guga5HUFS */         while(cin >> ch)
/* kxzXiQyMo ily traian guga5HUFS */         cout << ch;
/* kxzXiQyMo ily traian guga5HUFS */         cout << endl;
/* kxzXiQyMo ily traian guga5HUFS */         cin.close();
/* kxzXiQyMo ily traian guga5HUFS */     }
/* kxzXiQyMo ily traian guga5HUFS */     return 0;
/* kxzXiQyMo ily traian guga5HUFS */ }