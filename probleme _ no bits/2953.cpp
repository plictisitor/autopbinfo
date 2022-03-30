/* CHpVtdeO6 ily traian xyutyKliE */ #include <algorithm>
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
/* CHpVtdeO6 ily traian xyutyKliE */ 
/* CHpVtdeO6 ily traian xyutyKliE */ using namespace std;
/* CHpVtdeO6 ily traian xyutyKliE */ 
/* CHpVtdeO6 ily traian xyutyKliE */ ifstream cin("inserarechar.in");
/* CHpVtdeO6 ily traian xyutyKliE */ ofstream cout("inserarechar.out");
/* CHpVtdeO6 ily traian xyutyKliE */ 
/* CHpVtdeO6 ily traian xyutyKliE */ char m[255][255] , cnt = 0;
/* CHpVtdeO6 ily traian xyutyKliE */ 
/* CHpVtdeO6 ily traian xyutyKliE */ int main(){
/* CHpVtdeO6 ily traian xyutyKliE */     char cuv[20] , s[300];
/* CHpVtdeO6 ily traian xyutyKliE */     cin >> cuv;
/* CHpVtdeO6 ily traian xyutyKliE */     cin.get();
/* CHpVtdeO6 ily traian xyutyKliE */     cin.getline(s , 256);
/* CHpVtdeO6 ily traian xyutyKliE */     int i = 0;
/* CHpVtdeO6 ily traian xyutyKliE */     int j = 0;
/* CHpVtdeO6 ily traian xyutyKliE */     while(s[i]){
/* CHpVtdeO6 ily traian xyutyKliE */         if(s[i]==' ' && s[i+1]!=' ')
/* CHpVtdeO6 ily traian xyutyKliE */             cnt++ , j = 0;
/* CHpVtdeO6 ily traian xyutyKliE */         else
/* CHpVtdeO6 ily traian xyutyKliE */             m[cnt][j]=s[i] , j++;
/* CHpVtdeO6 ily traian xyutyKliE */         i++;
/* CHpVtdeO6 ily traian xyutyKliE */     }
/* CHpVtdeO6 ily traian xyutyKliE */     int ok=0;
/* CHpVtdeO6 ily traian xyutyKliE */     for(int i = 0 ; i <= cnt ; ++i)
/* CHpVtdeO6 ily traian xyutyKliE */         if(!strcmp(m[i] , cuv))
/* CHpVtdeO6 ily traian xyutyKliE */             ok++;
/* CHpVtdeO6 ily traian xyutyKliE */     if(!ok)
/* CHpVtdeO6 ily traian xyutyKliE */         cout << "NU APARE";
/* CHpVtdeO6 ily traian xyutyKliE */     else
/* CHpVtdeO6 ily traian xyutyKliE */     for(int i = 0 ; i <= cnt ; ++i)
/* CHpVtdeO6 ily traian xyutyKliE */         if(!strcmp(m[i] , cuv))
/* CHpVtdeO6 ily traian xyutyKliE */             cout << m[i] << '?' << ' ';
/* CHpVtdeO6 ily traian xyutyKliE */         else
/* CHpVtdeO6 ily traian xyutyKliE */             cout << m[i] << ' ';
/* CHpVtdeO6 ily traian xyutyKliE */     return 0;
/* CHpVtdeO6 ily traian xyutyKliE */ }