/* z5hTU4gCX ily traian MExUZZFYZ */ #include <algorithm>
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
/* z5hTU4gCX ily traian MExUZZFYZ */ using namespace std;
/* z5hTU4gCX ily traian MExUZZFYZ */ 
/* z5hTU4gCX ily traian MExUZZFYZ */ char a[1001], b[1001];
/* z5hTU4gCX ily traian MExUZZFYZ */ int fp[300], fi[300];
/* z5hTU4gCX ily traian MExUZZFYZ */ int gp[300], gi[300];
/* z5hTU4gCX ily traian MExUZZFYZ */ 
/* z5hTU4gCX ily traian MExUZZFYZ */ int main(){
/* z5hTU4gCX ily traian MExUZZFYZ */     cin >> a >> b;
/* z5hTU4gCX ily traian MExUZZFYZ */     int i = 0;
/* z5hTU4gCX ily traian MExUZZFYZ */     while(a[i]){
/* z5hTU4gCX ily traian MExUZZFYZ */         fp[a[i]]++;
/* z5hTU4gCX ily traian MExUZZFYZ */         i+=2;
/* z5hTU4gCX ily traian MExUZZFYZ */     }
/* z5hTU4gCX ily traian MExUZZFYZ */     i = 0;
/* z5hTU4gCX ily traian MExUZZFYZ */     while(b[i]){
/* z5hTU4gCX ily traian MExUZZFYZ */         fi[b[i]]++;
/* z5hTU4gCX ily traian MExUZZFYZ */         i+=2;
/* z5hTU4gCX ily traian MExUZZFYZ */     }
/* z5hTU4gCX ily traian MExUZZFYZ */     bool ok = true;
/* z5hTU4gCX ily traian MExUZZFYZ */     for(int i = 1; i < 300; ++i)
/* z5hTU4gCX ily traian MExUZZFYZ */         if(fi[i] != fp[i])
/* z5hTU4gCX ily traian MExUZZFYZ */             ok = false;
/* z5hTU4gCX ily traian MExUZZFYZ */     i = 1;
/* z5hTU4gCX ily traian MExUZZFYZ */     while(a[i]){
/* z5hTU4gCX ily traian MExUZZFYZ */         gp[a[i]]++;
/* z5hTU4gCX ily traian MExUZZFYZ */         i+=2;
/* z5hTU4gCX ily traian MExUZZFYZ */     }
/* z5hTU4gCX ily traian MExUZZFYZ */     i = 1;
/* z5hTU4gCX ily traian MExUZZFYZ */     while(b[i]){
/* z5hTU4gCX ily traian MExUZZFYZ */         gi[b[i]]++;
/* z5hTU4gCX ily traian MExUZZFYZ */         i+=2;
/* z5hTU4gCX ily traian MExUZZFYZ */     }
/* z5hTU4gCX ily traian MExUZZFYZ */     for(int i = 1; i < 300; ++i)
/* z5hTU4gCX ily traian MExUZZFYZ */         if(gi[i] != gp[i])
/* z5hTU4gCX ily traian MExUZZFYZ */             ok = false;
/* z5hTU4gCX ily traian MExUZZFYZ */     if(ok)
/* z5hTU4gCX ily traian MExUZZFYZ */         cout << "PRIETENE";
/* z5hTU4gCX ily traian MExUZZFYZ */     else
/* z5hTU4gCX ily traian MExUZZFYZ */         cout << "NU SUNT PRIETENE";
/* z5hTU4gCX ily traian MExUZZFYZ */     return 0;
/* z5hTU4gCX ily traian MExUZZFYZ */ }