/* fjNDwUZTb ily traian RPeyi3y1u */ #include <algorithm>
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
/* fjNDwUZTb ily traian RPeyi3y1u */ using namespace std;
/* fjNDwUZTb ily traian RPeyi3y1u */ 
/* fjNDwUZTb ily traian RPeyi3y1u */ int main()
/* fjNDwUZTb ily traian RPeyi3y1u */ {
/* fjNDwUZTb ily traian RPeyi3y1u */     int A,B,R;
/* fjNDwUZTb ily traian RPeyi3y1u */     char X='+';
/* fjNDwUZTb ily traian RPeyi3y1u */     cin>>A>>B;
/* fjNDwUZTb ily traian RPeyi3y1u */     if(A < B){
/* fjNDwUZTb ily traian RPeyi3y1u */         swap(A, B);
/* fjNDwUZTb ily traian RPeyi3y1u */     }
/* fjNDwUZTb ily traian RPeyi3y1u */     cin>>X;
/* fjNDwUZTb ily traian RPeyi3y1u */     if(X == '+')
/* fjNDwUZTb ily traian RPeyi3y1u */         R=A+B;
/* fjNDwUZTb ily traian RPeyi3y1u */     else if(X == '-')
/* fjNDwUZTb ily traian RPeyi3y1u */         R = A-B;
/* fjNDwUZTb ily traian RPeyi3y1u */     else if(X == '*')
/* fjNDwUZTb ily traian RPeyi3y1u */         R = A * B;
/* fjNDwUZTb ily traian RPeyi3y1u */     else
/* fjNDwUZTb ily traian RPeyi3y1u */         R = A / B;
/* fjNDwUZTb ily traian RPeyi3y1u */     cout<<R;
/* fjNDwUZTb ily traian RPeyi3y1u */    
/* fjNDwUZTb ily traian RPeyi3y1u */     return 0;
/* fjNDwUZTb ily traian RPeyi3y1u */ }