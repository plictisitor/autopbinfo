/* 4jP2E8fi4 ily traian qRxcWrggh */ #include <algorithm>
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
/* 4jP2E8fi4 ily traian qRxcWrggh */ using namespace std;
/* 4jP2E8fi4 ily traian qRxcWrggh */ 
/* 4jP2E8fi4 ily traian qRxcWrggh */ int main()
/* 4jP2E8fi4 ily traian qRxcWrggh */ {
/* 4jP2E8fi4 ily traian qRxcWrggh */     int n;
/* 4jP2E8fi4 ily traian qRxcWrggh */     cin >> n;
/* 4jP2E8fi4 ily traian qRxcWrggh */     int a[10];
/* 4jP2E8fi4 ily traian qRxcWrggh */     int p=0;
/* 4jP2E8fi4 ily traian qRxcWrggh */     while(n)
/* 4jP2E8fi4 ily traian qRxcWrggh */     {
/* 4jP2E8fi4 ily traian qRxcWrggh */         a[p]=n%16;
/* 4jP2E8fi4 ily traian qRxcWrggh */         n/=16;
/* 4jP2E8fi4 ily traian qRxcWrggh */         p++;
/* 4jP2E8fi4 ily traian qRxcWrggh */     }
/* 4jP2E8fi4 ily traian qRxcWrggh */     for(int i = p-1 ; i >= 0 ; --i)
/* 4jP2E8fi4 ily traian qRxcWrggh */     {
/* 4jP2E8fi4 ily traian qRxcWrggh */         if(a[i]<10)
/* 4jP2E8fi4 ily traian qRxcWrggh */         cout << a[i];
/* 4jP2E8fi4 ily traian qRxcWrggh */         else
/* 4jP2E8fi4 ily traian qRxcWrggh */         {
/* 4jP2E8fi4 ily traian qRxcWrggh */             if(a[i]==10)
/* 4jP2E8fi4 ily traian qRxcWrggh */             cout << "A";
/* 4jP2E8fi4 ily traian qRxcWrggh */             if(a[i]==11)
/* 4jP2E8fi4 ily traian qRxcWrggh */             cout << "B";
/* 4jP2E8fi4 ily traian qRxcWrggh */             if(a[i]==12)
/* 4jP2E8fi4 ily traian qRxcWrggh */             cout << "C";
/* 4jP2E8fi4 ily traian qRxcWrggh */             if(a[i]==13)
/* 4jP2E8fi4 ily traian qRxcWrggh */             cout << "D";
/* 4jP2E8fi4 ily traian qRxcWrggh */             if(a[i]==14)
/* 4jP2E8fi4 ily traian qRxcWrggh */             cout << "E";
/* 4jP2E8fi4 ily traian qRxcWrggh */             if(a[i]==15)
/* 4jP2E8fi4 ily traian qRxcWrggh */             cout << "F";
/* 4jP2E8fi4 ily traian qRxcWrggh */         }
/* 4jP2E8fi4 ily traian qRxcWrggh */     }
/* 4jP2E8fi4 ily traian qRxcWrggh */ }