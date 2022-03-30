/* KyDCEg6bl ily traian IlC58Ytyc */ #include <algorithm>
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
/* KyDCEg6bl ily traian IlC58Ytyc */ using namespace std;
/* KyDCEg6bl ily traian IlC58Ytyc */ ifstream cin("sir13.in");
/* KyDCEg6bl ily traian IlC58Ytyc */ ofstream cout("sir13.out");
/* KyDCEg6bl ily traian IlC58Ytyc */ int n , x , maxi = 1000000001 , mini , ok;
/* KyDCEg6bl ily traian IlC58Ytyc */ 
/* KyDCEg6bl ily traian IlC58Ytyc */ int main()
/* KyDCEg6bl ily traian IlC58Ytyc */ {
/* KyDCEg6bl ily traian IlC58Ytyc */     while(cin >> x)
/* KyDCEg6bl ily traian IlC58Ytyc */     {
/* KyDCEg6bl ily traian IlC58Ytyc */         if(x % 2 == 0)
/* KyDCEg6bl ily traian IlC58Ytyc */         {
/* KyDCEg6bl ily traian IlC58Ytyc */             if(x < mini) ok = 1;
/* KyDCEg6bl ily traian IlC58Ytyc */             else mini = x;
/* KyDCEg6bl ily traian IlC58Ytyc */         }
/* KyDCEg6bl ily traian IlC58Ytyc */         else
/* KyDCEg6bl ily traian IlC58Ytyc */         {
/* KyDCEg6bl ily traian IlC58Ytyc */             if(x > maxi) ok = 1;
/* KyDCEg6bl ily traian IlC58Ytyc */             else maxi = x;
/* KyDCEg6bl ily traian IlC58Ytyc */         }
/* KyDCEg6bl ily traian IlC58Ytyc */     }
/* KyDCEg6bl ily traian IlC58Ytyc */     if(ok == 0) cout << "DA";
/* KyDCEg6bl ily traian IlC58Ytyc */     else        cout << "NU";
/* KyDCEg6bl ily traian IlC58Ytyc */     return 0;
/* KyDCEg6bl ily traian IlC58Ytyc */ }