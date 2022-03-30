/* MfFy0t9RX ily traian UXqNdvseP */ #include <algorithm>
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
/* MfFy0t9RX ily traian UXqNdvseP */ using namespace std;
/* MfFy0t9RX ily traian UXqNdvseP */ ifstream fin("lipsa.in");
/* MfFy0t9RX ily traian UXqNdvseP */ ofstream fout("lipsa.out");
/* MfFy0t9RX ily traian UXqNdvseP */ int n,x;
/* MfFy0t9RX ily traian UXqNdvseP */ long long s=0,s1=0;
/* MfFy0t9RX ily traian UXqNdvseP */ int main()
/* MfFy0t9RX ily traian UXqNdvseP */ {
/* MfFy0t9RX ily traian UXqNdvseP */     fin>>n;
/* MfFy0t9RX ily traian UXqNdvseP */     for (int i=1;i<=n;i++)
/* MfFy0t9RX ily traian UXqNdvseP */     {
/* MfFy0t9RX ily traian UXqNdvseP */         s=s+i;
/* MfFy0t9RX ily traian UXqNdvseP */     }
/* MfFy0t9RX ily traian UXqNdvseP */     for(int j=1;j<=n-1;j++)
/* MfFy0t9RX ily traian UXqNdvseP */     {
/* MfFy0t9RX ily traian UXqNdvseP */         fin>>x;
/* MfFy0t9RX ily traian UXqNdvseP */         s1=s1+x;
/* MfFy0t9RX ily traian UXqNdvseP */     }
/* MfFy0t9RX ily traian UXqNdvseP */     fout<<s-s1;
/* MfFy0t9RX ily traian UXqNdvseP */     return 0;
/* MfFy0t9RX ily traian UXqNdvseP */ }