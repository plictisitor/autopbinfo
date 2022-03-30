/* 8iUSFzFq8 ily traian zxGAC86Um */ #include <algorithm>
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
/* 8iUSFzFq8 ily traian zxGAC86Um */ 
/* 8iUSFzFq8 ily traian zxGAC86Um */ using namespace std;
/* 8iUSFzFq8 ily traian zxGAC86Um */ 
/* 8iUSFzFq8 ily traian zxGAC86Um */ int main(){
/* 8iUSFzFq8 ily traian zxGAC86Um */     unsigned int n;
/* 8iUSFzFq8 ily traian zxGAC86Um */     char a, b;
/* 8iUSFzFq8 ily traian zxGAC86Um */     cin>>n>>a>>b;
/* 8iUSFzFq8 ily traian zxGAC86Um */     for(int i=1;i<=n;i++){
/* 8iUSFzFq8 ily traian zxGAC86Um */         if (i%2==1){for(int j=1;j<=n;j++){
/* 8iUSFzFq8 ily traian zxGAC86Um */                         if(j%2==1) cout<<a;
/* 8iUSFzFq8 ily traian zxGAC86Um */                         else cout<<b;}
/* 8iUSFzFq8 ily traian zxGAC86Um */         }
/* 8iUSFzFq8 ily traian zxGAC86Um */         else if (i%2==0){for(int k=1;k<=n;k++){
/* 8iUSFzFq8 ily traian zxGAC86Um */                          if(k%2==1) cout<<b;
/* 8iUSFzFq8 ily traian zxGAC86Um */                          else cout<<a;}
/* 8iUSFzFq8 ily traian zxGAC86Um */         }
/* 8iUSFzFq8 ily traian zxGAC86Um */         cout<<endl;}
/* 8iUSFzFq8 ily traian zxGAC86Um */     return 0;
/* 8iUSFzFq8 ily traian zxGAC86Um */ }