/* TOawbiE77 ily traian mt7blcHAr */ #include <algorithm>
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
/* TOawbiE77 ily traian mt7blcHAr */ 
/* TOawbiE77 ily traian mt7blcHAr */ using namespace std;
/* TOawbiE77 ily traian mt7blcHAr */ 
/* TOawbiE77 ily traian mt7blcHAr */ ifstream cin("biarbore.in");
/* TOawbiE77 ily traian mt7blcHAr */ ofstream cout("biarbore.out");
/* TOawbiE77 ily traian mt7blcHAr */ 
/* TOawbiE77 ily traian mt7blcHAr */ vector <int> a;
/* TOawbiE77 ily traian mt7blcHAr */ int x , nod , rez1 , rez2;
/* TOawbiE77 ily traian mt7blcHAr */ 
/* TOawbiE77 ily traian mt7blcHAr */ void citire(int t)
/* TOawbiE77 ily traian mt7blcHAr */ {
/* TOawbiE77 ily traian mt7blcHAr */     int tnod = nod;
/* TOawbiE77 ily traian mt7blcHAr */     cin >> x;
/* TOawbiE77 ily traian mt7blcHAr */     a[nod++] = x;
/* TOawbiE77 ily traian mt7blcHAr */     a.push_back(0);
/* TOawbiE77 ily traian mt7blcHAr */     if(x != 0)
/* TOawbiE77 ily traian mt7blcHAr */     {
/* TOawbiE77 ily traian mt7blcHAr */         if(t == 0) rez1 = nod;
/* TOawbiE77 ily traian mt7blcHAr */         citire(tnod);
/* TOawbiE77 ily traian mt7blcHAr */         if(t == 0) rez2 = nod;
/* TOawbiE77 ily traian mt7blcHAr */         citire(tnod);
/* TOawbiE77 ily traian mt7blcHAr */     }
/* TOawbiE77 ily traian mt7blcHAr */ }
/* TOawbiE77 ily traian mt7blcHAr */ 
/* TOawbiE77 ily traian mt7blcHAr */ int main()
/* TOawbiE77 ily traian mt7blcHAr */ {
/* TOawbiE77 ily traian mt7blcHAr */     a.push_back(0);
/* TOawbiE77 ily traian mt7blcHAr */     a.push_back(0);
/* TOawbiE77 ily traian mt7blcHAr */     nod = 1;
/* TOawbiE77 ily traian mt7blcHAr */     citire(0);
/* TOawbiE77 ily traian mt7blcHAr */     cout << a[rez1] << " " << a[rez2];
/* TOawbiE77 ily traian mt7blcHAr */ }