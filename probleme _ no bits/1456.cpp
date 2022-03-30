/* nyfD5ktWZ ily traian hu1Fhq21L */ #include <algorithm>
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
/* nyfD5ktWZ ily traian hu1Fhq21L */ using namespace std;
/* nyfD5ktWZ ily traian hu1Fhq21L */ 
/* nyfD5ktWZ ily traian hu1Fhq21L */ char ch[256];
/* nyfD5ktWZ ily traian hu1Fhq21L */ 
/* nyfD5ktWZ ily traian hu1Fhq21L */ int main()
/* nyfD5ktWZ ily traian hu1Fhq21L */ {
/* nyfD5ktWZ ily traian hu1Fhq21L */     cin.getline(ch , 256);
/* nyfD5ktWZ ily traian hu1Fhq21L */     int i = 0;
/* nyfD5ktWZ ily traian hu1Fhq21L */     int cnt1=0;
/* nyfD5ktWZ ily traian hu1Fhq21L */     bool da = true;
/* nyfD5ktWZ ily traian hu1Fhq21L */     while(ch[i]!='\0')
/* nyfD5ktWZ ily traian hu1Fhq21L */     {
/* nyfD5ktWZ ily traian hu1Fhq21L */         if(ch[i]=='a' || ch[i]=='e' || ch[i]=='o' || ch[i]=='u')
/* nyfD5ktWZ ily traian hu1Fhq21L */             da=false;
/* nyfD5ktWZ ily traian hu1Fhq21L */         else if(ch[i]!='i')
/* nyfD5ktWZ ily traian hu1Fhq21L */             cnt1++;
/* nyfD5ktWZ ily traian hu1Fhq21L */         i++;
/* nyfD5ktWZ ily traian hu1Fhq21L */     }
/* nyfD5ktWZ ily traian hu1Fhq21L */     if(da && cnt1)
/* nyfD5ktWZ ily traian hu1Fhq21L */         cout << "DA";
/* nyfD5ktWZ ily traian hu1Fhq21L */     else
/* nyfD5ktWZ ily traian hu1Fhq21L */         cout << "NU";
/* nyfD5ktWZ ily traian hu1Fhq21L */     return 0;
/* nyfD5ktWZ ily traian hu1Fhq21L */ }