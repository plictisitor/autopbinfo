/* PAQ7YAMiK ily traian iRDfBItPP */ #include <algorithm>
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
/* PAQ7YAMiK ily traian iRDfBItPP */ using namespace std;
/* PAQ7YAMiK ily traian iRDfBItPP */ 
/* PAQ7YAMiK ily traian iRDfBItPP */ int n , v[1005];
/* PAQ7YAMiK ily traian iRDfBItPP */ 
/* PAQ7YAMiK ily traian iRDfBItPP */ int Cmmdc2(int a, int b)
/* PAQ7YAMiK ily traian iRDfBItPP */ {
/* PAQ7YAMiK ily traian iRDfBItPP */     if(b == 0)
/* PAQ7YAMiK ily traian iRDfBItPP */         return a;
/* PAQ7YAMiK ily traian iRDfBItPP */     else
/* PAQ7YAMiK ily traian iRDfBItPP */         return Cmmdc2(b , a % b);
/* PAQ7YAMiK ily traian iRDfBItPP */ }
/* PAQ7YAMiK ily traian iRDfBItPP */ 
/* PAQ7YAMiK ily traian iRDfBItPP */ int Cmmdc(int st, int dr)
/* PAQ7YAMiK ily traian iRDfBItPP */ {
/* PAQ7YAMiK ily traian iRDfBItPP */     if(st == dr)
/* PAQ7YAMiK ily traian iRDfBItPP */         return v[st];
/* PAQ7YAMiK ily traian iRDfBItPP */     else
/* PAQ7YAMiK ily traian iRDfBItPP */     {
/* PAQ7YAMiK ily traian iRDfBItPP */         int mij = (st + dr) / 2;
/* PAQ7YAMiK ily traian iRDfBItPP */         int x = Cmmdc(st ,mij); 
/* PAQ7YAMiK ily traian iRDfBItPP */         int y = Cmmdc(mij + 1 , dr);
/* PAQ7YAMiK ily traian iRDfBItPP */         return Cmmdc2(x , y);
/* PAQ7YAMiK ily traian iRDfBItPP */     }
/* PAQ7YAMiK ily traian iRDfBItPP */ }
/* PAQ7YAMiK ily traian iRDfBItPP */ 
/* PAQ7YAMiK ily traian iRDfBItPP */ int main(){
/* PAQ7YAMiK ily traian iRDfBItPP */     cin >> n;
/* PAQ7YAMiK ily traian iRDfBItPP */     for(int i = 0 ; i < n ; i ++)
/* PAQ7YAMiK ily traian iRDfBItPP */         cin >> v[i];
/* PAQ7YAMiK ily traian iRDfBItPP */     cout << Cmmdc(0 , n - 1);
/* PAQ7YAMiK ily traian iRDfBItPP */     return 0;
/* PAQ7YAMiK ily traian iRDfBItPP */ }